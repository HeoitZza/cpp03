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



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104000)();
  return;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104008)();
  return pvVar1;
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR___ostream_insert<char,std_char_traits<char>>_00104010)();
  return poVar1;
}



// ===== Function: memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00104018)();
  return pvVar1;
}



// ===== Function: operator<< =====

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
  (*(code *)PTR_operator<<_00104020)();
  return;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

{
  (*_DAT_00104028)();
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

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void deregister_tm_clones(void)

{
  return;
}



// ===== Function: register_tm_clones =====

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

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
  undefined *this;
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ostream *poVar4;
  pointer __old_start;
  size_t i;
  long lVar5;
  pointer __old_start_1;
  
                    /* try { // try from 00101198 to 001011a1 has its CatchHandler @ 00101275 */
  puVar1 = (undefined4 *)operator_new(4);
  *puVar1 = 0x1e;
                    /* try { // try from 001011ab to 001011b4 has its CatchHandler @ 00101273 */
  puVar2 = (undefined8 *)operator_new(8);
  *(undefined4 *)((long)puVar2 + 4) = 10;
  *(undefined4 *)puVar2 = *puVar1;
  operator_delete(puVar1);
                    /* try { // try from 001011cc to 001011d5 has its CatchHandler @ 0010126b */
  puVar3 = (undefined8 *)operator_new(0x10);
  *(undefined4 *)(puVar3 + 1) = 0x14;
  *puVar3 = *puVar2;
  operator_delete(puVar2);
                    /* try { // try from 001011f5 to 0010120f has its CatchHandler @ 0010127c */
  std::
  __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
            (puVar3,(long)puVar3 + 0xc,2);
  std::
  __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
            (puVar3,(long)puVar3 + 0xc);
  this = PTR_cout_00103fc8;
  lVar5 = 0;
  do {
                    /* try { // try from 00101234 to 0010124b has its CatchHandler @ 0010127e */
    poVar4 = (ostream *)std::ostream::operator<<((ostream *)this,*(int *)((long)puVar3 + lVar5 * 4))
    ;
    std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  operator_delete(puVar3);
  return 0;
}



// ===== Function: __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __introsort_loop<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, long, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last,long __depth_limit)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int __tmp_3;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  bool bVar13;
  
  uVar11 = (long)__last - (long)__first;
  uVar7 = (long)uVar11 >> 2;
  if (0x10 < (long)uVar7) {
    if (__depth_limit != 0) {
      piVar9 = __last;
      do {
        uVar7 = uVar7 >> 1;
        iVar2 = __first[1];
        iVar3 = __first[uVar7];
        iVar4 = piVar9[-1];
        if (iVar2 < iVar3) {
          if (iVar3 < iVar4) {
            iVar2 = *__first;
            *__first = iVar3;
            __first[uVar7] = iVar2;
          }
          else {
            iVar3 = *__first;
            if (iVar2 < iVar4) {
              *__first = iVar4;
              piVar9[-1] = iVar3;
            }
            else {
              *__first = iVar2;
              __first[1] = iVar3;
            }
          }
        }
        else if (iVar2 < iVar4) {
          iVar3 = *__first;
          *__first = iVar2;
          __first[1] = iVar3;
        }
        else {
          iVar2 = *__first;
          if (iVar3 < iVar4) {
            *__first = iVar4;
            piVar9[-1] = iVar2;
          }
          else {
            *__first = iVar3;
            __first[uVar7] = iVar2;
          }
        }
        __depth_limit = __depth_limit + -1;
        piVar5 = piVar9;
        piVar12 = __first + 1;
        while( true ) {
          uVar11 = (-4 - (long)__first) + (long)piVar12;
          do {
            __last = piVar12;
            iVar2 = *__last;
            piVar12 = __last + 1;
            uVar11 = uVar11 + 4;
          } while (iVar2 < *__first);
          do {
            piVar1 = piVar5 + -1;
            piVar5 = piVar5 + -1;
          } while (*__first < *piVar1);
          if (piVar5 <= __last) break;
          *__last = *piVar1;
          *piVar5 = iVar2;
        }
        __introsort_loop<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,_long,___gnu_cxx::__ops::_Iter_less_iter>
                  (__last,piVar9,__depth_limit);
        uVar7 = (long)uVar11 >> 2;
        if ((long)uVar7 < 0x11) {
          return;
        }
        piVar9 = __last;
      } while (__depth_limit != 0);
    }
    lVar6 = (long)((uVar7 - ((long)(uVar7 - 2) >> 0x3f)) + -2) >> 1;
    do {
      iVar2 = __first[lVar6];
      lVar8 = lVar6;
      while (lVar8 < (long)((uVar7 - ((long)(uVar7 - 1) >> 0x3f)) + -1) >> 1) {
        if (__first[lVar8 * 2 + 2] < __first[lVar8 * 2 + 1]) {
          lVar10 = lVar8 * 2 + 1;
        }
        else {
          lVar10 = lVar8 * 2 + 2;
        }
        __first[lVar8] = __first[lVar10];
        lVar8 = lVar10;
      }
      if (((uVar11 & 4) == 0) && (lVar8 == (long)(uVar7 - 2) >> 1)) {
        __first[lVar8] = __first[lVar8 * 2 + 1];
        lVar8 = lVar8 * 2 + 1;
      }
      while (lVar6 < lVar8) {
        lVar10 = (lVar8 - (lVar8 + -1 >> 0x3f)) + -1 >> 1;
        if (iVar2 <= __first[lVar10]) break;
        __first[lVar8] = __first[lVar10];
        lVar8 = lVar10;
      }
      __first[lVar8] = iVar2;
      bVar13 = lVar6 != 0;
      lVar6 = lVar6 + -1;
    } while (bVar13);
    while (4 < (long)uVar11) {
      iVar2 = __last[-1];
      __last[-1] = *__first;
      __last = __last + -1;
      uVar11 = (long)__last - (long)__first;
      lVar6 = (long)uVar11 >> 2;
      if (lVar6 < 3) {
        lVar8 = 0;
      }
      else {
        lVar10 = 0;
        do {
          if (__first[lVar10 * 2 + 2] < __first[lVar10 * 2 + 1]) {
            lVar8 = lVar10 * 2 + 1;
          }
          else {
            lVar8 = lVar10 * 2 + 2;
          }
          __first[lVar10] = __first[lVar8];
          lVar10 = lVar8;
        } while (lVar8 < (lVar6 - (lVar6 + -1 >> 0x3f)) + -1 >> 1);
      }
      if (((uVar11 & 4) == 0) && (lVar8 == lVar6 + -2 >> 1)) {
        __first[lVar8] = __first[lVar8 * 2 + 1];
        lVar8 = lVar8 * 2 + 1;
      }
      if (0 < lVar8) {
        do {
          lVar6 = (lVar8 - (lVar8 + -1 >> 0x3f)) + -1 >> 1;
          if (iVar2 <= __first[lVar6]) break;
          __first[lVar8] = __first[lVar6];
          bVar13 = 2 < lVar8;
          lVar8 = lVar6;
        } while (bVar13);
      }
      __first[lVar8] = iVar2;
    }
  }
  return;
}



// ===== Function: __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __final_insertion_sort<__gnu_cxx::__normal_iterator<int *, std::vector<int,
   std::allocator<int> > >, __gnu_cxx::__ops::_Iter_less_iter> */

void std::
     __final_insertion_sort<__gnu_cxx::__normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_>,___gnu_cxx::__ops::_Iter_less_iter>
               (int *__first,int *__last)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  value_type __val_1;
  int *piVar6;
  ulong __n_00;
  __normal_iterator<int_*,_std::vector<int,_std::allocator<int>_>_> __i;
  value_type __val;
  
  if ((long)__last - (long)__first < 0x41) {
    if (__first != __last) {
      piVar5 = __first + 1;
      piVar6 = __first;
      while (piVar1 = piVar5, piVar1 != __last) {
        iVar2 = piVar6[1];
        if (iVar2 < *__first) {
          __n = (long)piVar1 - (long)__first;
          piVar5 = __first;
          if ((long)__n >> 2 < 2) {
            if (__n == 4) {
              piVar6[1] = *__first;
            }
          }
          else {
            memmove(piVar6 + (2 - ((long)__n >> 2)),__first,__n);
          }
        }
        else {
          iVar3 = *piVar6;
          piVar5 = piVar1;
          while (iVar2 < iVar3) {
            *piVar5 = iVar3;
            piVar6 = piVar5 + -2;
            piVar5 = piVar5 + -1;
            iVar3 = *piVar6;
          }
        }
        *piVar5 = iVar2;
        piVar6 = piVar1;
        piVar5 = piVar1 + 1;
      }
    }
  }
  else {
    __n_00 = 4;
    piVar6 = __first;
    piVar5 = __first + 1;
    do {
      piVar1 = (int *)((long)__first + __n_00);
      iVar2 = *(int *)((long)__first + __n_00);
      if (iVar2 < *__first) {
        piVar4 = __first;
        if (__n_00 < 5) {
          if (__n_00 == 4) {
            piVar6[1] = *__first;
          }
        }
        else {
          memmove(__first + 1,__first,__n_00);
        }
      }
      else {
        iVar3 = *piVar6;
        piVar4 = piVar1;
        piVar6 = piVar5;
        while (iVar2 < iVar3) {
          *piVar6 = iVar3;
          piVar4 = piVar6 + -1;
          iVar3 = piVar6[-2];
          piVar6 = piVar4;
        }
      }
      *piVar4 = iVar2;
      __n_00 = __n_00 + 4;
      piVar5 = piVar5 + 1;
      piVar6 = piVar1;
    } while (__n_00 != 0x40);
    for (__first = __first + 0x10; __first != __last; __first = __first + 1) {
      iVar3 = *__first;
      iVar2 = __first[-1];
      piVar6 = __first;
      while (iVar3 < iVar2) {
        *piVar6 = iVar2;
        piVar5 = piVar6 + -2;
        piVar6 = piVar6 + -1;
        iVar2 = *piVar5;
      }
      *piVar6 = iVar3;
    }
  }
  return;
}



// ===== Function: _fini =====

void _fini(void)

{
  return;
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



