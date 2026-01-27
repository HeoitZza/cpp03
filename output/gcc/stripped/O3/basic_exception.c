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
  (*(code *)PTR_00103f60)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fc0)();
  return;
}



// ===== Function: put =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
  (*(code *)PTR_put_00103f68)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00103f70)();
  return;
}



// ===== Function: __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00103f78)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00103f80)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103f88)();
  return poVar1;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00103f90)();
  return poVar1;
}



// ===== Function: _M_widen_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00103f98)();
  return;
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00103fa0)();
  return;
}



// ===== Function: __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00103fa8)();
  return;
}



// ===== Function: __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00103fb0)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fb8)();
  return;
}



// ===== Function: FUN_001011a0 =====

void FUN_001011a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &DAT_00102008;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,char_const*::typeinfo,0);
}



// ===== Function: FUN_001011c8 =====

undefined1  [16] FUN_001011c8(void)

{
  long *plVar1;
  char *pcVar2;
  ostream *poVar3;
  ulong in_RCX;
  undefined1 auVar4 [16];
  
  FUN_001011a0();
  auVar4 = FUN_001011a0();
  if (auVar4._8_8_ != 1) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(auVar4._0_8_);
  }
  pcVar2 = (char *)__cxa_begin_catch();
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cerr,&DAT_00102029,0xf);
  poVar3 = std::operator<<((ostream *)std::cerr,pcVar2);
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put((char)poVar3);
  std::ostream::flush();
  __cxa_end_catch();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_RCX;
  return auVar4 << 0x40;
}



// ===== Function: FUN_001011ce =====

undefined1  [16] FUN_001011ce(void)

{
  long *plVar1;
  char *pcVar2;
  ostream *poVar3;
  ulong in_RCX;
  undefined1 auVar4 [16];
  
                    /* try { // try from 001011d5 to 001011d9 has its CatchHandler @ 001011da */
  auVar4 = FUN_001011a0();
                    /* catch(type#1 @ 00103d20) { ... } // from try @ 001011d5 with catch @ 001011da
                        */
  if (auVar4._8_8_ != 1) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(auVar4._0_8_);
  }
  pcVar2 = (char *)__cxa_begin_catch();
                    /* try { // try from 00101208 to 00101267 has its CatchHandler @ 00101273 */
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cerr,&DAT_00102029,0xf);
  poVar3 = std::operator<<((ostream *)std::cerr,pcVar2);
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put((char)poVar3);
  std::ostream::flush();
  __cxa_end_catch();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_RCX;
  return auVar4 << 0x40;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc8)
            (FUN_001011ce,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001012c0 =====

/* WARNING: Removing unreachable block (ram,0x001012d3) */
/* WARNING: Removing unreachable block (ram,0x001012df) */

void FUN_001012c0(void)

{
  return;
}



// ===== Function: FUN_001012f0 =====

/* WARNING: Removing unreachable block (ram,0x00101314) */
/* WARNING: Removing unreachable block (ram,0x00101320) */

void FUN_001012f0(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104130 == '\0') {
    if (PTR___cxa_finalize_00103fc0 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_001012c0();
    DAT_00104130 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_001012f0();
  return;
}



// ===== Function: FUN_00101380 =====

undefined8 FUN_00101380(undefined8 param_1,double param_2)

{
  long *plVar1;
  char *pcVar2;
  ostream *poVar3;
  undefined8 in_RAX;
  undefined1 auVar4 [16];
  
  if (param_2 != 0.0) {
    return in_RAX;
  }
  FUN_001011a0();
  auVar4 = FUN_001011a0();
  if (auVar4._8_8_ == 1) {
    pcVar2 = (char *)__cxa_begin_catch();
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cerr,&DAT_00102029,0xf);
    poVar3 = std::operator<<((ostream *)std::cerr,pcVar2);
    plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
    if (plVar1 == (long *)0x0) {
      std::__throw_bad_cast();
    }
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
    std::ostream::put((char)poVar3);
    std::ostream::flush();
    __cxa_end_catch();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(auVar4._0_8_);
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



// ===== Function: __cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

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



// ===== Function: __cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

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



// ===== Function: __cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

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



