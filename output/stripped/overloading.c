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



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fc0)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,double param_1)

{
  (*(code *)PTR_operator<<_00103fc8)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_0010130e,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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

void FUN_001011a9(int param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,&DAT_00102008);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,param_1);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_001011f6 =====

void FUN_001011f6(double param_1,int param_2)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,&DAT_00102008);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,param_2);
  poVar1 = std::operator<<(poVar1,&DAT_00102011);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,param_1);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_00101271 =====

void FUN_00101271(int param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,&DAT_00102019);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,param_1);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_001012be =====

void FUN_001012be(char *param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,&DAT_00102029);
  poVar1 = std::operator<<(poVar1,param_1);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_0010130e =====

undefined8 FUN_0010130e(void)

{
  FUN_001011a9(0x19);
  FUN_001011f6(DAT_00102048,0x19);
  FUN_00101271(100);
  FUN_001012be("Hello C++");
  return 0;
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



