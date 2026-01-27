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
  long in_stack_00000028;
  
  FUN_00101780();
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
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_58 = (undefined1  [16])0x0;
  local_5c = 0x1e;
                    /* try { // try from 001011dc to 0010127b has its CatchHandler @ 00101307 */
  FUN_00101990(local_58,&local_5c);
  local_5c = 10;
  FUN_00101990(local_58,&local_5c);
  local_5c = 0x14;
  FUN_00101990(local_58,&local_5c);
  uVar3 = local_58._8_8_;
  uVar2 = local_58._0_8_;
  if (local_58._0_8_ != local_58._8_8_) {
    lVar8 = local_58._8_8_ - local_58._0_8_;
    uVar13 = lVar8 >> 2;
    lVar1 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    FUN_001015e0(local_58._0_8_,local_58._8_8_,lVar1 * 2);
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
            if ((int *)uVar3 == piVar10) goto LAB_00101246;
            iVar6 = *piVar10;
            iVar7 = *piVar11;
            piVar4 = piVar11;
            piVar11 = piVar10;
            piVar12 = piVar10;
          } while (iVar7 <= iVar6);
        } while( true );
      }
    }
LAB_00101246:
    uVar9 = 0;
    do {
      poVar5 = (ostream *)std::ostream::operator<<((ostream *)std::cout,*(int *)(uVar2 + uVar9 * 4))
      ;
      std::__ostream_insert<char,std::char_traits<char>>(poVar5," ",1);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar13);
  }
  FUN_00101780(local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
    if (lVar3 == (long)(param_3 - 2) / 2) {
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
      if (param_2 == piVar4) {
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
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 0x41) {
    return;
  }
  puVar9 = param_2;
  if (param_3 == 0) {
LAB_00101716:
    for (lVar10 = (lVar4 >> 2) + -2 >> 1;
        FUN_00101410(param_1,lVar10,lVar4 >> 2,*(undefined4 *)((long)param_1 + lVar10 * 4)),
        lVar10 != 0; lVar10 = lVar10 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      uVar2 = *param_2;
      *param_2 = (uint)*param_1;
      FUN_00101410(param_1,0,(long)param_2 - (long)param_1 >> 2,uVar2);
    } while (4 < (long)param_2 - (long)param_1);
    return;
  }
LAB_00101610:
  uVar6 = *param_1;
  uVar2 = puVar9[-1];
  param_3 = param_3 + -1;
  puVar5 = (uint *)((long)param_1 + (lVar4 >> 3) * 4);
  uVar3 = *puVar5;
  uVar11 = (uint)uVar6;
  iVar12 = (int)(uVar6 >> 0x20);
  uVar6 = uVar6 & 0xffffffff;
  if (iVar12 < (int)uVar3) {
    if ((int)uVar3 < (int)uVar2) {
LAB_001016fb:
      *(uint *)param_1 = uVar3;
      *puVar5 = uVar11;
      uVar6 = (ulong)*(uint *)((long)param_1 + 4);
      iVar12 = (int)*param_1;
      uVar11 = puVar9[-1];
      goto LAB_00101654;
    }
    if (iVar12 < (int)uVar2) {
LAB_001016b4:
      *(uint *)param_1 = uVar2;
      puVar9[-1] = uVar11;
      iVar12 = (int)*param_1;
      uVar6 = (ulong)*(uint *)((long)param_1 + 4);
      goto LAB_00101654;
    }
  }
  else if ((int)uVar2 <= iVar12) {
    if ((int)uVar3 < (int)uVar2) goto LAB_001016b4;
    goto LAB_001016fb;
  }
  *param_1 = CONCAT44(uVar11,iVar12);
  uVar11 = puVar9[-1];
LAB_00101654:
  puVar5 = (uint *)((long)param_1 + 4);
  puVar8 = puVar9;
  puVar7 = puVar9;
  param_2 = (uint *)((long)param_1 + 4);
  if (iVar12 <= (int)uVar6) goto joined_r0x0010167e;
  do {
    do {
      puVar5 = puVar5 + 1;
      uVar6 = (ulong)*puVar5;
      puVar8 = puVar7;
      param_2 = puVar5;
    } while ((int)*puVar5 < iVar12);
joined_r0x0010167e:
    do {
      while (puVar7 = puVar8 + -1, iVar12 < (int)uVar11) {
        uVar11 = puVar8[-2];
        puVar8 = puVar7;
      }
      if (puVar7 <= param_2) {
        FUN_001015e0(param_2,puVar9,param_3);
        lVar4 = (long)param_2 - (long)param_1;
        if (lVar4 < 0x41) {
          return;
        }
        puVar9 = param_2;
        if (param_3 == 0) goto LAB_00101716;
        goto LAB_00101610;
      }
      *param_2 = uVar11;
      puVar5 = param_2 + 1;
      uVar11 = puVar8[-2];
      *puVar7 = (uint)uVar6;
      iVar12 = (int)*param_1;
      puVar1 = param_2 + 1;
      uVar6 = (ulong)*puVar1;
      puVar8 = puVar7;
      param_2 = puVar5;
    } while (iVar12 <= (int)*puVar1);
  } while( true );
}



// ===== Function: FUN_00101780 =====

void FUN_00101780(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}



// ===== Function: FUN_001017a0 =====

void FUN_001017a0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

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
      FUN_001017a0();
      return;
    }
    *puVar2 = *param_2;
    *(undefined4 **)(pcVar6 + 8) = puVar2 + 1;
    return;
  }
  __n = (long)param_2 - (long)__src;
  if (__src == puVar2) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00101880;
    uVar5 = 0x1fffffffffffffff;
    if (uVar3 + 1 < 0x2000000000000000) {
      uVar5 = uVar3 + 1;
    }
    uVar5 = uVar5 << 2;
LAB_0010188a:
    __dest = (undefined4 *)operator_new(uVar5);
    lVar4 = uVar5 + (long)__dest;
  }
  else {
    uVar5 = uVar3 * 2;
    if (uVar5 < uVar3) {
LAB_00101880:
      uVar5 = 0x7ffffffffffffffc;
      goto LAB_0010188a;
    }
    if (uVar5 != 0) {
      if (0x1fffffffffffffff < uVar5) {
        uVar5 = 0x1fffffffffffffff;
      }
      uVar5 = uVar5 * 4;
      goto LAB_0010188a;
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
      if (4 < (long)__n_00) goto LAB_0010184b;
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
      if (__src == (undefined4 *)0x0) goto LAB_00101864;
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
LAB_0010184b:
      puVar7 = (undefined4 *)((long)puVar2 + __n_00);
      memcpy(puVar2,param_2,__n_00);
    }
  }
  operator_delete(__src);
LAB_00101864:
  *param_1 = __dest;
  param_1[1] = puVar7;
  param_1[2] = lVar4;
  return;
}



// ===== Function: FUN_00101990 =====

void FUN_00101990(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined4 **)(param_1 + 8) = puVar1 + 1;
    return;
  }
  FUN_001017a0();
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



