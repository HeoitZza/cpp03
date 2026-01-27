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



// ===== Function: FUN_00101140 =====

undefined8 FUN_00101140(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  ostream *poVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
                    /* try { // try from 00101189 to 00101253 has its CatchHandler @ 00101273 */
  FUN_00101704(&local_48,&local_4c);
  local_4c = 10;
  FUN_00101704(&local_48,&local_4c);
  local_4c = 0x14;
  FUN_00101704(&local_48,&local_4c);
  piVar4 = local_40;
  piVar3 = local_48;
  lVar8 = (long)local_40 - (long)local_48;
  uVar10 = lVar8 >> 2;
  if (local_48 != local_40) {
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    FUN_001014b2(local_48,local_40,lVar2 * 2);
    if (lVar8 < 0x41) {
      FUN_00101436(piVar3,piVar4);
    }
    else {
      piVar5 = piVar3 + 0x10;
      FUN_00101436(piVar3,piVar5);
      for (; piVar4 != piVar5; piVar5 = piVar5 + 1) {
        iVar1 = *piVar5;
        for (piVar7 = piVar5; iVar1 < piVar7[-1]; piVar7 = piVar7 + -1) {
          *piVar7 = piVar7[-1];
        }
        *piVar7 = iVar1;
      }
    }
  }
  for (uVar9 = 0; uVar9 != uVar10; uVar9 = uVar9 + 1) {
    poVar6 = (ostream *)std::ostream::operator<<((ostream *)std::cout,piVar3[uVar9]);
    std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
  }
  FUN_001015d0(&local_48);
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
            (FUN_00101140,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001012e0 =====

/* WARNING: Removing unreachable block (ram,0x001012f3) */
/* WARNING: Removing unreachable block (ram,0x001012ff) */

void FUN_001012e0(void)

{
  return;
}



// ===== Function: FUN_00101310 =====

/* WARNING: Removing unreachable block (ram,0x00101334) */
/* WARNING: Removing unreachable block (ram,0x00101340) */

void FUN_00101310(void)

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
    FUN_001012e0();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101310();
  return;
}



// ===== Function: FUN_00101399 =====

void FUN_00101399(long param_1,long param_2,ulong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_2;
  while (lVar3 < (long)(param_3 - 1) / 2) {
    lVar4 = lVar3 + 1;
    lVar5 = lVar4 * 2 + -1;
    if (*(int *)(param_1 + -4 + lVar4 * 8) <= *(int *)(param_1 + lVar4 * 8)) {
      lVar5 = lVar4 * 2;
    }
    *(undefined4 *)(param_1 + lVar3 * 4) = *(undefined4 *)(param_1 + lVar5 * 4);
    lVar3 = lVar5;
  }
  lVar4 = lVar3;
  if (((param_3 & 1) == 0) && (lVar3 == (long)(param_3 - 2) / 2)) {
    lVar4 = lVar3 * 2 + 1;
    *(undefined4 *)(param_1 + lVar3 * 4) = *(undefined4 *)(param_1 + lVar4 * 4);
  }
  while( true ) {
    lVar3 = (lVar4 + -1) / 2;
    piVar1 = (int *)(param_1 + lVar4 * 4);
    if ((lVar4 <= param_2) || (iVar2 = *(int *)(param_1 + lVar3 * 4), param_4 <= iVar2)) break;
    *piVar1 = iVar2;
    lVar4 = lVar3;
  }
  *piVar1 = param_4;
  return;
}



// ===== Function: FUN_00101436 =====

void FUN_00101436(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  size_t __n;
  int *piVar3;
  
  if (param_1 != param_2) {
    for (piVar3 = param_1 + 1; param_2 != piVar3; piVar3 = piVar3 + 1) {
      iVar1 = *piVar3;
      piVar2 = piVar3;
      if (iVar1 < *param_1) {
        __n = (long)piVar3 - (long)param_1;
        if ((long)__n < 5) {
          if (__n == 4) {
            *piVar3 = *param_1;
          }
        }
        else {
          memmove((void *)((4 - __n) + (long)piVar3),param_1,__n);
        }
        *param_1 = iVar1;
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



// ===== Function: FUN_001014b2 =====

void FUN_001014b2(int *param_1,int *param_2,long param_3)

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
  
  piVar9 = param_1 + 1;
  do {
    lVar5 = (long)param_2 - (long)param_1;
    if (lVar5 < 0x41) {
      return;
    }
    if (param_3 == 0) {
      for (lVar10 = (lVar5 >> 2) + -2 >> 1; FUN_00101399(param_1,lVar10,lVar5 >> 2,param_1[lVar10]),
          lVar10 != 0; lVar10 = lVar10 + -1) {
      }
      while (piVar9 = param_2 + -1, 4 < (long)param_2 - (long)param_1) {
        iVar1 = *piVar9;
        *piVar9 = *param_1;
        FUN_00101399(param_1,0,(long)piVar9 - (long)param_1 >> 2,iVar1);
        param_2 = piVar9;
      }
      return;
    }
    iVar1 = param_1[1];
    iVar2 = param_2[-1];
    iVar3 = *param_1;
    iVar4 = param_1[lVar5 >> 3];
    piVar6 = param_2;
    piVar7 = piVar9;
    if (iVar1 < iVar4) {
      if (iVar4 < iVar2) {
LAB_00101575:
        *param_1 = iVar4;
        param_1[lVar5 >> 3] = iVar3;
      }
      else {
        if (iVar2 <= iVar1) goto LAB_00101560;
LAB_0010156e:
        *param_1 = iVar2;
        param_2[-1] = iVar3;
      }
    }
    else {
      if (iVar2 <= iVar1) {
        if (iVar4 < iVar2) goto LAB_0010156e;
        goto LAB_00101575;
      }
LAB_00101560:
      *param_1 = iVar1;
      param_1[1] = iVar3;
    }
    while( true ) {
      do {
        piVar8 = piVar7;
        iVar1 = *piVar8;
        piVar7 = piVar8 + 1;
      } while (iVar1 < *param_1);
      do {
        piVar6 = piVar6 + -1;
      } while (*param_1 < *piVar6);
      if (piVar6 <= piVar8) break;
      *piVar8 = *piVar6;
      *piVar6 = iVar1;
      piVar7 = piVar8 + 1;
    }
    param_3 = param_3 + -1;
    FUN_001014b2(piVar8,param_2,param_3);
    param_2 = piVar8;
  } while( true );
}



// ===== Function: FUN_001015d0 =====

void FUN_001015d0(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}



// ===== Function: FUN_001015e2 =====

void FUN_001015e2(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *__src;
  ulong uVar2;
  undefined4 *__dest;
  ulong uVar3;
  long lVar4;
  undefined4 *extraout_RDX;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  undefined4 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  uVar3 = 0x1fffffffffffffff;
  puVar8 = *(undefined4 **)(param_1 + 8);
  __src = *(undefined4 **)param_1;
  uVar5 = (long)puVar8 - (long)__src >> 2;
  if (uVar5 == 0x1fffffffffffffff) {
    param_1 = s_vector___M_realloc_insert_00102004;
    std::__throw_length_error(s_vector___M_realloc_insert_00102004);
    param_3 = extraout_RDX;
  }
  uVar2 = 1;
  if (puVar8 != __src) {
    uVar2 = uVar5;
  }
  uVar6 = uVar5 + uVar2;
  __n = (long)param_2 - (long)__src;
  if (!CARRY8(uVar5,uVar2)) {
    __dest = (undefined4 *)0x0;
    uVar3 = uVar6;
    if (uVar6 == 0) goto LAB_00101683;
    if (0x1fffffffffffffff < uVar6) {
      uVar3 = 0x1fffffffffffffff;
    }
  }
  __dest = (undefined4 *)operator_new(uVar3 * 4);
LAB_00101683:
  puVar1 = (undefined4 *)((long)__dest + __n);
  *puVar1 = *param_3;
  if ((long)__n < 5) {
    if (__n == 4) {
      *__dest = *__src;
    }
  }
  else {
    memmove(__dest,__src,__n);
  }
  lVar7 = (long)puVar8 - (long)param_2;
  lVar4 = lVar7;
  puVar8 = puVar1 + 1;
  if (lVar7 < 5) {
    if (lVar7 == 4) {
      puVar1[1] = *param_2;
    }
  }
  else {
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((long)param_2 + (ulong)bVar9 * -2 + 1);
      puVar8 = (undefined4 *)((long)puVar8 + (ulong)bVar9 * -2 + 1);
    }
  }
  if (__src != (undefined4 *)0x0) {
    operator_delete(__src);
  }
  *(undefined4 **)param_1 = __dest;
  *(undefined1 **)(param_1 + 8) = (undefined1 *)(lVar7 + (long)(puVar1 + 1));
  *(undefined4 **)(param_1 + 0x10) = __dest + uVar3;
  return;
}



// ===== Function: FUN_00101704 =====

void FUN_00101704(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined4 **)(param_1 + 8) = puVar1 + 1;
    return;
  }
  FUN_001015e2();
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



