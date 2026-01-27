// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00103ff0 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103ff0)();
  }
  return;
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



// ===== Function: FUN_00101160 =====

void FUN_00101160(void)

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



// ===== Function: FUN_00101190 =====

undefined8 FUN_00101190(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  ostream *poVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_48 = (undefined1  [16])0x0;
  local_4c = 0x1e;
                    /* try { // try from 001011da to 00101273 has its CatchHandler @ 00101307 */
  FUN_001019a0(local_48,&local_4c);
  local_4c = 10;
  FUN_001019a0(local_48,&local_4c);
  local_4c = 0x14;
  FUN_001019a0(local_48,&local_4c);
  uVar3 = local_48._8_8_;
  uVar2 = local_48._0_8_;
  if (local_48._0_8_ == local_48._8_8_) {
    if ((int *)local_48._0_8_ == (int *)0x0) goto LAB_0010128c;
  }
  else {
    lVar8 = local_48._8_8_ - local_48._0_8_;
    uVar13 = lVar8 >> 2;
    lVar1 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    FUN_001015e0(local_48._0_8_,local_48._8_8_,lVar1 * 2);
    if (lVar8 < 0x41) {
      FUN_00101530(uVar2,uVar3);
    }
    else {
      piVar10 = (int *)(uVar2 + 0x40);
      FUN_00101530(uVar2,piVar10);
      if ((int *)uVar3 != piVar10) {
        iVar6 = *piVar10;
        iVar7 = *(int *)(uVar2 + 0x3c);
        piVar4 = (int *)(uVar2 + 0x3c);
        piVar11 = piVar10;
        piVar12 = piVar10;
        if (iVar7 <= iVar6) goto LAB_001012e1;
        do {
          do {
            piVar12 = piVar4;
            piVar12[1] = iVar7;
            iVar7 = piVar12[-1];
            piVar4 = piVar12 + -1;
            piVar11 = piVar10;
          } while (iVar6 < iVar7);
LAB_001012e1:
          do {
            piVar10 = piVar11 + 1;
            *piVar12 = iVar6;
            if ((int *)uVar3 == piVar10) goto LAB_00101244;
            iVar6 = *piVar10;
            iVar7 = *piVar11;
            piVar4 = piVar11;
            piVar11 = piVar10;
            piVar12 = piVar10;
          } while (iVar7 <= iVar6);
        } while( true );
      }
    }
LAB_00101244:
    uVar9 = 0;
    do {
      poVar5 = (ostream *)std::ostream::operator<<((ostream *)std::cout,*(int *)(uVar2 + uVar9 * 4))
      ;
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," ",1);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar13);
  }
  operator_delete((void *)uVar2);
LAB_0010128c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_00101190,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101350 =====

/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}



// ===== Function: FUN_00101380 =====

/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104150 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101380();
  return;
}



// ===== Function: FUN_00101410 =====

void FUN_00101410(long param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  lVar8 = (long)(param_3 - 1) / 2;
  lVar5 = param_2;
  if (param_2 < lVar8) {
    do {
      lVar3 = (lVar5 + 1) * 2;
      piVar6 = (int *)(param_1 + (lVar5 + 1) * 8);
      lVar1 = lVar3 + -1;
      iVar4 = *piVar6;
      piVar7 = (int *)(param_1 + lVar1 * 4);
      iVar2 = *piVar7;
      if (iVar4 < iVar2) {
        lVar3 = lVar1;
        piVar6 = piVar7;
        iVar4 = iVar2;
      }
      *(int *)(param_1 + lVar5 * 4) = iVar4;
      lVar5 = lVar3;
    } while (lVar3 < lVar8);
    piVar7 = piVar6;
    if ((param_3 & 1) == 0) goto LAB_001014e8;
  }
  else {
    piVar6 = (int *)(param_1 + param_2 * 4);
    lVar3 = param_2;
    piVar7 = piVar6;
    if ((param_3 & 1) != 0) goto LAB_001014c9;
LAB_001014e8:
    piVar6 = piVar7;
    if ((long)(param_3 - 2) / 2 == lVar3) {
      lVar3 = lVar3 * 2 + 1;
      piVar6 = (int *)(param_1 + lVar3 * 4);
      *piVar7 = *piVar6;
    }
  }
  lVar5 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  if (param_2 < lVar3) {
    while( true ) {
      lVar8 = lVar5 >> 1;
      piVar7 = (int *)(param_1 + lVar8 * 4);
      piVar6 = (int *)(param_1 + lVar3 * 4);
      iVar4 = *piVar7;
      if (param_4 <= iVar4) break;
      *piVar6 = iVar4;
      lVar5 = (lVar8 + -1) - (lVar8 + -1 >> 0x3f);
      lVar3 = lVar8;
      if (lVar8 <= param_2) {
        *piVar7 = param_4;
        return;
      }
    }
  }
LAB_001014c9:
  *piVar6 = param_4;
  return;
}



// ===== Function: FUN_00101530 =====

void FUN_00101530(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  size_t __n;
  int *piVar4;
  
  if (param_1 == param_2) {
    return;
  }
  piVar4 = param_1 + 1;
  do {
    if (param_2 == piVar4) {
      return;
    }
    while( true ) {
      iVar1 = *piVar4;
      if (iVar1 < *param_1) break;
      iVar2 = piVar4[-1];
      piVar3 = piVar4;
      while (iVar1 < iVar2) {
        *piVar3 = iVar2;
        iVar2 = piVar3[-2];
        piVar3 = piVar3 + -1;
      }
      piVar4 = piVar4 + 1;
      *piVar3 = iVar1;
      if (piVar4 == param_2) {
        return;
      }
    }
    __n = (long)piVar4 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *piVar4 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)piVar4),param_1,__n);
    }
    piVar4 = piVar4 + 1;
    *param_1 = iVar1;
  } while( true );
}



// ===== Function: FUN_001015e0 =====

void FUN_001015e0(ulong *param_1,uint *param_2,long param_3)

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
  
  lVar3 = (long)param_2 - (long)param_1;
  if (lVar3 < 0x41) {
    return;
  }
  puVar6 = param_2;
  if (param_3 != 0) {
    do {
      uVar4 = *param_1;
      uVar1 = puVar6[-1];
      param_3 = param_3 + -1;
      puVar5 = (uint *)((long)param_1 + (lVar3 >> 3) * 4);
      uVar2 = *puVar5;
      uVar9 = (uint)uVar4;
      iVar10 = (int)(uVar4 >> 0x20);
      uVar4 = uVar4 & 0xffffffff;
      if (iVar10 < (int)uVar2) {
        if ((int)uVar2 < (int)uVar1) {
LAB_00101723:
          *(uint *)param_1 = uVar2;
          *puVar5 = uVar9;
          uVar4 = (ulong)*(uint *)((long)param_1 + 4);
          iVar10 = (int)*param_1;
          uVar9 = puVar6[-1];
        }
        else {
          if ((int)uVar1 <= iVar10) goto LAB_00101652;
LAB_0010170f:
          *(uint *)param_1 = uVar1;
          puVar6[-1] = uVar9;
          iVar10 = (int)*param_1;
          uVar4 = (ulong)*(uint *)((long)param_1 + 4);
        }
      }
      else {
        if ((int)uVar1 <= iVar10) {
          if ((int)uVar2 < (int)uVar1) goto LAB_0010170f;
          goto LAB_00101723;
        }
LAB_00101652:
        *param_1 = CONCAT44(uVar9,iVar10);
        uVar9 = puVar6[-1];
      }
      param_2 = (uint *)((long)param_1 + 4);
      puVar5 = puVar6;
      if (iVar10 <= (int)uVar4) goto LAB_001016bc;
LAB_00101670:
      do {
        param_2 = param_2 + 1;
        uVar4 = (ulong)*param_2;
      } while ((int)*param_2 < iVar10);
      if ((int)uVar9 <= iVar10) goto LAB_001016c8;
      while( true ) {
        puVar7 = puVar5 + -2;
        do {
          puVar5 = puVar7;
          uVar9 = *puVar5;
          puVar7 = puVar5 + -1;
        } while (iVar10 < (int)uVar9);
        puVar7 = param_2;
        if (puVar5 <= param_2) break;
        while( true ) {
          *puVar7 = uVar9;
          param_2 = puVar7 + 1;
          uVar9 = puVar5[-1];
          *puVar5 = (uint)uVar4;
          iVar10 = (int)*param_1;
          uVar4 = (ulong)puVar7[1];
          if ((int)puVar7[1] < iVar10) goto LAB_00101670;
LAB_001016bc:
          if (iVar10 < (int)uVar9) break;
LAB_001016c8:
          puVar5 = puVar5 + -1;
          puVar7 = param_2;
          if (puVar5 <= param_2) goto LAB_001016d8;
        }
      }
LAB_001016d8:
      FUN_001015e0(param_2,puVar6,param_3);
      lVar3 = (long)param_2 - (long)param_1;
      if (lVar3 < 0x41) {
        return;
      }
      puVar6 = param_2;
    } while (param_3 != 0);
  }
  for (lVar8 = (lVar3 >> 2) + -2 >> 1;
      FUN_00101410(param_1,lVar8,lVar3 >> 2,*(undefined4 *)((long)param_1 + lVar8 * 4)), lVar8 != 0;
      lVar8 = lVar8 + -1) {
  }
  do {
    param_2 = param_2 + -1;
    uVar1 = *param_2;
    *param_2 = (uint)*param_1;
    FUN_00101410(param_1,0,(long)param_2 - (long)param_1 >> 2,uVar1);
  } while (4 < (long)param_2 - (long)param_1);
  return;
}



// ===== Function: FUN_001017b0 =====

void FUN_001017b0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *__src;
  ulong uVar3;
  undefined4 *__dest;
  size_t __n;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  size_t __n_00;
  undefined4 *puVar7;
  
  puVar2 = (undefined4 *)param_1[1];
  __src = (undefined4 *)*param_1;
  uVar3 = (long)puVar2 - (long)__src >> 2;
  if (uVar3 == 0x1fffffffffffffff) {
    pcVar6 = "vector::_M_realloc_insert";
    std::__throw_length_error("vector::_M_realloc_insert");
    puVar2 = *(undefined4 **)(pcVar6 + 8);
    if (puVar2 == *(undefined4 **)(pcVar6 + 0x10)) {
      FUN_001017b0();
      return;
    }
    *puVar2 = *param_2;
    *(undefined4 **)(pcVar6 + 8) = puVar2 + 1;
    return;
  }
  __n = (long)param_2 - (long)__src;
  if (__src == puVar2) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00101890;
    uVar5 = 0x1fffffffffffffff;
    if (uVar3 + 1 < 0x2000000000000000) {
      uVar5 = uVar3 + 1;
    }
    uVar5 = uVar5 << 2;
LAB_0010189a:
    __dest = (undefined4 *)operator_new(uVar5);
    lVar4 = uVar5 + (long)__dest;
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
    lVar4 = 0;
    __dest = (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)((long)__dest + __n);
  __n_00 = (long)puVar2 - (long)param_2;
  puVar2 = puVar1 + 1;
  *puVar1 = *param_3;
  if ((long)__n < 5) {
    if (__n == 4) {
      *__dest = *__src;
      if (4 < (long)__n_00) goto LAB_0010185b;
      puVar7 = (undefined4 *)((long)puVar2 + __n_00);
      if (__n_00 == 4) {
        puVar7 = __dest + 3;
        puVar1[1] = *param_2;
      }
    }
    else {
      if ((long)__n_00 < 5) {
        if (__n_00 == 4) {
          __n_00 = 4;
          puVar1[1] = *param_2;
        }
      }
      else {
        memcpy(puVar2,param_2,__n_00);
      }
      puVar7 = (undefined4 *)((long)puVar2 + __n_00);
      if (__src == (undefined4 *)0x0) goto LAB_00101874;
    }
  }
  else {
    memmove(__dest,__src,__n);
    if ((long)__n_00 < 5) {
      puVar7 = (undefined4 *)((long)puVar2 + __n_00);
      if (__n_00 == 4) {
        puVar7 = puVar1 + 2;
        puVar1[1] = *param_2;
      }
    }
    else {
LAB_0010185b:
      puVar7 = (undefined4 *)((long)puVar2 + __n_00);
      memcpy(puVar2,param_2,__n_00);
    }
  }
  operator_delete(__src);
LAB_00101874:
  *param_1 = __dest;
  param_1[1] = puVar7;
  param_1[2] = lVar4;
  return;
}



// ===== Function: FUN_001019a0 =====

void FUN_001019a0(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined4 **)(param_1 + 8) = puVar1 + 1;
    return;
  }
  FUN_001017b0();
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: __throw_length_error =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __libc_start_main =====

/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: operator.delete =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: operator.new =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __ostream_insert<char,std::char_traits<char>> =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::__ostream_insert<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,long param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: ios_base_library_init =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::ios_base_library_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: __gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ostream::operator<<(ostream *this,int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
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
  halt_baddata();
}



