// ===== Function: _init =====

int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00103fd8;
  if (PTR___gmon_start___00103fd8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00103fd8)();
  }
  return (int)puVar1;
}



// ===== Function: FUN_00101020 =====

void FUN_00101020(void)

{
  (*(code *)PTR_00103ff8)();
  return;
}



// ===== Function: fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00104000)();
  return iVar1;
}



// ===== Function: fputs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00104008)();
  return iVar1;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00104010)();
  return poVar1;
}



// ===== Function: fopen =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*_DAT_00104018)();
  return pFVar1;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fb8)();
  return;
}



// ===== Function: _start =====

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc0)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: deregister_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x001010c3) */
/* WARNING: Removing unreachable block (ram,0x001010cf) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101104) */
/* WARNING: Removing unreachable block (ram,0x00101110) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
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



// ===== Function: main =====

/* WARNING: Unknown calling convention */

int main(void)

{
  FILE *__stream;
  FileHandler fh;
  FileHandler local_18;
  
  __stream = fopen("test.txt","w");
  local_18.handle = (FILE *)__stream;
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)PTR_cout_00103fc8,anon_var_dwarf_7e,0x16);
  fputs("RAII Sample",__stream);
  FileHandler::~FileHandler(&local_18);
  return 0;
}



// ===== Function: ~FileHandler =====

/* DWARF original prototype: void ~FileHandler(FileHandler * this) */

void __thiscall FileHandler::~FileHandler(FileHandler *this)

{
  if ((FILE *)this->handle != (FILE *)0x0) {
    fclose((FILE *)this->handle);
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)PTR_cout_00103fc8,anon_var_dwarf_94,0x1d);
    return;
  }
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: __libc_start_main =====

/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __libc_start_main@GLIBC_2.34 */
  halt_baddata();
}



// ===== Function: fclose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* fclose@GLIBC_2.2.5 */
  halt_baddata();
}



// ===== Function: fputs =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* fputs@GLIBC_2.2.5 */
  halt_baddata();
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@GLIBCXX_3.4.9
                        */
  halt_baddata();
}



// ===== Function: fopen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* fopen@GLIBC_2.2.5 */
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
                    /* __cxa_finalize@GLIBC_2.2.5 */
  halt_baddata();
}



