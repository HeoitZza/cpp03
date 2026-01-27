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
  (*(code *)PTR_00103f78)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fd8)();
  return;
}



// ===== Function: put =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
  (*(code *)PTR_put_00103f80)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00103f88)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00103f90)();
  return;
}



// ===== Function: _S_copy_chars =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR__S_copy_chars_00103f98)();
  return;
}



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fa0)();
  return;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00103fa8)();
  return poVar1;
}



// ===== Function: _M_widen_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00103fb0)();
  return;
}



// ===== Function: _M_dispose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
  (*(code *)PTR__M_dispose_00103fb8)();
  return;
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00103fc0)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fc8)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fd0)();
  return;
}



// ===== Function: FUN_001011a0 =====

void FUN_001011a0(void)

{
  long in_FS_OFFSET;
  long in_stack_00000048;
  
  std::__cxx11::string::_M_dispose();
  if (in_stack_00000048 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: FUN_001011c0 =====

void FUN_001011c0(void)

{
  long in_FS_OFFSET;
  long in_stack_00000048;
  
  std::__cxx11::string::_M_dispose();
  if (in_stack_00000048 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: FUN_001011f0 =====

undefined8 FUN_001011f0(void)

{
  long in_FS_OFFSET;
  char *local_68;
  undefined8 local_60;
  char local_58 [16];
  string local_48 [32];
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  std::__cxx11::string::_S_copy_chars(local_68,"Hello World","");
  local_60 = 0xb;
  local_68[0xb] = '\0';
                    /* try { // try from 00101242 to 00101246 has its CatchHandler @ 00101299 */
  std::__cxx11::string::string(local_48,(string *)&local_68);
  local_28 = 0;
  std::__cxx11::string::_M_dispose();
                    /* try { // try from 0010125a to 00101266 has its CatchHandler @ 0010128d */
  FUN_001013b0(local_48);
  FUN_001013b0(local_48);
  std::__cxx11::string::_M_dispose();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_001011f0,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001012e0 =====

/* WARNING: Removing unreachable block (ram,0x001012f3) */
/* WARNING: Removing unreachable block (ram,0x001012ff) */

void FUN_001012e0(void)

{
  return;
}



// ===== Function: FUN_00101310 =====

/* WARNING: Removing unreachable block (ram,0x00101334) */
/* WARNING: Removing unreachable block (ram,0x00101340) */

void FUN_00101310(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104150 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_001012e0();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101310();
  return;
}



// ===== Function: do_widen =====

/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



// ===== Function: FUN_001013b0 =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_001013b0(undefined8 *param_1)

{
  long *plVar1;
  ostream *poVar2;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cout,"Content: ",9);
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)std::cout,(char *)*param_1,param_1[1]);
  plVar1 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar2);
    std::ostream::flush();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cout,"Viewed ",7);
    poVar2 = (ostream *)std::ostream::operator<<((ostream *)std::cout,*(int *)(param_1 + 4));
    std::__ostream_insert<char,std::char_traits<char>>(poVar2," times.",7);
    plVar1 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put((char)poVar2);
      std::ostream::flush();
      return;
    }
  }
  std::__throw_bad_cast();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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



// ===== Function: string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

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



// ===== Function: _S_copy_chars =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

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



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: _M_widen_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: _M_dispose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

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



// ===== Function: __gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

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



// ===== Function: _Unwind_Resume =====

/* WARNING: Control flow encountered bad instruction data */

void _Unwind_Resume(void)

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



