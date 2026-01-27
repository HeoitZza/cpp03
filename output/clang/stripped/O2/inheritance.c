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



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104020)();
  return pvVar1;
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



// ===== Function: _M_widen_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00104030)();
  return;
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00104038)();
  return;
}



// ===== Function: _M_insert<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR__M_insert<double>_00104040)();
  return poVar1;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104048)();
  return;
}



// ===== Function: _M_create =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
  (*_DAT_00104050)();
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
            (FUN_001011e0,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101120 =====

/* WARNING: Removing unreachable block (ram,0x00101133) */
/* WARNING: Removing unreachable block (ram,0x0010113f) */

void FUN_00101120(void)

{
  return;
}



// ===== Function: FUN_00101150 =====

/* WARNING: Removing unreachable block (ram,0x00101174) */
/* WARNING: Removing unreachable block (ram,0x00101180) */

void FUN_00101150(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104070 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104060);
    }
    FUN_00101120();
    DAT_00104070 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101150();
  return;
}



// ===== Function: FUN_001011e0 =====

undefined8 FUN_001011e0(void)

{
  undefined8 *puVar1;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28 [4];
  
  puVar1 = (undefined8 *)operator_new(0x30);
  local_28[0] = 0x646552;
  local_30 = 3;
  local_38 = local_28;
                    /* try { // try from 00101210 to 00101222 has its CatchHandler @ 0010126c */
  FUN_00101290(DAT_00102008,puVar1,&local_38);
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
  (**(code **)*puVar1)(puVar1);
  *puVar1 = &PTR_FUN_00103da0;
  if ((undefined8 *)puVar1[1] != puVar1 + 3) {
    operator_delete((undefined8 *)puVar1[1]);
  }
  operator_delete(puVar1);
  return 0;
}



// ===== Function: FUN_00101290 =====

void FUN_00101290(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined1 *__src;
  ulong uVar2;
  ulong *__src_00;
  ulong *__dest;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [2];
  undefined8 local_38;
  
  __src = (undefined1 *)*param_3;
  uVar2 = param_3[1];
  local_58 = local_48;
  local_60 = uVar2;
  local_38 = param_1;
  if (0xf < uVar2) {
    local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    local_48[0] = local_60;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *(undefined1 *)local_58 = *__src;
    }
    else {
      memcpy(local_58,__src,uVar2);
    }
  }
  __src_00 = local_58;
  uVar2 = local_60;
  local_50 = local_60;
  *(undefined1 *)((long)local_58 + local_60) = 0;
  *param_2 = &PTR_FUN_00103da0;
  puVar1 = param_2 + 3;
  param_2[1] = puVar1;
  __dest = puVar1;
  if (0xf < local_60) {
                    /* try { // try from 00101341 to 00101353 has its CatchHandler @ 001013c9 */
    __dest = (ulong *)std::__cxx11::string::_M_create(param_2 + 1,(ulong)&local_60);
    param_2[1] = __dest;
    *puVar1 = local_60;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      *(char *)__dest = (char)*__src_00;
    }
    else {
      memcpy(__dest,__src_00,uVar2);
    }
  }
  param_2[2] = local_60;
  *(undefined1 *)(param_2[1] + local_60) = 0;
  if (local_58 != local_48) {
    operator_delete(local_58);
  }
  *param_2 = &PTR_FUN_00103d60;
  param_2[5] = local_38;
  return;
}



// ===== Function: FUN_001013f0 =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_001013f0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ostream *poVar3;
  ostream *poVar4;
  
  puVar2 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cout_00103fc8,"Drawing a ",10);
  poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)puVar2,*(char **)(param_1 + 8),*(long *)(param_1 + 0x10));
  std::__ostream_insert<char,std::char_traits<char>>(poVar3," circle with radius ",0x14);
  poVar4 = std::ostream::_M_insert<double>(*(double *)(param_1 + 0x28));
  plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
    std::ostream::put((char)poVar4);
    std::ostream::flush();
    return;
  }
  std::__throw_bad_cast();
  puVar2 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)PTR_cout_00103fc8,"Drawing a shape color: ",0x17);
  poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)puVar2,*(char **)(poVar3 + 8),*(long *)(poVar3 + 0x10));
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put((char)poVar3);
  std::ostream::flush();
  return;
}



// ===== Function: FUN_001014b0 =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_001014b0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ostream *poVar3;
  
  puVar2 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)PTR_cout_00103fc8,"Drawing a shape color: ",0x17);
  poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)puVar2,*(char **)(param_1 + 8),*(long *)(param_1 + 0x10));
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put((char)poVar3);
  std::ostream::flush();
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



