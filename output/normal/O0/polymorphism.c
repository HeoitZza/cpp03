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
  (*(code *)PTR___cxa_finalize_00103fd8)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103fb0)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103fb8)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103fc0)();
  return pvVar1;
}



// ===== Function: __cxa_bad_typeid =====

void __cxa_bad_typeid(void)

{
  (*(code *)PTR___cxa_bad_typeid_00103fc8)();
  return;
}



// ===== Function: strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00103fd0)();
  return iVar1;
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

/* WARNING: Removing unreachable block (ram,0x00101123) */
/* WARNING: Removing unreachable block (ram,0x0010112f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101164) */
/* WARNING: Removing unreachable block (ram,0x00101170) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
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
  (this->super_Base)._vptr_Base = (_func_int_varargs **)0x0;
  Dog::Dog(this);
  if (this == (Dog *)0x0) {
    __cxa_bad_typeid();
  }
  else {
    bVar1 = std::type_info::operator==
                      ((type_info *)(this->super_Base)._vptr_Base[-1],(type_info *)&Dog::typeinfo);
    if (!bVar1) goto LAB_0010123c;
  }
  std::operator<<((ostream *)std::cout,&DAT_00102018);
LAB_0010123c:
  (**(this->super_Base)._vptr_Base)(this);
  if (this != (Dog *)0x0) {
    (*(this->super_Base)._vptr_Base[2])(this);
  }
  return 0;
}



// ===== Function: __is_constant_evaluated =====

/* WARNING: Unknown calling convention */

bool std::__is_constant_evaluated(void)

{
  return false;
}



// ===== Function: name =====

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std::type_info::name(type_info *this)

{
  char *pcVar1;
  type_info *this_local;
  
  if (**(char **)(this + 8) == '*') {
    pcVar1 = (char *)(*(long *)(this + 8) + 1);
  }
  else {
    pcVar1 = *(char **)(this + 8);
  }
  return pcVar1;
}



// ===== Function: operator== =====

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std::type_info::operator==(type_info *this,type_info *__arg)

{
  bool bVar1;
  int iVar2;
  char *__s2;
  type_info *__arg_local;
  type_info *this_local;
  
  bVar1 = __is_constant_evaluated();
  if (bVar1) {
    bVar1 = this == __arg;
  }
  else if (*(long *)(this + 8) == *(long *)(__arg + 8)) {
    bVar1 = true;
  }
  else {
    if (**(char **)(this + 8) != '*') {
      __s2 = name(__arg);
      iVar2 = strcmp(*(char **)(this + 8),__s2);
      if (iVar2 == 0) {
        return true;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



// ===== Function: speak =====

/* DWARF original prototype: void speak(Base * this) */

void __thiscall Base::speak(Base *this)

{
  Base *this_local;
  
  std::operator<<((ostream *)std::cout,"Base\n");
  return;
}



// ===== Function: ~Base =====

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  Base *this_local;
  
  this->_vptr_Base = (_func_int_varargs **)&PTR_speak_00103d58;
  return;
}



// ===== Function: ~Base =====

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  Base *this_local;
  
  ~Base(this,__in_chrg);
  operator_delete(this);
  return;
}



// ===== Function: speak =====

/* DWARF original prototype: void speak(Dog * this) */

void __thiscall Dog::speak(Dog *this)

{
  Dog *this_local;
  
  std::operator<<((ostream *)std::cout,"Woof!\n");
  return;
}



// ===== Function: Base =====

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
  Base *this_local;
  
  this->_vptr_Base = (_func_int_varargs **)&PTR_speak_00103d58;
  return;
}



// ===== Function: Dog =====

/* DWARF original prototype: void Dog(Dog * this) */

void __thiscall Dog::Dog(Dog *this)

{
  Dog *this_local;
  
  Base::Base(&this->super_Base);
  (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_speak_00103d30;
  return;
}



// ===== Function: ~Dog =====

/* DWARF original prototype: void ~Dog(Dog * this, int __in_chrg) */

void __thiscall Dog::~Dog(Dog *this,int __in_chrg)

{
  Dog *this_local;
  
  (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_speak_00103d30;
  Base::~Base(&this->super_Base,__in_chrg);
  return;
}



// ===== Function: ~Dog =====

/* DWARF original prototype: void ~Dog(Dog * this, int __in_chrg) */

void __thiscall Dog::~Dog(Dog *this,int __in_chrg)

{
  Dog *this_local;
  
  ~Dog(this,__in_chrg);
  operator_delete(this);
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



