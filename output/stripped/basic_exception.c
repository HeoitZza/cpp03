// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00103fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103fe8)();
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
  (*(code *)PTR___cxa_finalize_00103fc8)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00103f88)();
  return;
}



// ===== Function: __cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_00103f90)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103f98)();
  return poVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fa0)();
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



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,double param_1)

{
  (*(code *)PTR_operator<<_00103fc0)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fd8)
            (FUN_0010128c,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101170 =====

/* WARNING: Removing unreachable block (ram,0x00101183) */
/* WARNING: Removing unreachable block (ram,0x0010118f) */

void FUN_00101170(void)

{
  return;
}



// ===== Function: FUN_001011a0 =====

/* WARNING: Removing unreachable block (ram,0x001011c4) */
/* WARNING: Removing unreachable block (ram,0x001011d0) */

void FUN_001011a0(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104270 == '\0') {
    if (PTR___cxa_finalize_00103fc8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101170();
    DAT_00104270 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_001011a0();
  return;
}



// ===== Function: FUN_00101229 =====

double FUN_00101229(double param_1,double param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0.0) {
    return param_1 / param_2;
  }
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &DAT_00102008;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,char_const*::typeinfo,0);
}



// ===== Function: FUN_0010128c =====

undefined8 FUN_0010128c(void)

{
  ostream *this;
  double dVar1;
  
                    /* try { // try from 001012a9 to 001012d8 has its CatchHandler @ 001012e0 */
  dVar1 = (double)FUN_00101229(DAT_00102040,0);
  this = (ostream *)std::ostream::operator<<((ostream *)std::cout,dVar1);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd0);
  return 0;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: __cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: endl<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,double param_1)

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



