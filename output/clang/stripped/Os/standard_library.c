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



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fc0)
            (FUN_001011bc,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101100 =====

/* WARNING: Removing unreachable block (ram,0x00101113) */
/* WARNING: Removing unreachable block (ram,0x0010111f) */

void FUN_00101100(void)

{
  return;
}



// ===== Function: FUN_00101130 =====

/* WARNING: Removing unreachable block (ram,0x00101154) */
/* WARNING: Removing unreachable block (ram,0x00101160) */

void FUN_00101130(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104060 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104050);
    }
    FUN_00101100();
    DAT_00104060 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101130();
  return;
}



// ===== Function: FUN_001011bc =====

undefined8 FUN_001011bc(void)

{
  long lVar1;
  undefined *this;
  undefined4 *puVar2;
  ulong uVar3;
  ostream *poVar4;
  undefined4 *puVar5;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *puStack_30;
  undefined4 *local_28;
  
  local_38 = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_3c = 0x1e;
                    /* try { // try from 001011e5 to 001011eb has its CatchHandler @ 00101307 */
  FUN_00101326(&local_38,0);
  local_3c = 10;
  if (puStack_30 == local_28) {
                    /* try { // try from 00101214 to 00101222 has its CatchHandler @ 00101305 */
    FUN_00101326(&local_38,local_28,&local_3c);
  }
  else {
    *puStack_30 = 10;
    puStack_30 = puStack_30 + 1;
  }
  local_3c = 0x14;
  if (puStack_30 == local_28) {
                    /* try { // try from 0010124b to 00101259 has its CatchHandler @ 00101303 */
    FUN_00101326(&local_38,local_28,&local_3c);
  }
  else {
    *puStack_30 = 0x14;
    puStack_30 = puStack_30 + 1;
  }
  puVar5 = puStack_30;
  puVar2 = local_38;
  if (local_38 != puStack_30) {
    uVar3 = (long)puStack_30 - (long)local_38 >> 2;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
                    /* try { // try from 00101280 to 00101295 has its CatchHandler @ 00101309 */
    FUN_00101485(local_38,puStack_30,((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e);
    FUN_00101568(puVar2,puVar5);
    this = PTR_cout_00103fc8;
    puVar5 = local_38;
    if (puStack_30 != local_38) {
      uVar3 = 0;
      do {
                    /* try { // try from 001012b7 to 001012ce has its CatchHandler @ 0010130b */
        poVar4 = (ostream *)std::ostream::operator<<((ostream *)this,local_38[uVar3]);
        std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
        uVar3 = uVar3 + 1;
        puVar5 = local_38;
      } while (uVar3 < (ulong)((long)puStack_30 - (long)local_38 >> 2));
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    operator_delete(puVar5);
  }
  return 0;
}



// ===== Function: FUN_00101326 =====

void FUN_00101326(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *__src;
  long lVar1;
  long lVar2;
  undefined4 *__dest;
  size_t sVar3;
  undefined4 *__dest_00;
  
  lVar2 = FUN_0010141a(param_1,1,"vector::_M_realloc_insert");
  __src = (undefined4 *)*param_1;
  lVar1 = param_1[1];
  sVar3 = (long)param_2 - (long)__src;
  if (lVar2 == 0) {
    __dest = (undefined4 *)0x0;
  }
  else {
    __dest = (undefined4 *)FUN_0010145e(param_1,lVar2,0);
  }
  __dest[(long)sVar3 >> 2] = *param_3;
  if ((long)sVar3 < 5) {
    if (sVar3 == 4) {
      *__dest = *__src;
    }
  }
  else {
    memmove(__dest,__src,sVar3);
  }
  __dest_00 = (undefined4 *)((long)__dest + sVar3 + 4);
  sVar3 = lVar1 - (long)param_2;
  if ((long)sVar3 < 5) {
    if (sVar3 == 4) {
      *__dest_00 = *param_2;
    }
  }
  else {
    memmove(__dest_00,param_2,sVar3);
  }
  if (__src != (undefined4 *)0x0) {
    operator_delete(__src);
  }
  *param_1 = __dest;
  param_1[1] = (long)__dest_00 + sVar3;
  param_1[2] = __dest + lVar2;
  return;
}



// ===== Function: FUN_0010141a =====

void * FUN_0010141a(long *param_1,ulong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 uStack_4a;
  undefined1 uStack_49;
  int *piStack_48;
  
  uVar8 = param_1[1] - *param_1 >> 2;
  if (param_2 <= 0x1fffffffffffffff - uVar8) {
    if (param_2 < uVar8) {
      param_2 = uVar8;
    }
    pvVar3 = (void *)(param_2 + uVar8);
    if ((void *)0x1ffffffffffffffe < pvVar3) {
      pvVar3 = (void *)0x1fffffffffffffff;
    }
    if (CARRY8(param_2,uVar8)) {
      pvVar3 = (void *)0x1fffffffffffffff;
    }
    return pvVar3;
  }
  std::__throw_length_error((char *)param_3);
  if (param_2 >> 0x3d != 0) {
    piVar7 = (int *)(param_2 >> 0x3e);
    if (piVar7 != (int *)0x0) {
      std::__throw_bad_array_new_length();
    }
    auVar12 = std::__throw_bad_alloc();
    lVar10 = auVar12._8_8_;
    pvVar3 = auVar12._0_8_;
    uVar8 = (long)piVar7 - (long)param_3 >> 2;
    if (0x10 < (long)uVar8) {
      piStack_48 = param_3 + 1;
      do {
        piVar4 = piStack_48;
        bVar11 = lVar10 == 0;
        lVar10 = lVar10 + -1;
        if (bVar11) {
          FUN_00101610(param_3,piVar7,&uStack_49);
          pvVar3 = (void *)FUN_001015c9(param_3,piVar7,&uStack_4a);
          return pvVar3;
        }
        FUN_001016f4(param_3,piStack_48,(long)param_3 + (uVar8 & 0xfffffffffffffffe) * 2,piVar7 + -1
                    );
        piVar6 = piVar7;
        while( true ) {
          lVar9 = (long)piVar4 + (-4 - (long)param_3);
          do {
            piVar5 = piVar4;
            iVar2 = *piVar5;
            piVar4 = piVar5 + 1;
            lVar9 = lVar9 + 4;
          } while (iVar2 < *param_3);
          do {
            piVar1 = piVar6 + -1;
            piVar6 = piVar6 + -1;
          } while (*param_3 < *piVar1);
          if (piVar6 <= piVar5) break;
          *piVar5 = *piVar1;
          *piVar6 = iVar2;
        }
        pvVar3 = (void *)FUN_00101485(piVar5,piVar7,lVar10);
        uVar8 = lVar9 >> 2;
        piVar7 = piVar5;
      } while (0x10 < (long)uVar8);
    }
    return pvVar3;
  }
  pvVar3 = operator_new(param_2 << 2);
  return pvVar3;
}



// ===== Function: FUN_0010145e =====

void FUN_0010145e(int *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long extraout_RDX;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined1 uStack_42;
  undefined1 uStack_41;
  int *piStack_40;
  
  if (param_2 >> 0x3d == 0) {
    operator_new(param_2 << 2);
    return;
  }
  piVar6 = (int *)(param_2 >> 0x3e);
  if (piVar6 != (int *)0x0) {
    std::__throw_bad_array_new_length();
  }
  std::__throw_bad_alloc();
  uVar7 = (long)piVar6 - (long)param_1 >> 2;
  if (0x10 < (long)uVar7) {
    piStack_40 = param_1 + 1;
    lVar9 = extraout_RDX;
    do {
      piVar3 = piStack_40;
      bVar10 = lVar9 == 0;
      lVar9 = lVar9 + -1;
      if (bVar10) {
        FUN_00101610(param_1,piVar6,&uStack_41);
        FUN_001015c9(param_1,piVar6,&uStack_42);
        return;
      }
      FUN_001016f4(param_1,piStack_40,(long)param_1 + (uVar7 & 0xfffffffffffffffe) * 2,piVar6 + -1);
      piVar5 = piVar6;
      while( true ) {
        lVar8 = (long)piVar3 + (-4 - (long)param_1);
        do {
          piVar4 = piVar3;
          iVar2 = *piVar4;
          piVar3 = piVar4 + 1;
          lVar8 = lVar8 + 4;
        } while (iVar2 < *param_1);
        do {
          piVar1 = piVar5 + -1;
          piVar5 = piVar5 + -1;
        } while (*param_1 < *piVar1);
        if (piVar5 <= piVar4) break;
        *piVar4 = *piVar1;
        *piVar5 = iVar2;
      }
      FUN_00101485(piVar4,piVar6,lVar9);
      uVar7 = lVar8 >> 2;
      piVar6 = piVar4;
    } while (0x10 < (long)uVar7);
  }
  return;
}



// ===== Function: FUN_00101485 =====

void FUN_00101485(int *param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  undefined1 local_3a;
  undefined1 local_39;
  int *local_38;
  
  uVar6 = (long)param_2 - (long)param_1 >> 2;
  if (0x10 < (long)uVar6) {
    local_38 = param_1 + 1;
    do {
      piVar3 = local_38;
      bVar8 = param_3 == 0;
      param_3 = param_3 + -1;
      if (bVar8) {
        FUN_00101610(param_1,param_2,&local_39);
        FUN_001015c9(param_1,param_2,&local_3a);
        return;
      }
      FUN_001016f4(param_1,local_38,(long)param_1 + (uVar6 & 0xfffffffffffffffe) * 2,param_2 + -1);
      piVar5 = param_2;
      while( true ) {
        lVar7 = (long)piVar3 + (-4 - (long)param_1);
        do {
          piVar4 = piVar3;
          iVar2 = *piVar4;
          piVar3 = piVar4 + 1;
          lVar7 = lVar7 + 4;
        } while (iVar2 < *param_1);
        do {
          piVar1 = piVar5 + -1;
          piVar5 = piVar5 + -1;
        } while (*param_1 < *piVar1);
        if (piVar5 <= piVar4) break;
        *piVar4 = *piVar1;
        *piVar5 = iVar2;
      }
      FUN_00101485(piVar4,param_2,param_3);
      uVar6 = lVar7 >> 2;
      param_2 = piVar4;
    } while (0x10 < (long)uVar6);
  }
  return;
}



// ===== Function: FUN_00101568 =====

void FUN_00101568(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x40 < (long)param_2 - param_1) {
    piVar5 = (int *)(param_1 + 0x40);
    FUN_0010173f(param_1,piVar5);
    for (; piVar5 != param_2; piVar5 = piVar5 + 1) {
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
  FUN_0010173f(param_1,param_2);
  return;
}



// ===== Function: FUN_001015c9 =====

void FUN_001015c9(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = param_2 - (long)param_1;
  if (4 < lVar3) {
    puVar2 = (undefined4 *)(param_2 + -4);
    do {
      uVar1 = *puVar2;
      *puVar2 = *param_1;
      lVar3 = lVar3 + -4;
      FUN_0010164d(param_1,0,lVar3 >> 2,uVar1);
      puVar2 = puVar2 + -1;
    } while (4 < lVar3);
  }
  return;
}



// ===== Function: FUN_00101610 =====

void FUN_00101610(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  lVar1 = param_2 - param_1 >> 2;
  if (1 < lVar1) {
    uVar2 = lVar1 - 2U >> 1;
    do {
      FUN_0010164d(param_1,uVar2,lVar1,*(undefined4 *)(param_1 + uVar2 * 4));
      bVar3 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar3);
  }
  return;
}



// ===== Function: FUN_0010164d =====

void FUN_0010164d(long param_1,long param_2,ulong param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)((param_3 - ((long)(param_3 - 1) >> 0x3f)) + -1) >> 1;
  lVar2 = param_2;
  lVar3 = param_2;
  if (param_2 < lVar4) {
    do {
      if (*(int *)(param_1 + 8 + lVar3 * 8) < *(int *)(param_1 + 4 + lVar3 * 8)) {
        lVar2 = lVar3 * 2 + 1;
      }
      else {
        lVar2 = lVar3 * 2 + 2;
      }
      *(undefined4 *)(param_1 + lVar3 * 4) = *(undefined4 *)(param_1 + lVar2 * 4);
      lVar3 = lVar2;
    } while (lVar2 < lVar4);
  }
  if (((param_3 & 1) == 0) && (lVar2 == (long)(param_3 - 2) >> 1)) {
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + 4 + lVar2 * 8);
    lVar2 = lVar2 * 2 + 1;
  }
  while (param_2 < lVar2) {
    lVar3 = (lVar2 - (lVar2 + -1 >> 0x3f)) + -1 >> 1;
    iVar1 = *(int *)(param_1 + lVar3 * 4);
    if (param_4 <= iVar1) break;
    *(int *)(param_1 + lVar2 * 4) = iVar1;
    lVar2 = lVar3;
  }
  *(int *)(param_1 + lVar2 * 4) = param_4;
  return;
}



// ===== Function: FUN_001016f4 =====

void FUN_001016f4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = *param_3;
  iVar3 = *param_4;
  if (iVar2 <= iVar1) {
    if (iVar1 < iVar3) {
      iVar2 = *param_1;
      *param_1 = iVar1;
      *param_2 = iVar2;
      return;
    }
    iVar1 = *param_1;
    if (iVar2 < iVar3) {
      *param_1 = iVar3;
      *param_4 = iVar1;
      return;
    }
    *param_1 = iVar2;
    *param_3 = iVar1;
    return;
  }
  if (iVar2 < iVar3) {
    iVar1 = *param_1;
    *param_1 = iVar2;
    *param_3 = iVar1;
    return;
  }
  iVar2 = *param_1;
  if (iVar1 < iVar3) {
    *param_1 = iVar3;
    *param_4 = iVar2;
    return;
  }
  *param_1 = iVar1;
  *param_2 = iVar2;
  return;
}



// ===== Function: FUN_0010173f =====

void FUN_0010173f(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  size_t __n;
  
  if (param_1 != param_2) {
    piVar5 = param_1 + 1;
    piVar1 = param_1;
    while (piVar4 = piVar5, piVar4 != param_2) {
      iVar2 = piVar1[1];
      if (iVar2 < *param_1) {
        __n = (long)piVar4 - (long)param_1;
        piVar5 = param_1;
        if ((long)__n >> 2 < 2) {
          if (__n == 4) {
            piVar1[1] = *param_1;
          }
        }
        else {
          memmove(piVar1 + (2 - ((long)__n >> 2)),param_1,__n);
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



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: __throw_bad_alloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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



// ===== Function: __throw_bad_array_new_length =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_array_new_length(void)

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



