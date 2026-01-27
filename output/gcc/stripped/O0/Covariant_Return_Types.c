// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00103ff0 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103ff0)();
  }
  return;
}



// ===== Function: FUN_00101020 =====

void FUN_00101020(void)

{
  (*(code *)PTR_00103fa8)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fd0)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103fb0)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103fb8)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103fc0)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fc8)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_001011a9,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001010f0 =====

/* WARNING: Removing unreachable block (ram,0x00101103) */
/* WARNING: Removing unreachable block (ram,0x0010110f) */

void FUN_001010f0(void)

{
  return;
}



// ===== Function: FUN_00101120 =====

/* WARNING: Removing unreachable block (ram,0x00101144) */
/* WARNING: Removing unreachable block (ram,0x00101150) */

void FUN_00101120(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104150 == '\0') {
    if (PTR___cxa_finalize_00103fd0 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_001010f0();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101120();
  return;
}



// ===== Function: FUN_001011a9 =====

undefined8 FUN_001011a9(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)operator_new(8);
  *plVar1 = 0;
  FUN_00101436(plVar1);
  plVar2 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
  (**(code **)(*plVar2 + 0x18))(plVar2);
  FUN_001013da(plVar2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return 0;
}



// ===== Function: FUN_00101250 =====

void FUN_00101250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d50;
  return;
}



// ===== Function: FUN_0010126e =====

void FUN_0010126e(void *param_1)

{
  FUN_00101250(param_1);
  operator_delete(param_1);
  return;
}



// ===== Function: FUN_00101298 =====

void FUN_00101298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d50;
  return;
}



// ===== Function: FUN_001012ba =====

void * FUN_001012ba(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  FUN_00101298(pvVar1,param_1);
  return pvVar1;
}



// ===== Function: FUN_001012f0 =====

void FUN_001012f0(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)std::cout,&DAT_00102004);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_0010132e =====

void FUN_0010132e(undefined8 *param_1,undefined8 param_2)

{
  FUN_00101298(param_1,param_2);
  *param_1 = &PTR_FUN_00103d20;
  return;
}



// ===== Function: FUN_00101366 =====

void * FUN_00101366(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  FUN_0010132e(pvVar1,param_1);
  return pvVar1;
}



// ===== Function: FUN_0010139c =====

void FUN_0010139c(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)std::cout,&DAT_0010201a);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_001013da =====

void FUN_001013da(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)std::cout,&DAT_00102022);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_00101418 =====

void FUN_00101418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d50;
  return;
}



// ===== Function: FUN_00101436 =====

void FUN_00101436(undefined8 *param_1)

{
  FUN_00101418(param_1);
  *param_1 = &PTR_FUN_00103d20;
  return;
}



// ===== Function: FUN_00101464 =====

void FUN_00101464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d20;
  FUN_00101250(param_1);
  return;
}



// ===== Function: FUN_00101492 =====

void FUN_00101492(void *param_1)

{
  FUN_00101464(param_1);
  operator_delete(param_1);
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: endl<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

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



