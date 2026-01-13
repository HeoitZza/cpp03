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
  (*(code *)PTR_00103f80)();
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
  (*(code *)PTR_string_00103f88)();
  return;
}



// ===== Function: ~string =====

void __thiscall std::__cxx11::string::~string(string *this)

{
  (*(code *)PTR__string_00103f90)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,string *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103f98)();
  return poVar1;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103fa0)();
  return poVar1;
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



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fc0)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fc8)();
  return;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_00101249,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
    if (PTR___cxa_finalize_00103fd0 != (undefined *)0x0) {
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

undefined8 FUN_00101249(void)

{
  long in_FS_OFFSET;
  allocator local_71;
  allocator *local_70;
  string local_68 [32];
  undefined1 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = &local_71;
                    /* try { // try from 00101284 to 00101288 has its CatchHandler @ 00101322 */
  std::__cxx11::string::string(local_68,"Hello World",&local_71);
                    /* try { // try from 00101297 to 0010129b has its CatchHandler @ 001012f8 */
  FUN_00101392(local_48,local_68);
                    /* try { // try from 001012a3 to 001012a7 has its CatchHandler @ 0010130d */
  std::__cxx11::string::~string(local_68);
  FUN_0010149e(&local_71);
                    /* try { // try from 001012bc to 001012cc has its CatchHandler @ 00101355 */
  FUN_001013c8(local_48);
  FUN_001013c8(local_48);
  FUN_0010147e(local_48);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: FUN_00101392 =====

void FUN_00101392(string *param_1,string *param_2)

{
  std::__cxx11::string::string(param_1,param_2);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ===== Function: FUN_001013c8 =====

void FUN_001013c8(string *param_1)

{
  ostream *poVar1;
  
  poVar1 = std::operator<<((ostream *)std::cout,"Content: ");
  poVar1 = std::operator<<(poVar1,param_1);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  poVar1 = std::operator<<((ostream *)std::cout,"Viewed ");
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,*(int *)(param_1 + 0x20));
  poVar1 = std::operator<<(poVar1," times.");
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: FUN_0010147e =====

void FUN_0010147e(string *param_1)

{
  std::__cxx11::string::~string(param_1);
  return;
}



// ===== Function: FUN_0010149e =====

void FUN_0010149e(void)

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



