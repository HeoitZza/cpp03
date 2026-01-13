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



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103fb0)();
  return poVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fb8)();
  return;
}



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fc0)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

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
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101328(local_28);
  FUN_00101222(auStack_18);
  FUN_00101260(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: FUN_00101208 =====

void FUN_00101208(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// ===== Function: FUN_00101222 =====

void FUN_00101222(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)std::cout,"Animal eats");
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_00101260 =====

void FUN_00101260(long *param_1)

{
  ostream *poVar1;
  
  *(undefined4 *)((long)param_1 + *(long *)(*param_1 + -0x18)) = 5;
  poVar1 = std::operator<<((ostream *)std::cout,"Cow age: ");
  poVar1 = (ostream *)
           std::ostream::operator<<(poVar1,*(int *)((long)param_1 + *(long *)(*param_1 + -0x18)));
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_001012e4 =====

void FUN_001012e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// ===== Function: FUN_00101306 =====

void FUN_00101306(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// ===== Function: FUN_00101328 =====

void FUN_00101328(undefined8 *param_1)

{
  FUN_00101208(param_1 + 2);
  FUN_001012e4(param_1,&PTR_DAT_00103cb8);
  FUN_00101306(param_1 + 1,&PTR_PTR_00103cc0);
  *param_1 = &DAT_00103c98;
  param_1[1] = &PTR_DAT_00103cb0;
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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

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



// ===== Function: __stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

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



