// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00103fd8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103fd8)();
  }
  return;
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



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc0)
            (FUN_00101190,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001010d0 =====

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void FUN_001010d0(void)

{
  return;
}



// ===== Function: FUN_00101100 =====

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

void FUN_00101100(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104048 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104038);
    }
    FUN_001010d0();
    DAT_00104048 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101100();
  return;
}



// ===== Function: FUN_00101190 =====

undefined8 FUN_00101190(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  ostream *poVar4;
  
  puVar1 = (undefined4 *)operator_new(4);
  *puVar1 = 0x1e;
                    /* try { // try from 001011a8 to 001011b1 has its CatchHandler @ 0010129c */
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = 0xa0000001e;
  operator_delete(puVar1);
                    /* try { // try from 001011ca to 001011d3 has its CatchHandler @ 00101286 */
  piVar3 = (int *)operator_new(0x10);
  piVar3[2] = 0x14;
  *(undefined8 *)piVar3 = *puVar2;
  operator_delete(puVar2);
                    /* try { // try from 001011f3 to 0010120d has its CatchHandler @ 0010129e */
  FUN_001012c0(piVar3,piVar3 + 3,2);
  FUN_00101500(piVar3,piVar3 + 3);
                    /* try { // try from 00101210 to 00101275 has its CatchHandler @ 001012a0 */
  poVar4 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00103fc8,*piVar3);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
  poVar4 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00103fc8,piVar3[1]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
  poVar4 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00103fc8,piVar3[2]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
  operator_delete(piVar3);
  return 0;
}



// ===== Function: FUN_001012c0 =====

void FUN_001012c0(int *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  undefined1 local_31;
  
  uVar10 = (long)param_2 - (long)param_1 >> 2;
  if (0x10 < (long)uVar10) {
    piVar1 = param_1 + 1;
    do {
      bVar14 = param_3 == 0;
      param_3 = param_3 + -1;
      if (bVar14) {
        FUN_00101690(param_1,param_2,&local_31);
        do {
          iVar3 = param_2[-1];
          param_2[-1] = *param_1;
          param_2 = param_2 + -1;
          uVar10 = (long)param_2 - (long)param_1;
          lVar11 = (long)uVar10 >> 2;
          if (lVar11 < 3) {
            uVar9 = 0;
          }
          else {
            uVar13 = 0;
            do {
              if (param_1[uVar13 * 2 + 2] < param_1[uVar13 * 2 + 1]) {
                uVar9 = uVar13 * 2 + 1;
              }
              else {
                uVar9 = uVar13 * 2 + 2;
              }
              param_1[uVar13] = param_1[uVar9];
              uVar13 = uVar9;
            } while ((long)uVar9 < (lVar11 - (lVar11 + -1 >> 0x3f)) + -1 >> 1);
          }
          if (((uVar10 & 4) == 0) && (uVar9 == lVar11 + -2 >> 1)) {
            param_1[uVar9] = param_1[uVar9 * 2 + 1];
            uVar9 = uVar9 * 2 + 1;
          }
          if (0 < (long)uVar9) {
            do {
              uVar13 = uVar9 - 1;
              uVar12 = uVar13 >> 1;
              if (iVar3 <= param_1[uVar12]) goto LAB_00101402;
              param_1[uVar9] = param_1[uVar12];
              uVar9 = uVar12;
            } while (1 < uVar13);
            uVar9 = 0;
          }
LAB_00101402:
          param_1[uVar9] = iVar3;
          if ((long)uVar10 < 5) {
            return;
          }
        } while( true );
      }
      uVar10 = uVar10 >> 1;
      iVar3 = param_1[1];
      iVar4 = param_1[uVar10];
      iVar5 = param_2[-1];
      piVar6 = piVar1;
      piVar8 = param_2;
      if (iVar3 < iVar4) {
        if (iVar4 < iVar5) {
          iVar3 = *param_1;
          *param_1 = iVar4;
          param_1[uVar10] = iVar3;
        }
        else {
          iVar4 = *param_1;
          if (iVar3 < iVar5) {
            *param_1 = iVar5;
            param_2[-1] = iVar4;
          }
          else {
            *param_1 = iVar3;
            param_1[1] = iVar4;
          }
        }
      }
      else if (iVar3 < iVar5) {
        iVar4 = *param_1;
        *param_1 = iVar3;
        param_1[1] = iVar4;
      }
      else {
        iVar3 = *param_1;
        if (iVar4 < iVar5) {
          *param_1 = iVar5;
          param_2[-1] = iVar3;
        }
        else {
          *param_1 = iVar4;
          param_1[uVar10] = iVar3;
        }
      }
      while( true ) {
        lVar11 = (long)piVar6 + (-4 - (long)param_1);
        do {
          piVar7 = piVar6;
          iVar3 = *piVar7;
          lVar11 = lVar11 + 4;
          piVar6 = piVar7 + 1;
        } while (iVar3 < *param_1);
        do {
          piVar2 = piVar8 + -1;
          piVar8 = piVar8 + -1;
        } while (*param_1 < *piVar2);
        if (piVar8 <= piVar7) break;
        *piVar7 = *piVar2;
        *piVar8 = iVar3;
      }
      FUN_001012c0(piVar7,param_2,param_3);
      uVar10 = lVar11 >> 2;
      param_2 = piVar7;
    } while (0x10 < (long)uVar10);
  }
  return;
}



// ===== Function: FUN_00101500 =====

void FUN_00101500(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  int *piVar6;
  ulong __n_00;
  
  if ((long)param_2 - (long)param_1 < 0x41) {
    if (param_1 != param_2) {
      piVar4 = param_1 + 1;
      piVar6 = param_1;
      while (piVar1 = piVar4, piVar1 != param_2) {
        iVar2 = piVar6[1];
        if (iVar2 < *param_1) {
          __n = (long)piVar1 - (long)param_1;
          piVar4 = param_1;
          if ((long)__n >> 2 < 2) {
            if (__n == 4) {
              piVar6[1] = *param_1;
            }
          }
          else {
            memmove(piVar6 + (2 - ((long)__n >> 2)),param_1,__n);
          }
        }
        else {
          iVar3 = *piVar6;
          piVar4 = piVar1;
          while (iVar2 < iVar3) {
            *piVar4 = iVar3;
            piVar6 = piVar4 + -2;
            piVar4 = piVar4 + -1;
            iVar3 = *piVar6;
          }
        }
        *piVar4 = iVar2;
        piVar6 = piVar1;
        piVar4 = piVar1 + 1;
      }
    }
  }
  else {
    __n_00 = 4;
    piVar6 = param_1;
    piVar4 = param_1 + 1;
    do {
      piVar1 = (int *)((long)param_1 + __n_00);
      iVar2 = *(int *)((long)param_1 + __n_00);
      if (iVar2 < *param_1) {
        piVar5 = param_1;
        if (__n_00 < 5) {
          piVar6[1] = *param_1;
        }
        else {
          memmove(param_1 + 1,param_1,__n_00);
        }
      }
      else {
        iVar3 = *piVar6;
        piVar5 = piVar1;
        piVar6 = piVar4;
        while (iVar2 < iVar3) {
          *piVar6 = iVar3;
          piVar5 = piVar6 + -1;
          iVar3 = piVar6[-2];
          piVar6 = piVar5;
        }
      }
      *piVar5 = iVar2;
      __n_00 = __n_00 + 4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar1;
    } while (__n_00 != 0x40);
    for (param_1 = param_1 + 0x10; param_1 != param_2; param_1 = param_1 + 1) {
      iVar3 = *param_1;
      iVar2 = param_1[-1];
      piVar6 = param_1;
      while (iVar3 < iVar2) {
        *piVar6 = iVar2;
        piVar4 = piVar6 + -2;
        piVar6 = piVar6 + -1;
        iVar2 = *piVar4;
      }
      *piVar6 = iVar3;
    }
  }
  return;
}



// ===== Function: FUN_00101690 =====

void FUN_00101690(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  
  lVar4 = param_2 - param_1 >> 2;
  if (1 < lVar4) {
    uVar6 = lVar4 - 2U >> 1;
    uVar5 = lVar4 - 1U >> 1;
    if ((param_2 - param_1 & 4U) == 0) {
      uVar7 = lVar4 - 2U | 1;
      uVar8 = uVar6;
      do {
        iVar1 = *(int *)(param_1 + uVar8 * 4);
        uVar3 = uVar8;
        while ((long)uVar3 < (long)uVar5) {
          if (*(int *)(param_1 + 8 + uVar3 * 8) < *(int *)(param_1 + 4 + uVar3 * 8)) {
            uVar9 = uVar3 * 2 + 1;
          }
          else {
            uVar9 = uVar3 * 2 + 2;
          }
          *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar9 * 4);
          uVar3 = uVar9;
        }
        if (uVar3 == uVar6) {
          *(undefined4 *)(param_1 + uVar6 * 4) = *(undefined4 *)(param_1 + uVar7 * 4);
          uVar3 = uVar7;
        }
        while ((long)uVar8 < (long)uVar3) {
          uVar9 = (long)((uVar3 - ((long)(uVar3 - 1) >> 0x3f)) + -1) >> 1;
          iVar2 = *(int *)(param_1 + uVar9 * 4);
          if (iVar1 <= iVar2) break;
          *(int *)(param_1 + uVar3 * 4) = iVar2;
          uVar3 = uVar9;
        }
        *(int *)(param_1 + uVar3 * 4) = iVar1;
        bVar10 = uVar8 != 0;
        uVar8 = uVar8 - 1;
      } while (bVar10);
    }
    else {
      do {
        iVar1 = *(int *)(param_1 + uVar6 * 4);
        uVar8 = uVar6;
        uVar7 = uVar6;
        if ((long)uVar6 < (long)uVar5) {
          do {
            if (*(int *)(param_1 + 8 + uVar7 * 8) < *(int *)(param_1 + 4 + uVar7 * 8)) {
              uVar8 = uVar7 * 2 + 1;
            }
            else {
              uVar8 = uVar7 * 2 + 2;
            }
            *(undefined4 *)(param_1 + uVar7 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
            uVar7 = uVar8;
          } while ((long)uVar8 < (long)uVar5);
          while ((long)uVar6 < (long)uVar8) {
            uVar7 = (long)((uVar8 - ((long)(uVar8 - 1) >> 0x3f)) + -1) >> 1;
            iVar2 = *(int *)(param_1 + uVar7 * 4);
            if (iVar1 <= iVar2) break;
            *(int *)(param_1 + uVar8 * 4) = iVar2;
            uVar8 = uVar7;
          }
        }
        *(int *)(param_1 + uVar8 * 4) = iVar1;
        bVar10 = uVar6 != 0;
        uVar6 = uVar6 - 1;
      } while (bVar10);
    }
  }
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
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



