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



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104028)();
  return pvVar1;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00104030)();
  return poVar1;
}



// ===== Function: _M_insert<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR__M_insert<double>_00104038)();
  return poVar1;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104040)();
  return;
}



// ===== Function: _M_create =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
  (*_DAT_00104048)();
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
            (FUN_001011cc,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101110 =====

/* WARNING: Removing unreachable block (ram,0x00101123) */
/* WARNING: Removing unreachable block (ram,0x0010112f) */

void FUN_00101110(void)

{
  return;
}



// ===== Function: FUN_00101140 =====

/* WARNING: Removing unreachable block (ram,0x00101164) */
/* WARNING: Removing unreachable block (ram,0x00101170) */

void FUN_00101140(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104068 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104058);
    }
    FUN_00101110();
    DAT_00104068 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101140();
  return;
}



// ===== Function: FUN_001011cc =====

undefined8 FUN_001011cc(void)

{
  undefined8 *puVar1;
  undefined1 *local_38 [2];
  undefined1 local_28 [16];
  
  puVar1 = (undefined8 *)operator_new(0x30);
  local_38[0] = local_28;
                    /* try { // try from 001011eb to 00101200 has its CatchHandler @ 00101270 */
  std::__cxx11::string::_M_construct<char_const*>(local_38,&DAT_00102010,&DAT_00102013);
                    /* try { // try from 00101201 to 00101213 has its CatchHandler @ 0010125d */
  FUN_00101284(DAT_00102008,puVar1,local_38);
  if (local_38[0] != local_28) {
    operator_delete(local_38[0]);
  }
  (**(code **)*puVar1)(puVar1);
  *puVar1 = &PTR_FUN_00103da0;
  if ((undefined8 *)puVar1[1] != puVar1 + 3) {
    operator_delete((undefined8 *)puVar1[1]);
  }
  operator_delete(puVar1);
  return 0;
}



// ===== Function: FUN_00101284 =====

void FUN_00101284(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 *local_38;
  long local_30;
  undefined1 local_28 [16];
  
  local_38 = local_28;
  std::__cxx11::string::_M_construct<char*>(&local_38,*param_3,param_3[1] + *param_3);
  *param_2 = &PTR_FUN_00103da0;
  param_2[1] = param_2 + 3;
                    /* try { // try from 001012d9 to 001012dd has its CatchHandler @ 0010130c */
  std::__cxx11::string::_M_construct<char*>(param_2 + 1,local_38,local_38 + local_30);
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
  *param_2 = &PTR_FUN_00103d60;
  param_2[5] = param_1;
  return;
}



// ===== Function: FUN_00101326 =====

void FUN_00101326(long param_1)

{
  undefined *puVar1;
  ostream *poVar2;
  
  puVar1 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cout_00103fc8,"Drawing a ",10);
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)puVar1,*(char **)(param_1 + 8),*(long *)(param_1 + 0x10));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," circle with radius ",0x14);
  poVar2 = std::ostream::_M_insert<double>(*(double *)(param_1 + 0x28));
  std::ios::widen((char)*(undefined8 *)(*(long *)poVar2 + -0x18) + (char)poVar2);
  std::ostream::put((char)poVar2);
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



// ===== Function: FUN_00101428 =====

void FUN_00101428(long param_1)

{
  undefined *puVar1;
  ostream *poVar2;
  
  puVar1 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)PTR_cout_00103fc8,"Drawing a shape color: ",0x17);
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)puVar1,*(char **)(param_1 + 8),*(long *)(param_1 + 0x10));
  std::ios::widen((char)*(undefined8 *)(*(long *)poVar2 + -0x18) + (char)poVar2);
  std::ostream::put((char)poVar2);
  std::ostream::flush();
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



// ===== Function: operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

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



// ===== Function: _M_insert<double> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

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



