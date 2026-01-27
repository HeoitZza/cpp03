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



// ===== Function: memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00104000)();
  return pvVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104008)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00104010)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104018)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00104020)();
  return;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

{
  (*_DAT_00104028)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fb0)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc0)
            (FUN_00101190,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001010d0 =====

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void FUN_001010d0(void)

{
  return;
}



// ===== Function: FUN_00101100 =====

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

void FUN_00101100(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104048 == '\0') {
    if (PTR___cxa_finalize_00103fb0 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104038);
    }
    FUN_001010d0();
    DAT_00104048 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101100();
  return;
}



// ===== Function: FUN_00101190 =====

undefined8 FUN_00101190(void)

{
  long *__s;
  long *plVar1;
  
  __s = (long *)operator_new(8);
  memset(__s,0,8);
  FUN_00101230(__s);
  plVar1 = (long *)(**(code **)(*__s + 0x10))();
  (**(code **)(*plVar1 + 0x18))();
  FUN_00101270(plVar1);
  if (__s != (long *)0x0) {
    (**(code **)(*__s + 8))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return 0;
}



// ===== Function: FUN_00101230 =====

void FUN_00101230(undefined8 *param_1)

{
  FUN_001012b0();
  *param_1 = &PTR_FUN_00103d28;
  return;
}



// ===== Function: FUN_00101270 =====

void FUN_00101270(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)PTR_cout_00103fc8,&DAT_0010202f);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: FUN_001012b0 =====

void FUN_001012b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d80;
  return;
}



// ===== Function: FUN_001012d0 =====

void FUN_001012d0(undefined8 param_1)

{
  FUN_001013c0(param_1);
  return;
}



// ===== Function: FUN_001012f0 =====

void FUN_001012f0(void *param_1)

{
                    /* try { // try from 00101304 to 00101308 has its CatchHandler @ 0010131d */
  FUN_001012d0();
  operator_delete(param_1);
  return;
}



// ===== Function: FUN_00101340 =====

void * FUN_00101340(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  FUN_001014c0(pvVar1,param_1);
  return pvVar1;
}



// ===== Function: FUN_00101380 =====

void FUN_00101380(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)PTR_cout_00103fc8,&DAT_00102027);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: FUN_001013c0 =====

void FUN_001013c0(void)

{
  return;
}



// ===== Function: FUN_001013d0 =====

void FUN_001013d0(void *param_1)

{
                    /* try { // try from 001013e4 to 001013e8 has its CatchHandler @ 001013fd */
  FUN_001013c0();
  operator_delete(param_1);
  return;
}



// ===== Function: FUN_00101420 =====

void * FUN_00101420(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  FUN_001014a0(pvVar1,param_1);
  return pvVar1;
}



// ===== Function: FUN_00101460 =====

void FUN_00101460(void)

{
  ostream *this;
  
  this = std::operator<<((ostream *)PTR_cout_00103fc8,&DAT_00102011);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: FUN_001014a0 =====

void FUN_001014a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d80;
  return;
}



// ===== Function: FUN_001014c0 =====

void FUN_001014c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_001014a0(param_1,param_2);
  *param_1 = &PTR_FUN_00103d28;
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



// ===== Function: memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

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



// ===== Function: __gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

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



