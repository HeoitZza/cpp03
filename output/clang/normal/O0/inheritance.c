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



// ===== Function: terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00104000)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00104008)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00104010)();
  return;
}



// ===== Function: ~string =====

void __thiscall std::__cxx11::string::~string(string *this)

{
  (*(code *)PTR__string_00104018)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,string *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00104020)();
  return poVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104028)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00104030)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104038)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
  (*(code *)PTR_operator<<_00104040)();
  return;
}



// ===== Function: string =====

void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2)

{
  (*(code *)PTR_string_00104048)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104050)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall std::ostream::operator<<(ostream *this,double param_1)

{
  (*_DAT_00104058)();
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

/* WARNING: Removing unreachable block (ram,0x00101143) */
/* WARNING: Removing unreachable block (ram,0x0010114f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101184) */
/* WARNING: Removing unreachable block (ram,0x00101190) */

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
  Circle *pCVar1;
  allocator local_59;
  string local_58 [32];
  Circle *local_38;
  Shape *s;
  allocator *local_28;
  __new_allocator<char> *local_20;
  allocator *local_10;
  
  s._4_4_ = 0;
  pCVar1 = (Circle *)operator_new(0x30);
  local_28 = &local_59;
                    /* try { // try from 00101224 to 00101233 has its CatchHandler @ 001012bb */
  local_10 = local_28;
  std::__cxx11::string::string(local_58,"Red",local_28);
                    /* try { // try from 00101239 to 0010124d has its CatchHandler @ 001012cc */
  Circle::Circle(pCVar1,(string *)local_58,DAT_00102008);
                    /* try { // try from 00101257 to 0010125f has its CatchHandler @ 001012bb */
  std::__cxx11::string::~string(local_58);
  local_20 = (__new_allocator<char> *)&local_59;
  std::__new_allocator<char>::~__new_allocator(local_20);
  local_38 = pCVar1;
  (**(pCVar1->super_Shape)._vptr_Shape)();
  pCVar1 = local_38;
  if (local_38 != (Circle *)0x0) {
                    /* try { // try from 00101299 to 001012a1 has its CatchHandler @ 00101319 */
    Shape::~Shape(&local_38->super_Shape);
    operator_delete(pCVar1);
  }
  return 0;
}



// ===== Function: Circle =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Circle(Circle * this, string * c, double r) */

void __thiscall Circle::Circle(Circle *this,string *c,double r)

{
  string local_40 [32];
  double local_20;
  double r_local;
  string *c_local;
  Circle *this_local;
  
  local_20 = r;
  r_local = (double)c;
  c_local = (string *)this;
  std::__cxx11::string::string(local_40,(string *)c);
                    /* try { // try from 00101372 to 00101376 has its CatchHandler @ 001013a7 */
  Shape::Shape(&this->super_Shape,(string *)local_40);
  std::__cxx11::string::~string(local_40);
  (this->super_Shape)._vptr_Shape = (_func_int **)&PTR_draw_00103d58;
  this->radius = local_20;
  return;
}



// ===== Function: __clang_call_terminate =====

void __clang_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



// ===== Function: ~Shape =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~Shape(Shape * this) */

void __thiscall Shape::~Shape(Shape *this)

{
  Shape *this_local;
  
  this->_vptr_Shape = (_func_int **)&PTR_draw_00103d98;
  std::__cxx11::string::~string((string *)&this->color);
  return;
}



// ===== Function: Shape =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void Shape(Shape * this, string * c) */

void __thiscall Shape::Shape(Shape *this,string *c)

{
  string *c_local;
  Shape *this_local;
  
  this->_vptr_Shape = (_func_int **)&PTR_draw_00103d98;
  std::__cxx11::string::string((string *)&this->color,(string *)c);
  return;
}



// ===== Function: draw =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void draw(Circle * this) */

void __thiscall Circle::draw(Circle *this)

{
  ostream *poVar1;
  Circle *this_local;
  
  poVar1 = std::operator<<((ostream *)PTR_cout_00103fc8,"Drawing a ");
  poVar1 = std::operator<<(poVar1,(string *)&(this->super_Shape).color);
  poVar1 = std::operator<<(poVar1," circle with radius ");
  poVar1 = (ostream *)std::ostream::operator<<(poVar1,this->radius);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: draw =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void draw(Shape * this) */

void __thiscall Shape::draw(Shape *this)

{
  ostream *poVar1;
  Shape *this_local;
  
  poVar1 = std::operator<<((ostream *)PTR_cout_00103fc8,"Drawing a shape color: ");
  poVar1 = std::operator<<(poVar1,(string *)&this->color);
  std::ostream::operator<<
            (poVar1,(_func_ostream_ptr_ostream_ptr *)PTR_endl<char,std_char_traits<char>>_00103fb8);
  return;
}



// ===== Function: ~__new_allocator =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~__new_allocator(__new_allocator<char> * this) */

void __thiscall std::__new_allocator<char>::~__new_allocator(__new_allocator<char> *this)

{
  __new_allocator<char> *this_local;
  
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt9terminatev@GLIBCXX_3.4 */
  halt_baddata();
}



// ===== Function: __cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_begin_catch@CXXABI_1.3 */
  halt_baddata();
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

void __thiscall std::ostream::operator<<(ostream *this,_func_ostream_ptr_ostream_ptr *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSolsEPFRSoS_E@GLIBCXX_3.4 */
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

void __thiscall std::ostream::operator<<(ostream *this,double param_1)

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



