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



// ===== Function: terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00104000)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00104008)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00104010)();
  return;
}



// ===== Function: ~string =====

void __thiscall std::__cxx11::string::~string(string *this)

{
  (*(code *)PTR__string_00104018)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,string *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00104020)();
  return poVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104028)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00104030)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104038)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00104040)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR_string_00104048)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104050)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall std::ostream::operator<<(ostream *this,double param_1)

{
  (*_DAT_00104058)();
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
            (FUN_001011f0,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101130 =====

/* WARNING: Removing unreachable block (ram,0x00101143) */
/* WARNING: Removing unreachable block (ram,0x0010114f) */

void FUN_00101130(void)

{
  return;
}



// ===== Function: FUN_00101160 =====

/* WARNING: Removing unreachable block (ram,0x00101184) */
/* WARNING: Removing unreachable block (ram,0x00101190) */

void FUN_00101160(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104078 == '\0') {
    if (PTR___cxa_finalize_00103fb0 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104068);
    }
    FUN_00101130();
    DAT_00104078 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101160();
  return;
}



// ===== Function: FUN_001011f0 =====

undefined8 FUN_001011f0(void)

{
  undefined8 *puVar1;
  allocator local_59;
  string local_58 [32];
  undefined8 *local_38;
  undefined4 local_2c;
  allocator *local_28;
  allocator *local_20;
  allocator *local_10;
  
  local_2c = 0;
  puVar1 = (undefined8 *)operator_new(0x30);
  local_28 = &local_59;
                    /* try { // try from 00101224 to 00101233 has its CatchHandler @ 001012bb */
  local_10 = local_28;
  std::__cxx11::string::string(local_58,"Red",local_28);
                    /* try { // try from 00101239 to 0010124d has its CatchHandler @ 001012cc */
  FUN_00101340(DAT_00102008,puVar1,local_58);
                    /* try { // try from 00101257 to 0010125f has its CatchHandler @ 001012bb */
  std::__cxx11::string::~string(local_58);
  local_20 = &local_59;
  FUN_00101520(local_20);
  local_38 = puVar1;
  (**(code **)*puVar1)();
  puVar1 = local_38;
  if (local_38 != (undefined8 *)0x0) {
                    /* try { // try from 00101299 to 001012a1 has its CatchHandler @ 00101319 */
    FUN_001013f0(local_38);
    operator_delete(puVar1);
  }
  return 0;
}



// ===== Function: FUN_00101340 =====

void FUN_00101340(undefined8 param_1,undefined8 *param_2,string *param_3)

{
  string local_40 [32];
  undefined8 local_20;
  string *local_18;
  undefined8 *local_10;
  
  local_20 = param_1;
  local_18 = param_3;
  local_10 = param_2;
  std::__cxx11::string::string(local_40,param_3);
                    /* try { // try from 00101372 to 00101376 has its CatchHandler @ 001013a7 */
  FUN_00101420(param_2,local_40);
  std::__cxx11::string::~string(local_40);
  *param_2 = &PTR_FUN_00103d58;
  param_2[5] = local_20;
  return;
}



// ===== Function: FUN_001013e0 =====

void FUN_001013e0(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



// ===== Function: FUN_001013f0 =====

void FUN_001013f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d98;
  std::__cxx11::string::~string((string *)(param_1 + 1));
  return;
}



// ===== Function: FUN_00101420 =====

void FUN_00101420(undefined8 *param_1,string *param_2)

{
  *param_1 = &PTR_FUN_00103d98;
  std::__cxx11::string::string((string *)(param_1 + 1),param_2);
  return;
}



// ===== Function: FUN_00101460 =====

void FUN_00101460(long param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)PTR_cout_00103fc8,"Drawing a ");
  poVar1 = std::operator<<(poVar1,(string *)(param_1 + 8));
  poVar1 = std::operator<<(poVar1," circle with radius ");
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,*(double *)(param_1 + 0x28));
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: FUN_001014d0 =====

void FUN_001014d0(long param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)PTR_cout_00103fc8,"Drawing a shape color: ");
  poVar1 = std::operator<<(poVar1,(string *)(param_1 + 8));
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: FUN_00101520 =====

void FUN_00101520(void)

{
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

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



// ===== Function: string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

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



// ===== Function: ~string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::~string(string *this)

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

ostream * std::operator<<(ostream *param_1,string *param_2)

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



// ===== Function: string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2)

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



