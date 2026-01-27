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



// ===== Function: put =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::put(char param_1)

{
  (*(code *)PTR_put_00104000)();
  return;
}



// ===== Function: flush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ostream::flush(void)

{
  (*(code *)PTR_flush_00104008)();
  return;
}



// ===== Function: memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00104010)();
  return pvVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104018)();
  return;
}



// ===== Function: widen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

{
  (*(code *)PTR_widen_00104020)();
  return;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00104028)();
  return poVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00104030)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00104038)();
  return;
}



// ===== Function: _M_create =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(ulong *param_1,ulong param_2)

{
  (*_DAT_00104040)();
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

/* WARNING: Removing unreachable block (ram,0x00101113) */
/* WARNING: Removing unreachable block (ram,0x0010111f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101154) */
/* WARNING: Removing unreachable block (ram,0x00101160) */

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
  anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_11
  *paVar1;
  ScrollView myView;
  ScrollView local_60;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> local_38;
  
  local_38._M_dataplus._M_p = (pointer)&local_38.field_2;
  std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::
  _M_construct<const_char_*>(&local_38,"Hello World","");
  paVar1 = &local_60.content.field_2;
                    /* try { // try from 001011fc to 00101205 has its CatchHandler @ 0010124c */
  local_60.content._M_dataplus._M_p = (pointer)paVar1;
  std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::
  _M_construct<char_*>
            (&local_60.content,local_38._M_dataplus._M_p,
             local_38._M_dataplus._M_p + local_38._M_string_length);
  local_60.accessCount = 0;
  if ((anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_11
       *)local_38._M_dataplus._M_p != &local_38.field_2) {
    operator_delete(local_38._M_dataplus._M_p);
  }
                    /* try { // try from 0010121d to 00101230 has its CatchHandler @ 0010125b */
  ScrollView::display(&local_60);
  ScrollView::display(&local_60);
  if ((anon_union_16_2_edb7204a_for_basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_11
       *)local_60.content._M_dataplus._M_p != paVar1) {
    operator_delete(local_60.content._M_dataplus._M_p);
  }
  return 0;
}



// ===== Function: display =====

/* DWARF original prototype: void display(ScrollView * this) */

void __thiscall ScrollView::display(ScrollView *this)

{
  undefined *this_00;
  ostream *poVar1;
  
  this_00 = PTR_cout_00103fc8;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)PTR_cout_00103fc8,"Content: ",9);
  poVar1 = std::__ostream_insert<char,std::char_traits<char>>
                     ((ostream *)this_00,(this->content)._M_dataplus._M_p,
                      (this->content)._M_string_length);
  std::ios::widen((char)*(undefined8 *)(*(long *)poVar1 + -0x18) + (char)poVar1);
  std::ostream::put((char)poVar1);
  std::ostream::flush();
  this->accessCount = this->accessCount + 1;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)this_00,"Viewed ",7);
  poVar1 = (ostream *)std::ostream::operator<<((ostream *)this_00,this->accessCount);
  std::__ostream_insert<char,std::char_traits<char>>(poVar1," times.",7);
  std::ios::widen((char)*(undefined8 *)(*(long *)poVar1 + -0x18) + (char)poVar1);
  std::ostream::put((char)poVar1);
  std::ostream::flush();
  return;
}



// ===== Function: _M_construct<char_*> =====

/* DWARF original name: _M_construct<char *>
   DWARF original prototype: void
   _M_construct<char_*>(basic_string<char,_std::char_traits<char>,_std::allocator<char>_> * this,
   char * __beg, char * __end, forward_iterator_tag param_4) */

void __thiscall
std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::
_M_construct<char_*>
          (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *this,char *__beg,
          long __end)

{
  pointer __dest;
  ulong __n;
  size_type __dnew;
  size_type local_28;
  
  __n = __end - (long)__beg;
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (this->_M_dataplus)._M_p;
  }
  else {
    __dest = (pointer)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_28);
    (this->_M_dataplus)._M_p = __dest;
    (this->field_2)._M_allocated_capacity = local_28;
  }
  if (__n != 0) {
    if (__n == 1) {
      *__dest = *__beg;
    }
    else {
      memcpy(__dest,__beg,__n);
    }
  }
  this->_M_string_length = local_28;
  (this->_M_dataplus)._M_p[local_28] = '\0';
  return;
}



// ===== Function: _M_construct<const_char_*> =====

/* DWARF original name: _M_construct<const char *>
   DWARF original prototype: void
   _M_construct<const_char_*>(basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *
   this, char * __beg, char * __end, forward_iterator_tag param_4) */

void __thiscall
std::__cxx11::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>::
_M_construct<const_char_*>
          (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *this,char *__beg,
          long __end)

{
  pointer __dest;
  ulong __n;
  size_type __dnew;
  size_type local_28;
  
  __n = __end - (long)__beg;
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (this->_M_dataplus)._M_p;
  }
  else {
    __dest = (pointer)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_28);
    (this->_M_dataplus)._M_p = __dest;
    (this->field_2)._M_allocated_capacity = local_28;
  }
  if (__n != 0) {
    if (__n == 1) {
      *__dest = *__beg;
    }
    else {
      memcpy(__dest,__beg,__n);
    }
  }
  this->_M_string_length = local_28;
  (this->_M_dataplus)._M_p[local_28] = '\0';
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



// ===== Function: widen =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios::widen(char param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc@GLIBCXX_3.4 */
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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

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



