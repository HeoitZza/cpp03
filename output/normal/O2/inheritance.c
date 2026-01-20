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
  (*(code *)PTR_00103f60)();
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
  (*(code *)PTR_put_00103f68)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00103f70)();
  return;
}



// ===== Function: memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00103f78)();
  return pvVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103f80)();
  return;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103f88)();
  return pvVar1;
}



// ===== Function: _S_copy_chars =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR__S_copy_chars_00103f90)();
  return;
}



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103f98)();
  return;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00103fa0)();
  return poVar1;
}



// ===== Function: _M_widen_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ctype<char>::_M_widen_init(void)

{
  (*(code *)PTR__M_widen_init_00103fa8)();
  return;
}



// ===== Function: _M_dispose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
  (*(code *)PTR__M_dispose_00103fb0)();
  return;
}



// ===== Function: __throw_bad_cast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_cast(void)

{
  (*(code *)PTR___throw_bad_cast_00103fb8)();
  return;
}



// ===== Function: _M_insert<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR__M_insert<double>_00103fc0)();
  return poVar1;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fc8)();
  return;
}



// ===== Function: _M_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
  (*(code *)PTR__M_create_00103fd0)();
  return;
}



// ===== Function: main.cold =====

void main_cold(void)

{
  void *unaff_RBX;
  long in_FS_OFFSET;
  long in_stack_00000048;
  
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  operator_delete(unaff_RBX);
  if (in_stack_00000048 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: main =====

/* WARNING: Unknown calling convention */

int main(void)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_68 [3];
  undefined1 local_65 [13];
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)operator_new(0x30);
  std::__cxx11::string::_S_copy_chars(local_68,"Red","");
  local_65[0] = 0;
  local_58._M_dataplus._M_p = (pointer)&local_58.field_2;
                    /* try { // try from 001012b5 to 001012b9 has its CatchHandler @ 0010135c */
  std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::
  _M_construct<char*>(&local_58,local_68,local_65);
  *puVar1 = &PTR_draw_00103cf8;
  puVar1[1] = puVar1 + 3;
                    /* try { // try from 001012e0 to 001012e4 has its CatchHandler @ 00101350 */
  std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::
  _M_construct<char*>((basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)
                      (puVar1 + 1),local_58._M_dataplus._M_p,
                      local_58._M_dataplus._M_p + local_58._M_string_length);
  if ((anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_9
       *)local_58._M_dataplus._M_p != &local_58.field_2) {
    operator_delete(local_58._M_dataplus._M_p);
  }
  *puVar1 = &PTR_draw_00103d10;
  puVar1[5] = DAT_00102050;
  std::__cxx11::string::_M_dispose();
  (**(code **)*puVar1)(puVar1);
  *puVar1 = &PTR_draw_00103cf8;
  std::__cxx11::string::_M_dispose();
  operator_delete(puVar1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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

/* WARNING: Removing unreachable block (ram,0x001013b3) */
/* WARNING: Removing unreachable block (ram,0x001013bf) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x001013f4) */
/* WARNING: Removing unreachable block (ram,0x00101400) */

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



// ===== Function: _M_construct<char*> =====

/* DWARF original prototype: void
   _M_construct<char*>(basic_string<char,_std::char_traits<char>,_std::allocator<char>_> * this,
   char * __beg, char * __end, forward_iterator_tag param_5) */

void __thiscall
std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::_M_construct<char*>
          (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *this,char *__beg,
          long __end)

{
  pointer __dest;
  ulong __n;
  long in_FS_OFFSET;
  size_type __dnew;
  long local_20;
  
  __n = __end - (long)__beg;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __dnew = __n;
  if (__n < 0x10) {
    __dest = (this->_M_dataplus)._M_p;
    if (__n == 1) {
      *__dest = *__beg;
      __dest = (this->_M_dataplus)._M_p;
      goto LAB_001014a4;
    }
    if (__n == 0) goto LAB_001014a4;
  }
  else {
    __dest = (pointer)std::__cxx11::string::_M_create((ulong *)this,(ulong)&__dnew);
    (this->_M_dataplus)._M_p = __dest;
    (this->field_2)._M_allocated_capacity = __dnew;
  }
  memcpy(__dest,__beg,__n);
  __dest = (this->_M_dataplus)._M_p;
LAB_001014a4:
  this->_M_string_length = __dnew;
  __dest[__dnew] = '\0';
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: do_widen =====

/* DWARF original prototype: char_type do_widen(ctype<char> * this, char __c) */

char_type __thiscall std::ctype<char>::do_widen(ctype<char> *this,char __c)

{
  return __c;
}



// ===== Function: draw =====

/* DWARF original prototype: void draw(Circle * this) */

void __thiscall Circle::draw(Circle *this)

{
  long *plVar1;
  ostream *poVar2;
  ostream *poVar3;
  
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)std::cout,"Drawing a ",10);
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)std::cout,(this->super_Shape).color._M_dataplus._M_p,
                      (this->super_Shape).color._M_string_length);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2," circle with radius ",0x14);
  poVar3 = std::ostream::_M_insert<double>(this->radius);
  plVar1 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar3);
    std::ostream::flush();
    return;
  }
  std::__throw_bad_cast();
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)std::cout,"Drawing a shape color: ",0x17);
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)std::cout,*(char **)(poVar2 + 8),*(long *)(poVar2 + 0x10));
  plVar1 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
    return;
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
  }
  std::ostream::put((char)poVar2);
  std::ostream::flush();
  return;
}



// ===== Function: draw =====

/* DWARF original prototype: void draw(Shape * this) */

void __thiscall Shape::draw(Shape *this)

{
  long *plVar1;
  ostream *poVar2;
  
  std::__ostream_insert<char,std::char_traits<char>>
            ((ostream *)std::cout,"Drawing a shape color: ",0x17);
  poVar2 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)std::cout,(this->color)._M_dataplus._M_p,
                      (this->color)._M_string_length);
  plVar1 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
  if (plVar1 == (long *)0x0) {
    std::__throw_bad_cast();
    return;
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
      (**(code **)(*plVar1 + 0x30))(plVar1,10);
    }
  }
  std::ostream::put((char)poVar2);
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



// ===== Function: memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memcpy@GLIBC_2.14 */
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



// ===== Function: _S_copy_chars =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsEPcPKcS7_@GLIBCXX_3.4.21
                        */
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



// ===== Function: _M_dispose =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv@GLIBCXX_3.4.21
                        */
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



// ===== Function: _M_insert<double> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::ostream::_M_insert<double>(double param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSo9_M_insertIdEERSoT_@GLIBCXX_3.4.9 */
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



// ===== Function: _M_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm@GLIBCXX_3.4.21
                        */
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



