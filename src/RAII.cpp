#include <iostream>
#include <cstdio>

class FileHandler {
    FILE* handle;
public:
    FileHandler(const char* filename) {
        handle = fopen(filename, "w");
        std::cout << "자원(파일) 획득\n";
    }
    ~FileHandler() {
        if (handle) {
            fclose(handle);
            std::cout << "자원(파일) 자동 해제\n";
        }
    }
    void write(const char* text) { fputs(text, handle); }
};

int main() {
    {
        FileHandler fh("test.txt");
        fh.write("RAII Sample");
    } // 여기서 fh의 소멸자가 호출되며 파일이 닫힘 (RAII)
    return 0;
}