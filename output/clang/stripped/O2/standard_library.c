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
                    /* try { // try from 001011a8 to 001011b1 has its CatchHandler @ 0010128e */
  puVar2 = (undefined8 *)operator_new(8);
  *puVar2 = 0xa0000001e;
  operator_delete(puVar1);
                    /* try { // try from 001011ca to 001011d3 has its CatchHandler @ 00101286 */
  piVar3 = (int *)operator_new(0x10);
  piVar3[2] = 0x14;
  *(undefined8 *)piVar3 = *puVar2;
  operator_delete(puVar2);
                    /* try { // try from 001011f3 to 0010120d has its CatchHandler @ 00101290 */
  FUN_001012b0(piVar3,piVar3 + 3,2);
  FUN_001015f0(piVar3,piVar3 + 3);
                    /* try { // try from 00101210 to 00101275 has its CatchHandler @ 00101292 */
  poVar4 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00103fc8,*piVar3);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
  poVar4 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00103fc8,piVar3[1]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
  poVar4 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00103fc8,piVar3[2]);
  std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
  operator_delete(piVar3);
  return 0;
}



// ===== Function: FUN_001012b0 =====

void FUN_001012b0(int *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  bool bVar15;
  
  uVar13 = (long)param_2 - (long)param_1;
  uVar6 = (long)uVar13 >> 2;
  if (0x10 < (long)uVar6) {
    if (param_3 != 0) {
      piVar9 = param_2;
      do {
        uVar6 = uVar6 >> 1;
        iVar2 = param_1[1];
        iVar5 = param_1[uVar6];
        iVar3 = piVar9[-1];
        if (iVar2 < iVar5) {
          if (iVar5 < iVar3) {
            iVar2 = *param_1;
            *param_1 = iVar5;
            param_1[uVar6] = iVar2;
          }
          else {
            iVar5 = *param_1;
            if (iVar3 <= iVar2) goto LAB_00101340;
            *param_1 = iVar3;
            piVar9[-1] = iVar5;
          }
        }
        else if (iVar2 < iVar3) {
          iVar5 = *param_1;
LAB_00101340:
          *param_1 = iVar2;
          param_1[1] = iVar5;
        }
        else {
          iVar2 = *param_1;
          if (iVar5 < iVar3) {
            *param_1 = iVar3;
            piVar9[-1] = iVar2;
          }
          else {
            *param_1 = iVar5;
            param_1[uVar6] = iVar2;
          }
        }
        param_3 = param_3 + -1;
        piVar7 = piVar9;
        piVar14 = param_1 + 1;
        while( true ) {
          uVar13 = (-4 - (long)param_1) + (long)piVar14;
          do {
            param_2 = piVar14;
            iVar2 = *param_2;
            piVar14 = param_2 + 1;
            uVar13 = uVar13 + 4;
          } while (iVar2 < *param_1);
          do {
            piVar1 = piVar7 + -1;
            piVar7 = piVar7 + -1;
          } while (*param_1 < *piVar1);
          if (piVar7 <= param_2) break;
          *param_2 = *piVar1;
          *piVar7 = iVar2;
        }
        FUN_001012b0(param_2,piVar9,param_3);
        uVar6 = (long)uVar13 >> 2;
        if ((long)uVar6 < 0x11) {
          return;
        }
        piVar9 = param_2;
      } while (param_3 != 0);
    }
    uVar8 = uVar6 - 2 >> 1;
    uVar6 = uVar6 - 1;
    uVar10 = uVar8;
    do {
      iVar2 = param_1[uVar10];
      uVar4 = uVar10;
      while ((long)uVar4 < (long)(uVar6 >> 1)) {
        if (param_1[uVar4 * 2 + 2] < param_1[uVar4 * 2 + 1]) {
          uVar12 = uVar4 * 2 + 1;
        }
        else {
          uVar12 = uVar4 * 2 + 2;
        }
        param_1[uVar4] = param_1[uVar12];
        uVar4 = uVar12;
      }
      if (((uVar13 & 4) == 0) && (uVar4 == uVar8)) {
        param_1[uVar8] = param_1[uVar6];
        uVar4 = uVar6;
      }
      while ((long)uVar10 < (long)uVar4) {
        uVar12 = (long)((uVar4 - ((long)(uVar4 - 1) >> 0x3f)) + -1) >> 1;
        if (iVar2 <= param_1[uVar12]) break;
        param_1[uVar4] = param_1[uVar12];
        uVar4 = uVar12;
      }
      param_1[uVar4] = iVar2;
      bVar15 = uVar10 != 0;
      uVar10 = uVar10 - 1;
    } while (bVar15);
    while (4 < (long)uVar13) {
      iVar2 = param_2[-1];
      param_2[-1] = *param_1;
      param_2 = param_2 + -1;
      uVar13 = (long)param_2 - (long)param_1;
      lVar11 = (long)uVar13 >> 2;
      if (lVar11 < 3) {
        uVar6 = 0;
      }
      else {
        uVar10 = 0;
        do {
          if (param_1[uVar10 * 2 + 2] < param_1[uVar10 * 2 + 1]) {
            uVar6 = uVar10 * 2 + 1;
          }
          else {
            uVar6 = uVar10 * 2 + 2;
          }
          param_1[uVar10] = param_1[uVar6];
          uVar10 = uVar6;
        } while ((long)uVar6 < (lVar11 - (lVar11 + -1 >> 0x3f)) + -1 >> 1);
      }
      if (((uVar13 & 4) == 0) && (uVar6 == lVar11 + -2 >> 1)) {
        param_1[uVar6] = param_1[uVar6 * 2 + 1];
        uVar6 = uVar6 * 2 + 1;
      }
      if (0 < (long)uVar6) {
        do {
          uVar10 = uVar6 - 1;
          uVar8 = uVar10 >> 1;
          if (iVar2 <= param_1[uVar8]) goto LAB_00101502;
          param_1[uVar6] = param_1[uVar8];
          uVar6 = uVar8;
        } while (1 < uVar10);
        uVar6 = 0;
      }
LAB_00101502:
      param_1[uVar6] = iVar2;
    }
  }
  return;
}



// ===== Function: FUN_001015f0 =====

void FUN_001015f0(int *param_1,int *param_2)

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



