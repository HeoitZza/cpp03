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
  (*(code *)PTR_00103f98)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fd8)();
  return;
}



// ===== Function: put =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
  (*(code *)PTR_put_00103fa0)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00103fa8)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103fb0)();
  return;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103fb8)();
  return pvVar1;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00103fc0)();
  return poVar1;
}



// ===== Function: _M_widen_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00103fc8)();
  return;
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00103fd0)();
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

/* WARNING: Removing unreachable block (ram,0x00101163) */
/* WARNING: Removing unreachable block (ram,0x0010116f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x001011a4) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */

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
  long *plVar1;
  int iVar2;
  Dog *this;
  undefined4 extraout_var;
  int in_ECX;
  void *__child_stack;
  __fn *in_RSI;
  void *in_R8;
  long *plVar3;
  
  this = (Dog *)operator_new(8);
  (this->super_Animal)._vptr_Animal = (_func_int_varargs **)&PTR__Dog_00103d40;
  iVar2 = Dog::clone(this,in_RSI,__child_stack,in_ECX,in_R8);
  plVar3 = (long *)CONCAT44(extraout_var,iVar2);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,&DAT_0010200c,0x10);
  plVar1 = *(long **)(&DAT_00104130 + *(long *)(std::cout + -0x18));
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  else if ((char)plVar1[7] != '\0') goto LAB_0010127e;
  std::ctype<char>::_M_widen_init();
  (**(code **)(*plVar1 + 0x30))(plVar1,10);
LAB_0010127e:
  std::ostream::put('@');
  std::ostream::flush();
  (*(this->super_Animal)._vptr_Animal[1])(this);
  (**(code **)(*plVar3 + 8))(plVar3);
  return 0;
}



// ===== Function: ~Dog =====

/* DWARF original prototype: void ~Dog(Dog * this, int __in_chrg) */

void __thiscall Dog::~Dog(Dog *this,int __in_chrg)

{
  return;
}



// ===== Function: clone =====

/* DWARF original prototype: Dog * clone(Dog * this) */

int __thiscall Dog::clone(Dog *this,__fn *__fn,void *__child_stack,int __flags,void *__arg,...)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR__Dog_00103d40;
  return (int)puVar1;
}



// ===== Function: ~Dog =====

/* DWARF original prototype: void ~Dog(Dog * this, int __in_chrg) */

void __thiscall Dog::~Dog(Dog *this,int __in_chrg)

{
  operator_delete(this);
  return;
}



// ===== Function: speak =====

/* DWARF original prototype: void speak(Dog * this) */

void __thiscall Dog::speak(Dog *this)

{
  long *plVar1;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,&DAT_00102004,7);
  plVar1 = *(long **)(&DAT_00104130 + *(long *)(std::cout + -0x18));
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
  }
  else if ((char)plVar1[7] != '\0') goto LAB_00101350;
  std::ctype<char>::_M_widen_init();
  (**(code **)(*plVar1 + 0x30))(plVar1,10);
LAB_00101350:
  std::ostream::put('@');
  std::ostream::flush();
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: put =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSo3putEc@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: flush =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSo5flushEv@GLIBCXX_3.4 */
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



// ===== Function: operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _Znwm@GLIBCXX_3.4 */
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



// ===== Function: _M_widen_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt5ctypeIcE13_M_widen_initEv@GLIBCXX_3.4.11 */
  halt_baddata();
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt16__throw_bad_castv@GLIBCXX_3.4 */
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



