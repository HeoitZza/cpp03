// ===== Function: _init =====

int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00103fd8;
  if (PTR___gmon_start___00103fd8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00103fd8)();
  }
  return (int)puVar1;
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



// ===== Function: divide =====

double divide(double a,double b)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &DAT_00102008;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,char_const*::typeinfo,0);
}



// ===== Function: divide =====

/* divide(double, double) [clone .cold] */

undefined1  [16] divide(double param_1,double param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 extraout_RAX;
  char *pcVar3;
  ostream *poVar4;
  ulong in_RCX;
  long extraout_RDX;
  double a;
  
  a = divide(param_1,param_2);
  divide(a,param_2);
  if (extraout_RDX != 1) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(extraout_RAX);
  }
  pcVar3 = (char *)__cxa_begin_catch();
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cerr,&DAT_00102029,0xf);
  poVar4 = std::operator<<((ostream *)std::cerr,pcVar3);
  plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put((char)poVar4);
  std::ostream::flush();
  __cxa_end_catch();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_RCX;
  return auVar2 << 0x40;
}



// ===== Function: main =====

/* WARNING: Unknown calling convention */

int main(void)

{
  long *plVar1;
  undefined8 extraout_RAX;
  char *pcVar2;
  ostream *poVar3;
  long extraout_RDX;
  double in_XMM0_Qa;
  double in_XMM1_Qa;
  
                    /* try { // try from 001011d5 to 001011d9 has its CatchHandler @ 001011da */
  divide(in_XMM0_Qa,in_XMM1_Qa);
                    /* catch(type#1 @ 00103d20) { ... } // from try @ 001011d5 with catch @ 001011da
                        */
  if (extraout_RDX != 1) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(extraout_RAX);
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
  return 0;
}



// ===== Function: _start =====

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc8)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: deregister_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x001012d3) */
/* WARNING: Removing unreachable block (ram,0x001012df) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101314) */
/* WARNING: Removing unreachable block (ram,0x00101320) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fc0 != (undefined *)0x0) {
      __cxa_finalize(__dso_handle);
    }
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



// ===== Function: frame_dummy =====

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// ===== Function: divide =====

double divide(double a,double b)

{
  long *plVar1;
  undefined8 extraout_RAX;
  char *pcVar2;
  ostream *poVar3;
  long extraout_RDX;
  double dVar4;
  
  if (b != 0.0) {
    return a / b;
  }
  dVar4 = divide(a,b);
  divide(dVar4,b);
  if (extraout_RDX == 1) {
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
    dVar4 = (double)__cxa_end_catch();
    return dVar4;
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(extraout_RAX);
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: put =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSo3putEc@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: __cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_begin_catch@CXXABI_1.3 */
  halt_baddata();
}



// ===== Function: __cxa_allocate_exception =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_allocate_exception@CXXABI_1.3 */
  halt_baddata();
}



// ===== Function: flush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSo5flushEv@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: __libc_start_main =====

/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@GLIBC_2.34 */
  halt_baddata();
}



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@GLIBCXX_3.4.9
                        */
  halt_baddata();
}



// ===== Function: _M_widen_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt5ctypeIcE13_M_widen_initEv@GLIBCXX_3.4.11 */
  halt_baddata();
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt16__throw_bad_castv@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: ios_base_library_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios_base_library_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt21ios_base_library_initv@GLIBCXX_3.4.32 */
  halt_baddata();
}



// ===== Function: __cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_end_catch@CXXABI_1.3 */
  halt_baddata();
}



// ===== Function: __gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __gxx_personality_v0@CXXABI_1.3 */
  halt_baddata();
}



// ===== Function: __cxa_throw =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_throw@CXXABI_1.3 */
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
                    /* _Unwind_Resume@GCC_3.0 */
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
                    /* __cxa_finalize@GLIBC_2.2.5 */
  halt_baddata();
}



