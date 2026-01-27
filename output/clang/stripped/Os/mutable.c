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



// ===== Function: memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00104010)();
  return pvVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104018)();
  return;
}



// ===== Function: widen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

{
  (*(code *)PTR_widen_00104020)();
  return;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00104028)();
  return poVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00104030)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104038)();
  return;
}



// ===== Function: _M_create =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
  (*_DAT_00104040)();
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
            (FUN_001011bc,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101100 =====

/* WARNING: Removing unreachable block (ram,0x00101113) */
/* WARNING: Removing unreachable block (ram,0x0010111f) */

void FUN_00101100(void)

{
  return;
}



// ===== Function: FUN_00101130 =====

/* WARNING: Removing unreachable block (ram,0x00101154) */
/* WARNING: Removing unreachable block (ram,0x00101160) */

void FUN_00101130(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104060 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104050);
    }
    FUN_00101100();
    DAT_00104060 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101130();
  return;
}



// ===== Function: FUN_001011bc =====

undefined8 FUN_001011bc(void)

{
  undefined1 *local_60 [2];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined1 *local_38;
  long local_30;
  undefined1 local_28 [16];
  
  local_38 = local_28;
  std::__cxx11::string::_M_construct<char_const*>(&local_38,"Hello World","");
                    /* try { // try from 001011fc to 00101205 has its CatchHandler @ 0010124c */
  local_60[0] = local_50;
  std::__cxx11::string::_M_construct<char*>(local_60,local_38,local_38 + local_30);
  local_40 = 0;
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
                    /* try { // try from 0010121d to 00101230 has its CatchHandler @ 0010125b */
  FUN_00101276(local_60);
  FUN_00101276(local_60);
  if (local_60[0] != local_50) {
    operator_delete(local_60[0]);
  }
  return 0;
}



// ===== Function: FUN_00101276 =====

void FUN_00101276(undefined8 *param_1)

{
  undefined *this;
  ostream *poVar1;
  
  this = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cout_00103fc8,"Content: ",9);
  poVar1 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)this,(char *)*param_1,param_1[1]);
  std::ios::widen((char)*(undefined8 *)(*(long *)poVar1 + -0x18) + (char)poVar1);
  std::ostream::put((char)poVar1);
  std::ostream::flush();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)this,"Viewed ",7);
  poVar1 = (ostream *)std::ostream::operator<<((ostream *)this,*(int *)(param_1 + 4));
  std::__ostream_insert<char,std::char_traits<char>>(poVar1," times.",7);
  std::ios::widen((char)*(undefined8 *)(*(long *)poVar1 + -0x18) + (char)poVar1);
  std::ostream::put((char)poVar1);
  std::ostream::flush();
  return;
}



// ===== Function: _M_construct<char*> =====

/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) */

void std::__cxx11::string::_M_construct<char*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  ulong local_28;
  
  __n = param_3 - (long)param_2;
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  if (__n != 0) {
    if (__n == 1) {
      *__dest = *param_2;
    }
    else {
      memcpy(__dest,param_2,__n);
    }
  }
  param_1[1] = local_28;
  *(undefined1 *)(*param_1 + local_28) = 0;
  return;
}



// ===== Function: _M_construct<char_const*> =====

/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  ulong local_28;
  
  __n = param_3 - (long)param_2;
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  if (__n != 0) {
    if (__n == 1) {
      *__dest = *param_2;
    }
    else {
      memcpy(__dest,param_2,__n);
    }
  }
  param_1[1] = local_28;
  *(undefined1 *)(*param_1 + local_28) = 0;
  return;
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



// ===== Function: memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

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



// ===== Function: _M_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

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



