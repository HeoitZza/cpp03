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

void __thiscall std::ostream::operator<<(void *this,_func_ostream_ptr_ostream_ptr *param_1)

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

/* WARNING: Removing unreachable block (ram,0x001011e3) */
/* WARNING: Removing unreachable block (ram,0x001011ef) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101224) */
/* WARNING: Removing unreachable block (ram,0x00101230) */

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
  Shape *pSVar1;
  Circle *this;
  int __in_chrg;
  string *c;
  long in_FS_OFFSET;
  allocator local_69;
  Shape *s;
  allocator *local_60;
  string local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (Circle *)operator_new(0x30);
  local_60 = &local_69;
                    /* try { // try from 001012db to 001012df has its CatchHandler @ 0010137c */
  std::__cxx11::string::string((string *)&local_58,"Red",&local_69);
  c = &local_58;
                    /* try { // try from 001012f6 to 001012fa has its CatchHandler @ 00101367 */
  Circle::Circle(this,c,DAT_00102048);
  __in_chrg = (int)c;
  s = (Shape *)this;
                    /* try { // try from 0010130c to 00101310 has its CatchHandler @ 0010137c */
  std::__cxx11::string::~string((string *)&local_58);
  std::__new_allocator<char>::~__new_allocator((__new_allocator<char> *)&local_69,__in_chrg);
  (**s->_vptr_Shape)(s);
  pSVar1 = s;
  if (s != (Shape *)0x0) {
                    /* try { // try from 0010133d to 00101341 has its CatchHandler @ 001013bc */
    Shape::~Shape(s,__in_chrg);
    operator_delete(pSVar1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: Shape =====

/* DWARF original prototype: void Shape(Shape * this, string * c) */

void __thiscall Shape::Shape(Shape *this,string *c)

{
  string *c_local;
  Shape *this_local;
  
  this->_vptr_Shape = (_func_int_varargs **)&PTR_draw_00103d20;
  std::__cxx11::string::string((string *)&this->color,(string *)c);
  return;
}



// ===== Function: draw =====

/* DWARF original prototype: void draw(Shape * this) */

void __thiscall Shape::draw(Shape *this)

{
  ostream *poVar1;
  Shape *this_local;
  
  poVar1 = std::operator<<((ostream *)std::cout,"Drawing a shape color: ");
  poVar1 = std::operator<<(poVar1,(string *)&this->color);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8);
  return;
}



// ===== Function: ~Shape =====

/* DWARF original prototype: void ~Shape(Shape * this, int __in_chrg) */

void __thiscall Shape::~Shape(Shape *this,int __in_chrg)

{
  Shape *this_local;
  
  this->_vptr_Shape = (_func_int_varargs **)&PTR_draw_00103d20;
  std::__cxx11::string::~string((string *)&this->color);
  return;
}



// ===== Function: Circle =====

/* DWARF original prototype: void Circle(Circle * this, string * c, double r) */

void __thiscall Circle::Circle(Circle *this,string *c,double r)

{
  long in_FS_OFFSET;
  double r_local;
  string *c_local;
  Circle *this_local;
  string local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::string::string((string *)&local_48,(string *)c);
                    /* try { // try from 00101506 to 0010150a has its CatchHandler @ 00101545 */
  Shape::Shape(&this->super_Shape,&local_48);
  std::__cxx11::string::~string((string *)&local_48);
  (this->super_Shape)._vptr_Shape = (_func_int_varargs **)&PTR_draw_00103d08;
  this->radius = r;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: draw =====

/* DWARF original prototype: void draw(Circle * this) */

void __thiscall Circle::draw(Circle *this)

{
  ostream *poVar1;
  void *this_00;
  Circle *this_local;
  
  poVar1 = std::operator<<((ostream *)std::cout,"Drawing a ");
  poVar1 = std::operator<<(poVar1,(string *)&(this->super_Shape).color);
  poVar1 = std::operator<<(poVar1," circle with radius ");
  this_00 = (void *)std::ostream::operator<<(poVar1,this->radius);
  std::ostream::operator<<
            (this_00,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fd8)
  ;
  return;
}



// ===== Function: ~__new_allocator =====

/* DWARF original prototype: void ~__new_allocator(__new_allocator<char> * this, int __in_chrg) */

void __thiscall
std::__new_allocator<char>::~__new_allocator(__new_allocator<char> *this,int __in_chrg)

{
  __new_allocator<char> *this_local;
  
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@GLIBCXX_3.4.21
                        */
  halt_baddata();
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



// ===== Function: ~string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::~string(string *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GLIBCXX_3.4.21 */
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

ostream * std::operator<<(ostream *param_1,string *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@GLIBCXX_3.4.21
                        */
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



// ===== Function: string =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@GLIBCXX_3.4.21
                        */
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



