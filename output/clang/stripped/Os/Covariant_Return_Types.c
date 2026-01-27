// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00103fd8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103fd8)();
  }
  return;
}



// ===== Function: FUN_00101020 =====

void FUN_00101020(void)

{
  (*(code *)PTR_00103ff8)();
  return;
}



// ===== Function: put =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
  (*(code *)PTR_put_00104000)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00104008)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104010)();
  return;
}



// ===== Function: widen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

{
  (*(code *)PTR_widen_00104018)();
  return;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104020)();
  return pvVar1;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*_DAT_00104028)();
  return poVar1;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fb8)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc0)
            (FUN_0010118c,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001010d0 =====

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void FUN_001010d0(void)

{
  return;
}



// ===== Function: FUN_00101100 =====

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

void FUN_00101100(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104040 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104038);
    }
    FUN_001010d0();
    DAT_00104040 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101100();
  return;
}



// ===== Function: FUN_0010118c =====

undefined8 FUN_0010118c(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(8);
  *plVar1 = (long)&PTR_FUN_00103d60;
  FUN_00101226(plVar1);
  FUN_001011c2(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1);
  return 0;
}



// ===== Function: FUN_001011c2 =====

void FUN_001011c2(void)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)PTR_cout_00103fc8,&DAT_00102019,0x10);
  cVar1 = (char)puVar2;
  std::ios::widen((char)*(undefined8 *)(*(long *)puVar2 + -0x18) + cVar1);
  std::ostream::put(cVar1);
  std::ostream::flush();
  return;
}



// ===== Function: FUN_00101206 =====

void FUN_00101206(void)

{
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104010)();
  return;
}



// ===== Function: FUN_0010120e =====

void FUN_0010120e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR_FUN_00103d60;
  return;
}



// ===== Function: FUN_00101226 =====

void FUN_00101226(void)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cout_00103fc8,&DAT_00102011,7);
  cVar1 = (char)puVar2;
  std::ios::widen((char)*(undefined8 *)(*(long *)puVar2 + -0x18) + cVar1);
  std::ostream::put(cVar1);
  std::ostream::flush();
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: put =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: flush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __libc_start_main =====

/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: widen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: ios_base_library_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios_base_library_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: _ITM_deregisterTMCloneTable =====

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __gmon_start__ =====

/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: _ITM_registerTMCloneTable =====

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



