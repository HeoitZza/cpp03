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
  (*(code *)PTR_00103f88)();
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
  (*(code *)PTR___throw_length_error_00103f90)();
  return;
}



// ===== Function: memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00103f98)();
  return pvVar1;
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

/* WARNING: Removing unreachable block (ram,0x001011a3) */
/* WARNING: Removing unreachable block (ram,0x001011af) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x001011e4) */
/* WARNING: Removing unreachable block (ram,0x001011f0) */

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
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  pointer piVar7;
  pointer piVar8;
  int *piVar9;
  ostream *poVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  value_type local_4c;
  vector<int,_std::allocator<int>_> v;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start =
       (pointer)0x0;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish =
       (pointer)0x0;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_end_of_storage
       = (pointer)0x0;
  local_4c = 0x1e;
                    /* try { // try from 00101296 to 00101388 has its CatchHandler @ 001013ba */
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_4c);
  local_4c = 10;
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_4c);
  local_4c = 0x14;
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_4c);
  piVar8 = v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish
  ;
  piVar7 = v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start;
  if (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start ==
      v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish) {
    if (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start ==
        (pointer)0x0) goto LAB_00101398;
  }
  else {
    lVar11 = (long)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                   _M_finish -
             (long)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                   _M_start;
    uVar14 = lVar11 >> 2;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
              (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
               _M_start,v.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                        super__Vector_impl_data._M_finish,lVar4 * 2);
    if (lVar11 < 0x41) {
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar7,piVar8);
    }
    else {
      piVar12 = piVar7 + 0x10;
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar7,piVar12);
      for (; piVar8 != piVar12; piVar12 = piVar12 + 1) {
        iVar1 = *piVar12;
        iVar2 = piVar12[-1];
        piVar9 = piVar12 + -1;
        piVar6 = piVar12;
        while (piVar5 = piVar9, iVar1 < iVar2) {
          piVar5[1] = iVar2;
          piVar9 = piVar5 + -1;
          piVar6 = piVar5;
          iVar2 = piVar5[-1];
        }
        *piVar6 = iVar1;
      }
    }
    uVar13 = 0;
    do {
      poVar10 = (ostream *)std::ostream::operator<<((ostream *)std::cout,piVar7[uVar13]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar10," ",1);
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  operator_delete(piVar7);
LAB_00101398:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
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
  ulong uVar3;
  ulong uVar4;
  vector<int,_std::allocator<int>_> *unaff_RBX;
  pointer unaff_R13;
  size_t sVar5;
  int *unaff_R15;
  undefined1 uVar6;
  ulong local_48;
  
  piVar1 = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish;
  __src = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
          _M_start;
  uVar2 = (long)piVar1 - (long)__src >> 2;
  uVar6 = uVar2 == 0x1fffffffffffffff;
  if ((bool)uVar6) {
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  else {
    uVar4 = 1;
    if (piVar1 != __src) {
      uVar4 = uVar2;
    }
    uVar3 = uVar2 + uVar4;
    if (CARRY8(uVar2,uVar4)) {
      sVar5 = (long)__position._M_current - (long)__src;
      local_48 = 0x1fffffffffffffff;
LAB_001014ab:
      unaff_R13 = (pointer)operator_new(local_48 * 4);
    }
    else {
      local_48 = 0x1fffffffffffffff;
      if (uVar3 < 0x2000000000000000) {
        local_48 = uVar3;
      }
      sVar5 = (long)__position._M_current - (long)__src;
      unaff_R13 = (pointer)0x0;
      if (uVar3 != 0) goto LAB_001014ab;
    }
    unaff_R15 = (int *)((long)unaff_R13 + sVar5);
    *unaff_R15 = *__x;
    uVar6 = sVar5 == 4;
    unaff_RBX = this;
    if (4 < (long)sVar5) {
      memmove(unaff_R13,__src,sVar5);
      goto LAB_001014e3;
    }
  }
  if ((bool)uVar6) {
    *unaff_R13 = *__src;
  }
LAB_001014e3:
  sVar5 = (long)piVar1 - (long)__position._M_current;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      unaff_R15[1] = *__position._M_current;
    }
  }
  else {
    memcpy(unaff_R15 + 1,__position._M_current,sVar5);
  }
  if (__src != (int *)0x0) {
    operator_delete(__src);
  }
  (unaff_RBX->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_start = unaff_R13;
  (unaff_RBX->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_finish = (pointer)((long)(unaff_R15 + 1) + sVar5);
  (unaff_RBX->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_end_of_storage = unaff_R13 + local_48;
  return;
}



// ===== Function: push_back =====

/* DWARF original prototype: void push_back(vector<int,_std::allocator<int>_> * this, value_type *
   __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::push_back
          (vector<int,_std::allocator<int>_> *this,value_type *__x)

{
  pointer *ppiVar1;
  iterator __position;
  
  __position._M_current =
       (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
       _M_finish;
  if (__position._M_current !=
      (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
      _M_end_of_storage) {
    *__position._M_current = *__x;
    ppiVar1 = &(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data
               ._M_finish;
    *ppiVar1 = *ppiVar1 + 1;
    return;
  }
  _M_realloc_insert(this,__position,__x);
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
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  
  if (__first == __last) {
    return;
  }
  for (piVar6 = __first + 1; __last != piVar6; piVar6 = piVar6 + 1) {
    iVar1 = *piVar6;
    if (iVar1 < *__first) {
      __n = (long)piVar6 - (long)__first;
      if ((long)__n < 5) {
        if (__n == 4) {
          *piVar6 = *__first;
        }
      }
      else {
        memmove((void *)((4 - __n) + (long)piVar6),__first,__n);
      }
      *__first = iVar1;
    }
    else {
      iVar2 = piVar6[-1];
      piVar5 = piVar6 + -1;
      piVar4 = piVar6;
      while (piVar3 = piVar5, iVar1 < iVar2) {
        piVar3[1] = iVar2;
        piVar5 = piVar3 + -1;
        piVar4 = piVar3;
        iVar2 = piVar3[-1];
      }
      *piVar4 = iVar1;
    }
  }
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
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)(__len - 1) / 2;
  lVar4 = __holeIndex;
  if (__holeIndex < lVar5) {
    do {
      lVar1 = lVar4 * 2 + 2;
      lVar3 = lVar4 * 2 + 1;
      if (*(int *)(__first + -4 + lVar1 * 4) <= *(int *)(__first + lVar1 * 4)) {
        lVar3 = lVar1;
      }
      *(undefined4 *)(__first + lVar4 * 4) = *(undefined4 *)(__first + lVar3 * 4);
      lVar4 = lVar3;
    } while (lVar3 < lVar5);
    if ((__len & 1) == 0) goto LAB_00101650;
  }
  else {
    lVar3 = __holeIndex;
    if ((__len & 1) != 0) goto LAB_001016b8;
LAB_00101650:
    lVar3 = lVar4;
    if ((long)(__len - 2) / 2 == lVar4) {
      lVar3 = lVar4 * 2 + 1;
      *(undefined4 *)(__first + lVar4 * 4) = *(undefined4 *)(__first + lVar3 * 4);
    }
  }
  lVar4 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  while (__holeIndex < lVar3) {
    lVar5 = lVar4 >> 1;
    iVar2 = *(int *)(__first + lVar5 * 4);
    if (__value <= iVar2) break;
    *(int *)(__first + lVar3 * 4) = iVar2;
    lVar4 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    lVar3 = lVar5;
  }
LAB_001016b8:
  *(int *)(__first + lVar3 * 4) = __value;
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
  int *piVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  lVar4 = (long)__last - (long)__first;
  if (lVar4 < 0x41) {
    return;
  }
  piVar7 = __last;
  if (__depth_limit != 0) {
    do {
      __depth_limit = __depth_limit + -1;
      piVar3 = __first + ((lVar4 >> 2) - (lVar4 >> 0x3f) >> 1);
      __last = __first + 1;
      iVar1 = __first[1];
      iVar2 = *piVar3;
      piVar6 = piVar7;
      if (iVar1 < iVar2) {
        iVar5 = piVar7[-1];
        if (iVar2 < iVar5) {
          iVar1 = *__first;
          *__first = iVar2;
          *piVar3 = iVar1;
        }
        else if (iVar1 < iVar5) {
          iVar1 = *__first;
          *__first = iVar5;
          piVar7[-1] = iVar1;
        }
        else {
          iVar2 = *__first;
          *__first = iVar1;
          __first[1] = iVar2;
        }
      }
      else {
        iVar5 = piVar7[-1];
        if (iVar1 < iVar5) {
          iVar2 = *__first;
          *__first = iVar1;
          __first[1] = iVar2;
        }
        else if (iVar2 < iVar5) {
          iVar1 = *__first;
          *__first = iVar5;
          piVar7[-1] = iVar1;
        }
        else {
          iVar1 = *__first;
          *__first = iVar2;
          *piVar3 = iVar1;
        }
      }
      while( true ) {
        iVar2 = *__first;
        iVar1 = *__last;
        while (iVar1 < iVar2) {
          __last = __last + 1;
          iVar1 = *__last;
        }
        iVar5 = piVar6[-1];
        if (iVar2 < iVar5) {
          piVar3 = piVar6 + -2;
          do {
            piVar6 = piVar3;
            iVar5 = *piVar6;
            piVar3 = piVar6 + -1;
          } while (iVar2 < iVar5);
        }
        else {
          piVar6 = piVar6 + -1;
        }
        if (piVar6 <= __last) break;
        *__last = iVar5;
        *piVar6 = iVar1;
        __last = __last + 1;
      }
      __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__last,piVar7,__depth_limit);
      lVar4 = (long)__last - (long)__first;
      if (lVar4 < 0x41) {
        return;
      }
      piVar7 = __last;
    } while (__depth_limit != 0);
  }
  for (lVar8 = ((lVar4 >> 2) + -2) / 2;
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__first,lVar8,lVar4 >> 2,__first[lVar8]), lVar8 != 0; lVar8 = lVar8 + -1) {
  }
  lVar4 = (long)__last - (long)__first;
  while (4 < lVar4) {
    __last = __last + -1;
    iVar1 = *__last;
    *__last = *__first;
    lVar4 = (long)__last - (long)__first;
    __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
              (__first,0,lVar4 >> 2,iVar1);
  }
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



