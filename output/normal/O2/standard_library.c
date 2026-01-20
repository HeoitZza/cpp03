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



// ===== Function: main.cold =====

void main_cold(void)

{
  long in_FS_OFFSET;
  void *in_stack_00000010;
  long in_stack_00000028;
  
  if (in_stack_00000010 != (void *)0x0) {
    operator_delete(in_stack_00000010);
  }
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  long lVar1;
  long lVar2;
  pointer piVar3;
  pointer piVar4;
  int *piVar5;
  ostream *poVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  value_type local_4c;
  vector<int,_std::allocator<int>_> v;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_end_of_storage
       = (pointer)0x0;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start =
       (pointer)0x0;
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish =
       (pointer)0x0;
  local_4c = 0x1e;
                    /* try { // try from 001011da to 00101273 has its CatchHandler @ 00101307 */
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_4c);
  local_4c = 10;
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_4c);
  local_4c = 0x14;
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_4c);
  piVar4 = v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish
  ;
  piVar3 = v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start;
  if (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start ==
      v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish) {
    if (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start ==
        (pointer)0x0) goto LAB_0010128c;
  }
  else {
    lVar9 = (long)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                  _M_finish -
            (long)v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
                  _M_start;
    uVar14 = lVar9 >> 2;
    lVar2 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
              (v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
               _M_start,v.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                        super__Vector_impl_data._M_finish,lVar2 * 2);
    if (lVar9 < 0x41) {
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar3,piVar4);
    }
    else {
      piVar11 = piVar3 + 0x10;
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar3,piVar11);
      if (piVar4 != piVar11) {
        iVar7 = *piVar11;
        iVar8 = piVar3[0xf];
        piVar5 = piVar3 + 0xf;
        piVar12 = piVar11;
        piVar13 = piVar11;
        if (iVar8 <= iVar7) goto LAB_001012e1;
        do {
          do {
            piVar13 = piVar5;
            piVar13[1] = iVar8;
            iVar8 = piVar13[-1];
            piVar5 = piVar13 + -1;
            piVar12 = piVar11;
          } while (iVar7 < iVar8);
LAB_001012e1:
          do {
            piVar11 = piVar12 + 1;
            *piVar13 = iVar7;
            if (piVar4 == piVar11) goto LAB_00101244;
            iVar7 = *piVar11;
            iVar8 = *piVar12;
            piVar5 = piVar12;
            piVar12 = piVar11;
            piVar13 = piVar11;
          } while (iVar8 <= iVar7);
        } while( true );
      }
    }
LAB_00101244:
    uVar10 = 0;
    do {
      poVar6 = (ostream *)std::ostream::operator<<((ostream *)std::cout,piVar3[uVar10]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar14);
  }
  operator_delete(piVar3);
LAB_0010128c:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
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

/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

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
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long __topIndex;
  
  lVar8 = (long)(__len - 1) / 2;
  lVar5 = __holeIndex;
  if (__holeIndex < lVar8) {
    do {
      lVar3 = (lVar5 + 1) * 2;
      piVar6 = (int *)(__first + (lVar5 + 1) * 8);
      lVar1 = lVar3 + -1;
      iVar4 = *piVar6;
      piVar7 = (int *)(__first + lVar1 * 4);
      iVar2 = *piVar7;
      if (iVar4 < iVar2) {
        lVar3 = lVar1;
        piVar6 = piVar7;
        iVar4 = iVar2;
      }
      *(int *)(__first + lVar5 * 4) = iVar4;
      lVar5 = lVar3;
    } while (lVar3 < lVar8);
    piVar7 = piVar6;
    if ((__len & 1) == 0) goto LAB_001014e8;
  }
  else {
    piVar6 = (int *)(__first + __holeIndex * 4);
    lVar3 = __holeIndex;
    piVar7 = piVar6;
    if ((__len & 1) != 0) goto LAB_001014c9;
LAB_001014e8:
    piVar6 = piVar7;
    if ((long)(__len - 2) / 2 == lVar3) {
      lVar3 = lVar3 * 2 + 1;
      piVar6 = (int *)(__first + lVar3 * 4);
      *piVar7 = *piVar6;
    }
  }
  lVar5 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  if (__holeIndex < lVar3) {
    while( true ) {
      lVar8 = lVar5 >> 1;
      piVar7 = (int *)(__first + lVar8 * 4);
      piVar6 = (int *)(__first + lVar3 * 4);
      iVar4 = *piVar7;
      if (__value <= iVar4) break;
      *piVar6 = iVar4;
      lVar5 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      lVar3 = lVar8;
      if (lVar8 <= __holeIndex) {
        *piVar7 = __value;
        return;
      }
    }
  }
LAB_001014c9:
  *piVar6 = __value;
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
  size_t __n;
  int *piVar4;
  
  if (__first == __last) {
    return;
  }
  piVar4 = __first + 1;
  do {
    if (__last == piVar4) {
      return;
    }
    while( true ) {
      iVar1 = *piVar4;
      if (iVar1 < *__first) break;
      iVar2 = piVar4[-1];
      piVar3 = piVar4;
      while (iVar1 < iVar2) {
        *piVar3 = iVar2;
        iVar2 = piVar3[-2];
        piVar3 = piVar3 + -1;
      }
      piVar4 = piVar4 + 1;
      *piVar3 = iVar1;
      if (piVar4 == __last) {
        return;
      }
    }
    __n = (long)piVar4 - (long)__first;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar4 = *__first;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar4),__first,__n);
    }
    piVar4 = piVar4 + 1;
    *__first = iVar1;
  } while( true );
}



// ===== Function: __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __introsort_loop<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, long
   int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
               (ulong *__first,uint *__last,long __depth_limit)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  
  lVar3 = (long)__last - (long)__first;
  if (lVar3 < 0x41) {
    return;
  }
  puVar6 = __last;
  if (__depth_limit != 0) {
    do {
      uVar4 = *__first;
      uVar1 = puVar6[-1];
      __depth_limit = __depth_limit + -1;
      puVar5 = (uint *)((long)__first + (lVar3 >> 3) * 4);
      uVar2 = *puVar5;
      uVar9 = (uint)uVar4;
      iVar10 = (int)(uVar4 >> 0x20);
      uVar4 = uVar4 & 0xffffffff;
      if (iVar10 < (int)uVar2) {
        if ((int)uVar2 < (int)uVar1) {
LAB_00101723:
          *(uint *)__first = uVar2;
          *puVar5 = uVar9;
          uVar4 = (ulong)*(uint *)((long)__first + 4);
          iVar10 = (int)*__first;
          uVar9 = puVar6[-1];
        }
        else {
          if ((int)uVar1 <= iVar10) goto LAB_00101652;
LAB_0010170f:
          *(uint *)__first = uVar1;
          puVar6[-1] = uVar9;
          iVar10 = (int)*__first;
          uVar4 = (ulong)*(uint *)((long)__first + 4);
        }
      }
      else {
        if ((int)uVar1 <= iVar10) {
          if ((int)uVar2 < (int)uVar1) goto LAB_0010170f;
          goto LAB_00101723;
        }
LAB_00101652:
        *__first = CONCAT44(uVar9,iVar10);
        uVar9 = puVar6[-1];
      }
      __last = (uint *)((long)__first + 4);
      puVar5 = puVar6;
      if (iVar10 <= (int)uVar4) goto LAB_001016bc;
LAB_00101670:
      do {
        __last = __last + 1;
        uVar4 = (ulong)*__last;
      } while ((int)*__last < iVar10);
      if ((int)uVar9 <= iVar10) goto LAB_001016c8;
      while( true ) {
        puVar7 = puVar5 + -2;
        do {
          puVar5 = puVar7;
          uVar9 = *puVar5;
          puVar7 = puVar5 + -1;
        } while (iVar10 < (int)uVar9);
        puVar7 = __last;
        if (puVar5 <= __last) break;
        while( true ) {
          *puVar7 = uVar9;
          __last = puVar7 + 1;
          uVar9 = puVar5[-1];
          *puVar5 = (uint)uVar4;
          iVar10 = (int)*__first;
          uVar4 = (ulong)puVar7[1];
          if ((int)puVar7[1] < iVar10) goto LAB_00101670;
LAB_001016bc:
          if (iVar10 < (int)uVar9) break;
LAB_001016c8:
          puVar5 = puVar5 + -1;
          puVar7 = __last;
          if (puVar5 <= __last) goto LAB_001016d8;
        }
      }
LAB_001016d8:
      __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__last,puVar6,__depth_limit);
      lVar3 = (long)__last - (long)__first;
      if (lVar3 < 0x41) {
        return;
      }
      puVar6 = __last;
    } while (__depth_limit != 0);
  }
  for (lVar8 = (lVar3 >> 2) + -2 >> 1;
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__first,lVar8,lVar3 >> 2,*(undefined4 *)((long)__first + lVar8 * 4)), lVar8 != 0;
      lVar8 = lVar8 + -1) {
  }
  do {
    __last = __last + -1;
    uVar1 = *__last;
    *__last = (uint)*__first;
    __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
              (__first,0,(long)__last - (long)__first >> 2,uVar1);
  } while (4 < (long)__last - (long)__first);
  return;
}



// ===== Function: _M_realloc_insert =====

/* DWARF original prototype: void _M_realloc_insert(vector<int,_std::allocator<int>_> * this,
   iterator __position, int * __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::_M_realloc_insert
          (vector<int,_std::allocator<int>_> *this,iterator __position,int *__x)

{
  int *__dest;
  int *piVar1;
  pointer piVar2;
  pointer __src;
  iterator __position_00;
  ulong uVar3;
  int *__dest_00;
  size_t __n;
  pointer piVar4;
  ulong uVar5;
  char *this_00;
  size_t __n_00;
  int *piVar6;
  
  piVar2 = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish;
  __src = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
          _M_start;
  uVar3 = (long)piVar2 - (long)__src >> 2;
  if (uVar3 == 0x1fffffffffffffff) {
    this_00 = "vector::_M_realloc_insert";
    std::__throw_length_error("vector::_M_realloc_insert");
    __position_00._M_current =
         (((vector<int,_std::allocator<int>_> *)this_00)->
         super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish;
    if (__position_00._M_current ==
        (((vector<int,_std::allocator<int>_> *)this_00)->
        super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
        _M_end_of_storage) {
      _M_realloc_insert((vector<int,_std::allocator<int>_> *)this_00,__position_00,
                        __position._M_current);
      return;
    }
    *__position_00._M_current = *__position._M_current;
    (((vector<int,_std::allocator<int>_> *)this_00)->super__Vector_base<int,_std::allocator<int>_>).
    _M_impl.super__Vector_impl_data._M_finish = __position_00._M_current + 1;
    return;
  }
  __n = (long)__position._M_current - (long)__src;
  if (__src == piVar2) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00101890;
    uVar5 = 0x1fffffffffffffff;
    if (uVar3 + 1 < 0x2000000000000000) {
      uVar5 = uVar3 + 1;
    }
    uVar5 = uVar5 << 2;
LAB_0010189a:
    __dest_00 = (int *)operator_new(uVar5);
    piVar4 = (pointer)(uVar5 + (long)__dest_00);
  }
  else {
    uVar5 = uVar3 * 2;
    if (uVar5 < uVar3) {
LAB_00101890:
      uVar5 = 0x7ffffffffffffffc;
      goto LAB_0010189a;
    }
    if (uVar5 != 0) {
      if (0x1fffffffffffffff < uVar5) {
        uVar5 = 0x1fffffffffffffff;
      }
      uVar5 = uVar5 * 4;
      goto LAB_0010189a;
    }
    piVar4 = (pointer)0x0;
    __dest_00 = (int *)0x0;
  }
  piVar1 = (int *)((long)__dest_00 + __n);
  __n_00 = (long)piVar2 - (long)__position._M_current;
  __dest = piVar1 + 1;
  *piVar1 = *__x;
  if ((long)__n < 5) {
    if (__n == 4) {
      *__dest_00 = *__src;
      if (4 < (long)__n_00) goto LAB_0010185b;
      piVar6 = (int *)((long)__dest + __n_00);
      if (__n_00 == 4) {
        piVar6 = __dest_00 + 3;
        piVar1[1] = *__position._M_current;
      }
    }
    else {
      if ((long)__n_00 < 5) {
        if (__n_00 == 4) {
          __n_00 = 4;
          piVar1[1] = *__position._M_current;
        }
      }
      else {
        memcpy(__dest,__position._M_current,__n_00);
      }
      piVar6 = (int *)((long)__dest + __n_00);
      if (__src == (pointer)0x0) goto LAB_00101874;
    }
  }
  else {
    memmove(__dest_00,__src,__n);
    if ((long)__n_00 < 5) {
      piVar6 = (int *)((long)__dest + __n_00);
      if (__n_00 == 4) {
        piVar6 = piVar1 + 2;
        piVar1[1] = *__position._M_current;
      }
    }
    else {
LAB_0010185b:
      piVar6 = (int *)((long)__dest + __n_00);
      memcpy(__dest,__position._M_current,__n_00);
    }
  }
  operator_delete(__src);
LAB_00101874:
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_start =
       __dest_00;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish =
       piVar6;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_end_of_storage = piVar4;
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



