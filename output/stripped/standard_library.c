// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00105ff0 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00105ff0)();
  }
  return;
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



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fe0)
            (FUN_001012c9,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101210 =====

/* WARNING: Removing unreachable block (ram,0x00101223) */
/* WARNING: Removing unreachable block (ram,0x0010122f) */

void FUN_00101210(void)

{
  return;
}



// ===== Function: FUN_00101240 =====

/* WARNING: Removing unreachable block (ram,0x00101264) */
/* WARNING: Removing unreachable block (ram,0x00101270) */

void FUN_00101240(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00106150 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101210();
    DAT_00106150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101240();
  return;
}



// ===== Function: FUN_001012c9 =====

undefined8 FUN_001012c9(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  ostream *poVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  ulong local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001014a6(local_38);
  local_44 = 0x1e;
                    /* try { // try from 00101306 to 001013a9 has its CatchHandler @ 001013ea */
  FUN_00101544(local_38,&local_44);
  local_44 = 10;
  FUN_00101544(local_38,&local_44);
  local_44 = 0x14;
  FUN_00101544(local_38,&local_44);
  uVar1 = FUN_00101644(local_38);
  uVar2 = FUN_001015f8(local_38);
  FUN_00101694(uVar2,uVar1);
  local_40 = 0;
  while( true ) {
    uVar5 = FUN_001016c4(local_38);
    if (uVar5 <= local_40) break;
    piVar3 = (int *)FUN_001016ec(local_38,local_40);
    poVar4 = (ostream *)std::ostream::operator<<((ostream *)std::cout,*piVar3);
    std::operator<<(poVar4," ");
    local_40 = local_40 + 1;
  }
  FUN_001014c6(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



// ===== Function: FUN_00101427 =====

undefined8 FUN_00101427(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// ===== Function: FUN_0010143d =====

void FUN_0010143d(void)

{
  return;
}



// ===== Function: FUN_00101448 =====

void FUN_00101448(void)

{
  return;
}



// ===== Function: FUN_00101458 =====

void FUN_00101458(void)

{
  return;
}



// ===== Function: FUN_00101467 =====

void FUN_00101467(void)

{
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101458(&local_11);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_001014a6 =====

void FUN_001014a6(undefined8 param_1)

{
  FUN_00101738(param_1);
  return;
}



// ===== Function: FUN_001014c6 =====

void FUN_001014c6(undefined8 *param_1)

{
  FUN_001017ce(param_1);
                    /* try { // try from 0010150c to 00101510 has its CatchHandler @ 00101520 */
  FUN_00101cb2(*param_1,param_1[1]);
  FUN_00101758(param_1);
  return;
}



// ===== Function: FUN_00101544 =====

void FUN_00101544(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    uVar2 = FUN_00101644(param_1);
    FUN_001017e0(param_1,uVar2,param_2);
  }
  else {
    puVar1 = (undefined4 *)FUN_00101427(4,*(undefined8 *)(param_1 + 8));
    *puVar1 = *param_2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
  }
  return;
}



// ===== Function: FUN_001015f8 =====

undefined8 FUN_001015f8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b9a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



// ===== Function: FUN_00101644 =====

undefined8 FUN_00101644(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b9a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



// ===== Function: FUN_00101694 =====

void FUN_00101694(undefined8 param_1,undefined8 param_2)

{
  FUN_0010143d();
  FUN_00101bbb(param_1,param_2);
  return;
}



// ===== Function: FUN_001016c4 =====

long FUN_001016c4(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}



// ===== Function: FUN_001016ec =====

long FUN_001016ec(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}



// ===== Function: FUN_00101710 =====

void FUN_00101710(undefined8 param_1)

{
  FUN_0010209c(param_1);
  return;
}



// ===== Function: FUN_00101738 =====

void FUN_00101738(undefined8 param_1)

{
  FUN_00101c2e(param_1);
  return;
}



// ===== Function: FUN_00101758 =====

void FUN_00101758(long *param_1)

{
                    /* try { // try from 00101796 to 0010179a has its CatchHandler @ 001017a9 */
  FUN_00101c60(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101710(param_1);
  return;
}



// ===== Function: FUN_001017ce =====

undefined8 FUN_001017ce(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_001017e0 =====

void FUN_001017e0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  undefined4 *local_90;
  long *local_88;
  long local_80;
  undefined4 *local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_2;
  local_e0 = param_1;
  local_c8 = FUN_00101cdc(param_1,1,"vector::_M_realloc_insert");
  local_c0 = *local_e0;
  local_b8 = local_e0[1];
  local_d8 = FUN_001015f8(local_e0);
  local_b0 = FUN_00101ddf(&local_e8,&local_d8);
  local_d0 = FUN_00101e26(local_e0,local_c8);
  local_98 = local_b0 * 4 + local_d0;
  local_a0 = local_e0;
  local_88 = local_e0;
  local_a8 = local_d0;
  local_90 = param_3;
  local_80 = local_98;
  local_78 = param_3;
  puVar1 = (undefined4 *)FUN_00101427(4,local_98);
  *puVar1 = *local_78;
  local_d0 = 0;
  uVar2 = FUN_001017ce(local_e0);
  puVar3 = (undefined8 *)FUN_00101e74(&local_e8);
                    /* try { // try from 00101978 to 001019c8 has its CatchHandler @ 00101a9c */
  local_d0 = FUN_00101e86(local_c0,*puVar3,local_a8,uVar2);
  local_d0 = local_d0 + 4;
  uVar2 = FUN_001017ce(local_e0);
  puVar3 = (undefined8 *)FUN_00101e74(&local_e8);
  local_d0 = FUN_00101e86(*puVar3,local_b8,local_d0,uVar2);
  local_60 = FUN_001017ce(local_e0);
  local_70 = local_c0;
  local_68 = local_b8;
  FUN_00101cb2(local_c0,local_b8);
  FUN_00101c60(local_e0,local_c0,local_e0[2] - local_c0 >> 2);
  *local_e0 = local_a8;
  local_e0[1] = local_d0;
  local_e0[2] = local_c8 * 4 + local_a8;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_00101b9a =====

void FUN_00101b9a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// ===== Function: FUN_00101bbb =====

void FUN_00101bbb(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  cVar1 = FUN_00101ebc(&local_10,&local_18);
  if (cVar1 != '\0') {
    uVar2 = FUN_00101ddf(&local_18,&local_10);
    lVar3 = FUN_00101efb(uVar2);
    FUN_00101f22(local_10,local_18,lVar3 * 2);
    FUN_00101fda(local_10,local_18);
  }
  return;
}



// ===== Function: FUN_00101c2e =====

void FUN_00101c2e(undefined8 param_1)

{
  FUN_0010206a(param_1);
  return;
}



// ===== Function: FUN_00101c60 =====

void FUN_00101c60(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102456(param_1,param_2,param_3);
  }
  return;
}



// ===== Function: FUN_00101cb2 =====

void FUN_00101cb2(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ab(param_1,param_2);
  return;
}



// ===== Function: FUN_00101cdc =====

ulong FUN_00101cdc(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_001020be(param_1);
  lVar2 = FUN_001016c4(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001016c4(local_40);
  local_30 = FUN_001016c4(local_40);
  plVar3 = (long *)FUN_001020e4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001016c4(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001020be(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001020be(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: FUN_00101ddf =====

long FUN_00101ddf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e74(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e74(param_2);
  return lVar1 - *plVar2 >> 2;
}



// ===== Function: FUN_00101e26 =====

undefined8 FUN_00101e26(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102510(param_1,param_2,0);
  }
  return uVar1;
}



// ===== Function: FUN_00101e74 =====

undefined8 FUN_00101e74(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00101e86 =====

void FUN_00101e86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00102113(param_1,param_2,param_3,param_4);
  return;
}



// ===== Function: FUN_00101ebc =====

undefined8 FUN_00101ebc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e74(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e74(param_2);
  return CONCAT71((int7)((ulong)*plVar2 >> 8),lVar1 != *plVar2);
}



// ===== Function: FUN_00101efb =====

long FUN_00101efb(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (long)(int)((uint)lVar1 ^ 0x3f);
}



// ===== Function: FUN_00101f22 =====

void FUN_00101f22(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  do {
    lVar1 = FUN_00101ddf(&local_28,&local_20);
    if (lVar1 < 0x11) {
LAB_00101fc4:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (local_30 == 0) {
      FUN_00102148(local_20,local_28,local_28);
      goto LAB_00101fc4;
    }
    local_30 = local_30 + -1;
    local_18 = FUN_00102191(local_20,local_28);
    FUN_00101f22(local_18,local_28,local_30);
    local_28 = local_18;
  } while( true );
}



// ===== Function: FUN_00101fda =====

void FUN_00101fda(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  lVar1 = FUN_00101ddf(&local_18,&local_10);
  if (lVar1 < 0x11) {
    FUN_001022ce(local_10,local_18);
  }
  else {
    uVar2 = FUN_00102268(&local_10,0x10);
    FUN_001022ce(local_10,uVar2);
    uVar2 = FUN_00102268(&local_10,0x10);
    FUN_001023dd(uVar2,local_18);
  }
  return;
}



// ===== Function: FUN_0010206a =====

void FUN_0010206a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ===== Function: FUN_0010209c =====

void FUN_0010209c(void)

{
  return;
}



// ===== Function: FUN_001020ab =====

void FUN_001020ab(void)

{
  return;
}



// ===== Function: FUN_001020be =====

void FUN_001020be(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024fe(param_1);
  FUN_0010247d(uVar1);
  return;
}



// ===== Function: FUN_001020e4 =====

ulong * FUN_001020e4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



// ===== Function: FUN_00102113 =====

void FUN_00102113(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010257a(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00102148 =====

void FUN_00102148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  FUN_001025b3(param_1,param_2,param_3);
  FUN_00102668(local_10,local_18,&local_21);
  return;
}



// ===== Function: FUN_00102191 =====

void FUN_00102191(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  lVar1 = FUN_00101ddf(&local_38,&local_30);
  local_28 = FUN_00102268(&local_30,lVar1 / 2);
  uVar2 = FUN_001026c8(&local_38,1);
  uVar3 = FUN_00102268(&local_30,1);
  FUN_00102731(local_30,uVar3,local_28,uVar2);
  uVar2 = FUN_00102268(&local_30,1);
  FUN_00102859(uVar2,local_38,local_30);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_00102268 =====

undefined8 FUN_00102268(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101b9a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



// ===== Function: FUN_001022ce =====

void FUN_001022ce(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30[0] = param_1;
  cVar1 = FUN_00102915(local_30,&local_38);
  if (cVar1 == '\0') {
    local_18 = FUN_00102268(local_30,1);
    while (cVar1 = FUN_00101ebc(&local_18,&local_38), cVar1 != '\0') {
      cVar1 = FUN_00102978(&local_39,local_18,local_30[0]);
      if (cVar1 == '\0') {
        FUN_00101467();
        FUN_00102a1c(local_18);
      }
      else {
        puVar2 = (undefined4 *)FUN_001029b8(&local_18);
        local_1c = *puVar2;
        uVar3 = FUN_00102268(&local_18,1);
        FUN_001029cd(local_30[0],local_18,uVar3);
        puVar2 = (undefined4 *)FUN_001029b8(local_30);
        *puVar2 = local_1c;
      }
      FUN_00102954(&local_18);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: FUN_001023dd =====

void FUN_001023dd(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  local_18 = param_1;
  while( true ) {
    cVar1 = FUN_00101ebc(&local_18,&local_28);
    if (cVar1 == '\0') break;
    FUN_00101467();
    FUN_00102a1c(local_18);
    FUN_00102954(&local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_00102456 =====

void FUN_00102456(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}



// ===== Function: FUN_0010247d =====

undefined8 FUN_0010247d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x1fffffffffffffff;
  local_30 = 0x1fffffffffffffff;
  local_28 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  puVar1 = (undefined8 *)FUN_00102add(&local_38,&local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



// ===== Function: FUN_001024fe =====

undefined8 FUN_001024fe(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00102510 =====

void FUN_00102510(undefined8 param_1,ulong param_2)

{
  if (0x1fffffffffffffff < param_2) {
    if (0x3fffffffffffffff < param_2) {
      std::__throw_bad_array_new_length();
    }
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}



// ===== Function: FUN_0010257a =====

void FUN_0010257a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b0c(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_001025b3 =====

void FUN_001025b3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102b3d(param_1,param_2,&local_31);
  local_18 = local_28;
  while( true ) {
    cVar1 = FUN_00102c19(&local_18,&local_30);
    if (cVar1 == '\0') break;
    cVar1 = FUN_00102978(&local_31,local_18,local_20);
    if (cVar1 != '\0') {
      FUN_00102c58(local_20,local_28,local_18,&local_31);
    }
    FUN_00102954(&local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_00102668 =====

void FUN_00102668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    lVar1 = FUN_00101ddf(&local_18,&local_10);
    if (lVar1 < 2) break;
    FUN_00102cdc(&local_18);
    FUN_00102c58(local_10,local_18,local_18,param_3);
  }
  return;
}



// ===== Function: FUN_001026c8 =====

undefined8 FUN_001026c8(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * -4;
  FUN_00101b9a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



// ===== Function: FUN_00102731 =====

void FUN_00102731(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  cVar1 = FUN_00102978(&local_29,param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_00102978(&local_29,local_18,local_28);
    if (cVar1 == '\0') {
      cVar1 = FUN_00102978(&local_29,local_20,local_28);
      if (cVar1 == '\0') {
        FUN_00102d00(local_10,local_20);
      }
      else {
        FUN_00102d00(local_10,local_28);
      }
    }
    else {
      FUN_00102d00(local_10,local_18);
    }
  }
  else {
    cVar1 = FUN_00102978(&local_29,local_20,local_28);
    if (cVar1 == '\0') {
      cVar1 = FUN_00102978(&local_29,local_18,local_28);
      if (cVar1 == '\0') {
        FUN_00102d00(local_10,local_18);
      }
      else {
        FUN_00102d00(local_10,local_28);
      }
    }
    else {
      FUN_00102d00(local_10,local_20);
    }
  }
  return;
}



// ===== Function: FUN_00102859 =====

undefined8 FUN_00102859(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    while( true ) {
      cVar1 = FUN_00102978(&local_21,local_10,local_20);
      if (cVar1 == '\0') break;
      FUN_00102954(&local_10);
    }
    FUN_00102cdc(&local_18);
    while( true ) {
      cVar1 = FUN_00102978(&local_21,local_20,local_18);
      if (cVar1 == '\0') break;
      FUN_00102cdc(&local_18);
    }
    cVar1 = FUN_00102c19(&local_10,&local_18);
    if (cVar1 != '\x01') break;
    FUN_00102d00(local_10,local_18);
    FUN_00102954(&local_10);
  }
  return local_10;
}



// ===== Function: FUN_00102915 =====

undefined8 FUN_00102915(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e74(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e74(param_2);
  return CONCAT71((int7)((ulong)*plVar2 >> 8),lVar1 == *plVar2);
}



// ===== Function: FUN_00102954 =====

long * FUN_00102954(long *param_1)

{
  *param_1 = *param_1 + 4;
  return param_1;
}



// ===== Function: FUN_00102978 =====

undefined4 FUN_00102978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  piVar2 = (int *)FUN_001029b8(&local_28);
  iVar1 = *piVar2;
  piVar2 = (int *)FUN_001029b8(&local_30);
  return CONCAT31((int3)((uint)*piVar2 >> 8),iVar1 < *piVar2);
}



// ===== Function: FUN_001029b8 =====

undefined8 FUN_001029b8(undefined8 *param_1)

{
  return *param_1;
}



// ===== Function: FUN_001029cd =====

void FUN_001029cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d2a(param_2);
  uVar2 = FUN_00102d2a(param_1);
  FUN_00102d3c(uVar2,uVar1,param_3);
  return;
}



// ===== Function: FUN_00102a1c =====

void FUN_00102a1c(undefined8 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined1 local_41;
  undefined8 local_40 [2];
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40[0] = param_1;
  puVar2 = (undefined4 *)FUN_001029b8(local_40);
  local_2c = *puVar2;
  local_28 = local_40[0];
  FUN_00102cdc(&local_28);
  while( true ) {
    cVar1 = FUN_00102daa(&local_41,&local_2c,local_28);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)FUN_001029b8(&local_28);
    puVar3 = (undefined4 *)FUN_001029b8(local_40);
    *puVar3 = *puVar2;
    local_40[0] = local_28;
    FUN_00102cdc(&local_28);
  }
  puVar2 = (undefined4 *)FUN_001029b8(local_40);
  *puVar2 = local_2c;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_00102add =====

ulong * FUN_00102add(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}



// ===== Function: FUN_00102b0c =====

void FUN_00102b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102de2(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00102b3d =====

void FUN_00102b3d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40[0] = param_1;
  lVar1 = FUN_00101ddf(&local_48,local_40);
  if (1 < lVar1) {
    local_18 = FUN_00101ddf(&local_48,local_40);
    local_20 = (local_18 + -2) / 2;
    while( true ) {
      local_28 = FUN_00102268(local_40,local_20);
      puVar2 = (undefined4 *)FUN_001029b8(&local_28);
      local_2c = *puVar2;
      FUN_00102e31(local_40[0],local_20,local_18,local_2c);
      if (local_20 == 0) break;
      local_20 = local_20 + -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



// ===== Function: FUN_00102c19 =====

undefined8 FUN_00102c19(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)FUN_00101e74(param_1);
  uVar1 = *puVar2;
  puVar2 = (ulong *)FUN_00101e74(param_2);
  return CONCAT71((int7)(*puVar2 >> 8),uVar1 < *puVar2);
}



// ===== Function: FUN_00102c58 =====

void FUN_00102c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined4 local_1c;
  
  local_40 = param_3;
  local_38 = param_2;
  local_30[0] = param_1;
  puVar1 = (undefined4 *)FUN_001029b8(&local_40);
  local_1c = *puVar1;
  puVar1 = (undefined4 *)FUN_001029b8(local_30);
  puVar2 = (undefined4 *)FUN_001029b8(&local_40);
  *puVar2 = *puVar1;
  uVar3 = FUN_00101ddf(&local_38,local_30);
  FUN_00102e31(local_30[0],0,uVar3,local_1c,param_5,param_6,param_4);
  return;
}



// ===== Function: FUN_00102cdc =====

long * FUN_00102cdc(long *param_1)

{
  *param_1 = *param_1 + -4;
  return param_1;
}



// ===== Function: FUN_00102d00 =====

void FUN_00102d00(undefined8 param_1,undefined8 param_2)

{
  FUN_0010301b(param_1,param_2);
  return;
}



// ===== Function: FUN_00102d2a =====

undefined8 FUN_00102d2a(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00102d3c =====

void FUN_00102d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0010305d(param_3);
  uVar2 = FUN_0010305d(param_2);
  uVar3 = FUN_0010305d(param_1);
  uVar1 = FUN_0010307e(uVar3,uVar2,uVar1);
  FUN_001030af(param_3,uVar1);
  return;
}



// ===== Function: FUN_00102daa =====

undefined4 FUN_00102daa(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_30;
  int *local_28;
  undefined8 local_20;
  
  iVar1 = *param_2;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  piVar2 = (int *)FUN_001029b8(&local_30);
  return CONCAT31((int3)((uint)*piVar2 >> 8),iVar1 < *piVar2);
}



// ===== Function: FUN_00102de2 =====

void FUN_00102de2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030f1(param_2);
  uVar2 = FUN_001030f1(param_1);
  FUN_00103103(uVar2,uVar1,param_3);
  return;
}



// ===== Function: FUN_00102e31 =====

void FUN_00102e31(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_65;
  undefined4 local_64;
  ulong local_60;
  long local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = param_4;
  local_60 = param_3;
  local_50[0] = param_1;
  local_30 = param_2;
  local_28 = param_2;
  while (local_58 = local_30, local_30 < (long)(local_60 - 1) / 2) {
    local_30 = (local_30 + 1) * 2;
    uVar2 = FUN_00102268(local_50,local_30 + -1);
    uVar3 = FUN_00102268(local_50,local_30);
    cVar1 = FUN_00102978(&local_65,uVar3,uVar2);
    if (cVar1 != '\0') {
      local_30 = local_30 + -1;
    }
    local_38 = FUN_00102268(local_50,local_30);
    puVar4 = (undefined4 *)FUN_001029b8(&local_38);
    local_40 = FUN_00102268(local_50,local_58);
    puVar5 = (undefined4 *)FUN_001029b8(&local_40);
    *puVar5 = *puVar4;
  }
  if (((local_60 & 1) == 0) && (local_30 == (long)(local_60 - 2) / 2)) {
    local_30 = (local_30 + 1) * 2;
    local_38 = FUN_00102268(local_50,local_30 + -1);
    puVar4 = (undefined4 *)FUN_001029b8(&local_38);
    local_40 = FUN_00102268(local_50,local_58);
    puVar5 = (undefined4 *)FUN_001029b8(&local_40);
    *puVar5 = *puVar4;
    local_58 = local_30 + -1;
  }
  FUN_00101448(&local_38);
  FUN_00103171(local_50[0],local_58,local_28,local_64,&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



// ===== Function: FUN_0010301b =====

void FUN_0010301b(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = param_2;
  local_20[0] = param_1;
  uVar1 = FUN_001029b8(&local_28);
  uVar2 = FUN_001029b8(local_20);
  FUN_001032b7(uVar2,uVar1);
  return;
}



// ===== Function: FUN_0010305d =====

undefined8 FUN_0010305d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00101e74(&local_10);
  return *puVar1;
}



// ===== Function: FUN_0010307e =====

void FUN_0010307e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e8(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_001030af =====

void FUN_001030af(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  lVar1 = FUN_0010305d(param_1);
  FUN_00102268(&local_10,param_2 - lVar1 >> 2);
  return;
}



// ===== Function: FUN_001030f1 =====

undefined8 FUN_001030f1(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00103103 =====

void FUN_00103103(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00103319(param_3);
  uVar2 = FUN_00103319(local_28);
  uVar3 = FUN_00103319(local_20);
  uVar1 = FUN_0010332b(uVar3,uVar2,uVar1);
  FUN_0010335c(&local_30,uVar1);
  return;
}



// ===== Function: FUN_00103171 =====

void FUN_00103171(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined4 local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2 + -1;
  local_54 = param_4;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  do {
    local_28 = local_28 / 2;
    if (local_50 < local_48) {
      uVar4 = FUN_00102268(&local_40,local_28);
      cVar2 = FUN_00103372(param_5,uVar4,&local_54);
      if (cVar2 == '\0') goto LAB_00103267;
      bVar1 = true;
    }
    else {
LAB_00103267:
      bVar1 = false;
    }
    if (!bVar1) {
      local_30 = FUN_00102268(&local_40,local_48);
      puVar5 = (undefined4 *)FUN_001029b8(&local_30);
      *puVar5 = local_54;
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_30 = FUN_00102268(&local_40,local_28);
    puVar5 = (undefined4 *)FUN_001029b8(&local_30);
    local_38 = FUN_00102268(&local_40,local_48);
    puVar3 = (undefined4 *)FUN_001029b8(&local_38);
    *puVar3 = *puVar5;
    local_48 = local_28;
    local_28 = local_28 + -1;
  } while( true );
}



// ===== Function: FUN_001032b7 =====

void FUN_001032b7(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



// ===== Function: FUN_001032e8 =====

void FUN_001032e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033a5(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00103319 =====

undefined8 FUN_00103319(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_0010332b =====

void FUN_0010332b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103444(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_0010335c =====

undefined8 FUN_0010335c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// ===== Function: FUN_00103372 =====

undefined4 FUN_00103372(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  piVar1 = (int *)FUN_001029b8(&local_18);
  return CONCAT31((int3)((uint)*param_3 >> 8),*piVar1 < *param_3);
}



// ===== Function: FUN_001033a5 =====

long FUN_001033a5(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      FUN_00103475(param_3 + -4,param_1);
    }
  }
  else {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}



// ===== Function: FUN_00103444 =====

void FUN_00103444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103494(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00103475 =====

void FUN_00103475(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



// ===== Function: FUN_00103494 =====

void * FUN_00103494(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      FUN_00103475(param_3,param_1);
    }
  }
  else {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
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



// ===== Function: __cxa_begin_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

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



// ===== Function: operator<< =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

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



// ===== Function: __cxa_rethrow =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_rethrow(void)

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



// ===== Function: __cxa_end_catch =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

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



