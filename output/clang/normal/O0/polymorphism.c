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



// ===== Function: __cxa_bad_typeid =====

void __cxa_bad_typeid(void)

{
  (*(code *)PTR___cxa_bad_typeid_00104020)();
  return;
}



// ===== Function: strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00104028)();
  return iVar1;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

{
  (*_DAT_00104030)();
  return;
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

/* WARNING: Removing unreachable block (ram,0x001010f3) */
/* WARNING: Removing unreachable block (ram,0x001010ff) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101134) */
/* WARNING: Removing unreachable block (ram,0x00101140) */

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
  bool bVar1;
  Dog *this;
  Base *ptr;
  
  this = (Dog *)operator_new(8);
  memset(this,0,8);
  Dog::Dog(this);
  if (this == (Dog *)0x0) {
    __cxa_bad_typeid();
  }
  bVar1 = std::type_info::operator==
                    ((type_info *)(this->super_Base)._vptr_Base[-1],(type_info *)&Dog::typeinfo);
  if (bVar1) {
    std::operator<<((ostream *)PTR_cout_00103fc8,anon_var_dwarf_2b);
  }
  (**(this->super_Base)._vptr_Base)();
  if (this != (Dog *)0x0) {
    (*(this->super_Base)._vptr_Base[2])();
  }
  return 0;
}



// ===== Function: Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Dog(Dog * this) */

void __thiscall Dog::Dog(Dog *this)

{
  Dog *this_local;
  
  Base::Base(&this->super_Base);
  (this->super_Base)._vptr_Base = (_func_int **)&PTR_speak_00103d68;
  return;
}



// ===== Function: operator== =====

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std::type_info::operator==(type_info *this,type_info *__arg)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  char *__s2;
  bool local_29;
  type_info *__arg_local;
  type_info *this_local;
  
  bVar1 = __is_constant_evaluated();
  if (bVar1) {
    this_local._7_1_ = this == __arg;
  }
  else if (*(long *)(this + 8) == *(long *)(__arg + 8)) {
    this_local._7_1_ = true;
  }
  else {
    local_29 = false;
    if (**(char **)(this + 8) != '*') {
      __s1 = *(char **)(this + 8);
      __s2 = name(__arg);
      iVar2 = strcmp(__s1,__s2);
      local_29 = iVar2 == 0;
    }
    this_local._7_1_ = local_29;
  }
  return this_local._7_1_;
}



// ===== Function: Base =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
  Base *this_local;
  
  this->_vptr_Base = (_func_int **)&PTR_speak_00103d90;
  return;
}



// ===== Function: speak =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void speak(Dog * this) */

void __thiscall Dog::speak(Dog *this)

{
  Dog *this_local;
  
  std::operator<<((ostream *)PTR_cout_00103fc8,"Woof!\n");
  return;
}



// ===== Function: ~Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Dog(Dog * this) */

void __thiscall Dog::~Dog(Dog *this)

{
  Dog *this_local;
  
  Base::~Base(&this->super_Base);
  return;
}



// ===== Function: ~Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Dog(Dog * this) */

void __thiscall Dog::~Dog(Dog *this)

{
  Dog *this_local;
  
                    /* try { // try from 001013e4 to 001013e8 has its CatchHandler @ 001013fd */
  ~Dog(this);
  operator_delete(this);
  return;
}



// ===== Function: speak =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void speak(Base * this) */

void __thiscall Base::speak(Base *this)

{
  Base *this_local;
  
  std::operator<<((ostream *)PTR_cout_00103fc8,"Base\n");
  return;
}



// ===== Function: ~Base =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  Base *this_local;
  
  return;
}



// ===== Function: ~Base =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  Base *this_local;
  
                    /* try { // try from 00101474 to 00101478 has its CatchHandler @ 0010148d */
  ~Base(this);
  operator_delete(this);
  return;
}



// ===== Function: __is_constant_evaluated =====

/* WARNING: Unknown calling convention */

bool std::__is_constant_evaluated(void)

{
  return false;
}



// ===== Function: name =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std::type_info::name(type_info *this)

{
  char *local_20;
  type_info *this_local;
  
  if (**(char **)(this + 8) == '*') {
    local_20 = (char *)(*(long *)(this + 8) + 1);
  }
  else {
    local_20 = *(char **)(this + 8);
  }
  return local_20;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memset@GLIBC_2.2.5 */
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



// ===== Function: operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZdlPv@GLIBCXX_3.4 */
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



// ===== Function: operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _Znwm@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: __cxa_bad_typeid =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_bad_typeid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_bad_typeid@CXXABI_1.3 */
  halt_baddata();
}



// ===== Function: strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* strcmp@GLIBC_2.2.5 */
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



// ===== Function: __gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __gxx_personality_v0@CXXABI_1.3 */
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
                    /* _Unwind_Resume@GCC_3.0 */
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



