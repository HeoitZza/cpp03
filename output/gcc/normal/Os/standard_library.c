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
  (*(code *)PTR_00103f90)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fd8)();
  return;
}



// ===== Function: __throw_length_error =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00103f98)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103fa0)();
  return;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103fa8)();
  return pvVar1;
}



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fb0)();
  return;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00103fb8)();
  return poVar1;
}



// ===== Function: memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00103fc0)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00103fc8)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00103fd0)();
  return;
}



// ===== Function: main =====

/* WARNING: Unknown calling convention */

int main(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  pointer piVar5;
  uint *puVar6;
  ostream *poVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  uint *__x;
  ulong uVar12;
  long in_FS_OFFSET;
  uint local_4c;
  vector<int,_std::allocator<int>_> v;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  __x = &local_4c;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start =
       (pointer)0x0;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish =
       (pointer)0x0;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_end_of_storage
       = (pointer)0x0;
  local_4c = 0x1e;
                    /* try { // try from 00101189 to 00101253 has its CatchHandler @ 00101273 */
  std::vector<int,_std::allocator<int>_>::push_back
            ((vector<int,_std::allocator<int>_> *)&v.super__Vector_base<int,_std::allocator<int>_>,
             (value_type *)__x);
  local_4c = 10;
  std::vector<int,_std::allocator<int>_>::push_back
            ((vector<int,_std::allocator<int>_> *)&v.super__Vector_base<int,_std::allocator<int>_>,
             (value_type *)__x);
  local_4c = 0x14;
  std::vector<int,_std::allocator<int>_>::push_back
            ((vector<int,_std::allocator<int>_> *)&v.super__Vector_base<int,_std::allocator<int>_>,
             (value_type *)__x);
  puVar11 = (uint *)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                    _M_finish;
  piVar5 = v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start;
  lVar9 = (long)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                _M_finish -
          (long)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                _M_start;
  uVar12 = lVar9 >> 2;
  if (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start !=
      v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish) {
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
              (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
               _M_start,v.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                        super__Vector_impl_data._M_finish,lVar4 * 2);
    if (lVar9 < 0x41) {
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar5);
      __x = puVar11;
    }
    else {
      puVar6 = (uint *)(piVar5 + 0x10);
      __x = puVar6;
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar5);
      for (; puVar11 != puVar6; puVar6 = puVar6 + 1) {
        uVar1 = *puVar6;
        puVar8 = puVar6;
        while( true ) {
          uVar2 = puVar8[-1];
          __x = (uint *)(ulong)uVar2;
          if ((int)uVar2 <= (int)uVar1) break;
          *puVar8 = uVar2;
          puVar8 = puVar8 + -1;
        }
        *puVar8 = uVar1;
      }
    }
  }
  for (uVar10 = 0; uVar10 != uVar12; uVar10 = uVar10 + 1) {
    poVar7 = (ostream *)std::ostream::operator<<((ostream *)std::cout,piVar5[uVar10]);
    __x = (uint *)&DAT_0010201e;
    std::__ostream_insert<char,std::char_traits<char>>(poVar7," ",1);
  }
  std::_Vector_base<int,_std::allocator<int>_>::~_Vector_base
            (&v.super__Vector_base<int,_std::allocator<int>_>,(int)__x);
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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

/* WARNING: Removing unreachable block (ram,0x001012f3) */
/* WARNING: Removing unreachable block (ram,0x001012ff) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101334) */
/* WARNING: Removing unreachable block (ram,0x00101340) */

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



// ===== Function: __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __adjust_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, long
   int, int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
               (long __first,long __holeIndex,ulong __len,int __value)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = __holeIndex;
  while (lVar3 < (long)(__len - 1) / 2) {
    lVar4 = lVar3 + 1;
    lVar5 = lVar4 * 2 + -1;
    if (*(int *)(__first + -4 + lVar4 * 8) <= *(int *)(__first + lVar4 * 8)) {
      lVar5 = lVar4 * 2;
    }
    *(undefined4 *)(__first + lVar3 * 4) = *(undefined4 *)(__first + lVar5 * 4);
    lVar3 = lVar5;
  }
  lVar4 = lVar3;
  if (((__len & 1) == 0) && (lVar3 == (long)(__len - 2) / 2)) {
    lVar4 = lVar3 * 2 + 1;
    *(undefined4 *)(__first + lVar3 * 4) = *(undefined4 *)(__first + lVar4 * 4);
  }
  while( true ) {
    lVar3 = (lVar4 + -1) / 2;
    piVar1 = (int *)(__first + lVar4 * 4);
    if ((lVar4 <= __holeIndex) || (iVar2 = *(int *)(__first + lVar3 * 4), __value <= iVar2)) break;
    *piVar1 = iVar2;
    lVar4 = lVar3;
  }
  *piVar1 = __value;
  return;
}



// ===== Function: __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __insertion_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  int iVar1;
  int *piVar2;
  size_t __n;
  int *piVar3;
  
  if (__first != __last) {
    for (piVar3 = __first + 1; __last != piVar3; piVar3 = piVar3 + 1) {
      iVar1 = *piVar3;
      piVar2 = piVar3;
      if (iVar1 < *__first) {
        __n = (long)piVar3 - (long)__first;
        if ((long)__n < 5) {
          if (__n == 4) {
            *piVar3 = *__first;
          }
        }
        else {
          memmove((void *)((4 - __n) + (long)piVar3),__first,__n);
        }
        *__first = iVar1;
      }
      else {
        for (; iVar1 < piVar2[-1]; piVar2 = piVar2 + -1) {
          *piVar2 = piVar2[-1];
        }
        *piVar2 = iVar1;
      }
    }
    return;
  }
  return;
}



// ===== Function: __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __introsort_loop<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, long
   int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last,long __depth_limit)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  
  piVar9 = __first + 1;
  do {
    lVar5 = (long)__last - (long)__first;
    if (lVar5 < 0x41) {
      return;
    }
    if (__depth_limit == 0) {
      for (lVar10 = (lVar5 >> 2) + -2 >> 1;
          __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
                    (__first,lVar10,lVar5 >> 2,__first[lVar10]), lVar10 != 0; lVar10 = lVar10 + -1)
      {
      }
      while (piVar9 = __last + -1, 4 < (long)__last - (long)__first) {
        iVar1 = *piVar9;
        *piVar9 = *__first;
        __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
                  (__first,0,(long)piVar9 - (long)__first >> 2,iVar1);
        __last = piVar9;
      }
      return;
    }
    iVar1 = __first[1];
    iVar2 = __last[-1];
    iVar3 = *__first;
    iVar4 = __first[lVar5 >> 3];
    piVar6 = __last;
    piVar7 = piVar9;
    if (iVar1 < iVar4) {
      if (iVar4 < iVar2) {
LAB_00101575:
        *__first = iVar4;
        __first[lVar5 >> 3] = iVar3;
      }
      else {
        if (iVar2 <= iVar1) goto LAB_00101560;
LAB_0010156e:
        *__first = iVar2;
        __last[-1] = iVar3;
      }
    }
    else {
      if (iVar2 <= iVar1) {
        if (iVar4 < iVar2) goto LAB_0010156e;
        goto LAB_00101575;
      }
LAB_00101560:
      *__first = iVar1;
      __first[1] = iVar3;
    }
    while( true ) {
      do {
        piVar8 = piVar7;
        iVar1 = *piVar8;
        piVar7 = piVar8 + 1;
      } while (iVar1 < *__first);
      do {
        piVar6 = piVar6 + -1;
      } while (*__first < *piVar6);
      if (piVar6 <= piVar8) break;
      *piVar8 = *piVar6;
      *piVar6 = iVar1;
      piVar7 = piVar8 + 1;
    }
    __depth_limit = __depth_limit + -1;
    __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
              (piVar8,__last,__depth_limit);
    __last = piVar8;
  } while( true );
}



// ===== Function: ~_Vector_base =====

/* DWARF original prototype: void ~_Vector_base(_Vector_base<int,_std::allocator<int>_> * this, int
   __in_chrg) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::~_Vector_base
          (_Vector_base<int,_std::allocator<int>_> *this,int __in_chrg)

{
  pointer piVar1;
  
  piVar1 = (this->_M_impl).super__Vector_impl_data._M_start;
  if (piVar1 != (pointer)0x0) {
    operator_delete(piVar1);
    return;
  }
  return;
}



// ===== Function: _M_realloc_insert =====

/* DWARF original prototype: void _M_realloc_insert(vector<int,_std::allocator<int>_> * this,
   iterator __position, int * __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::_M_realloc_insert
          (vector<int,_std::allocator<int>_> *this,iterator __position,int *__x)

{
  int *piVar1;
  int *__src;
  ulong uVar2;
  pointer __dest;
  ulong uVar3;
  long lVar4;
  int *extraout_RDX;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  char *pcVar8;
  int *piVar9;
  byte bVar10;
  
  bVar10 = 0;
  uVar3 = 0x1fffffffffffffff;
  piVar9 = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish;
  __src = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
          _M_start;
  uVar5 = (long)piVar9 - (long)__src >> 2;
  if (uVar5 == 0x1fffffffffffffff) {
    pcVar8 = s_vector___M_realloc_insert_00102004;
    std::__throw_length_error(s_vector___M_realloc_insert_00102004);
    __x = extraout_RDX;
    this = (vector<int,_std::allocator<int>_> *)pcVar8;
  }
  uVar2 = 1;
  if (piVar9 != __src) {
    uVar2 = uVar5;
  }
  uVar6 = uVar5 + uVar2;
  __n = (long)__position._M_current - (long)__src;
  if (!CARRY8(uVar5,uVar2)) {
    __dest = (pointer)0x0;
    uVar3 = uVar6;
    if (uVar6 == 0) goto LAB_00101683;
    if (0x1fffffffffffffff < uVar6) {
      uVar3 = 0x1fffffffffffffff;
    }
  }
  __dest = (pointer)operator_new(uVar3 * 4);
LAB_00101683:
  piVar1 = (int *)((long)__dest + __n);
  *piVar1 = *__x;
  if ((long)__n < 5) {
    if (__n == 4) {
      *__dest = *__src;
    }
  }
  else {
    memmove(__dest,__src,__n);
  }
  lVar7 = (long)piVar9 - (long)__position._M_current;
  lVar4 = lVar7;
  piVar9 = piVar1 + 1;
  if (lVar7 < 5) {
    if (lVar7 == 4) {
      piVar1[1] = *__position._M_current;
    }
  }
  else {
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(char *)piVar9 = (char)*__position._M_current;
      __position._M_current = __position._M_current + (ulong)bVar10 * -2 + 1;
      piVar9 = (int *)((long)piVar9 + (ulong)bVar10 * -2 + 1);
    }
  }
  if (__src != (int *)0x0) {
    operator_delete(__src);
  }
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_start =
       __dest;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish =
       (pointer)(lVar7 + (long)(piVar1 + 1));
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_end_of_storage = __dest + uVar3;
  return;
}



// ===== Function: push_back =====

/* DWARF original prototype: void push_back(vector<int,_std::allocator<int>_> * this, value_type *
   __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::push_back
          (vector<int,_std::allocator<int>_> *this,value_type *__x)

{
  iterator __position;
  
  __position._M_current =
       (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
       _M_finish;
  if (__position._M_current !=
      (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
      _M_end_of_storage) {
    *__position._M_current = *__x;
    (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish
         = __position._M_current + 1;
    return;
  }
  _M_realloc_insert(this,__position,__x);
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: __throw_length_error =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt20__throw_length_errorPKc@GLIBCXX_3.4 */
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



// ===== Function: ios_base_library_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios_base_library_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt21ios_base_library_initv@GLIBCXX_3.4.32 */
  halt_baddata();
}



// ===== Function: memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* memmove@GLIBC_2.2.5 */
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



