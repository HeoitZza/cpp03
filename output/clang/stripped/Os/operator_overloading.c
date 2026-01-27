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



// ===== Function: widen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

{
  (*(code *)PTR_widen_00104010)();
  return;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00104018)();
  return poVar1;
}



// ===== Function: operator<< =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*_DAT_00104020)();
  return;
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
            (FUN_0010117c,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001010c0 =====

/* WARNING: Removing unreachable block (ram,0x001010d3) */
/* WARNING: Removing unreachable block (ram,0x001010df) */

void FUN_001010c0(void)

{
  return;
}



// ===== Function: FUN_001010f0 =====

/* WARNING: Removing unreachable block (ram,0x00101114) */
/* WARNING: Removing unreachable block (ram,0x00101120) */

void FUN_001010f0(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104038 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104030);
    }
    FUN_001010c0();
    DAT_00104038 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_001010f0();
  return;
}



// ===== Function: FUN_0010117c =====

undefined8 FUN_0010117c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 local_18;
  
  puVar1 = PTR_cout_00103fc8;
  local_18 = 0x600000004;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cout_00103fc8,"Result: ",8);
  plVar2 = (long *)FUN_001011ea(puVar1,&local_18);
  std::ios::widen((char)*(undefined8 *)(*plVar2 + -0x18) + (char)plVar2);
  std::ostream::put((char)plVar2);
  std::ostream::flush();
  return 0;
}



// ===== Function: FUN_001011ea =====

ostream * FUN_001011ea(ostream *param_1,int *param_2)

{
  ostream *poVar1;
  
  std::__ostream_insert<char,std::char_traits<char>>(param_1,"(",1);
  poVar1 = (ostream *)std::ostream::operator<<(param_1,*param_2);
  std::__ostream_insert<char,std::char_traits<char>>(poVar1,", ",2);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,param_2[1]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar1,")",1);
  return param_1;
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



// ===== Function: widen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

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



