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



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00104020)();
  return;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

{
  (*_DAT_00104028)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fb0)();
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

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00103fb0 != (undefined *)0x0) {
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
  int iVar1;
  Dog *this;
  undefined4 extraout_var;
  Dog *clonedDog;
  Dog *myDog;
  Dog *this_00;
  
  this = (Dog *)operator_new(8);
  memset(this,0,8);
  Dog::Dog(this);
  iVar1 = (*(this->super_Animal)._vptr_Animal[2])();
  this_00 = (Dog *)CONCAT44(extraout_var,iVar1);
  (*(this_00->super_Animal)._vptr_Animal[3])();
  Dog::wagTail(this_00);
  if (this != (Dog *)0x0) {
    (*(this->super_Animal)._vptr_Animal[1])();
  }
  if (this_00 != (Dog *)0x0) {
    (*(this_00->super_Animal)._vptr_Animal[1])();
  }
  return 0;
}



// ===== Function: Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Dog(Dog * this) */

void __thiscall Dog::Dog(Dog *this)

{
  Dog *this_local;
  
  Animal::Animal(&this->super_Animal);
  (this->super_Animal)._vptr_Animal = (_func_int **)&PTR__Dog_00103d28;
  return;
}



// ===== Function: wagTail =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void wagTail(Dog * this) */

void __thiscall Dog::wagTail(Dog *this)

{
  ostream *this_00;
  Dog *this_local;
  
  this_00 = std::operator<<((ostream *)PTR_cout_00103fc8,anon_var_dwarf_64);
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8)
  ;
  return;
}



// ===== Function: Animal =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Animal(Animal * this) */

void __thiscall Animal::Animal(Animal *this)

{
  Animal *this_local;
  
  this->_vptr_Animal = (_func_int **)&PTR__Animal_00103d80;
  return;
}



// ===== Function: ~Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Dog(Dog * this) */

void __thiscall Dog::~Dog(Dog *this)

{
  Dog *this_local;
  
  Animal::~Animal(&this->super_Animal);
  return;
}



// ===== Function: ~Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Dog(Dog * this) */

void __thiscall Dog::~Dog(Dog *this)

{
  Dog *this_local;
  
                    /* try { // try from 00101304 to 00101308 has its CatchHandler @ 0010131d */
  ~Dog(this);
  operator_delete(this);
  return;
}



// ===== Function: clone =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: Dog * clone(Dog * this) */

int __thiscall Dog::clone(Dog *this,__fn *__fn,void *__child_stack,int __flags,void *__arg,...)

{
  Dog *this_00;
  Dog *this_local;
  
  this_00 = (Dog *)operator_new(8);
  Dog(this_00,this);
  return (int)this_00;
}



// ===== Function: speak =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void speak(Dog * this) */

void __thiscall Dog::speak(Dog *this)

{
  ostream *this_00;
  Dog *this_local;
  
  this_00 = std::operator<<((ostream *)PTR_cout_00103fc8,anon_var_dwarf_4e);
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8)
  ;
  return;
}



// ===== Function: ~Animal =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Animal(Animal * this) */

void __thiscall Animal::~Animal(Animal *this)

{
  Animal *this_local;
  
  return;
}



// ===== Function: ~Animal =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Animal(Animal * this) */

void __thiscall Animal::~Animal(Animal *this)

{
  Animal *this_local;
  
                    /* try { // try from 001013e4 to 001013e8 has its CatchHandler @ 001013fd */
  ~Animal(this);
  operator_delete(this);
  return;
}



// ===== Function: clone =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: Animal * clone(Animal * this) */

int __thiscall
Animal::clone(Animal *this,__fn *__fn,void *__child_stack,int __flags,void *__arg,...)

{
  Animal *this_00;
  Animal *this_local;
  
  this_00 = (Animal *)operator_new(8);
  Animal(this_00,this);
  return (int)this_00;
}



// ===== Function: speak =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void speak(Animal * this) */

void __thiscall Animal::speak(Animal *this)

{
  ostream *this_00;
  Animal *this_local;
  
  this_00 = std::operator<<((ostream *)PTR_cout_00103fc8,anon_var_dwarf_2b);
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8)
  ;
  return;
}



// ===== Function: Animal =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Animal(Animal * this, Animal * param_1) */

void __thiscall Animal::Animal(Animal *this,Animal *param_1)

{
  Animal *param_1_local;
  Animal *this_local;
  
  this->_vptr_Animal = (_func_int **)&PTR__Animal_00103d80;
  return;
}



// ===== Function: Dog =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Dog(Dog * this, Dog * param_1) */

void __thiscall Dog::Dog(Dog *this,Dog *param_1)

{
  Dog *param_1_local;
  Dog *this_local;
  
  Animal::Animal(&this->super_Animal,&param_1->super_Animal);
  (this->super_Animal)._vptr_Animal = (_func_int **)&PTR__Dog_00103d28;
  return;
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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

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



