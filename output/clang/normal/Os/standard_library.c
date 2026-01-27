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



// ===== Function: __throw_bad_alloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00104000)();
  return;
}



// ===== Function: __throw_length_error =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00104008)();
  return;
}



// ===== Function: __throw_bad_array_new_length =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00104010)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104018)();
  return;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104020)();
  return pvVar1;
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



// ===== Function: memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00104030)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00104038)();
  return;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

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
  long lVar1;
  undefined *this;
  pointer piVar2;
  ulong uVar3;
  ostream *poVar4;
  pointer piVar5;
  vector<int,_std::allocator<int>_> v;
  value_type local_3c;
  vector<int,_std::allocator<int>_> local_38;
  
  local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_start =
       (int *)0x0;
  local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish =
       (int *)0x0;
  local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
  _M_end_of_storage = (int *)0x0;
  local_3c = 0x1e;
                    /* try { // try from 001011e5 to 001011eb has its CatchHandler @ 00101307 */
  std::vector<int,_std::allocator<int>_>::_M_realloc_insert(&local_38,(iterator)0x0,&local_3c);
  local_3c = 10;
  if (local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
      _M_finish ==
      local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
      _M_end_of_storage) {
                    /* try { // try from 00101214 to 00101222 has its CatchHandler @ 00101305 */
    std::vector<int,_std::allocator<int>_>::_M_realloc_insert
              (&local_38,
               (iterator)
               local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
               super__Vector_impl_data._M_end_of_storage,&local_3c);
  }
  else {
    *local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
     _M_finish = 10;
    local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish
         = local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
           _M_finish + 1;
  }
  local_3c = 0x14;
  if (local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
      _M_finish ==
      local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
      _M_end_of_storage) {
                    /* try { // try from 0010124b to 00101259 has its CatchHandler @ 00101303 */
    std::vector<int,_std::allocator<int>_>::_M_realloc_insert
              (&local_38,
               (iterator)
               local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
               super__Vector_impl_data._M_end_of_storage,&local_3c);
  }
  else {
    *local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
     _M_finish = 0x14;
    local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_finish
         = local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
           _M_finish + 1;
  }
  piVar5 = local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
           _M_finish;
  piVar2 = local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
           _M_start;
  if (local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
      _M_start !=
      local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
      _M_finish) {
    uVar3 = (long)local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                  super__Vector_impl_data._M_finish -
            (long)local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                  super__Vector_impl_data._M_start >> 2;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
                    /* try { // try from 00101280 to 00101295 has its CatchHandler @ 00101309 */
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
              (local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
               super__Vector_impl_data._M_start,
               local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
               super__Vector_impl_data._M_finish,((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e);
    std::
    __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (piVar2,piVar5);
    this = PTR_cout_00103fc8;
    piVar5 = local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
             _M_start;
    if (local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
        _M_finish !=
        local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
        _M_start) {
      uVar3 = 0;
      do {
                    /* try { // try from 001012b7 to 001012ce has its CatchHandler @ 0010130b */
        poVar4 = (ostream *)
                 std::ostream::operator<<
                           ((ostream *)this,
                            local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                            super__Vector_impl_data._M_start[uVar3]);
        std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
        uVar3 = uVar3 + 1;
        piVar5 = local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                 super__Vector_impl_data._M_start;
      } while (uVar3 < (ulong)((long)local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                                     super__Vector_impl_data._M_finish -
                               (long)local_38.super__Vector_base<int,_std::allocator<int>_>._M_impl.
                                     super__Vector_impl_data._M_start >> 2));
    }
  }
  if (piVar5 != (int *)0x0) {
    operator_delete(piVar5);
  }
  return 0;
}



// ===== Function: _M_realloc_insert =====

/* DWARF original prototype: void _M_realloc_insert(vector<int,_std::allocator<int>_> * this,
   iterator __position, value_type * __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::_M_realloc_insert
          (vector<int,_std::allocator<int>_> *this,iterator __position,value_type *__x)

{
  int *__src;
  pointer piVar1;
  size_type __n;
  int *__dest;
  size_t sVar2;
  int *__dest_00;
  
  __n = _M_check_len(this,1,"vector::_M_realloc_insert");
  __src = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
          _M_start;
  piVar1 = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish;
  sVar2 = (long)__position._M_current - (long)__src;
  if (__n == 0) {
    __dest = (int *)0x0;
  }
  else {
    __dest = __new_allocator<int>::allocate((__new_allocator<int> *)this,__n,(void *)0x0);
  }
  __dest[(long)sVar2 >> 2] = *__x;
  if ((long)sVar2 < 5) {
    if (sVar2 == 4) {
      *__dest = *__src;
    }
  }
  else {
    memmove(__dest,__src,sVar2);
  }
  __dest_00 = (int *)((long)__dest + sVar2 + 4);
  sVar2 = (long)piVar1 - (long)__position._M_current;
  if ((long)sVar2 < 5) {
    if (sVar2 == 4) {
      *__dest_00 = *__position._M_current;
    }
  }
  else {
    memmove(__dest_00,__position._M_current,sVar2);
  }
  if (__src != (int *)0x0) {
    operator_delete(__src);
  }
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_start =
       __dest;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish =
       (pointer)((long)__dest_00 + sVar2);
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_end_of_storage = __dest + __n;
  return;
}



// ===== Function: _M_check_len =====

/* DWARF original prototype: size_type _M_check_len(vector<int,_std::allocator<int>_> * this,
   size_type __n, char * __s) */

size_type __thiscall
std::vector<int,_std::allocator<int>_>::_M_check_len
          (vector<int,_std::allocator<int>_> *this,size_type __n,char *__s)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  size_type extraout_RAX;
  size_type extraout_RAX_00;
  size_type sVar7;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var8;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last;
  ulong uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  _Iter_less_iter _Stack_4a;
  _Iter_less_iter _Stack_49;
  int *piStack_48;
  
  uVar9 = (long)(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                super__Vector_impl_data._M_finish -
          (long)(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                super__Vector_impl_data._M_start >> 2;
  if (__n <= 0x1fffffffffffffff - uVar9) {
    if (__n < uVar9) {
      __n = uVar9;
    }
    uVar3 = __n + uVar9;
    if (0x1ffffffffffffffe < uVar3) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (CARRY8(__n,uVar9)) {
      uVar3 = 0x1fffffffffffffff;
    }
    return uVar3;
  }
  std::__throw_length_error(__s);
  if (__n >> 0x3d != 0) {
    __last._M_current = (int *)(__n >> 0x3e);
    if (__last._M_current != (int *)0x0) {
      std::__throw_bad_array_new_length();
    }
    auVar13 = std::__throw_bad_alloc();
    lVar11 = auVar13._8_8_;
    sVar7 = auVar13._0_8_;
    uVar9 = (long)__last._M_current - (long)__s >> 2;
    if (0x10 < (long)uVar9) {
      piStack_48 = (int *)((long)__s + 4);
      do {
        piVar5 = piStack_48;
        bVar12 = lVar11 == 0;
        lVar11 = lVar11 + -1;
        if (bVar12) {
          __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                    ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__s,__last,
                     &_Stack_49);
          __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                    ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__s,__last,
                     &_Stack_4a);
          return extraout_RAX_00;
        }
        __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                  (__s,piStack_48,(long)__s + (uVar9 & 0xfffffffffffffffe) * 2,
                   __last._M_current + -1);
        _Var8._M_current = __last._M_current;
        while( true ) {
          lVar10 = (long)piVar5 + (-4 - (long)__s);
          do {
            piVar6 = piVar5;
            iVar2 = *piVar6;
            piVar5 = piVar6 + 1;
            lVar10 = lVar10 + 4;
          } while (iVar2 < *(int *)__s);
          do {
            piVar1 = _Var8._M_current + -1;
            _Var8._M_current = _Var8._M_current + -1;
          } while (*(int *)__s < *piVar1);
          if (_Var8._M_current <= piVar6) break;
          *piVar6 = *piVar1;
          *_Var8._M_current = iVar2;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
                  (piVar6,__last._M_current,lVar11);
        uVar9 = lVar10 >> 2;
        sVar7 = extraout_RAX;
        __last._M_current = piVar6;
      } while (0x10 < (long)uVar9);
    }
    return sVar7;
  }
  pvVar4 = operator_new(__n << 2);
  return (size_type)pvVar4;
}



// ===== Function: allocate =====

/* DWARF original prototype: int * allocate(__new_allocator<int> * this, size_type __n, void *
   param_2) */

int * __thiscall
std::__new_allocator<int>::allocate(__new_allocator<int> *this,size_type __n,void *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *extraout_RAX;
  int *extraout_RAX_00;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var5;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last;
  ulong uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  _Iter_less_iter _Stack_42;
  _Iter_less_iter _Stack_41;
  int *piStack_40;
  
  if (__n >> 0x3d == 0) {
    piVar3 = (int *)operator_new(__n << 2);
    return piVar3;
  }
  __last._M_current = (int *)(__n >> 0x3e);
  if (__last._M_current != (int *)0x0) {
    std::__throw_bad_array_new_length();
  }
  auVar10 = std::__throw_bad_alloc();
  lVar8 = auVar10._8_8_;
  piVar3 = auVar10._0_8_;
  uVar6 = (long)__last._M_current - (long)this >> 2;
  if (0x10 < (long)uVar6) {
    piStack_40 = (int *)((long)this + 4);
    do {
      piVar3 = piStack_40;
      bVar9 = lVar8 == 0;
      lVar8 = lVar8 + -1;
      if (bVar9) {
        __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                  ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)this,__last,
                   &_Stack_41);
        __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                  ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)this,__last,
                   &_Stack_42);
        return extraout_RAX_00;
      }
      __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (this,piStack_40,(long)this + (uVar6 & 0xfffffffffffffffe) * 2,
                 __last._M_current + -1);
      _Var5._M_current = __last._M_current;
      while( true ) {
        lVar7 = (long)piVar3 + (-4 - (long)this);
        do {
          piVar4 = piVar3;
          iVar2 = *piVar4;
          piVar3 = piVar4 + 1;
          lVar7 = lVar7 + 4;
        } while (iVar2 < *(int *)this);
        do {
          piVar1 = _Var5._M_current + -1;
          _Var5._M_current = _Var5._M_current + -1;
        } while (*(int *)this < *piVar1);
        if (_Var5._M_current <= piVar4) break;
        *piVar4 = *piVar1;
        *_Var5._M_current = iVar2;
      }
      __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar4,__last._M_current,lVar8);
      uVar6 = lVar7 >> 2;
      piVar3 = extraout_RAX;
      __last._M_current = piVar4;
    } while (0x10 < (long)uVar6);
  }
  return piVar3;
}



// ===== Function: __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __introsort_loop<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, long, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
               long __depth_limit)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  _Iter_less_iter local_3a;
  _Iter_less_iter local_39;
  int *local_38;
  
  uVar6 = (long)__last._M_current - (long)__first._M_current >> 2;
  if (0x10 < (long)uVar6) {
    local_38 = __first._M_current + 1;
    do {
      piVar3 = local_38;
      bVar8 = __depth_limit == 0;
      __depth_limit = __depth_limit + -1;
      if (bVar8) {
        __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                  (__first,__last,&local_39);
        __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                  (__first,__last,&local_3a);
        return;
      }
      __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (__first._M_current,local_38,
                 (long)__first._M_current + (uVar6 & 0xfffffffffffffffe) * 2,__last._M_current + -1)
      ;
      _Var5._M_current = __last._M_current;
      while( true ) {
        lVar7 = (long)piVar3 + (-4 - (long)__first._M_current);
        do {
          piVar4 = piVar3;
          iVar2 = *piVar4;
          piVar3 = piVar4 + 1;
          lVar7 = lVar7 + 4;
        } while (iVar2 < *__first._M_current);
        do {
          piVar1 = _Var5._M_current + -1;
          _Var5._M_current = _Var5._M_current + -1;
        } while (*__first._M_current < *piVar1);
        if (_Var5._M_current <= piVar4) break;
        *piVar4 = *piVar1;
        *_Var5._M_current = iVar2;
      }
      __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
                (piVar4,__last._M_current,__depth_limit);
      uVar6 = lVar7 >> 2;
      __last._M_current = piVar4;
    } while (0x10 < (long)uVar6);
  }
  return;
}



// ===== Function: __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __final_insertion_sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (long __first,int *__last)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __i;
  int *piVar5;
  
  if (0x40 < (long)__last - __first) {
    piVar5 = (int *)(__first + 0x40);
    __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__first,piVar5);
    for (; piVar5 != __last; piVar5 = piVar5 + 1) {
      iVar3 = *piVar5;
      iVar2 = piVar5[-1];
      piVar4 = piVar5;
      while (iVar3 < iVar2) {
        *piVar4 = iVar2;
        piVar1 = piVar4 + -2;
        piVar4 = piVar4 + -1;
        iVar2 = *piVar1;
      }
      *piVar4 = iVar3;
    }
    return;
  }
  __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first,__last);
  return;
}



// ===== Function: __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __sort_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
               _Iter_less_iter *__comp)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  lVar3 = (long)__last._M_current - (long)__first._M_current;
  if (4 < lVar3) {
    piVar2 = __last._M_current + -1;
    do {
      iVar1 = *piVar2;
      *piVar2 = *__first._M_current;
      lVar3 = lVar3 + -4;
      __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__first._M_current,0,lVar3 >> 2,iVar1);
      piVar2 = piVar2 + -1;
    } while (4 < lVar3);
  }
  return;
}



// ===== Function: __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __make_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
               _Iter_less_iter *__comp)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  lVar1 = (long)__last._M_current - (long)__first._M_current >> 2;
  if (1 < lVar1) {
    uVar2 = lVar1 - 2U >> 1;
    do {
      __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__first._M_current,uVar2,lVar1,__first._M_current[uVar2]);
      bVar3 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar3);
  }
  return;
}



// ===== Function: __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __adjust_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, long, int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter>
               (long __first,long __holeIndex,ulong __len,int __value)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long __secondChild;
  long lVar4;
  
  lVar4 = (long)((__len - ((long)(__len - 1) >> 0x3f)) + -1) >> 1;
  lVar2 = __holeIndex;
  lVar3 = __holeIndex;
  if (__holeIndex < lVar4) {
    do {
      if (*(int *)(__first + 8 + lVar3 * 8) < *(int *)(__first + 4 + lVar3 * 8)) {
        lVar2 = lVar3 * 2 + 1;
      }
      else {
        lVar2 = lVar3 * 2 + 2;
      }
      *(undefined4 *)(__first + lVar3 * 4) = *(undefined4 *)(__first + lVar2 * 4);
      lVar3 = lVar2;
    } while (lVar2 < lVar4);
  }
  if (((__len & 1) == 0) && (lVar2 == (long)(__len - 2) >> 1)) {
    *(undefined4 *)(__first + lVar2 * 4) = *(undefined4 *)(__first + 4 + lVar2 * 8);
    lVar2 = lVar2 * 2 + 1;
  }
  while (__holeIndex < lVar2) {
    lVar3 = (lVar2 - (lVar2 + -1 >> 0x3f)) + -1 >> 1;
    iVar1 = *(int *)(__first + lVar3 * 4);
    if (__value <= iVar1) break;
    *(int *)(__first + lVar2 * 4) = iVar1;
    lVar2 = lVar3;
  }
  *(int *)(__first + lVar2 * 4) = __value;
  return;
}



// ===== Function: __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __move_median_to_first<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__result,int *__a,int *__b,int *__c)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *__a;
  iVar2 = *__b;
  iVar3 = *__c;
  if (iVar2 <= iVar1) {
    if (iVar1 < iVar3) {
      iVar2 = *__result;
      *__result = iVar1;
      *__a = iVar2;
      return;
    }
    iVar1 = *__result;
    if (iVar2 < iVar3) {
      *__result = iVar3;
      *__c = iVar1;
      return;
    }
    *__result = iVar2;
    *__b = iVar1;
    return;
  }
  if (iVar2 < iVar3) {
    iVar1 = *__result;
    *__result = iVar2;
    *__b = iVar1;
    return;
  }
  iVar2 = *__result;
  if (iVar1 < iVar3) {
    *__result = iVar3;
    *__c = iVar2;
    return;
  }
  *__result = iVar1;
  *__a = iVar2;
  return;
}



// ===== Function: __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __insertion_sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  value_type __val;
  
  if (__first != __last) {
    piVar5 = __first + 1;
    piVar1 = __first;
    while (piVar4 = piVar5, piVar4 != __last) {
      iVar2 = piVar1[1];
      if (iVar2 < *__first) {
        __n = (long)piVar4 - (long)__first;
        piVar5 = __first;
        if ((long)__n >> 2 < 2) {
          if (__n == 4) {
            piVar1[1] = *__first;
          }
        }
        else {
          memmove(piVar1 + (2 - ((long)__n >> 2)),__first,__n);
        }
      }
      else {
        iVar3 = *piVar1;
        piVar5 = piVar4;
        while (iVar2 < iVar3) {
          *piVar5 = iVar3;
          piVar1 = piVar5 + -2;
          piVar5 = piVar5 + -1;
          iVar3 = *piVar1;
        }
      }
      *piVar5 = iVar2;
      piVar1 = piVar4;
      piVar5 = piVar4 + 1;
    }
  }
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
}



// ===== Function: __throw_bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt17__throw_bad_allocv@GLIBCXX_3.4 */
  halt_baddata();
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



// ===== Function: __throw_bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* _ZSt28__throw_bad_array_new_lengthv@GLIBCXX_3.4.29 */
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



