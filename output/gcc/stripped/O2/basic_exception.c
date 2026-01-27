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
  (*(code *)PTR_00103f80)();
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
  (*(code *)PTR_put_00103f88)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00103f90)();
  return;
}



// ===== Function: __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00103f98)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00103fa0)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103fa8)();
  return poVar1;
}



// ===== Function: _M_widen_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00103fb0)();
  return;
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00103fb8)();
  return;
}



// ===== Function: __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00103fc0)();
  return;
}



// ===== Function: __cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_00103fc8)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fd0)();
  return;
}



// ===== Function: FUN_00101180 =====

void FUN_00101180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &DAT_00102008;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,char_const*::typeinfo,0);
}



// ===== Function: FUN_001011a8 =====

undefined1  [16] FUN_001011a8(void)

{
  long *plVar1;
  char *pcVar2;
  ostream *poVar3;
  ulong in_RCX;
  undefined1 auVar4 [16];
  
  FUN_00101180();
  auVar4 = FUN_00101180();
  if (auVar4._8_8_ != 1) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(auVar4._0_8_);
  }
  pcVar2 = (char *)__cxa_begin_catch();
  poVar3 = std::operator<<((ostream *)std::cerr,&DAT_00102029);
  poVar3 = std::operator<<(poVar3,pcVar2);
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
  }
  std::ostream::put((char)poVar3);
  std::ostream::flush();
  __cxa_end_catch();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = in_RCX;
  return auVar4 << 0x40;
}



// ===== Function: FUN_001011ae =====

undefined1  [16] FUN_001011ae(void)

{
  long *plVar1;
  char *pcVar2;
  ostream *poVar3;
  ulong in_RCX;
  undefined1 auVar4 [16];
  
                    /* try { // try from 001011b5 to 001011b9 has its CatchHandler @ 001011ba */
  auVar4 = FUN_00101180();
                    /* catch(type#1 @ 00103d40) { ... } // from try @ 001011b5 with catch @ 001011ba
                        */
  if (auVar4._8_8_ != 1) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(auVar4._0_8_);
  }
  pcVar2 = (char *)__cxa_begin_catch();
                    /* try { // try from 001011e0 to 00101252 has its CatchHandler @ 0010125e */
  poVar3 = std::operator<<((ostream *)std::cerr,&DAT_00102029);
  poVar3 = std::operator<<(poVar3,pcVar2);
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
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
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_001011ae,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001012b0 =====

/* WARNING: Removing unreachable block (ram,0x001012c3) */
/* WARNING: Removing unreachable block (ram,0x001012cf) */

void FUN_001012b0(void)

{
  return;
}



// ===== Function: FUN_001012e0 =====

/* WARNING: Removing unreachable block (ram,0x00101304) */
/* WARNING: Removing unreachable block (ram,0x00101310) */

void FUN_001012e0(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104130 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_001012b0();
    DAT_00104130 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_001012e0();
  return;
}



// ===== Function: FUN_00101370 =====

undefined8 FUN_00101370(undefined8 param_1,double param_2)

{
  long *plVar1;
  char *pcVar2;
  ostream *poVar3;
  undefined8 in_RAX;
  undefined1 auVar4 [16];
  
  if (param_2 != 0.0) {
    return in_RAX;
  }
  FUN_00101180();
  auVar4 = FUN_00101180();
  if (auVar4._8_8_ == 1) {
    pcVar2 = (char *)__cxa_begin_catch();
    poVar3 = std::operator<<((ostream *)std::cerr,&DAT_00102029);
    poVar3 = std::operator<<(poVar3,pcVar2);
    plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
    if (plVar1 == (long *)0x0) {
      std::__throw_bad_cast();
    }
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar3);
    std::ostream::flush();
    __cxa_end_catch();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(auVar4._0_8_);
}



// ===== Function: do_widen =====

/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
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



