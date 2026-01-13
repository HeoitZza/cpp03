// ===== Function: _init =====

int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00105ff0;
  if (PTR___gmon_start___00105ff0 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00105ff0)();
  }
  return (int)puVar1;
}



// ===== Function: FUN_00101020 =====

void FUN_00101020(void)

{
  (*(code *)PTR_00105f68)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fd8)();
  return;
}



// ===== Function: __throw_bad_alloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00105f70)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00105f78)();
  return;
}



// ===== Function: __throw_length_error =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00105f80)();
  return;
}



// ===== Function: __throw_bad_array_new_length =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00105f88)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00105f90)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00105f98)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00105fa0)();
  return pvVar1;
}



// ===== Function: __stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105fa8)();
  return;
}



// ===== Function: __cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00105fb0)();
  return;
}



// ===== Function: memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00105fb8)();
  return pvVar1;
}



// ===== Function: __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00105fc0)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00105fc8)();
  return;
}



// ===== Function: _Unwind_Resume =====

void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00105fd0)();
  return;
}



// ===== Function: _start =====

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fe0)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: deregister_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101223) */
/* WARNING: Removing unreachable block (ram,0x0010122f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101264) */
/* WARNING: Removing unreachable block (ram,0x00101270) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
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
  iterator __last;
  iterator __first;
  reference piVar2;
  ostream *poVar3;
  size_type sVar4;
  int __in_chrg;
  long in_FS_OFFSET;
  value_type local_44;
  size_t i;
  vector<int,_std::allocator<int>_> v;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<int,_std::allocator<int>_>::vector(&v);
  local_44 = 0x1e;
                    /* try { // try from 00101306 to 001013a9 has its CatchHandler @ 001013ea */
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_44);
  local_44 = 10;
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_44);
  local_44 = 0x14;
  std::vector<int,_std::allocator<int>_>::push_back(&v,&local_44);
  __last = std::vector<int,_std::allocator<int>_>::end(&v);
  __first = std::vector<int,_std::allocator<int>_>::begin(&v);
  std::sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
            ((__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)__first._M_current,
             (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)__last._M_current);
  i = 0;
  while( true ) {
    __in_chrg = (int)__last._M_current;
    sVar4 = std::vector<int,_std::allocator<int>_>::size(&v);
    if (sVar4 <= i) break;
    piVar2 = std::vector<int,_std::allocator<int>_>::operator[](&v,i);
    poVar3 = (ostream *)std::ostream::operator<<((ostream *)std::cout,*piVar2);
    __last._M_current = (int *)&DAT_00104004;
    std::operator<<(poVar3," ");
    i = i + 1;
  }
  std::vector<int,_std::allocator<int>_>::~vector(&v,__in_chrg);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: operator_new =====

/* DWARF original name: operator new */

void * operator_new(size_t param_1,void *__p)

{
  void *__p_local;
  size_t param_0_local;
  
  return __p;
}



// ===== Function: __iter_less_iter =====

/* WARNING: Unknown calling convention */

void __gnu_cxx::__ops::__iter_less_iter(void)

{
  return;
}



// ===== Function: _Iter_less_val =====

/* DWARF original prototype: void _Iter_less_val(_Iter_less_val * this, _Iter_less_iter param_1) */

void __thiscall __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(void)

{
  _Iter_less_val *this_local;
  
  return;
}



// ===== Function: _Val_less_iter =====

/* DWARF original prototype: void _Val_less_iter(_Val_less_iter * this) */

void __thiscall __gnu_cxx::__ops::_Val_less_iter::_Val_less_iter(_Val_less_iter *this)

{
  _Val_less_iter *this_local;
  
  return;
}



// ===== Function: __val_comp_iter =====

void __gnu_cxx::__ops::__val_comp_iter(void)

{
  long in_FS_OFFSET;
  _Val_less_iter local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Val_less_iter::_Val_less_iter(&local_11);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: vector =====

/* DWARF original prototype: void vector(vector<int,_std::allocator<int>_> * this) */

void __thiscall
std::vector<int,_std::allocator<int>_>::vector(vector<int,_std::allocator<int>_> *this)

{
  vector<int,_std::allocator<int>_> *this_local;
  
  _Vector_base<int,_std::allocator<int>_>::_Vector_base
            (&this->super__Vector_base<int,_std::allocator<int>_>);
  return;
}



// ===== Function: ~vector =====

/* DWARF original prototype: void ~vector(vector<int,_std::allocator<int>_> * this, int __in_chrg)
    */

void __thiscall
std::vector<int,_std::allocator<int>_>::~vector
          (vector<int,_std::allocator<int>_> *this,int __in_chrg)

{
  int *__last;
  vector<int,_std::allocator<int>_> *this_local;
  
  _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
            (&this->super__Vector_base<int,_std::allocator<int>_>);
  __last = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish;
                    /* try { // try from 0010150c to 00101510 has its CatchHandler @ 00101520 */
  _Destroy<int*>((this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                 super__Vector_impl_data._M_start,__last);
  _Vector_base<int,_std::allocator<int>_>::~_Vector_base
            (&this->super__Vector_base<int,_std::allocator<int>_>,(int)__last);
  return;
}



// ===== Function: push_back =====

/* DWARF original prototype: void push_back(vector<int,_std::allocator<int>_> * this, value_type *
   __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::push_back
          (vector<int,_std::allocator<int>_> *this,value_type *__x)

{
  value_type *pvVar1;
  iterator __position;
  value_type *__x_local;
  vector<int,_std::allocator<int>_> *this_local;
  
  if ((this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
      _M_finish ==
      (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
      _M_end_of_storage) {
    __position = end(this);
    _M_realloc_insert(this,__position,__x);
  }
  else {
    pvVar1 = (value_type *)
             operator_new(4,(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                            super__Vector_impl_data._M_finish);
    *pvVar1 = *__x;
    (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish
         = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish + 1;
  }
  return;
}



// ===== Function: begin =====

/* DWARF original prototype: iterator begin(vector<int,_std::allocator<int>_> * this) */

iterator __thiscall
std::vector<int,_std::allocator<int>_>::begin(vector<int,_std::allocator<int>_> *this)

{
  long in_FS_OFFSET;
  vector<int,_std::allocator<int>_> *this_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::__normal_iterator
            (&local_18,(int **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (iterator)local_18._M_current;
}



// ===== Function: end =====

/* DWARF original prototype: iterator end(vector<int,_std::allocator<int>_> * this) */

iterator __thiscall
std::vector<int,_std::allocator<int>_>::end(vector<int,_std::allocator<int>_> *this)

{
  long in_FS_OFFSET;
  vector<int,_std::allocator<int>_> *this_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::__normal_iterator
            (&local_18,
             &(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
              _M_finish);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (iterator)local_18._M_current;
}



// ===== Function: sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: sort<__gnu_cxx::__normal_iterator<int*, std::vector<int> > > */

void std::sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __gnu_cxx::__ops::__iter_less_iter();
  __sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first._M_current,__last._M_current);
  return;
}



// ===== Function: size =====

/* DWARF original prototype: size_type size(vector<int,_std::allocator<int>_> * this) */

size_type __thiscall
std::vector<int,_std::allocator<int>_>::size(vector<int,_std::allocator<int>_> *this)

{
  vector<int,_std::allocator<int>_> *this_local;
  
  return (long)(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data
               ._M_finish -
         (long)(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data
               ._M_start >> 2;
}



// ===== Function: operator[] =====

/* DWARF original prototype: reference operator[](vector<int,_std::allocator<int>_> * this,
   size_type __n) */

reference __thiscall
std::vector<int,_std::allocator<int>_>::operator[]
          (vector<int,_std::allocator<int>_> *this,size_type __n)

{
  size_type __n_local;
  vector<int,_std::allocator<int>_> *this_local;
  
  return (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
         _M_start + __n;
}



// ===== Function: ~_Vector_impl =====

/* DWARF original prototype: void ~_Vector_impl(_Vector_impl * this, int __in_chrg) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_impl::~_Vector_impl
          (_Vector_impl *this,int __in_chrg)

{
  _Vector_impl *this_local;
  
  __new_allocator<int>::~__new_allocator((__new_allocator<int> *)this,__in_chrg);
  return;
}



// ===== Function: _Vector_base =====

/* DWARF original prototype: void _Vector_base(_Vector_base<int,_std::allocator<int>_> * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_base
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  _Vector_impl::_Vector_impl(&this->_M_impl);
  return;
}



// ===== Function: ~_Vector_base =====

/* DWARF original prototype: void ~_Vector_base(_Vector_base<int,_std::allocator<int>_> * this, int
   __in_chrg) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::~_Vector_base
          (_Vector_base<int,_std::allocator<int>_> *this,int __in_chrg)

{
  pointer __p;
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  __p = (this->_M_impl).super__Vector_impl_data._M_start;
                    /* try { // try from 00101796 to 0010179a has its CatchHandler @ 001017a9 */
  _M_deallocate(this,__p,(long)(this->_M_impl).super__Vector_impl_data._M_end_of_storage -
                         (long)(this->_M_impl).super__Vector_impl_data._M_start >> 2);
  _Vector_impl::~_Vector_impl(&this->_M_impl,(int)__p);
  return;
}



// ===== Function: _M_get_Tp_allocator =====

/* DWARF original prototype: _Tp_alloc_type *
   _M_get_Tp_allocator(_Vector_base<int,_std::allocator<int>_> * this) */

_Tp_alloc_type * __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  return (_Tp_alloc_type *)this;
}



// ===== Function: _M_realloc_insert =====

/* DWARF original prototype: void _M_realloc_insert(vector<int,_std::allocator<int>_> * this,
   iterator __position, int * __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::_M_realloc_insert
          (vector<int,_std::allocator<int>_> *this,iterator __position,int *__x)

{
  int *piVar1;
  _Tp_alloc_type *p_Var2;
  int **ppiVar3;
  long in_FS_OFFSET;
  int *__x_local;
  iterator __position_local;
  vector<int,_std::allocator<int>_> *this_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_d8;
  pointer __new_finish;
  size_type __len;
  pointer __old_start;
  pointer __old_finish;
  size_type __elems_before;
  pointer __new_start;
  vector<int,_std::allocator<int>_> *local_a0;
  pointer local_98;
  int *local_90;
  vector<int,_std::allocator<int>_> *local_88;
  pointer local_80;
  int *local_78;
  pointer local_70;
  pointer local_68;
  _Tp_alloc_type *local_60;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __position_local = __position;
  __len = _M_check_len(this,1,"vector::_M_realloc_insert");
  __old_start = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                super__Vector_impl_data._M_start;
  __old_finish = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                 super__Vector_impl_data._M_finish;
  local_d8._M_current = (int *)begin(this);
  __elems_before = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__position_local,&local_d8);
  __new_finish = _Vector_base<int,_std::allocator<int>_>::_M_allocate
                           (&this->super__Vector_base<int,_std::allocator<int>_>,__len);
  local_98 = __new_finish + __elems_before;
  __new_start = __new_finish;
  local_a0 = this;
  local_90 = __x;
  local_88 = this;
  local_80 = local_98;
  local_78 = __x;
  piVar1 = (int *)operator_new(4,local_98);
  *piVar1 = *local_78;
  __new_finish = (pointer)0x0;
  p_Var2 = _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                     (&this->super__Vector_base<int,_std::allocator<int>_>);
  ppiVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base
                      (&__position_local);
                    /* try { // try from 00101978 to 001019c8 has its CatchHandler @ 00101a9c */
  piVar1 = __uninitialized_move_if_noexcept_a<int*,_int*,_std::allocator<int>_>
                     (__old_start,*ppiVar3,__new_start,p_Var2);
  __new_finish = piVar1 + 1;
  p_Var2 = _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                     (&this->super__Vector_base<int,_std::allocator<int>_>);
  ppiVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base
                      (&__position_local);
  __new_finish = __uninitialized_move_if_noexcept_a<int*,_int*,_std::allocator<int>_>
                           (*ppiVar3,__old_finish,__new_finish,p_Var2);
  local_60 = _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                       (&this->super__Vector_base<int,_std::allocator<int>_>);
  local_70 = __old_start;
  local_68 = __old_finish;
  _Destroy<int*>(__old_start,__old_finish);
  _Vector_base<int,_std::allocator<int>_>::_M_deallocate
            (&this->super__Vector_base<int,_std::allocator<int>_>,__old_start,
             (long)(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                   super__Vector_impl_data._M_end_of_storage - (long)__old_start >> 2);
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_start =
       __new_start;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish =
       __new_finish;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_end_of_storage = __new_start + __len;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: __normal_iterator =====

/* DWARF original prototype: void
   __normal_iterator(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this, int *
   * __i) */

void __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::__normal_iterator
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this,int **__i)

{
  int **__i_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  this->_M_current = *__i;
  return;
}



// ===== Function: __sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __sort<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  bool bVar1;
  difference_type __n;
  long lVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __last_local._M_current = __last;
  __first_local._M_current = __first;
  bVar1 = __gnu_cxx::operator!=<int*,_std::vector<int>_>(&__first_local,&__last_local);
  if (bVar1) {
    __n = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
    lVar2 = __lg<long_int>(__n);
    __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
              (__first_local._M_current,__last_local._M_current,lVar2 * 2);
    __final_insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__first_local._M_current,__last_local._M_current);
  }
  return;
}



// ===== Function: _Vector_impl =====

/* DWARF original prototype: void _Vector_impl(_Vector_impl * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  _Vector_impl *this_local;
  
  _Vector_impl_data::_Vector_impl_data(&this->super__Vector_impl_data);
  return;
}



// ===== Function: _M_deallocate =====

/* DWARF original prototype: void _M_deallocate(_Vector_base<int,_std::allocator<int>_> * this,
   pointer __p, size_t __n) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_deallocate
          (_Vector_base<int,_std::allocator<int>_> *this,pointer __p,size_t __n)

{
  size_t __n_local;
  pointer __p_local;
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  if (__p != (pointer)0x0) {
    __new_allocator<int>::deallocate((__new_allocator<int> *)this,__p,__n);
  }
  return;
}



// ===== Function: _Destroy<int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::_Destroy<int*>(int *__first,int *__last)

{
  int *__last_local;
  int *__first_local;
  
  _Destroy_aux<true>::__destroy<int*>(__first,__last);
  return;
}



// ===== Function: _M_check_len =====

/* DWARF original prototype: size_type _M_check_len(vector<int,_std::allocator<int>_> * this,
   size_type __n, char * __s) */

size_type __thiscall
std::vector<int,_std::allocator<int>_>::_M_check_len
          (vector<int,_std::allocator<int>_> *this,size_type __n,char *__s)

{
  size_type sVar1;
  size_type sVar2;
  ulong *puVar3;
  long in_FS_OFFSET;
  char *__s_local;
  size_type __n_local;
  vector<int,_std::allocator<int>_> *this_local;
  size_type local_30;
  size_type __len;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __n_local = __n;
  this_local = this;
  sVar1 = max_size(this);
  sVar2 = size(this_local);
  if (sVar1 - sVar2 < __n_local) {
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__throw_length_error(__s);
  }
  sVar1 = size(this_local);
  local_30 = size(this_local);
  puVar3 = max<long_unsigned_int>(&local_30,&__n_local);
  __len = *puVar3 + sVar1;
  sVar1 = size(this_local);
  if ((__len < sVar1) || (sVar2 = max_size(this_local), sVar1 = __len, sVar2 < __len)) {
    sVar1 = max_size(this_local);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: operator-<int*,_std::vector<int>_> =====

/* DWARF original name: operator-<int*, std::vector<int> > */

difference_type
__gnu_cxx::operator-<int*,_std::vector<int>_>
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return (long)piVar1 - (long)*ppiVar2 >> 2;
}



// ===== Function: _M_allocate =====

/* DWARF original prototype: pointer _M_allocate(_Vector_base<int,_std::allocator<int>_> * this,
   size_t __n) */

pointer __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_allocate
          (_Vector_base<int,_std::allocator<int>_> *this,size_t __n)

{
  pointer piVar1;
  size_t __n_local;
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  if (__n == 0) {
    piVar1 = (pointer)0x0;
  }
  else {
    piVar1 = __new_allocator<int>::allocate((__new_allocator<int> *)this,__n,(void *)0x0);
  }
  return piVar1;
}



// ===== Function: base =====

/* DWARF original prototype: int * *
   base(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this) */

int ** __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  return &this->_M_current;
}



// ===== Function: __uninitialized_move_if_noexcept_a<int*,_int*,_std::allocator<int>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> > */

int * std::__uninitialized_move_if_noexcept_a<int*,_int*,_std::allocator<int>_>
                (int *__first,int *__last,int *__result,allocator<int> *__alloc)

{
  int *piVar1;
  allocator<int> *__alloc_local;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __uninitialized_copy_a<int*,_int*,_int>(__first,__last,__result,__alloc);
  return piVar1;
}



// ===== Function: operator!=<int*,_std::vector<int>_> =====

/* DWARF original name: operator!=<int*, std::vector<int> > */

bool __gnu_cxx::operator!=<int*,_std::vector<int>_>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return piVar1 != *ppiVar2;
}



// ===== Function: __lg<long_int> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __lg<long int> */

long std::__lg<long_int>(long __n)

{
  long lVar1;
  long __n_local;
  
  lVar1 = 0x3f;
  if (__n != 0) {
    for (; (ulong)__n >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (long)(int)((uint)lVar1 ^ 0x3f);
}



// ===== Function: __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __introsort_loop<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, long
   int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last,long __depth_limit)

{
  long lVar1;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  difference_type dVar3;
  long in_FS_OFFSET;
  long __depth_limit_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __cut;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __depth_limit_local = __depth_limit;
  __last_local._M_current = __last;
  __first_local._M_current = __first;
  do {
    dVar3 = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
    if (dVar3 < 0x11) {
LAB_00101fc4:
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (__depth_limit_local == 0) {
      __partial_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (__first_local._M_current,__last_local._M_current,__last_local._M_current);
      goto LAB_00101fc4;
    }
    __depth_limit_local = __depth_limit_local + -1;
    _Var2 = __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                      (__first_local._M_current,__last_local._M_current);
    __introsort_loop<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,___gnu_cxx::__ops::_Iter_less_iter>
              (_Var2._M_current,__last_local._M_current,__depth_limit_local);
    __last_local = _Var2;
  } while( true );
}



// ===== Function: __final_insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __final_insertion_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int>
   >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __final_insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  difference_type dVar1;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __last_local._M_current = __last;
  __first_local._M_current = __first;
  dVar1 = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
  if (dVar1 < 0x11) {
    __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__first_local._M_current,__last_local._M_current);
  }
  else {
    _Var2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                      (&__first_local,0x10);
    __insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__first_local._M_current,_Var2._M_current);
    _Var2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                      (&__first_local,0x10);
    __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (_Var2._M_current,__last_local._M_current);
  }
  return;
}



// ===== Function: _Vector_impl_data =====

/* DWARF original prototype: void _Vector_impl_data(_Vector_impl_data * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_impl_data::_Vector_impl_data
          (_Vector_impl_data *this)

{
  _Vector_impl_data *this_local;
  
  this->_M_start = (pointer)0x0;
  this->_M_finish = (pointer)0x0;
  this->_M_end_of_storage = (pointer)0x0;
  return;
}



// ===== Function: ~__new_allocator =====

/* DWARF original prototype: void ~__new_allocator(__new_allocator<int> * this, int __in_chrg) */

void __thiscall
std::__new_allocator<int>::~__new_allocator(__new_allocator<int> *this,int __in_chrg)

{
  __new_allocator<int> *this_local;
  
  return;
}



// ===== Function: __destroy<int*> =====

void std::_Destroy_aux<true>::__destroy<int*>(int *param_1,int *param_2)

{
  int *param_2_local;
  int *param_1_local;
  
  return;
}



// ===== Function: max_size =====

/* DWARF original prototype: size_type max_size(vector<int,_std::allocator<int>_> * this) */

size_type __thiscall
std::vector<int,_std::allocator<int>_>::max_size(vector<int,_std::allocator<int>_> *this)

{
  _Tp_alloc_type *__a;
  size_type sVar1;
  vector<int,_std::allocator<int>_> *this_local;
  
  __a = _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                  (&this->super__Vector_base<int,_std::allocator<int>_>);
  sVar1 = _S_max_size(__a);
  return sVar1;
}



// ===== Function: max<long_unsigned_int> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: max<long unsigned int> */

ulong * std::max<long_unsigned_int>(ulong *__a,ulong *__b)

{
  ulong *__b_local;
  ulong *__a_local;
  
  if (*__a < *__b) {
    __a = __b;
  }
  return __a;
}



// ===== Function: __uninitialized_copy_a<int*,_int*,_int> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __uninitialized_copy_a<int*, int*, int> */

int * std::__uninitialized_copy_a<int*,_int*,_int>
                (int *__first,int *__last,int *__result,allocator<int> *param_4)

{
  int *piVar1;
  allocator<int> *param_6_local;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = uninitialized_copy<int*,_int*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __partial_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __partial_sort<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __partial_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __middle,int *__last
               )

{
  _Iter_less_iter local_21;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __middle_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __last_local._M_current = __last;
  __heap_select<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first._M_current,__middle._M_current,__last);
  __sort_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first,__middle,&local_21);
  return;
}



// ===== Function: __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,
   std::vector<int> >, __gnu_cxx::__ops::_Iter_less_iter> */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
std::
__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
          (int *__first,int *__last)

{
  long lVar1;
  difference_type dVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var3;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var4;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var5;
  long in_FS_OFFSET;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __mid;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __last_local._M_current = __last;
  __first_local._M_current = __first;
  dVar2 = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
  _Var3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__first_local,dVar2 / 2);
  _Var4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator-
                    (&__last_local,1);
  _Var5 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__first_local,1);
  __move_median_to_first<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first_local._M_current,_Var5._M_current,_Var3._M_current,_Var4._M_current);
  _Var3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__first_local,1);
  _Var3 = __unguarded_partition<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                    (_Var3._M_current,__last_local._M_current,__first_local._M_current);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)_Var3._M_current;
}



// ===== Function: operator+ =====

/* DWARF original prototype: __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
   operator+(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this,
   difference_type __n) */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this,
          difference_type __n)

{
  long in_FS_OFFSET;
  difference_type __n_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  int *local_20;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = this->_M_current + __n;
  __normal_iterator(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)local_18._M_current;
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
  long lVar2;
  bool bVar3;
  reference piVar4;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result;
  long in_FS_OFFSET;
  _Iter_less_iter local_39;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  value_type __val;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __i;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __last_local._M_current = __last;
  __first_local._M_current = __first;
  bVar3 = __gnu_cxx::operator==<int*,_std::vector<int>_>(&__first_local,&__last_local);
  if (!bVar3) {
    __i = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__first_local,1);
    while (bVar3 = __gnu_cxx::operator!=<int*,_std::vector<int>_>(&__i,&__last_local), bVar3) {
      bVar3 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                        (&local_39,__i,__first_local);
      if (bVar3) {
        piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
                 operator*(&__i);
        iVar1 = *piVar4;
        __result = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
                   operator+(&__i,1);
        copy_backward<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                  (__first_local,__i,__result);
        piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
                 operator*(&__first_local);
        *piVar4 = iVar1;
      }
      else {
        __gnu_cxx::__ops::__val_comp_iter();
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Val_less_iter>
                  (__i._M_current);
      }
      __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator++(&__i);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int*,
   std::vector<int> >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  long lVar1;
  bool bVar2;
  long in_FS_OFFSET;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __i;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __last_local._M_current = __last;
  __i._M_current = __first;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=<int*,_std::vector<int>_>(&__i,&__last_local);
    if (!bVar2) break;
    __gnu_cxx::__ops::__val_comp_iter();
    __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Val_less_iter>
              (__i._M_current);
    __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator++(&__i);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: deallocate =====

/* DWARF original prototype: void deallocate(__new_allocator<int> * this, int * __p, size_type __n)
    */

void __thiscall
std::__new_allocator<int>::deallocate(__new_allocator<int> *this,int *__p,size_type __n)

{
  size_type __n_local;
  int *__p_local;
  __new_allocator<int> *this_local;
  
  operator_delete(__p);
  return;
}



// ===== Function: _S_max_size =====

size_type std::vector<int,_std::allocator<int>_>::_S_max_size(_Tp_alloc_type *__a)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  _Tp_alloc_type *__a_local;
  size_t __diffmax;
  size_t __allocmax;
  _Tp_alloc_type *local_28;
  _Tp_alloc_type *local_20;
  _Tp_alloc_type *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __diffmax = 0x1fffffffffffffff;
  __allocmax = 0x1fffffffffffffff;
  local_28 = __a;
  local_20 = __a;
  local_18 = __a;
  puVar1 = min<long_unsigned_int>(&__diffmax,&__allocmax);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



// ===== Function: _M_get_Tp_allocator =====

/* DWARF original prototype: _Tp_alloc_type *
   _M_get_Tp_allocator(_Vector_base<int,_std::allocator<int>_> * this) */

_Tp_alloc_type * __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  return (_Tp_alloc_type *)this;
}



// ===== Function: allocate =====

/* DWARF original prototype: int * allocate(__new_allocator<int> * this, size_type __n, void *
   param_2) */

int * __thiscall
std::__new_allocator<int>::allocate(__new_allocator<int> *this,size_type __n,void *param_2)

{
  int *piVar1;
  void *param_2_local;
  size_type __n_local;
  __new_allocator<int> *this_local;
  
  if (0x1fffffffffffffff < __n) {
    if (0x3fffffffffffffff < __n) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  piVar1 = (int *)operator_new(__n << 2);
  return piVar1;
}



// ===== Function: uninitialized_copy<int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: uninitialized_copy<int*, int*> */

int * std::uninitialized_copy<int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  bool __can_memmove;
  bool __assignable;
  
  piVar1 = __uninitialized_copy<true>::__uninit_copy<int*,_int*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __heap_select<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __heap_select<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __heap_select<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __middle,int *__last
               )

{
  long lVar1;
  bool bVar2;
  long in_FS_OFFSET;
  _Iter_less_iter local_31;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __middle_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __i;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __last_local._M_current = __last;
  __make_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first,__middle,&local_31);
  __i._M_current = __middle._M_current;
  while( true ) {
    bVar2 = __gnu_cxx::operator<_<int*,_std::vector<int>_>(&__i,&__last_local);
    if (!bVar2) break;
    bVar2 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                      (&local_31,__i,__first);
    if (bVar2) {
      __pop_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (__first,__middle,__i,&local_31);
    }
    __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator++(&__i);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: __sort_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __sort_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __sort_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last,
               _Iter_less_iter *__comp)

{
  difference_type dVar1;
  _Iter_less_iter *__comp_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __last_local._M_current = __last._M_current;
  __first_local._M_current = __first._M_current;
  while( true ) {
    dVar1 = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
    if (dVar1 < 2) break;
    __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator--
              (&__last_local);
    __pop_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__first_local,__last_local,__last_local,__comp);
  }
  return;
}



// ===== Function: operator- =====

/* DWARF original prototype: __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
   operator-(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this,
   difference_type __n) */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator-
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this,
          difference_type __n)

{
  long in_FS_OFFSET;
  difference_type __n_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  int *local_20;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = this->_M_current + -__n;
  __normal_iterator(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)local_18._M_current;
}



// ===== Function: __move_median_to_first<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __move_median_to_first<__gnu_cxx::__normal_iterator<int*, std::vector<int>
   >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __move_median_to_first<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __a,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __b,int *__c)

{
  bool bVar1;
  _Iter_less_iter local_29;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __c_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __b_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __a_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  
  __c_local._M_current = __c;
  bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
          operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                    (&local_29,__a,__b);
  if (bVar1) {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                      (&local_29,__b,__c_local);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                (__result,__b);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                        (&local_29,__a,__c_local);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                  (__result,__c_local);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                  (__result,__a);
      }
    }
  }
  else {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                      (&local_29,__a,__c_local);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                (__result,__a);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                        (&local_29,__b,__c_local);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                  (__result,__c_local);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                  (__result,__b);
      }
    }
  }
  return;
}



// ===== Function: __unguarded_partition<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_partition<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
std::
__unguarded_partition<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
          (int *__first,int *__last,int *__pivot)

{
  bool bVar1;
  _Iter_less_iter local_21;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __pivot_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __pivot_local._M_current = __pivot;
  __last_local._M_current = __last;
  __first_local._M_current = __first;
  while( true ) {
    while( true ) {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                        (&local_21,__first_local,__pivot_local);
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator++
                (&__first_local);
    }
    __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator--
              (&__last_local);
    while( true ) {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                        (&local_21,__pivot_local,__last_local);
      if (!bVar1) break;
      __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator--
                (&__last_local);
    }
    bVar1 = __gnu_cxx::operator<_<int*,_std::vector<int>_>(&__first_local,&__last_local);
    if (!bVar1) break;
    iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
              (__first_local,__last_local);
    __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator++
              (&__first_local);
  }
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)__first_local._M_current;
}



// ===== Function: operator==<int*,_std::vector<int>_> =====

/* DWARF original name: operator==<int*, std::vector<int> > */

bool __gnu_cxx::operator==<int*,_std::vector<int>_>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return piVar1 == *ppiVar2;
}



// ===== Function: operator++ =====

/* DWARF original prototype: __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *
   operator++(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this) */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator++
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  this->_M_current = this->_M_current + 1;
  return this;
}



// ===== Function: operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* DWARF original name: operator()<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int> > >
   DWARF original prototype: bool
   operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>(_Iter_less_iter
   * this, __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it1,
   __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it2) */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_iter::
operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
          (_Iter_less_iter *this,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it1,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it2)

{
  int iVar1;
  reference piVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it2_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it1_local;
  _Iter_less_iter *this_local;
  
  __it2_local = __it2;
  __it1_local = __it1;
  piVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*(&__it1_local)
  ;
  iVar1 = *piVar2;
  piVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*(&__it2_local)
  ;
  return iVar1 < *piVar2;
}



// ===== Function: operator* =====

/* DWARF original prototype: reference
   operator*(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this) */

reference __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  return this->_M_current;
}



// ===== Function: copy_backward<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: copy_backward<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int> > > */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
std::
copy_backward<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var1;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_00;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  _Var1 = __miter_base<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>(__last);
  __first_00 = __miter_base<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>(__first);
  _Var1 = __copy_move_backward_a<false,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                    (__first_00,_Var1,__result);
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)_Var1._M_current;
}



// ===== Function: __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Val_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,
   std::vector<int> >, __gnu_cxx::__ops::_Val_less_iter> */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Val_less_iter>
               (int *__last)

{
  long lVar1;
  bool bVar2;
  reference piVar3;
  reference piVar4;
  long in_FS_OFFSET;
  _Val_less_iter local_41;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  value_type __val;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __next;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __last_local._M_current = __last;
  piVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__last_local);
  __val = *piVar3;
  __next = __last_local;
  __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator--(&__next);
  while( true ) {
    bVar2 = __gnu_cxx::__ops::_Val_less_iter::
            operator()<int,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                      (&local_41,&__val,__next);
    if (!bVar2) break;
    piVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&__next);
    piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&__last_local);
    *piVar4 = *piVar3;
    __last_local = __next;
    __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator--(&__next)
    ;
  }
  piVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__last_local);
  *piVar3 = __val;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: min<long_unsigned_int> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: min<long unsigned int> */

ulong * std::min<long_unsigned_int>(ulong *__a,ulong *__b)

{
  ulong *__b_local;
  ulong *__a_local;
  
  if (*__b < *__a) {
    __a = __b;
  }
  return __a;
}



// ===== Function: __uninit_copy<int*,_int*> =====

/* DWARF original name: __uninit_copy<int*, int*> */

int * std::__uninitialized_copy<true>::__uninit_copy<int*,_int*>
                (int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = copy<int*,_int*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __make_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __make_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last,
               _Iter_less_iter *__comp)

{
  difference_type dVar1;
  reference piVar2;
  long in_FS_OFFSET;
  _Iter_less_iter *__comp_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  _ValueType __value;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_28;
  _DistanceType __parent;
  _DistanceType __len;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __last_local = __last;
  __first_local = __first;
  dVar1 = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
  if (1 < dVar1) {
    __len = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
    __parent = (__len + -2) / 2;
    while( true ) {
      local_28 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
                 operator+(&__first_local,__parent);
      piVar2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
               operator*(&local_28);
      __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__first_local._M_current,__parent,__len,*piVar2);
      if (__parent == 0) break;
      __parent = __parent + -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: operator<_<int*,_std::vector<int>_> =====

/* DWARF original name: operator< <int*, std::vector<int> > */

bool __gnu_cxx::operator<_<int*,_std::vector<int>_>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return piVar1 < *ppiVar2;
}



// ===== Function: __pop_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __comp_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __pop_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __pop_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result,
               _Iter_less_iter *__comp)

{
  int iVar1;
  reference piVar2;
  reference piVar3;
  difference_type dVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  _Iter_less_iter *__comp_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  _ValueType __value;
  
  __result_local = __result;
  __last_local = __last;
  __first_local = __first;
  piVar2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__result_local);
  iVar1 = *piVar2;
  piVar2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__first_local);
  piVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__result_local);
  *piVar3 = *piVar2;
  dVar4 = __gnu_cxx::operator-<int*,_std::vector<int>_>(&__last_local,&__first_local);
  __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
            (__first_local._M_current,0,dVar4,iVar1,in_R8,in_R9,__comp);
  return;
}



// ===== Function: operator-- =====

/* DWARF original prototype: __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *
   operator--(__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * this) */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> * __thiscall
__gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator--
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  this->_M_current = this->_M_current + -1;
  return this;
}



// ===== Function: iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: iter_swap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int> > > */

void std::
     iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __a,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __b)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __b_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __a_local;
  
  __iter_swap<true>::
  iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
            (__a,__b);
  return;
}



// ===== Function: __miter_base<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __miter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int> > > */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
std::__miter_base<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it)

{
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)__it._M_current;
}



// ===== Function: __copy_move_backward_a<false,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_backward_a<false, __gnu_cxx::__normal_iterator<int*,
   std::vector<int> >, __gnu_cxx::__normal_iterator<int*, std::vector<int> > > */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
std::
__copy_move_backward_a<false,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result)

{
  int *piVar1;
  int *__last_00;
  int *__first_00;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  piVar1 = __niter_base<int*,_std::vector<int>_>(__result);
  __last_00 = __niter_base<int*,_std::vector<int>_>(__last);
  __first_00 = __niter_base<int*,_std::vector<int>_>(__first);
  piVar1 = __copy_move_backward_a1<false,_int*,_int*>(__first_00,__last_00,piVar1);
  _Var2 = __niter_wrap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int*>(__result,piVar1)
  ;
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)_Var2._M_current;
}



// ===== Function: operator()<int,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* DWARF original name: operator()<int, __gnu_cxx::__normal_iterator<int*, std::vector<int> > >
   DWARF original prototype: bool
   operator()<int,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>(_Val_less_iter * this,
   int * __val, __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it) */

bool __thiscall
__gnu_cxx::__ops::_Val_less_iter::
operator()<int,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
          (_Val_less_iter *this,int *__val,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it)

{
  int iVar1;
  reference piVar2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  int *__val_local;
  _Val_less_iter *this_local;
  
  iVar1 = *__val;
  __it_local = __it;
  piVar2 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*(&__it_local);
  return iVar1 < *piVar2;
}



// ===== Function: copy<int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: copy<int*, int*> */

int * std::copy<int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__first_00;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __miter_base<int*>(__last);
  __first_00 = __miter_base<int*>(__first);
  piVar1 = __copy_move_a<false,_int*,_int*>(__first_00,piVar1,__result);
  return piVar1;
}



// ===== Function: __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __adjust_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, long
   int, int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,long __holeIndex,long __len,int __value)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it2;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it1;
  reference piVar4;
  reference piVar5;
  long in_FS_OFFSET;
  _Iter_less_iter local_65;
  int __value_local;
  long __len_local;
  long __holeIndex_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_40;
  _Iter_less_val __cmp;
  long __secondChild;
  long __topIndex;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __value_local = __value;
  __len_local = __len;
  __first_local._M_current = __first;
  __secondChild = __holeIndex;
  while (__holeIndex_local = __secondChild, __secondChild < (__len_local + -1) / 2) {
    lVar2 = (__secondChild + 1) * 2;
    __it2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                      (&__first_local,lVar2 + -1);
    __it1 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                      (&__first_local,lVar2);
    bVar3 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
                      (&local_65,__it1,__it2);
    __secondChild = lVar2;
    if (bVar3) {
      __secondChild = lVar2 + -1;
    }
    ___cmp = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                       (&__first_local,__secondChild);
    piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       ((__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *)&__cmp);
    local_40 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&__first_local,__holeIndex_local);
    piVar5 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_40);
    *piVar5 = *piVar4;
  }
  if (((__len_local & 1U) == 0) && (__secondChild == (__len_local + -2) / 2)) {
    lVar2 = (__secondChild + 1) * 2;
    ___cmp = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                       (&__first_local,lVar2 + -1);
    piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       ((__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> *)&__cmp);
    local_40 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&__first_local,__holeIndex_local);
    piVar5 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_40);
    *piVar5 = *piVar4;
    __holeIndex_local = lVar2 + -1;
  }
  __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(&__cmp);
  __push_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_val>
            (__first_local,__holeIndex_local,__holeIndex,__value_local,&__cmp);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_> =====

/* DWARF original name: iter_swap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >,
   __gnu_cxx::__normal_iterator<int*, std::vector<int> > > */

void std::__iter_swap<true>::
     iter_swap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,___gnu_cxx::__normal_iterator<int*,_std::vector<int>_>_>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __a,
               __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __b)

{
  reference __b_00;
  reference __a_00;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __b_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __a_local;
  
  __b_local = __b;
  __a_local = __a;
  __b_00 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__b_local);
  __a_00 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__a_local);
  swap<int>(__a_00,__b_00);
  return;
}



// ===== Function: __niter_base<int*,_std::vector<int>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __niter_base<int*, std::vector<int> > */

int * std::__niter_base<int*,_std::vector<int>_>
                (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it)

{
  int **ppiVar1;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  
  __it_local = __it;
  ppiVar1 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::base
                      (&__it_local);
  return *ppiVar1;
}



// ===== Function: __copy_move_backward_a1<false,_int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_backward_a1<false, int*, int*> */

int * std::__copy_move_backward_a1<false,_int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move_backward_a2<false,_int*,_int*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __niter_wrap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __niter_wrap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, int*> */

__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>
std::__niter_wrap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int*>
          (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __from,int *__res)

{
  int *piVar1;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  int *__res_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __from_local;
  
  __from_local = __from;
  piVar1 = __niter_base<int*,_std::vector<int>_>(__from);
  _Var2 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__from_local,(long)__res - (long)piVar1 >> 2);
  return (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>)_Var2._M_current;
}



// ===== Function: __miter_base<int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * std::__miter_base<int*>(int *__it)

{
  int *__it_local;
  
  return __it;
}



// ===== Function: __copy_move_a<false,_int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_a<false, int*, int*> */

int * std::__copy_move_a<false,_int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__last_00;
  int *__first_00;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  __result_local = __result;
  __last_local = __last;
  __first_local = __first;
  piVar1 = __niter_base<int*>(__result);
  __last_00 = __niter_base<int*>(__last_local);
  __first_00 = __niter_base<int*>(__first_local);
  piVar1 = __copy_move_a1<false,_int*,_int*>(__first_00,__last_00,piVar1);
  piVar1 = __niter_wrap<int*>(&__result_local,piVar1);
  return piVar1;
}



// ===== Function: __push_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_val> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __push_heap<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, long int,
   int, __gnu_cxx::__ops::_Iter_less_val> */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_long_int,_int,___gnu_cxx::__ops::_Iter_less_val>
               (__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first,
               long __holeIndex,long __topIndex,int __value,_Iter_less_val *__comp)

{
  bool bVar1;
  long lVar2;
  reference piVar3;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it;
  reference piVar4;
  long in_FS_OFFSET;
  _Iter_less_val *__comp_local;
  int __value_local;
  long __topIndex_local;
  long __holeIndex_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_38;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> local_30;
  long __parent;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = __holeIndex + -1;
  __value_local = __value;
  __topIndex_local = __topIndex;
  __holeIndex_local = __holeIndex;
  __first_local._M_current = __first._M_current;
  do {
    __parent = lVar2 / 2;
    if (__topIndex_local < __holeIndex_local) {
      __it = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator+
                       (&__first_local,__parent);
      bVar1 = __gnu_cxx::__ops::_Iter_less_val::
              operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int>
                        (__comp,__it,&__value_local);
      if (!bVar1) goto LAB_00103267;
      bVar1 = true;
    }
    else {
LAB_00103267:
      bVar1 = false;
    }
    if (!bVar1) {
      local_30 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
                 operator+(&__first_local,__holeIndex_local);
      piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
               operator*(&local_30);
      *piVar4 = __value_local;
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_30 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&__first_local,__parent);
    piVar4 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_30);
    local_38 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&__first_local,__holeIndex_local);
    piVar3 = __gnu_cxx::__normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_38);
    *piVar3 = *piVar4;
    __holeIndex_local = __parent;
    lVar2 = __parent + -1;
  } while( true );
}



// ===== Function: swap<int> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::swap<int>(int *__a,int *__b)

{
  int iVar1;
  int *__b_local;
  int *__a_local;
  int __tmp;
  
  iVar1 = *__a;
  *__a = *__b;
  *__b = iVar1;
  return;
}



// ===== Function: __copy_move_backward_a2<false,_int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_backward_a2<false, int*, int*> */

int * std::__copy_move_backward_a2<false,_int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move_backward<false,_true,_std::random_access_iterator_tag>::
           __copy_move_b<int,_int>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __niter_base<int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * std::__niter_base<int*>(int *__it)

{
  int *__it_local;
  
  return __it;
}



// ===== Function: __copy_move_a1<false,_int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_a1<false, int*, int*> */

int * std::__copy_move_a1<false,_int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move_a2<false,_int*,_int*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __niter_wrap<int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * std::__niter_wrap<int*>(int **param_1,int *__res)

{
  int *__res_local;
  int **param_1_local;
  
  return __res;
}



// ===== Function: operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int> =====

/* DWARF original name: operator()<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, int>
   DWARF original prototype: bool
   operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int>(_Iter_less_val * this,
   __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it, int * __val) */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_val::
operator()<__gnu_cxx::__normal_iterator<int*,_std::vector<int>_>,_int>
          (_Iter_less_val *this,
          __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it,int *__val)

{
  reference piVar1;
  int *__val_local;
  __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  _Iter_less_val *this_local;
  
  __it_local = __it;
  piVar1 = __normal_iterator<int*,_std::vector<int,_std::allocator<int>_>_>::operator*(&__it_local);
  return *piVar1 < *__val;
}



// ===== Function: __copy_move_b<int,_int> =====

/* DWARF original name: __copy_move_b<int, int> */

int * std::__copy_move_backward<false,_true,_std::random_access_iterator_tag>::
      __copy_move_b<int,_int>(int *__first,int *__last,int *__result)

{
  long lVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  ptrdiff_t _Num;
  
  lVar1 = (long)__last - (long)__first >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      __copy_move<false,_false,_std::random_access_iterator_tag>::__assign_one<int,_int>
                (__result + -1,__first);
    }
  }
  else {
    memmove(__result + -lVar1,__first,lVar1 * 4);
  }
  return __result + -lVar1;
}



// ===== Function: __copy_move_a2<false,_int*,_int*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_a2<false, int*, int*> */

int * std::__copy_move_a2<false,_int*,_int*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move<false,_true,_std::random_access_iterator_tag>::__copy_m<int,_int>
                     (__first,__last,__result);
  return piVar1;
}



// ===== Function: __assign_one<int,_int> =====

/* DWARF original name: __assign_one<int, int> */

void std::__copy_move<false,_false,_std::random_access_iterator_tag>::__assign_one<int,_int>
               (int *__to,int *__from)

{
  int *__from_local;
  int *__to_local;
  
  *__to = *__from;
  return;
}



// ===== Function: __copy_m<int,_int> =====

/* DWARF original name: __copy_m<int, int> */

int * std::__copy_move<false,_true,_std::random_access_iterator_tag>::__copy_m<int,_int>
                (int *__first,int *__last,int *__result)

{
  long lVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  ptrdiff_t _Num;
  
  lVar1 = (long)__last - (long)__first >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      __copy_move<false,_false,_std::random_access_iterator_tag>::__assign_one<int,_int>
                (__result,__first);
    }
  }
  else {
    memmove(__result,__first,lVar1 * 4);
  }
  return __result + lVar1;
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



// ===== Function: __cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_begin_catch@CXXABI_1.3 */
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



// ===== Function: __stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __stack_chk_fail@GLIBC_2.4 */
  halt_baddata();
}



// ===== Function: __cxa_rethrow =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_rethrow@CXXABI_1.3 */
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



// ===== Function: __cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* __cxa_end_catch@CXXABI_1.3 */
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



