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
  (*(code *)PTR_00103f70)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fd0)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00103f78)();
  return;
}



// ===== Function: ~string =====

void __thiscall std::__cxx11::string::~string(string *this)

{
  (*(code *)PTR__string_00103f80)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,string *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103f88)();
  return poVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103f90)();
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



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103fa0)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fa8)();
  return;
}



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fb0)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR_string_00103fb8)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fc0)();
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
            (FUN_00101289,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001011d0 =====

/* WARNING: Removing unreachable block (ram,0x001011e3) */
/* WARNING: Removing unreachable block (ram,0x001011ef) */

void FUN_001011d0(void)

{
  return;
}



// ===== Function: FUN_00101200 =====

/* WARNING: Removing unreachable block (ram,0x00101224) */
/* WARNING: Removing unreachable block (ram,0x00101230) */

void FUN_00101200(void)

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
    FUN_001011d0();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101200();
  return;
}



// ===== Function: FUN_00101289 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00101289(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  allocator local_69;
  undefined8 *local_68;
  allocator *local_60;
  string local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)operator_new(0x30);
  local_60 = &local_69;
                    /* try { // try from 001012db to 001012df has its CatchHandler @ 0010137c */
  std::__cxx11::string::string(local_58,"Red",&local_69);
                    /* try { // try from 001012f6 to 001012fa has its CatchHandler @ 00101367 */
  FUN_001014bc(_DAT_00102048,puVar1,local_58);
  local_68 = puVar1;
                    /* try { // try from 0010130c to 00101310 has its CatchHandler @ 0010137c */
  std::__cxx11::string::~string(local_58);
  FUN_00101604(&local_69);
  (**(code **)*local_68)(local_68);
  puVar1 = local_68;
  if (local_68 != (undefined8 *)0x0) {
                    /* try { // try from 0010133d to 00101341 has its CatchHandler @ 001013bc */
    FUN_0010148a(local_68);
    operator_delete(puVar1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: FUN_001013fa =====

void FUN_001013fa(undefined8 *param_1,string *param_2)

{
  *param_1 = &PTR_FUN_00103d20;
  std::__cxx11::string::string((string *)(param_1 + 1),param_2);
  return;
}



// ===== Function: FUN_00101436 =====

void FUN_00101436(long param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,"Drawing a shape color: ");
  poVar1 = std::operator<<(poVar1,(string *)(param_1 + 8));
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_0010148a =====

void FUN_0010148a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d20;
  std::__cxx11::string::~string((string *)(param_1 + 1));
  return;
}



// ===== Function: FUN_001014bc =====

void FUN_001014bc(undefined8 param_1,undefined8 *param_2,string *param_3)

{
  long in_FS_OFFSET;
  string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::string::string(local_48,param_3);
                    /* try { // try from 00101506 to 0010150a has its CatchHandler @ 00101545 */
  FUN_001013fa(param_2,local_48);
  std::__cxx11::string::~string(local_48);
  *param_2 = &PTR_FUN_00103d08;
  param_2[5] = param_1;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_00101582 =====

void FUN_00101582(long param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,"Drawing a ");
  poVar1 = std::operator<<(poVar1,(string *)(param_1 + 8));
  poVar1 = std::operator<<(poVar1," circle with radius ");
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,*(double *)(param_1 + 0x28));
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_00101604 =====

void FUN_00101604(void)

{
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
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



// ===== Function: __stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

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



