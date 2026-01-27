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
  (*(code *)PTR_00103f88)();
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
  (*(code *)PTR_put_00103f90)();
  return;
}



// ===== Function: strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00103f98)();
  return sVar1;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00103fa0)();
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



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00103fb8)();
  return;
}



// ===== Function: _M_insert<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR__M_insert<double>_00103fc0)();
  return poVar1;
}



// ===== Function: clear =====

void std::ios::clear(void)

{
  (*(code *)PTR_clear_00103fc8)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fd0)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_001014db,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101190 =====

/* WARNING: Removing unreachable block (ram,0x001011a3) */
/* WARNING: Removing unreachable block (ram,0x001011af) */

void FUN_00101190(void)

{
  return;
}



// ===== Function: FUN_001011c0 =====

/* WARNING: Removing unreachable block (ram,0x001011e4) */
/* WARNING: Removing unreachable block (ram,0x001011f0) */

void FUN_001011c0(void)

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
    FUN_00101190();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_001011c0();
  return;
}



// ===== Function: FUN_00101249 =====

void FUN_00101249(int param_1)

{
  long *plVar1;
  long *plVar2;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,&DAT_00102004,8);
  plVar2 = (long *)std::ostream::operator<<((ostream *)&std::cout,param_1);
  plVar1 = *(long **)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  else if ((char)plVar1[7] != '\0') goto LAB_0010129b;
  std::ctype<char>::_M_widen_init();
  (**(code **)(*plVar1 + 0x30))(plVar1,10);
LAB_0010129b:
  std::ostream::put((char)plVar2);
  std::ostream::flush();
  return;
}



// ===== Function: FUN_001012d6 =====

void FUN_001012d6(double param_1,int param_2)

{
  long *plVar1;
  ostream *poVar2;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,&DAT_00102004,8);
  poVar2 = (ostream *)std::ostream::operator<<((ostream *)&std::cout,param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,&DAT_0010200d,7);
  poVar2 = std::ostream::_M_insert<double>(param_1);
  plVar1 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  else if ((char)plVar1[7] != '\0') goto LAB_00101353;
  std::ctype<char>::_M_widen_init();
  (**(code **)(*plVar1 + 0x30))(plVar1,10);
LAB_00101353:
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  return;
}



// ===== Function: FUN_0010138e =====

void FUN_0010138e(int param_1)

{
  long *plVar1;
  long *plVar2;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,&DAT_00102015,0xf);
  plVar2 = (long *)std::ostream::operator<<((ostream *)&std::cout,param_1);
  plVar1 = *(long **)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  else if ((char)plVar1[7] != '\0') goto LAB_001013e0;
  std::ctype<char>::_M_widen_init();
  (**(code **)(*plVar1 + 0x30))(plVar1,10);
LAB_001013e0:
  std::ostream::put((char)plVar2);
  std::ostream::flush();
  return;
}



// ===== Function: FUN_0010141b =====

void FUN_0010141b(char *param_1)

{
  long *plVar1;
  size_t sVar2;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,&DAT_00102025,0x12);
  if (param_1 == (char *)0x0) {
    std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                    *(uint *)(&DAT_00104060 + *(long *)(std::cout + -0x18)) | 1);
  }
  else {
    sVar2 = strlen(param_1);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,param_1,sVar2);
  }
  plVar1 = *(long **)(&DAT_00104130 + *(long *)(std::cout + -0x18));
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  else if ((char)plVar1[7] != '\0') goto LAB_00101483;
  std::ctype<char>::_M_widen_init();
  (**(code **)(*plVar1 + 0x30))(plVar1,10);
LAB_00101483:
  std::ostream::put('@');
  std::ostream::flush();
  return;
}



// ===== Function: FUN_001014db =====

undefined8 FUN_001014db(void)

{
  FUN_00101249(0x19);
  FUN_001012d6(DAT_00102048,0x19);
  FUN_0010138e(100);
  FUN_0010141b("Hello C++");
  return 0;
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



// ===== Function: strlen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

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



// ===== Function: _M_insert<double> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: clear =====

/* WARNING: Control flow encountered bad instruction data */

void std::ios::clear(void)

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



