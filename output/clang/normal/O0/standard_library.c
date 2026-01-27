// ===== Function: _init =====

int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  
  puVar1 = PTR___gmon_start___00105fd8;
  if (PTR___gmon_start___00105fd8 != (undefined *)0x0) {
    puVar1 = (undefined *)(*(code *)PTR___gmon_start___00105fd8)();
  }
  return (int)puVar1;
}



// ===== Function: FUN_00101020 =====

void FUN_00101020(void)

{
  (*(code *)PTR_00105ff8)();
  return;
}



// ===== Function: terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_00106000)();
  return;
}



// ===== Function: __throw_bad_alloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_00106008)();
  return;
}



// ===== Function: __cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_00106010)();
  return;
}



// ===== Function: __throw_length_error =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_00106018)();
  return;
}



// ===== Function: __throw_bad_array_new_length =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

{
  (*(code *)PTR___throw_bad_array_new_length_00106020)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00106028)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00106030)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00106038)();
  return pvVar1;
}



// ===== Function: __cxa_rethrow =====

void __cxa_rethrow(void)

{
  (*(code *)PTR___cxa_rethrow_00106040)();
  return;
}



// ===== Function: memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00106048)();
  return pvVar1;
}



// ===== Function: __cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_00106050)();
  return;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00106058)();
  return;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

{
  (*_DAT_00106060)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00105fb8)();
  return;
}



// ===== Function: _start =====

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fc0)(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: deregister_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101153) */
/* WARNING: Removing unreachable block (ram,0x0010115f) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101194) */
/* WARNING: Removing unreachable block (ram,0x001011a0) */

void register_tm_clones(void)

{
  return;
}



// ===== Function: __do_global_dtors_aux =====

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    if (PTR___cxa_finalize_00105fb8 != (undefined *)0x0) {
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
  iterator __first;
  iterator __last;
  size_type sVar1;
  reference piVar2;
  ostream *poVar3;
  size_type local_60;
  size_t i;
  value_type local_44 [6];
  value_type local_2c;
  undefined1 local_28 [8];
  vector<int,_std::allocator<int>_> v;
  
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_end_of_storage.
  _4_4_ = 0;
  std::vector<int,_std::allocator<int>_>::vector((vector<int,_std::allocator<int>_> *)local_28);
  local_2c = 0x1e;
                    /* try { // try from 0010122a to 0010132f has its CatchHandler @ 0010134b */
  std::vector<int,_std::allocator<int>_>::push_back
            ((vector<int,_std::allocator<int>_> *)local_28,&local_2c);
  local_44[1] = 10;
  std::vector<int,_std::allocator<int>_>::push_back
            ((vector<int,_std::allocator<int>_> *)local_28,local_44 + 1);
  local_44[0] = 0x14;
  std::vector<int,_std::allocator<int>_>::push_back
            ((vector<int,_std::allocator<int>_> *)local_28,local_44);
  __first = std::vector<int,_std::allocator<int>_>::begin
                      ((vector<int,_std::allocator<int>_> *)local_28);
  __last = std::vector<int,_std::allocator<int>_>::end
                     ((vector<int,_std::allocator<int>_> *)local_28);
  std::sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
            ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__first._M_current,
             (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__last._M_current);
  local_60 = 0;
  while( true ) {
    sVar1 = std::vector<int,_std::allocator<int>_>::size
                      ((vector<int,_std::allocator<int>_> *)local_28);
    if (sVar1 <= local_60) break;
    piVar2 = std::vector<int,_std::allocator<int>_>::operator[]
                       ((vector<int,_std::allocator<int>_> *)local_28,local_60);
    poVar3 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00105fc8,*piVar2);
    std::operator<<(poVar3," ");
    local_60 = local_60 + 1;
  }
  v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data._M_end_of_storage.
  _4_4_ = 0;
  std::vector<int,_std::allocator<int>_>::~vector((vector<int,_std::allocator<int>_> *)local_28);
  return v.super__Vector_base<int,_std::allocator<int>_>._M_impl.super__Vector_impl_data.
         _M_end_of_storage._4_4_;
}



// ===== Function: vector =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void vector(vector<int,_std::allocator<int>_> * this) */

void __thiscall
std::vector<int,_std::allocator<int>_>::vector(vector<int,_std::allocator<int>_> *this)

{
  vector<int,_std::allocator<int>_> *this_local;
  
  _Vector_base<int,_std::allocator<int>_>::_Vector_base
            (&this->super__Vector_base<int,_std::allocator<int>_>);
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
    *(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish
         = *__x;
    (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish
         = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish + 1;
  }
  return;
}



// ===== Function: sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > > > */

void std::sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __gnu_cxx::__ops::__iter_less_iter();
  __sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first._M_current,__last._M_current);
  return;
}



// ===== Function: begin =====

/* DWARF original prototype: iterator begin(vector<int,_std::allocator<int>_> * this) */

iterator __thiscall
std::vector<int,_std::allocator<int>_>::begin(vector<int,_std::allocator<int>_> *this)

{
  vector<int,_std::allocator<int>_> *this_local;
  
  __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::__normal_iterator
            ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&this_local,
             (int **)this);
  return (iterator)(int *)this_local;
}



// ===== Function: end =====

/* DWARF original prototype: iterator end(vector<int,_std::allocator<int>_> * this) */

iterator __thiscall
std::vector<int,_std::allocator<int>_>::end(vector<int,_std::allocator<int>_> *this)

{
  vector<int,_std::allocator<int>_> *this_local;
  
  __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::__normal_iterator
            ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&this_local,
             &(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
              _M_finish);
  return (iterator)(int *)this_local;
}



// ===== Function: size =====

/* WARNING: Variable defined which should be unmapped: this_local */
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

/* WARNING: Variable defined which should be unmapped: this_local */
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



// ===== Function: ~vector =====

/* DWARF original prototype: void ~vector(vector<int,_std::allocator<int>_> * this) */

void __thiscall
std::vector<int,_std::allocator<int>_>::~vector(vector<int,_std::allocator<int>_> *this)

{
  int *__first;
  int *__last;
  vector<int,_std::allocator<int>_> *this_local;
  
  __first = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
            _M_start;
  __last = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
           _M_finish;
                    /* try { // try from 00101563 to 00101595 has its CatchHandler @ 001015af */
  _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
            (&this->super__Vector_base<int,_std::allocator<int>_>);
  _Destroy<int_*>(__first,__last);
  _Vector_base<int,_std::allocator<int>_>::~_Vector_base
            (&this->super__Vector_base<int,_std::allocator<int>_>);
  return;
}



// ===== Function: __clang_call_terminate =====

void __clang_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



// ===== Function: _Vector_base =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void _Vector_base(_Vector_base<int,_std::allocator<int>_> * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_base
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  _Vector_impl::_Vector_impl(&this->_M_impl);
  return;
}



// ===== Function: _Vector_impl =====

/* DWARF original prototype: void _Vector_impl(_Vector_impl * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  _Vector_impl *this_local;
  
                    /* try { // try from 00101630 to 00101634 has its CatchHandler @ 00101640 */
  _Vector_impl_data::_Vector_impl_data(&this->super__Vector_impl_data);
  return;
}



// ===== Function: _Vector_impl_data =====

/* WARNING: Variable defined which should be unmapped: this_local */
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

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~__new_allocator(__new_allocator<int> * this) */

void __thiscall std::__new_allocator<int>::~__new_allocator(__new_allocator<int> *this)

{
  __new_allocator<int> *this_local;
  
  return;
}



// ===== Function: _M_get_Tp_allocator =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: _Tp_alloc_type *
   _M_get_Tp_allocator(_Vector_base<int,_std::allocator<int>_> * this) */

_Tp_alloc_type * __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  return (_Tp_alloc_type *)this;
}



// ===== Function: ~_Vector_base =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void ~_Vector_base(_Vector_base<int,_std::allocator<int>_> * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::~_Vector_base
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  pointer __p;
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  __p = (this->_M_impl).super__Vector_impl_data._M_start;
                    /* try { // try from 001016e2 to 001016e6 has its CatchHandler @ 001016fb */
  _M_deallocate(this,__p,(long)(this->_M_impl).super__Vector_impl_data._M_end_of_storage - (long)__p
                         >> 2);
  _Vector_impl::~_Vector_impl(&this->_M_impl);
  return;
}



// ===== Function: _Destroy<int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: _Destroy<int *> */

void std::_Destroy<int_*>(int *__first,int *__last)

{
  int *__last_local;
  int *__first_local;
  
  _Destroy_aux<true>::__destroy<int_*>(__first,__last);
  return;
}



// ===== Function: __destroy<int_*> =====

/* WARNING: Variable defined which should be unmapped: param_0_local */
/* DWARF original name: __destroy<int *> */

void std::_Destroy_aux<true>::__destroy<int_*>(int *param_1,int *param_2)

{
  int *param_1_local;
  int *param_0_local;
  
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



// ===== Function: ~_Vector_impl =====

/* DWARF original prototype: void ~_Vector_impl(_Vector_impl * this) */

void __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  _Vector_impl *this_local;
  
  __new_allocator<int>::~__new_allocator((__new_allocator<int> *)this);
  return;
}



// ===== Function: deallocate =====

/* WARNING: Variable defined which should be unmapped: this_local */
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



// ===== Function: _M_realloc_insert =====

/* DWARF original prototype: void _M_realloc_insert(vector<int,_std::allocator<int>_> * this,
   iterator __position, value_type * __x) */

void __thiscall
std::vector<int,_std::allocator<int>_>::_M_realloc_insert
          (vector<int,_std::allocator<int>_> *this,iterator __position,value_type *__x)

{
  size_type sVar1;
  pointer piVar2;
  pointer __result;
  int **ppiVar3;
  _Tp_alloc_type *p_Var4;
  int *piVar5;
  int *piVar6;
  pointer __new_finish;
  pointer __new_start;
  long local_c0;
  size_type __elems_before;
  pointer __old_finish;
  pointer __old_start;
  size_type __len;
  value_type *__x_local;
  vector<int,_std::allocator<int>_> *this_local;
  iterator __position_local;
  
  __len = (size_type)__x;
  __x_local = (value_type *)this;
  this_local = (vector<int,_std::allocator<int>_> *)__position._M_current;
  __old_start = (pointer)_M_check_len(this,1,"vector::_M_realloc_insert");
  __old_finish = (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                 super__Vector_impl_data._M_start;
  __elems_before =
       (size_type)
       (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
       _M_finish;
  __new_start = (pointer)begin(this);
  local_c0 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                       ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                        &this_local,
                        (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                        &__new_start);
  __result = _Vector_base<int,_std::allocator<int>_>::_M_allocate
                       (&this->super__Vector_base<int,_std::allocator<int>_>,(size_t)__old_start);
  piVar2 = __old_finish;
  __result[local_c0] = *(int *)__len;
                    /* try { // try from 0010193c to 00101a35 has its CatchHandler @ 00101a55 */
  ppiVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base
                      ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                       &this_local);
  piVar6 = *ppiVar3;
  p_Var4 = _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                     (&this->super__Vector_base<int,_std::allocator<int>_>);
  piVar5 = __uninitialized_move_if_noexcept_a<int_*,_int_*,_std::allocator<int>_>
                     (piVar2,piVar6,__result,p_Var4);
  ppiVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base
                      ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                       &this_local);
  sVar1 = __elems_before;
  piVar6 = *ppiVar3;
  p_Var4 = _Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                     (&this->super__Vector_base<int,_std::allocator<int>_>);
  piVar6 = __uninitialized_move_if_noexcept_a<int_*,_int_*,_std::allocator<int>_>
                     (piVar6,(int *)sVar1,piVar5 + 1,p_Var4);
  piVar2 = __old_finish;
  sVar1 = __elems_before;
  __position_local._M_current =
       (int *)_Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
                        (&this->super__Vector_base<int,_std::allocator<int>_>);
  _Destroy<int_*>(piVar2,(int *)sVar1);
  _Vector_base<int,_std::allocator<int>_>::_M_deallocate
            (&this->super__Vector_base<int,_std::allocator<int>_>,__old_finish,
             (long)(this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.
                   super__Vector_impl_data._M_end_of_storage - (long)__old_finish >> 2);
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_start =
       __result;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data._M_finish =
       piVar6;
  (this->super__Vector_base<int,_std::allocator<int>_>)._M_impl.super__Vector_impl_data.
  _M_end_of_storage = __result + (long)__old_start;
  return;
}



// ===== Function: _M_check_len =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: size_type _M_check_len(vector<int,_std::allocator<int>_> * this,
   size_type __n, char * __s) */

size_type __thiscall
std::vector<int,_std::allocator<int>_>::_M_check_len
          (vector<int,_std::allocator<int>_> *this,size_type __n,char *__s)

{
  unsigned_long uVar1;
  ulong uVar2;
  size_type sVar3;
  size_type sVar4;
  unsigned_long *puVar5;
  size_type local_30;
  ulong local_28;
  size_type __len;
  char *__s_local;
  size_type __n_local;
  vector<int,_std::allocator<int>_> *this_local;
  
  __len = (size_type)__s;
  __s_local = (char *)__n;
  __n_local = (size_type)this;
  sVar3 = max_size(this);
  sVar4 = size(this);
  if ((char *)(sVar3 - sVar4) < __s_local) {
    std::__throw_length_error((char *)__len);
  }
  sVar3 = size(this);
  local_30 = size(this);
  puVar5 = max<unsigned_long>(&local_30,(unsigned_long *)&__s_local);
  uVar1 = *puVar5;
  local_28 = sVar3 + uVar1;
  sVar4 = size(this);
  uVar2 = local_28;
  if ((sVar4 <= sVar3 + uVar1) && (sVar3 = max_size(this), uVar2 <= sVar3)) {
    return local_28;
  }
  sVar3 = max_size(this);
  return sVar3;
}



// ===== Function: operator-<int_*,_std::vector<int,_std::allocator<int>_>_> =====

/* WARNING: Variable defined which should be unmapped: __lhs_local */
/* DWARF original name: operator-<int *, std::vector<int, std::allocator<int> > > */

difference_type
__gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return (long)piVar1 - (long)*ppiVar2 >> 2;
}



// ===== Function: _M_allocate =====

/* DWARF original prototype: pointer _M_allocate(_Vector_base<int,_std::allocator<int>_> * this,
   size_t __n) */

pointer __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_allocate
          (_Vector_base<int,_std::allocator<int>_> *this,size_t __n)

{
  undefined8 local_38;
  size_t __n_local;
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  if (__n == 0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = __new_allocator<int>::allocate((__new_allocator<int> *)this,__n,(void *)0x0);
  }
  return local_38;
}



// ===== Function: __uninitialized_move_if_noexcept_a<int_*,_int_*,_std::allocator<int>_> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __uninitialized_move_if_noexcept_a<int *, int *, std::allocator<int> > */

int * std::__uninitialized_move_if_noexcept_a<int_*,_int_*,_std::allocator<int>_>
                (int *__first,int *__last,int *__result,allocator<int> *__alloc)

{
  int *piVar1;
  allocator<int> *__alloc_local;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __uninitialized_copy_a<int_*,_int_*,_int>(__first,__last,__result,__alloc);
  return piVar1;
}



// ===== Function: base =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: int * *
   base(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this) */

int ** __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  return &this->_M_current;
}



// ===== Function: max_size =====

/* WARNING: Variable defined which should be unmapped: this_local */
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



// ===== Function: max<unsigned_long> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: max<unsigned long> */

unsigned_long * std::max<unsigned_long>(unsigned_long *__a,unsigned_long *__b)

{
  unsigned_long *__b_local;
  unsigned_long *__a_local;
  
  __a_local = __a;
  if (*__a < *__b) {
    __a_local = __b;
  }
  return __a_local;
}



// ===== Function: _S_max_size =====

size_type std::vector<int,_std::allocator<int>_>::_S_max_size(_Tp_alloc_type *__a)

{
  unsigned_long *puVar1;
  unsigned_long local_38;
  size_t __allocmax;
  size_t __diffmax;
  _Tp_alloc_type *__a_local;
  _Tp_alloc_type *local_18;
  _Tp_alloc_type *local_10;
  
  __allocmax = 0x1fffffffffffffff;
  local_38 = 0x1fffffffffffffff;
  __diffmax = (size_t)__a;
  __a_local = __a;
  local_18 = __a;
  local_10 = __a;
  puVar1 = min<unsigned_long>(&__allocmax,&local_38);
  return *puVar1;
}



// ===== Function: _M_get_Tp_allocator =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: _Tp_alloc_type *
   _M_get_Tp_allocator(_Vector_base<int,_std::allocator<int>_> * this) */

_Tp_alloc_type * __thiscall
std::_Vector_base<int,_std::allocator<int>_>::_M_get_Tp_allocator
          (_Vector_base<int,_std::allocator<int>_> *this)

{
  _Vector_base<int,_std::allocator<int>_> *this_local;
  
  return (_Tp_alloc_type *)this;
}



// ===== Function: min<unsigned_long> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: min<unsigned long> */

unsigned_long * std::min<unsigned_long>(unsigned_long *__a,unsigned_long *__b)

{
  unsigned_long *__b_local;
  unsigned_long *__a_local;
  
  __a_local = __a;
  if (*__b < *__a) {
    __a_local = __b;
  }
  return __a_local;
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



// ===== Function: __uninitialized_copy_a<int_*,_int_*,_int> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __uninitialized_copy_a<int *, int *, int> */

int * std::__uninitialized_copy_a<int_*,_int_*,_int>
                (int *__first,int *__last,int *__result,allocator<int> *param_4)

{
  int *piVar1;
  allocator<int> *param_3_local;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = uninitialized_copy<int_*,_int_*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: uninitialized_copy<int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: uninitialized_copy<int *, int *> */

int * std::uninitialized_copy<int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  bool __assignable;
  bool __can_memmove;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __uninitialized_copy<true>::__uninit_copy<int_*,_int_*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __uninit_copy<int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* DWARF original name: __uninit_copy<int *, int *> */

int * std::__uninitialized_copy<true>::__uninit_copy<int_*,_int_*>
                (int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = copy<int_*,_int_*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: copy<int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: copy<int *, int *> */

int * std::copy<int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__last_00;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __miter_base<int_*>(__first);
  __last_00 = __miter_base<int_*>(__last);
  piVar1 = __copy_move_a<false,_int_*,_int_*>(piVar1,__last_00,__result);
  return piVar1;
}



// ===== Function: __copy_move_a<false,_int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_a<false, int *, int *> */

int * std::__copy_move_a<false,_int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__last_00;
  int *__result_00;
  int *local_20;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  local_20 = __result;
  __result_local = __last;
  __last_local = __first;
  piVar1 = __niter_base<int_*>(__first);
  __last_00 = __niter_base<int_*>(__result_local);
  __result_00 = __niter_base<int_*>(local_20);
  piVar1 = __copy_move_a1<false,_int_*,_int_*>(piVar1,__last_00,__result_00);
  piVar1 = __niter_wrap<int_*>(&local_20,piVar1);
  return piVar1;
}



// ===== Function: __miter_base<int_*> =====

/* WARNING: Variable defined which should be unmapped: __it_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __miter_base<int *> */

int * std::__miter_base<int_*>(int *__it)

{
  int *__it_local;
  
  return __it;
}



// ===== Function: __niter_wrap<int_*> =====

/* WARNING: Variable defined which should be unmapped: param_0_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __niter_wrap<int *> */

int * std::__niter_wrap<int_*>(int **param_1,int *__res)

{
  int *__res_local;
  int **param_0_local;
  
  return __res;
}



// ===== Function: __copy_move_a1<false,_int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_a1<false, int *, int *> */

int * std::__copy_move_a1<false,_int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move_a2<false,_int_*,_int_*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __niter_base<int_*> =====

/* WARNING: Variable defined which should be unmapped: __it_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __niter_base<int *> */

int * std::__niter_base<int_*>(int *__it)

{
  int *__it_local;
  
  return __it;
}



// ===== Function: __copy_move_a2<false,_int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_a2<false, int *, int *> */

int * std::__copy_move_a2<false,_int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move<false,_true,_std::random_access_iterator_tag>::__copy_m<int,_int>
                     (__first,__last,__result);
  return piVar1;
}



// ===== Function: __copy_m<int,_int> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* DWARF original name: __copy_m<int, int> */

int * std::__copy_move<false,_true,_std::random_access_iterator_tag>::__copy_m<int,_int>
                (int *__first,int *__last,int *__result)

{
  long lVar1;
  ptrdiff_t _Num;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  lVar1 = (long)__last - (long)__first >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      __copy_move<false,_false,_std::random_access_iterator_tag>::__assign_one<int,_int>
                (__result,__first);
    }
  }
  else {
    memmove(__result,__first,lVar1 << 2);
  }
  return __result + lVar1;
}



// ===== Function: __assign_one<int,_int> =====

/* WARNING: Variable defined which should be unmapped: __to_local */
/* DWARF original name: __assign_one<int, int> */

void std::__copy_move<false,_false,_std::random_access_iterator_tag>::__assign_one<int,_int>
               (int *__to,int *__from)

{
  int *__from_local;
  int *__to_local;
  
  *__to = *__from;
  return;
}



// ===== Function: __normal_iterator =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void
   __normal_iterator(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this, int *
   * __i) */

void __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::__normal_iterator
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this,int **__i)

{
  int **__i_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  this->_M_current = *__i;
  return;
}



// ===== Function: __sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  bool bVar3;
  difference_type __n;
  long lVar4;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_18;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_18._M_current = __last;
  __last_local._M_current = __first;
  bVar3 = __gnu_cxx::operator!=<int_*,_std::vector<int,_std::allocator<int>_>_>
                    (&__last_local,&local_18);
  _Var2._M_current = __last_local._M_current;
  _Var1._M_current = local_18._M_current;
  if (bVar3) {
    __n = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                    (&local_18,&__last_local);
    lVar4 = __lg<long>(__n);
    __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
              (_Var2._M_current,_Var1._M_current,lVar4 << 1);
    __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__last_local._M_current,local_18._M_current);
  }
  return;
}



// ===== Function: __iter_less_iter =====

/* WARNING: Unknown calling convention */

void __gnu_cxx::__ops::__iter_less_iter(void)

{
  return;
}



// ===== Function: operator!=<int_*,_std::vector<int,_std::allocator<int>_>_> =====

/* WARNING: Variable defined which should be unmapped: __lhs_local */
/* DWARF original name: operator!=<int *, std::vector<int, std::allocator<int> > > */

bool __gnu_cxx::operator!=<int_*,_std::vector<int,_std::allocator<int>_>_>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return piVar1 != *ppiVar2;
}



// ===== Function: __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __introsort_loop<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, long, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last,long __depth_limit)

{
  difference_type dVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __cut;
  long local_28;
  long __depth_limit_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_18;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_28 = __depth_limit;
  local_18._M_current = __last;
  __last_local._M_current = __first;
  while( true ) {
    dVar1 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                      (&local_18,&__last_local);
    if (dVar1 < 0x11) {
      return;
    }
    if (local_28 == 0) break;
    local_28 = local_28 + -1;
    _Var2 = __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                      (__last_local._M_current,local_18._M_current);
    __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
              (_Var2._M_current,local_18._M_current,local_28);
    local_18 = _Var2;
  }
  __partial_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__last_local._M_current,local_18._M_current,local_18._M_current);
  return;
}



// ===== Function: __lg<long> =====

/* WARNING: Variable defined which should be unmapped: __n_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long std::__lg<long>(long __n)

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



// ===== Function: __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __final_insertion_sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  difference_type dVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var3;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_18;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_18._M_current = __last;
  __last_local._M_current = __first;
  dVar1 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                    (&local_18,&__last_local);
  _Var3._M_current = __last_local._M_current;
  if (dVar1 < 0x11) {
    __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__last_local._M_current,local_18._M_current);
  }
  else {
    _Var2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                      (&__last_local,0x10);
    __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (_Var3._M_current,_Var2._M_current);
    _Var3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                      (&__last_local,0x10);
    __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (_Var3._M_current,local_18._M_current);
  }
  return;
}



// ===== Function: __partial_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __partial_sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __partial_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               int *__middle,undefined8 __last)

{
  _Iter_less_iter local_21;
  undefined8 local_20;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __middle_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_20 = __last;
  __last_local._M_current = __middle;
  __heap_select<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first._M_current,__middle,__last);
  __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first,__last_local,&local_21);
  return;
}



// ===== Function: __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int *,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
std::
__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
          (int *__first,int *__last)

{
  difference_type dVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var3;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var4;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var5;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __mid;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_20;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_20._M_current = __last;
  __last_local._M_current = __first;
  dVar1 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                    (&local_20,&__last_local);
  _Var2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__last_local,dVar1 / 2);
  _Var5 = __last_local;
  _Var3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__last_local,1);
  _Var4 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator-
                    (&local_20,1);
  __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (_Var5._M_current,_Var3._M_current,_Var2._M_current,_Var4._M_current);
  _Var5 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    (&__last_local,1);
  _Var5 = __unguarded_partition<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                    (_Var5._M_current,local_20._M_current,__last_local._M_current);
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)_Var5._M_current;
}



// ===== Function: __heap_select<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __heap_select<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __heap_select<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __middle,
               int *__last)

{
  bool bVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_40;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __i;
  _Iter_less_iter local_21;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_20;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __middle_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __i._M_current = __middle._M_current;
  local_20._M_current = __last;
  __last_local._M_current = __middle._M_current;
  __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (__first,__middle,&local_21);
  local_40._M_current = __last_local._M_current;
  while (bVar1 = __gnu_cxx::operator<<int_*,_std::vector<int,_std::allocator<int>_>_>
                           (&local_40,&local_20), bVar1) {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                      (&local_21,local_40,__first);
    if (bVar1) {
      __pop_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
                (__first,__last_local,local_40,&local_21);
    }
    __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator++
              (&local_40);
  }
  return;
}



// ===== Function: __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __sort_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __sort_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
               _Iter_less_iter *__comp)

{
  difference_type dVar1;
  _Iter_less_iter *__comp_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __comp_local = (_Iter_less_iter *)__last._M_current;
  __last_local._M_current = __first._M_current;
  while( true ) {
    dVar1 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                      ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                       &__comp_local,&__last_local);
    if (dVar1 < 2) break;
    __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator--
              ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&__comp_local);
    __pop_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
              (__last_local,
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__comp_local,
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__comp_local,
               __comp);
  }
  return;
}



// ===== Function: __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __make_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __make_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
               _Iter_less_iter *__comp)

{
  difference_type dVar1;
  reference piVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_40;
  int local_34;
  long lStack_30;
  _ValueType __value;
  _DistanceType __parent;
  _DistanceType __len;
  _Iter_less_iter *__comp_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __len = (_DistanceType)__comp;
  __comp_local = (_Iter_less_iter *)__last._M_current;
  __last_local = __first;
  dVar1 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                    ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                     &__comp_local,&__last_local);
  if (1 < dVar1) {
    __parent = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                         ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                          &__comp_local,&__last_local);
    lStack_30 = (__parent + -2) / 2;
    while( true ) {
      local_40 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
                 operator+(&__last_local,lStack_30);
      piVar2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator*(&local_40);
      local_34 = *piVar2;
      __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter>
                (__last_local._M_current,lStack_30,__parent,local_34);
      if (lStack_30 == 0) break;
      lStack_30 = lStack_30 + -1;
    }
  }
  return;
}



// ===== Function: operator<<int_*,_std::vector<int,_std::allocator<int>_>_> =====

/* WARNING: Variable defined which should be unmapped: __lhs_local */
/* DWARF original name: operator<<int *, std::vector<int, std::allocator<int> > > */

bool __gnu_cxx::operator<<int_*,_std::vector<int,_std::allocator<int>_>_>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return piVar1 < *ppiVar2;
}



// ===== Function: operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Variable defined which should be unmapped: __it1_local */
/* DWARF original name: operator()<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int>
   > > >
   DWARF original prototype: bool
   operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>(_Iter_less_iter
   * this, __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it1,
   __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it2) */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_iter::
operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
          (_Iter_less_iter *this,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it1,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it2)

{
  int iVar1;
  reference piVar2;
  _Iter_less_iter *this_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it2_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it1_local;
  
  this_local = (_Iter_less_iter *)__it2._M_current;
  __it2_local = __it1;
  piVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__it2_local);
  iVar1 = *piVar2;
  piVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                      &this_local);
  return iVar1 < *piVar2;
}



// ===== Function: __pop_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __pop_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __pop_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result,
               _Iter_less_iter *__comp)

{
  int iVar1;
  int iVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var3;
  reference piVar4;
  difference_type dVar5;
  _ValueType __value;
  _Iter_less_iter *__comp_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __comp_local = (_Iter_less_iter *)__result._M_current;
  __result_local = __last;
  __last_local = __first;
  piVar4 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                      &__comp_local);
  iVar1 = *piVar4;
  piVar4 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__last_local);
  iVar2 = *piVar4;
  piVar4 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                      &__comp_local);
  _Var3 = __last_local;
  *piVar4 = iVar2;
  dVar5 = __gnu_cxx::operator-<int_*,_std::vector<int,_std::allocator<int>_>_>
                    (&__result_local,&__last_local);
  __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter>
            (_Var3._M_current,0,dVar5,iVar1);
  return;
}



// ===== Function: operator++ =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *
   operator++(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this) */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator++
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  this->_M_current = this->_M_current + 1;
  return this;
}



// ===== Function: operator+ =====

/* DWARF original prototype: __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
   operator+(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this,
   difference_type __n) */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this,
          difference_type __n)

{
  int *local_28;
  difference_type local_20;
  difference_type __n_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  local_28 = this->_M_current + __n;
  local_20 = __n;
  __n_local = (difference_type)this;
  __normal_iterator((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&this_local
                    ,&local_28);
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)(int *)this_local;
}



// ===== Function: operator* =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: reference
   operator*(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this) */

reference __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  return this->_M_current;
}



// ===== Function: __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __adjust_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, long, int, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __adjust_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,long __holeIndex,ulong __len,int __value)

{
  int iVar1;
  bool bVar2;
  reference piVar3;
  _Iter_less_val local_71;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Stack_70;
  _Iter_less_val __cmp;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_68;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_60;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_58;
  int *local_50;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_48;
  long local_40;
  long __secondChild;
  long __topIndex;
  ulong uStack_28;
  int __value_local;
  long __len_local;
  long __holeIndex_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_10;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  __secondChild = __holeIndex;
  __topIndex._4_4_ = __value;
  uStack_28 = __len;
  __len_local = __holeIndex;
  local_10._M_current = __first;
  while (__len_local < (long)(uStack_28 - 1) / 2) {
    local_40 = (__len_local + 1) * 2;
    local_48 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&local_10,local_40);
    local_50 = (int *)__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
                      operator+(&local_10,local_40 + -1);
    bVar2 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                      ((_Iter_less_iter *)((long)&__holeIndex_local + 7),local_48,
                       (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)local_50);
    if (bVar2) {
      local_40 = local_40 + -1;
    }
    local_58 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&local_10,local_40);
    piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_58);
    iVar1 = *piVar3;
    local_60 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&local_10,__len_local);
    piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_60);
    *piVar3 = iVar1;
    __len_local = local_40;
  }
  local_40 = __len_local;
  if (((uStack_28 & 1) == 0) && (__len_local == (long)(uStack_28 - 2) / 2)) {
    local_40 = (__len_local + 1) * 2;
    local_68 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&local_10,local_40 + -1);
    piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_68);
    iVar1 = *piVar3;
    _Stack_70 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
                operator+(&local_10,__len_local);
    piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&stack0xffffffffffffff90);
    *piVar3 = iVar1;
    __len_local = local_40 + -1;
  }
  __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(&local_71);
  __push_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_val>
            (local_10,__len_local,__secondChild,__topIndex._4_4_,&local_71);
  return;
}



// ===== Function: _Iter_less_val =====

/* DWARF original prototype: void _Iter_less_val(_Iter_less_val * this, _Iter_less_iter param_1) */

void __thiscall __gnu_cxx::__ops::_Iter_less_val::_Iter_less_val(void)

{
  _Iter_less_val *this_local;
  
  return;
}



// ===== Function: __push_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_val> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __push_heap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, long, int, __gnu_cxx::__ops::_Iter_less_val> */

void std::
     __push_heap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,_int,___gnu_cxx::__ops::_Iter_less_val>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
               long __holeIndex,long __topIndex,int __value,_Iter_less_val *__comp)

{
  int iVar1;
  long this;
  reference piVar2;
  bool local_59;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_58;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_50;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_48;
  int *local_40;
  long local_38;
  long __parent;
  _Iter_less_val *__comp_local;
  long lStack_20;
  int __value_local;
  long __topIndex_local;
  long __holeIndex_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_38 = __holeIndex + -1;
  __parent = (long)__comp;
  __comp_local._4_4_ = __value;
  lStack_20 = __topIndex;
  __topIndex_local = __holeIndex;
  __holeIndex_local = (long)__first._M_current;
  while( true ) {
    this = __parent;
    local_38 = local_38 / 2;
    local_59 = false;
    if (lStack_20 < __topIndex_local) {
      local_40 = (int *)__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
                        ::operator+((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
                                     *)&__holeIndex_local,local_38);
      local_59 = __gnu_cxx::__ops::_Iter_less_val::
                 operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int>
                           ((_Iter_less_val *)this,
                            (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)
                            local_40,(int *)((long)&__comp_local + 4));
    }
    iVar1 = __comp_local._4_4_;
    if (local_59 == false) break;
    local_48 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                         &__holeIndex_local,local_38);
    piVar2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_48);
    iVar1 = *piVar2;
    local_50 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                         &__holeIndex_local,__topIndex_local);
    piVar2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_50);
    *piVar2 = iVar1;
    __topIndex_local = local_38;
    local_38 = local_38 + -1;
  }
  local_58 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                       ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                        &__holeIndex_local,__topIndex_local);
  piVar2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&local_58);
  *piVar2 = iVar1;
  return;
}



// ===== Function: operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int> =====

/* WARNING: Variable defined which should be unmapped: __it_local */
/* DWARF original name: operator()<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, int>
   DWARF original prototype: bool
   operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int>(_Iter_less_val
   * this, __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it, int * __val) */

bool __thiscall
__gnu_cxx::__ops::_Iter_less_val::
operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int>
          (_Iter_less_val *this,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it,int *__val)

{
  reference piVar1;
  int *__val_local;
  _Iter_less_val *this_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  
  this_local = (_Iter_less_val *)__it._M_current;
  piVar1 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                      &this_local);
  return *piVar1 < *__val;
}



// ===== Function: operator-- =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *
   operator--(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this) */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator--
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  this->_M_current = this->_M_current + -1;
  return this;
}



// ===== Function: __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __result_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __move_median_to_first<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __move_median_to_first<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __a,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __b,int *__c)

{
  bool bVar1;
  _Iter_less_iter local_29;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_28;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __c_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __b_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __a_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  
  local_28._M_current = __c;
  __c_local._M_current = __b._M_current;
  bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
          operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                    (&local_29,__a,__b);
  if (bVar1) {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                      (&local_29,__c_local,local_28);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                (__result,__c_local);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                        (&local_29,__a,local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                  (__result,local_28);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                  (__result,__a);
      }
    }
  }
  else {
    bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
            operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                      (&local_29,__a,local_28);
    if (bVar1) {
      iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                (__result,__a);
    }
    else {
      bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                        (&local_29,__c_local,local_28);
      if (bVar1) {
        iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                  (__result,local_28);
      }
      else {
        iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                  (__result,__c_local);
      }
    }
  }
  return;
}



// ===== Function: operator- =====

/* DWARF original prototype: __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
   operator-(__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> * this,
   difference_type __n) */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __thiscall
__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator-
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this,
          difference_type __n)

{
  int *local_28;
  difference_type local_20;
  difference_type __n_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *this_local;
  
  local_28 = this->_M_current + -__n;
  local_20 = __n;
  __n_local = (difference_type)this;
  __normal_iterator((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&this_local
                    ,&local_28);
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)(int *)this_local;
}



// ===== Function: __unguarded_partition<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_partition<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
std::
__unguarded_partition<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
          (int *__first,int *__last,int *__pivot)

{
  bool bVar1;
  _Iter_less_iter local_29;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_28;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __pivot_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_28._M_current = __pivot;
  __pivot_local._M_current = __last;
  __last_local._M_current = __first;
  while( true ) {
    while (bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
                   operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                             (&local_29,__last_local,local_28), bVar1) {
      __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator++
                (&__last_local);
    }
    __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator--
              (&__pivot_local);
    while (bVar1 = __gnu_cxx::__ops::_Iter_less_iter::
                   operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                             (&local_29,local_28,__pivot_local), bVar1) {
      __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator--
                (&__pivot_local);
    }
    bVar1 = __gnu_cxx::operator<<int_*,_std::vector<int,_std::allocator<int>_>_>
                      (&__last_local,&__pivot_local);
    if (!bVar1) break;
    iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
              (__last_local,__pivot_local);
    __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator++
              (&__last_local);
  }
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__last_local._M_current;
}



// ===== Function: iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Variable defined which should be unmapped: __a_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: iter_swap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int>
   > > > */

void std::
     iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __a,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __b)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __b_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __a_local;
  
  __iter_swap<true>::
  iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
            (__a,__b);
  return;
}



// ===== Function: iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Variable defined which should be unmapped: __a_local */
/* DWARF original name: iter_swap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int>
   > > > */

void std::__iter_swap<true>::
     iter_swap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __a,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __b)

{
  reference __a_00;
  reference __b_00;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_18;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __b_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __a_local;
  
  local_18._M_current = __b._M_current;
  __b_local = __a;
  __a_00 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&__b_local);
  __b_00 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     (&local_18);
  swap<int>(__a_00,__b_00);
  return;
}



// ===== Function: swap<int> =====

/* WARNING: Variable defined which should be unmapped: __a_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::swap<int>(int *__a,int *__b)

{
  int iVar1;
  int __tmp;
  int *__b_local;
  int *__a_local;
  
  iVar1 = *__a;
  *__a = *__b;
  *__b = iVar1;
  return;
}



// ===== Function: __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __insertion_sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  int iVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_00;
  bool bVar3;
  reference piVar4;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result;
  value_type __val;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_28;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __i;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_18;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_18._M_current = __last;
  __last_local._M_current = __first;
  bVar3 = __gnu_cxx::operator==<int_*,_std::vector<int,_std::allocator<int>_>_>
                    (&__last_local,&local_18);
  if (!bVar3) {
    local_28 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
               operator+(&__last_local,1);
    while (bVar3 = __gnu_cxx::operator!=<int_*,_std::vector<int,_std::allocator<int>_>_>
                             (&local_28,&local_18), bVar3) {
      bVar3 = __gnu_cxx::__ops::_Iter_less_iter::
              operator()<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                        ((_Iter_less_iter *)((long)&__i._M_current + 7),local_28,__last_local);
      _Var2._M_current = local_28._M_current;
      if (bVar3) {
        piVar4 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
                 operator*(&local_28);
        __first_00 = __last_local;
        _Var2._M_current = local_28._M_current;
        iVar1 = *piVar4;
        __result = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
                   operator+(&local_28,1);
        copy_backward<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                  (__first_00,_Var2,__result);
        piVar4 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::
                 operator*(&__last_local);
        *piVar4 = iVar1;
      }
      else {
        __gnu_cxx::__ops::__val_comp_iter();
        __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Val_less_iter>
                  (_Var2._M_current);
      }
      __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator++
                (&local_28);
    }
  }
  return;
}



// ===== Function: __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int *,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __unguarded_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var1;
  bool bVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_28;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __i;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_18;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  local_28._M_current = __first;
  local_18._M_current = __last;
  __last_local._M_current = __first;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=<int_*,_std::vector<int,_std::allocator<int>_>_>
                      (&local_28,&local_18);
    _Var1._M_current = local_28._M_current;
    if (!bVar2) break;
    __gnu_cxx::__ops::__val_comp_iter();
    __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Val_less_iter>
              (_Var1._M_current);
    __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator++
              (&local_28);
  }
  return;
}



// ===== Function: operator==<int_*,_std::vector<int,_std::allocator<int>_>_> =====

/* WARNING: Variable defined which should be unmapped: __lhs_local */
/* DWARF original name: operator==<int *, std::vector<int, std::allocator<int> > > */

bool __gnu_cxx::operator==<int_*,_std::vector<int,_std::allocator<int>_>_>
               (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs,
               __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs)

{
  int *piVar1;
  int **ppiVar2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__rhs_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *__lhs_local;
  
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__lhs);
  piVar1 = *ppiVar2;
  ppiVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base(__rhs);
  return piVar1 == *ppiVar2;
}



// ===== Function: copy_backward<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: copy_backward<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int>
   > > > */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
std::
copy_backward<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_00;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  _Var1 = __miter_base<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                    (__first);
  __last_00 = __miter_base<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                        (__last);
  _Var1 = __copy_move_backward_a<false,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                    (_Var1,__last_00,__result);
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)_Var1._M_current;
}



// ===== Function: __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Val_less_iter> =====

/* WARNING: Variable defined which should be unmapped: __last_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int *,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__ops::_Val_less_iter> */

void std::
     __unguarded_linear_insert<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Val_less_iter>
               (int *__last)

{
  int iVar1;
  bool bVar2;
  reference piVar3;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_20;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __next;
  value_type __val;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  
  ___val = __last;
  piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&__val);
  __next._M_current._0_4_ = *piVar3;
  local_20._M_current = ___val;
  __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator--
            (&local_20);
  while( true ) {
    bVar2 = __gnu_cxx::__ops::_Val_less_iter::
            operator()<int,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
                      ((_Val_less_iter *)((long)&__next._M_current + 7),(int *)&__next,local_20);
    iVar1 = (int)__next._M_current;
    if (!bVar2) break;
    piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       (&local_20);
    iVar1 = *piVar3;
    piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                       ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&__val)
    ;
    *piVar3 = iVar1;
    ___val = local_20._M_current;
    __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator--
              (&local_20);
  }
  piVar3 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)&__val);
  *piVar3 = iVar1;
  return;
}



// ===== Function: __val_comp_iter =====

void __gnu_cxx::__ops::__val_comp_iter(void)

{
  _Val_less_iter local_9;
  
  _Val_less_iter::_Val_less_iter(&local_9);
  return;
}



// ===== Function: __copy_move_backward_a<false,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_backward_a<false, __gnu_cxx::__normal_iterator<int *,
   std::vector<int, std::allocator<int> > >, __gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > > > */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
std::
__copy_move_backward_a<false,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result)

{
  int *piVar1;
  int *__last_00;
  int *__result_00;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __result_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __last_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __first_local;
  
  piVar1 = __niter_base<int_*,_std::vector<int,_std::allocator<int>_>_>(__first);
  __last_00 = __niter_base<int_*,_std::vector<int,_std::allocator<int>_>_>(__last);
  __result_00 = __niter_base<int_*,_std::vector<int,_std::allocator<int>_>_>(__result);
  piVar1 = __copy_move_backward_a1<false,_int_*,_int_*>(piVar1,__last_00,__result_00);
  _Var2 = __niter_wrap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int_*>
                    (__result,piVar1);
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)_Var2._M_current;
}



// ===== Function: __miter_base<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __miter_base<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > > > */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
std::__miter_base<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it)

{
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)__it._M_current;
}



// ===== Function: __niter_wrap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int_*> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __niter_wrap<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, int *> */

__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>
std::
__niter_wrap<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_int_*>
          (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __from,int *__res)

{
  int *piVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> _Var2;
  int *__res_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __from_local;
  
  __res_local = __from._M_current;
  piVar1 = __niter_base<int_*,_std::vector<int,_std::allocator<int>_>_>(__from);
  _Var2 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator+
                    ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                     &__res_local,(long)__res - (long)piVar1 >> 2);
  return (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>)_Var2._M_current;
}



// ===== Function: __copy_move_backward_a1<false,_int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_backward_a1<false, int *, int *> */

int * std::__copy_move_backward_a1<false,_int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move_backward_a2<false,_int_*,_int_*>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __niter_base<int_*,_std::vector<int,_std::allocator<int>_>_> =====

/* WARNING: Variable defined which should be unmapped: __it_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __niter_base<int *, std::vector<int, std::allocator<int> > > */

int * std::__niter_base<int_*,_std::vector<int,_std::allocator<int>_>_>
                (__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it)

{
  int **ppiVar1;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> local_10;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  
  local_10._M_current = __it._M_current;
  ppiVar1 = __gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::base
                      (&local_10);
  return *ppiVar1;
}



// ===== Function: __copy_move_backward_a2<false,_int_*,_int_*> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __copy_move_backward_a2<false, int *, int *> */

int * std::__copy_move_backward_a2<false,_int_*,_int_*>(int *__first,int *__last,int *__result)

{
  int *piVar1;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  piVar1 = __copy_move_backward<false,_true,_std::random_access_iterator_tag>::
           __copy_move_b<int,_int>(__first,__last,__result);
  return piVar1;
}



// ===== Function: __copy_move_b<int,_int> =====

/* WARNING: Variable defined which should be unmapped: __first_local */
/* DWARF original name: __copy_move_b<int, int> */

int * std::__copy_move_backward<false,_true,_std::random_access_iterator_tag>::
      __copy_move_b<int,_int>(int *__first,int *__last,int *__result)

{
  long lVar1;
  ptrdiff_t _Num;
  int *__result_local;
  int *__last_local;
  int *__first_local;
  
  lVar1 = (long)__last - (long)__first >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      __copy_move<false,_false,_std::random_access_iterator_tag>::__assign_one<int,_int>
                (__result + -1,__first);
    }
  }
  else {
    memmove(__result + -lVar1,__first,lVar1 << 2);
  }
  return __result + -lVar1;
}



// ===== Function: operator()<int,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_> =====

/* WARNING: Variable defined which should be unmapped: __it_local */
/* DWARF original name: operator()<int, __gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > > >
   DWARF original prototype: bool
   operator()<int,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>(_Val_less_iter
   * this, int * __val, __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it) */

bool __thiscall
__gnu_cxx::__ops::_Val_less_iter::
operator()<int,___gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>_>
          (_Val_less_iter *this,int *__val,
          __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it)

{
  int iVar1;
  reference piVar2;
  int *__val_local;
  _Val_less_iter *this_local;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __it_local;
  
  iVar1 = *__val;
  this_local = (_Val_less_iter *)__it._M_current;
  piVar2 = __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>::operator*
                     ((__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> *)
                      &this_local);
  return iVar1 < *piVar2;
}



// ===== Function: _Val_less_iter =====

/* WARNING: Variable defined which should be unmapped: this_local */
/* DWARF original prototype: void _Val_less_iter(_Val_less_iter * this) */

void __thiscall __gnu_cxx::__ops::_Val_less_iter::_Val_less_iter(_Val_less_iter *this)

{
  _Val_less_iter *this_local;
  
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



