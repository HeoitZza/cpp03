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



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

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



// ===== Function: main =====

/* WARNING: Unknown calling convention */

int main(void)

{
  int iVar1;
  Dog *this;
  undefined4 extraout_var;
  Dog *myDog;
  Dog *clonedDog;
  Dog *this_00;
  
  this = (Dog *)operator_new(8);
  (this->super_Animal)._vptr_Animal = (_func_int_varargs **)0x0;
  Dog::Dog(this);
  iVar1 = (*(this->super_Animal)._vptr_Animal[2])(this);
  this_00 = (Dog *)CONCAT44(extraout_var,iVar1);
  (*(this_00->super_Animal)._vptr_Animal[3])(this_00);
  Dog::wagTail(this_00);
  if (this != (Dog *)0x0) {
    (*(this->super_Animal)._vptr_Animal[1])(this);
  }
  if (this_00 != (Dog *)0x0) {
    (*(this_00->super_Animal)._vptr_Animal[1])(this_00);
  }
  return 0;
}



// ===== Function: ~Animal =====

/* DWARF original prototype: void ~Animal(Animal * this, int __in_chrg) */

void __thiscall Animal::~Animal(Animal *this,int __in_chrg)

{
  Animal *this_local;
  
  this->_vptr_Animal = (_func_int_varargs **)&PTR__Animal_00103d50;
  return;
}



// ===== Function: ~Animal =====

/* DWARF original prototype: void ~Animal(Animal * this, int __in_chrg) */

void __thiscall Animal::~Animal(Animal *this,int __in_chrg)

{
  Animal *this_local;
  
  ~Animal(this,__in_chrg);
  operator_delete(this);
  return;
}



// ===== Function: Animal =====

/* DWARF original prototype: void Animal(Animal * this, Animal * param_1) */

void __thiscall Animal::Animal(Animal *this,Animal *param_1)

{
  Animal *param_1_local;
  Animal *this_local;
  
  this->_vptr_Animal = (_func_int_varargs **)&PTR__Animal_00103d50;
  return;
}



// ===== Function: clone =====

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

/* DWARF original prototype: void speak(Animal * this) */

void __thiscall Animal::speak(Animal *this)

{
  ostream *this_00;
  Animal *this_local;
  
  this_00 = std::operator<<((ostream *)std::cout,&DAT_00102004);
  std::ostream::operator<<
            ((ostream *)this_00,
             (_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: Dog =====

/* DWARF original prototype: void Dog(Dog * this, Dog * param_1) */

void __thiscall Dog::Dog(Dog *this,Dog *param_1)

{
  Dog *param_1_local;
  Dog *this_local;
  
  Animal::Animal(&this->super_Animal,&param_1->super_Animal);
  (this->super_Animal)._vptr_Animal = (_func_int_varargs **)&PTR__Dog_00103d20;
  return;
}



// ===== Function: clone =====

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

/* DWARF original prototype: void speak(Dog * this) */

void __thiscall Dog::speak(Dog *this)

{
  ostream *this_00;
  Dog *this_local;
  
  this_00 = std::operator<<((ostream *)std::cout,&DAT_0010201a);
  std::ostream::operator<<
            ((ostream *)this_00,
             (_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: wagTail =====

/* DWARF original prototype: void wagTail(Dog * this) */

void __thiscall Dog::wagTail(Dog *this)

{
  ostream *this_00;
  Dog *this_local;
  
  this_00 = std::operator<<((ostream *)std::cout,&DAT_00102022);
  std::ostream::operator<<
            ((ostream *)this_00,
             (_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: Animal =====

/* DWARF original prototype: void Animal(Animal * this) */

void __thiscall Animal::Animal(Animal *this)

{
  Animal *this_local;
  
  this->_vptr_Animal = (_func_int_varargs **)&PTR__Animal_00103d50;
  return;
}



// ===== Function: Dog =====

/* DWARF original prototype: void Dog(Dog * this) */

void __thiscall Dog::Dog(Dog *this)

{
  Dog *this_local;
  
  Animal::Animal(&this->super_Animal);
  (this->super_Animal)._vptr_Animal = (_func_int_varargs **)&PTR__Dog_00103d20;
  return;
}



// ===== Function: ~Dog =====

/* DWARF original prototype: void ~Dog(Dog * this, int __in_chrg) */

void __thiscall Dog::~Dog(Dog *this,int __in_chrg)

{
  Dog *this_local;
  
  (this->super_Animal)._vptr_Animal = (_func_int_varargs **)&PTR__Dog_00103d20;
  Animal::~Animal(&this->super_Animal,__in_chrg);
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



