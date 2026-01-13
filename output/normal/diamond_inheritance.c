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



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fc0)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(void *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fc8)();
  return;
}



// ===== Function: _start =====

/* WARNING: Struct "Cow": ignoring overlapping field "super_Mammal" */

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
/* WARNING: Struct "Cow": ignoring overlapping field "super_Mammal" */

int main(void)

{
  long lVar1;
  void **in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  Cow c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Cow::Cow(&c,in_ESI,in_RDX);
  Animal::eat((Animal *)&c.field_0x10);
  Cow::info(&c);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: Animal =====

/* DWARF original prototype: void Animal(Animal * this) */

void __thiscall Animal::Animal(Animal *this)

{
  Animal *this_local;
  
  this->age = 0;
  return;
}



// ===== Function: eat =====

/* DWARF original prototype: void eat(Animal * this) */

void __thiscall Animal::eat(Animal *this)

{
  ostream *this_00;
  Animal *this_local;
  
  this_00 = std::operator<<((ostream *)std::cout,"Animal eats");
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8)
  ;
  return;
}



// ===== Function: info =====

/* WARNING: Struct "Cow": ignoring overlapping field "super_Mammal" */
/* DWARF original prototype: void info(Cow * this) */

void __thiscall Cow::info(Cow *this)

{
  ostream *this_00;
  void *this_01;
  Cow *this_local;
  
  *(undefined4 *)
   ((long)&(this->super_Herbivore)._vptr_Herbivore +
   (long)(this->super_Herbivore)._vptr_Herbivore[-3]) = 5;
  this_00 = std::operator<<((ostream *)std::cout,"Cow age: ");
  this_01 = (void *)std::ostream::operator<<
                              (this_00,*(int *)((long)&(this->super_Herbivore)._vptr_Herbivore +
                                               (long)(this->super_Herbivore)._vptr_Herbivore[-3]));
  std::ostream::operator<<
            (this_01,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8)
  ;
  return;
}



// ===== Function: Herbivore =====

/* DWARF original prototype: void Herbivore(Herbivore * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall Herbivore::Herbivore(Herbivore *this,int __in_chrg,void **__vtt_parm)

{
  undefined4 in_register_00000034;
  void **__vtt_parm_local;
  Herbivore *this_local;
  
  this->_vptr_Herbivore = *(_func_int_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
  return;
}



// ===== Function: Mammal =====

/* DWARF original prototype: void Mammal(Mammal * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall Mammal::Mammal(Mammal *this,int __in_chrg,void **__vtt_parm)

{
  undefined4 in_register_00000034;
  void **__vtt_parm_local;
  Mammal *this_local;
  
  this->_vptr_Mammal = *(_func_int_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
  return;
}



// ===== Function: Cow =====

/* WARNING: Struct "Cow": ignoring overlapping field "super_Mammal" */
/* DWARF original prototype: void Cow(Cow * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall Cow::Cow(Cow *this,int __in_chrg,void **__vtt_parm)

{
  Cow *this_local;
  
  Animal::Animal((Animal *)&this->field_0x10);
  Herbivore::Herbivore(&this->super_Herbivore,0x103cb8,&PTR_construction_vtable_00103cb8);
  Mammal::Mammal((Mammal *)&(this->super_Herbivore).field_0x8,0x103cc0,&PTR_typeinfo_00103cc0);
  (this->super_Herbivore)._vptr_Herbivore = (_func_int_varargs **)0x103c98;
  *(undefined ***)&(this->super_Herbivore).field_0x8 = &VTT;
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



// ===== Function: __stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __stack_chk_fail@GLIBC_2.4 */
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



