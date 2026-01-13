// ===== Function: _init =====

int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00103ff0;
  if (PTR___gmon_start___00103ff0 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00103ff0)();
  }
  return (int)puVar1;
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

void __thiscall std::ostream::operator<<(void *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00103fb8)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(void *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fc0)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(void *this,double param_1)

{
  (*(code *)PTR_operator<<_00103fc8)();
  return;
}



// ===== Function: _start =====

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: deregister_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101103) */
/* WARNING: Removing unreachable block (ram,0x0010110f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101144) */
/* WARNING: Removing unreachable block (ram,0x00101150) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fd0 != (undefined *)0x0) {
      __cxa_finalize(__dso_handle);
    }
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



// ===== Function: frame_dummy =====

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// ===== Function: printInfo =====

void printInfo(int age)

{
  ostream *this;
  void *this_00;
  int age_local;
  
  this = std::operator<<((ostream *)std::cout,&DAT_00102008);
  this_00 = (void *)std::ostream::operator<<(this,age);
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8)
  ;
  return;
}



// ===== Function: printInfo =====

void printInfo(int age,double height)

{
  ostream *poVar1;
  void *this;
  double height_local;
  int age_local;
  
  poVar1 = std::operator<<((ostream *)std::cout,&DAT_00102008);
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,age);
  poVar1 = std::operator<<(poVar1,&DAT_00102011);
  this = (void *)std::ostream::operator<<(poVar1,height);
  std::ostream::operator<<
            (this,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: display =====

void display(int i)

{
  ostream *this;
  void *this_00;
  int i_local;
  
  this = std::operator<<((ostream *)std::cout,&DAT_00102019);
  this_00 = (void *)std::ostream::operator<<(this,i);
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8)
  ;
  return;
}



// ===== Function: display =====

void display(char *s)

{
  ostream *poVar1;
  char *s_local;
  
  poVar1 = std::operator<<((ostream *)std::cout,&DAT_00102029);
  poVar1 = std::operator<<(poVar1,s);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: main =====

/* WARNING: Unknown calling convention */

int main(void)

{
  printInfo(0x19);
  printInfo(0x19,DAT_00102048);
  display(100);
  display("Hello C++");
  return 0;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: endl<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: __libc_start_main =====

/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@GLIBC_2.34 */
  halt_baddata();
}



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(void *this,_func_ostream_ptr_ostream_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEPFRSoS_E@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: ios_base_library_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios_base_library_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt21ios_base_library_initv@GLIBCXX_3.4.32 */
  halt_baddata();
}



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(void *this,int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEi@GLIBCXX_3.4 */
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

void __thiscall std::ostream::operator<<(void *this,double param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEd@GLIBCXX_3.4 */
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
                    /* __cxa_finalize@GLIBC_2.2.5 */
  halt_baddata();
}



