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



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_00101249,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101190 =====

/* WARNING: Removing unreachable block (ram,0x001011a3) */
/* WARNING: Removing unreachable block (ram,0x001011af) */

void FUN_00101190(void)

{
  return;
}



// ===== Function: FUN_001011c0 =====

/* WARNING: Removing unreachable block (ram,0x001011e4) */
/* WARNING: Removing unreachable block (ram,0x001011f0) */

void FUN_001011c0(void)

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
    FUN_00101190();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_001011c0();
  return;
}



// ===== Function: FUN_00101249 =====

undefined8 FUN_00101249(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ostream *poVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  undefined4 local_4c;
  int *local_48;
  int *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (int *)0x0;
  local_40 = (int *)0x0;
  local_38 = 0;
  local_4c = 0x1e;
                    /* try { // try from 00101296 to 00101388 has its CatchHandler @ 001013ba */
  FUN_00101534(&local_48,&local_4c);
  local_4c = 10;
  FUN_00101534(&local_48,&local_4c);
  local_4c = 0x14;
  FUN_00101534(&local_48,&local_4c);
  piVar7 = local_40;
  piVar6 = local_48;
  if (local_48 == local_40) {
    if (local_48 == (int *)0x0) goto LAB_00101398;
  }
  else {
    lVar10 = (long)local_40 - (long)local_48;
    uVar13 = lVar10 >> 2;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    FUN_001016bd(local_48,local_40,lVar3 * 2);
    if (lVar10 < 0x41) {
      FUN_00101560(piVar6,piVar7);
    }
    else {
      piVar11 = piVar6 + 0x10;
      FUN_00101560(piVar6,piVar11);
      for (; piVar7 != piVar11; piVar11 = piVar11 + 1) {
        iVar1 = *piVar11;
        iVar2 = piVar11[-1];
        piVar8 = piVar11 + -1;
        piVar5 = piVar11;
        while (piVar4 = piVar8, iVar1 < iVar2) {
          piVar4[1] = iVar2;
          piVar8 = piVar4 + -1;
          piVar5 = piVar4;
          iVar2 = piVar4[-1];
        }
        *piVar5 = iVar1;
      }
    }
    uVar12 = 0;
    do {
      poVar9 = (ostream *)std::ostream::operator<<((ostream *)std::cout,piVar6[uVar12]);
      std::__ostream_insert<char,std::char_traits<char>>(poVar9," ",1);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar13);
  }
  operator_delete(piVar6);
LAB_00101398:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: FUN_001013f2 =====

void FUN_001013f2(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *__src;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *unaff_RBX;
  undefined4 *unaff_R13;
  size_t sVar5;
  undefined4 *unaff_R15;
  undefined1 uVar6;
  ulong local_48;
  
  puVar1 = (undefined4 *)param_1[1];
  __src = (undefined4 *)*param_1;
  uVar2 = (long)puVar1 - (long)__src >> 2;
  uVar6 = uVar2 == 0x1fffffffffffffff;
  if ((bool)uVar6) {
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  else {
    uVar4 = 1;
    if (puVar1 != __src) {
      uVar4 = uVar2;
    }
    uVar3 = uVar2 + uVar4;
    if (CARRY8(uVar2,uVar4)) {
      sVar5 = (long)param_2 - (long)__src;
      local_48 = 0x1fffffffffffffff;
LAB_001014ab:
      unaff_R13 = (undefined4 *)operator_new(local_48 * 4);
    }
    else {
      local_48 = 0x1fffffffffffffff;
      if (uVar3 < 0x2000000000000000) {
        local_48 = uVar3;
      }
      sVar5 = (long)param_2 - (long)__src;
      unaff_R13 = (undefined4 *)0x0;
      if (uVar3 != 0) goto LAB_001014ab;
    }
    unaff_R15 = (undefined4 *)((long)unaff_R13 + sVar5);
    *unaff_R15 = *param_3;
    uVar6 = sVar5 == 4;
    unaff_RBX = param_1;
    if (4 < (long)sVar5) {
      memmove(unaff_R13,__src,sVar5);
      goto LAB_001014e3;
    }
  }
  if ((bool)uVar6) {
    *unaff_R13 = *__src;
  }
LAB_001014e3:
  sVar5 = (long)puVar1 - (long)param_2;
  if ((long)sVar5 < 5) {
    if (sVar5 == 4) {
      unaff_R15[1] = *param_2;
    }
  }
  else {
    memcpy(unaff_R15 + 1,param_2,sVar5);
  }
  if (__src != (undefined4 *)0x0) {
    operator_delete(__src);
  }
  *unaff_RBX = unaff_R13;
  unaff_RBX[1] = (long)(unaff_R15 + 1) + sVar5;
  unaff_RBX[2] = unaff_R13 + local_48;
  return;
}



// ===== Function: FUN_00101534 =====

void FUN_00101534(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return;
  }
  FUN_001013f2(param_1,puVar1,param_2);
  return;
}



// ===== Function: FUN_00101560 =====

void FUN_00101560(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  
  if (param_1 == param_2) {
    return;
  }
  for (piVar6 = param_1 + 1; param_2 != piVar6; piVar6 = piVar6 + 1) {
    iVar1 = *piVar6;
    if (iVar1 < *param_1) {
      __n = (long)piVar6 - (long)param_1;
      if ((long)__n < 5) {
        if (__n == 4) {
          *piVar6 = *param_1;
        }
      }
      else {
        memmove((void *)((4 - __n) + (long)piVar6),param_1,__n);
      }
      *param_1 = iVar1;
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



// ===== Function: FUN_001015f6 =====

void FUN_001015f6(long param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)(param_3 - 1) / 2;
  lVar4 = param_2;
  if (param_2 < lVar5) {
    do {
      lVar1 = lVar4 * 2 + 2;
      lVar3 = lVar4 * 2 + 1;
      if (*(int *)(param_1 + -4 + lVar1 * 4) <= *(int *)(param_1 + lVar1 * 4)) {
        lVar3 = lVar1;
      }
      *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + lVar3 * 4);
      lVar4 = lVar3;
    } while (lVar3 < lVar5);
    if ((param_3 & 1) == 0) goto LAB_00101650;
  }
  else {
    lVar3 = param_2;
    if ((param_3 & 1) != 0) goto LAB_001016b8;
LAB_00101650:
    lVar3 = lVar4;
    if ((long)(param_3 - 2) / 2 == lVar4) {
      lVar3 = lVar4 * 2 + 1;
      *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + lVar3 * 4);
    }
  }
  lVar4 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  while (param_2 < lVar3) {
    lVar5 = lVar4 >> 1;
    iVar2 = *(int *)(param_1 + lVar5 * 4);
    if (param_4 <= iVar2) break;
    *(int *)(param_1 + lVar3 * 4) = iVar2;
    lVar4 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    lVar3 = lVar5;
  }
LAB_001016b8:
  *(int *)(param_1 + lVar3 * 4) = param_4;
  return;
}



// ===== Function: FUN_001016bd =====

void FUN_001016bd(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 0x41) {
    return;
  }
  piVar7 = param_2;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      piVar3 = param_1 + ((lVar4 >> 2) - (lVar4 >> 0x3f) >> 1);
      param_2 = param_1 + 1;
      iVar1 = param_1[1];
      iVar2 = *piVar3;
      piVar6 = piVar7;
      if (iVar1 < iVar2) {
        iVar5 = piVar7[-1];
        if (iVar2 < iVar5) {
          iVar1 = *param_1;
          *param_1 = iVar2;
          *piVar3 = iVar1;
        }
        else if (iVar1 < iVar5) {
          iVar1 = *param_1;
          *param_1 = iVar5;
          piVar7[-1] = iVar1;
        }
        else {
          iVar2 = *param_1;
          *param_1 = iVar1;
          param_1[1] = iVar2;
        }
      }
      else {
        iVar5 = piVar7[-1];
        if (iVar1 < iVar5) {
          iVar2 = *param_1;
          *param_1 = iVar1;
          param_1[1] = iVar2;
        }
        else if (iVar2 < iVar5) {
          iVar1 = *param_1;
          *param_1 = iVar5;
          piVar7[-1] = iVar1;
        }
        else {
          iVar1 = *param_1;
          *param_1 = iVar2;
          *piVar3 = iVar1;
        }
      }
      while( true ) {
        iVar2 = *param_1;
        iVar1 = *param_2;
        while (iVar1 < iVar2) {
          param_2 = param_2 + 1;
          iVar1 = *param_2;
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
        if (piVar6 <= param_2) break;
        *param_2 = iVar5;
        *piVar6 = iVar1;
        param_2 = param_2 + 1;
      }
      FUN_001016bd(param_2,piVar7,param_3);
      lVar4 = (long)param_2 - (long)param_1;
      if (lVar4 < 0x41) {
        return;
      }
      piVar7 = param_2;
    } while (param_3 != 0);
  }
  for (lVar8 = ((lVar4 >> 2) + -2) / 2; FUN_001015f6(param_1,lVar8,lVar4 >> 2,param_1[lVar8]),
      lVar8 != 0; lVar8 = lVar8 + -1) {
  }
  lVar4 = (long)param_2 - (long)param_1;
  while (4 < lVar4) {
    param_2 = param_2 + -1;
    iVar1 = *param_2;
    *param_2 = *param_1;
    lVar4 = (long)param_2 - (long)param_1;
    FUN_001015f6(param_1,0,lVar4 >> 2,iVar1);
  }
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



