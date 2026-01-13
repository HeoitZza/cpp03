// DumpDecompiled.java
// Ghidra headless에서 사용할 스크립트
// 역할: 현재 프로그램의 모든 함수를 디컴파일해서 하나의 .c 파일에 저장

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.*;
import java.io.*;

public class DumpDecompiled extends GhidraScript {

    @Override
    public void run() throws Exception {

        // 스크립트 인자로 output 파일 경로를 받을 수 있음
        String outputPath;
        String[] args = getScriptArgs();
        if (args.length >= 1) {
            outputPath = args[0];
        } else {
            outputPath = "decompiled_output.c";
        }

        // 디컴파일러 인터페이스 준비
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(currentProgram);

        Listing listing = currentProgram.getListing();
        FunctionIterator funcs = listing.getFunctions(true); // true: 정렬된 순서

        File outFile = new File(outputPath);
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(outFile))) {

            for (Function f : funcs) {
                if (monitor.isCancelled()) {
                    break;
                }

                DecompileResults results =
                    decompiler.decompileFunction(f, 60, monitor);

                if (!results.decompileCompleted() ||
                    results.getDecompiledFunction() == null) {
                    println("Failed to decompile: " + f.getName());
                    continue;
                }

                String decompiled = results.getDecompiledFunction().getC();

                writer.write("// ===== Function: " + f.getName() + " =====\n");
                writer.write(decompiled);
                writer.write("\n\n");
            }
        }

        println("Decompiled code written to: " + outFile.getAbsolutePath());
    }
}
