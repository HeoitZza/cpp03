// ===== Function: _DT_INIT =====

void _DT_INIT(void)

{
  if (PTR___gmon_start___00105fd8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00105fd8)();
  }
  return;
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



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fc0)
            (FUN_00101200,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101140 =====

/* WARNING: Removing unreachable block (ram,0x00101153) */
/* WARNING: Removing unreachable block (ram,0x0010115f) */

void FUN_00101140(void)

{
  return;
}



// ===== Function: FUN_00101170 =====

/* WARNING: Removing unreachable block (ram,0x00101194) */
/* WARNING: Removing unreachable block (ram,0x001011a0) */

void FUN_00101170(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00106080 == '\0') {
    if (PTR___cxa_finalize_00105fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106070);
    }
    FUN_00101140();
    DAT_00106080 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101170();
  return;
}



// ===== Function: FUN_00101200 =====

undefined4 FUN_00101200(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  ostream *poVar5;
  ulong local_60;
  undefined4 local_44;
  undefined4 local_40 [5];
  undefined4 local_2c;
  undefined1 local_28 [28];
  undefined4 local_c;
  
  local_c = 0;
  FUN_001013a0();
  local_2c = 0x1e;
                    /* try { // try from 0010122a to 0010132f has its CatchHandler @ 0010134b */
  FUN_001013c0(local_28,&local_2c);
  local_40[0] = 10;
  FUN_001013c0(local_28,local_40);
  local_44 = 0x14;
  FUN_001013c0(local_28,&local_44);
  uVar1 = FUN_001014a0(local_28);
  uVar2 = FUN_001014d0(local_28);
  FUN_00101460(uVar1,uVar2);
  local_60 = 0;
  while( true ) {
    uVar3 = FUN_00101500(local_28);
    if (uVar3 <= local_60) break;
    piVar4 = (int *)FUN_00101520(local_28,local_60);
    poVar5 = (ostream *)std::ostream::operator<<((ostream *)PTR_cout_00105fc8,*piVar4);
    std::operator<<(poVar5," ");
    local_60 = local_60 + 1;
  }
  local_c = 0;
  FUN_00101540(local_28);
  return local_c;
}



// ===== Function: FUN_001013a0 =====

void FUN_001013a0(undefined8 param_1)

{
  FUN_001015f0(param_1);
  return;
}



// ===== Function: FUN_001013c0 =====

void FUN_001013c0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    uVar1 = FUN_001014d0(param_1);
    FUN_00101820(param_1,uVar1,param_2);
  }
  else {
    **(undefined4 **)(param_1 + 8) = *param_2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
  }
  return;
}



// ===== Function: FUN_00101460 =====

void FUN_00101460(undefined8 param_1,undefined8 param_2)

{
  FUN_001022e0();
  FUN_00102250(param_1,param_2);
  return;
}



// ===== Function: FUN_001014a0 =====

undefined8 FUN_001014a0(undefined8 param_1)

{
  undefined8 local_10;
  
  FUN_00102230(&local_10,param_1);
  return local_10;
}



// ===== Function: FUN_001014d0 =====

undefined8 FUN_001014d0(long param_1)

{
  undefined8 local_10;
  
  FUN_00102230(&local_10,param_1 + 8);
  return local_10;
}



// ===== Function: FUN_00101500 =====

long FUN_00101500(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}



// ===== Function: FUN_00101520 =====

long FUN_00101520(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}



// ===== Function: FUN_00101540 =====

void FUN_00101540(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
                    /* try { // try from 00101563 to 00101595 has its CatchHandler @ 001015af */
  FUN_001016b0();
  FUN_00101720(uVar1,uVar2);
  FUN_001016c0(param_1);
  return;
}



// ===== Function: FUN_001015e0 =====

void FUN_001015e0(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



// ===== Function: FUN_001015f0 =====

void FUN_001015f0(undefined8 param_1)

{
  FUN_00101610(param_1);
  return;
}



// ===== Function: FUN_00101610 =====

void FUN_00101610(void)

{
                    /* try { // try from 00101630 to 00101634 has its CatchHandler @ 00101640 */
  FUN_00101670();
  return;
}



// ===== Function: FUN_00101670 =====

void FUN_00101670(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// ===== Function: FUN_001016a0 =====

void FUN_001016a0(void)

{
  return;
}



// ===== Function: FUN_001016b0 =====

undefined8 FUN_001016b0(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_001016c0 =====

void FUN_001016c0(long *param_1)

{
                    /* try { // try from 001016e2 to 001016e6 has its CatchHandler @ 001016fb */
  FUN_00101760(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_001017c0(param_1);
  return;
}



// ===== Function: FUN_00101720 =====

void FUN_00101720(undefined8 param_1,undefined8 param_2)

{
  FUN_00101750(param_1,param_2);
  return;
}



// ===== Function: FUN_00101750 =====

void FUN_00101750(void)

{
  return;
}



// ===== Function: FUN_00101760 =====

void FUN_00101760(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001017f0(param_1,param_2,param_3);
  }
  return;
}



// ===== Function: FUN_001017c0 =====

void FUN_001017c0(undefined8 param_1)

{
  FUN_001016a0(param_1);
  return;
}



// ===== Function: FUN_001017f0 =====

void FUN_001017f0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}



// ===== Function: FUN_00101820 =====

void FUN_00101820(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined4 *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined4 *local_58;
  undefined4 *local_50;
  long *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  long *local_30;
  
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  local_a8 = FUN_00101c30(param_1,1,"vector::_M_realloc_insert");
  local_b0 = *param_1;
  local_b8 = param_1[1];
  local_c8 = FUN_001014a0();
  local_c0 = FUN_00101d20(&local_90,&local_c8);
  lVar3 = FUN_00101d60(param_1,local_a8);
  lVar2 = local_b0;
  local_50 = (undefined4 *)(lVar3 + local_c0 * 4);
  local_58 = local_a0;
  local_40 = local_a0;
  *local_50 = *local_a0;
                    /* try { // try from 0010193c to 00101a35 has its CatchHandler @ 00101a55 */
  local_48 = param_1;
  local_38 = local_50;
  local_30 = param_1;
  puVar4 = (undefined8 *)FUN_00101e10(&local_90);
  uVar1 = *puVar4;
  uVar5 = FUN_001016b0(param_1);
  lVar6 = FUN_00101dd0(lVar2,uVar1,lVar3,uVar5);
  puVar4 = (undefined8 *)FUN_00101e10(&local_90);
  lVar2 = local_b8;
  uVar1 = *puVar4;
  uVar5 = FUN_001016b0(param_1);
  lVar7 = FUN_00101dd0(uVar1,lVar2,lVar6 + 4,uVar5);
  lVar6 = local_b0;
  lVar2 = local_b8;
  local_88 = FUN_001016b0(param_1);
  local_78 = lVar6;
  local_80 = lVar2;
  FUN_00101720(lVar6,lVar2);
  FUN_00101760(param_1,local_b0,param_1[2] - local_b0 >> 2);
  *param_1 = lVar3;
  param_1[1] = lVar7;
  param_1[2] = lVar3 + local_a8 * 4;
  return;
}



// ===== Function: FUN_00101c30 =====

ulong FUN_00101c30(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_30;
  ulong local_28;
  char *local_20;
  ulong local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  lVar1 = FUN_00101e20();
  lVar2 = FUN_00101500(param_1);
  if ((ulong)(lVar1 - lVar2) < local_18) {
    std::__throw_length_error(local_20);
  }
  lVar2 = FUN_00101500(param_1);
  local_30 = FUN_00101500(param_1);
  plVar3 = (long *)FUN_00101e50(&local_30,&local_18);
  lVar1 = *plVar3;
  local_28 = lVar2 + lVar1;
  uVar4 = FUN_00101500(param_1);
  uVar5 = local_28;
  if ((uVar4 <= (ulong)(lVar2 + lVar1)) && (uVar4 = FUN_00101e20(param_1), uVar5 <= uVar4)) {
    return local_28;
  }
  uVar5 = FUN_00101e20(param_1);
  return uVar5;
}



// ===== Function: FUN_00101d20 =====

long FUN_00101d20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e10(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e10(param_2);
  return lVar1 - *plVar2 >> 2;
}



// ===== Function: FUN_00101d60 =====

undefined8 FUN_00101d60(undefined8 param_1,long param_2)

{
  undefined8 local_38;
  
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_00101f40(param_1,param_2,0);
  }
  return local_38;
}



// ===== Function: FUN_00101dd0 =====

void FUN_00101dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00101fb0(param_1,param_2,param_3,param_4);
  return;
}



// ===== Function: FUN_00101e10 =====

undefined8 FUN_00101e10(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00101e20 =====

void FUN_00101e20(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ef0(param_1);
  FUN_00101e90(uVar1);
  return;
}



// ===== Function: FUN_00101e50 =====

ulong * FUN_00101e50(ulong *param_1,ulong *param_2)

{
  ulong *local_10;
  
  local_10 = param_1;
  if (*param_1 < *param_2) {
    local_10 = param_2;
  }
  return local_10;
}



// ===== Function: FUN_00101e90 =====

undefined8 FUN_00101e90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0x1fffffffffffffff;
  local_38 = 0x1fffffffffffffff;
  local_28 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00101f00(&local_30,&local_38);
  return *puVar1;
}



// ===== Function: FUN_00101ef0 =====

undefined8 FUN_00101ef0(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00101f00 =====

ulong * FUN_00101f00(ulong *param_1,ulong *param_2)

{
  ulong *local_10;
  
  local_10 = param_1;
  if (*param_2 < *param_1) {
    local_10 = param_2;
  }
  return local_10;
}



// ===== Function: FUN_00101f40 =====

void FUN_00101f40(undefined8 param_1,ulong param_2)

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



// ===== Function: FUN_00101fb0 =====

void FUN_00101fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00101fe0(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00101fe0 =====

void FUN_00101fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102020(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00102020 =====

void FUN_00102020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102050(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00102050 =====

void FUN_00102050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001020f0(param_1);
  uVar2 = FUN_001020f0(param_2);
  FUN_00102090(uVar1,uVar2,param_3);
  return;
}



// ===== Function: FUN_00102090 =====

void FUN_00102090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  uVar1 = FUN_00102150(param_1);
  uVar2 = FUN_00102150(local_18);
  uVar3 = FUN_00102150(local_20);
  uVar1 = FUN_00102120(uVar1,uVar2,uVar3);
  FUN_00102100(&local_20,uVar1);
  return;
}



// ===== Function: FUN_001020f0 =====

undefined8 FUN_001020f0(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00102100 =====

undefined8 FUN_00102100(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// ===== Function: FUN_00102120 =====

void FUN_00102120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102160(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00102150 =====

undefined8 FUN_00102150(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_00102160 =====

void FUN_00102160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102190(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00102190 =====

void * FUN_00102190(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      FUN_00102210(param_3,param_1);
    }
  }
  else {
    memmove(param_3,param_1,lVar1 << 2);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}



// ===== Function: FUN_00102210 =====

void FUN_00102210(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



// ===== Function: FUN_00102230 =====

void FUN_00102230(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// ===== Function: FUN_00102250 =====

void FUN_00102250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  uVar3 = FUN_001022f0(&local_10,&local_18);
  uVar2 = local_10;
  uVar1 = local_18;
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00101d20(&local_18,&local_10);
    lVar5 = FUN_00102410(uVar4);
    FUN_00102340(uVar2,uVar1,lVar5 << 1);
    FUN_00102440(local_10,local_18);
  }
  return;
}



// ===== Function: FUN_001022e0 =====

void FUN_001022e0(void)

{
  return;
}



// ===== Function: FUN_001022f0 =====

bool FUN_001022f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e10(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e10(param_2);
  return lVar1 != *plVar2;
}



// ===== Function: FUN_00102340 =====

void FUN_00102340(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    lVar1 = FUN_00101d20(&local_18,&local_10);
    if (lVar1 < 0x11) {
      return;
    }
    if (local_28 == 0) break;
    local_28 = local_28 + -1;
    uVar2 = FUN_00102550(local_10,local_18);
    FUN_00102340(uVar2,local_18,local_28);
    local_18 = uVar2;
  }
  FUN_001024e0(local_10,local_18,local_18);
  return;
}



// ===== Function: FUN_00102410 =====

long FUN_00102410(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return 0x3f - (long)(int)((uint)lVar1 ^ 0x3f);
}



// ===== Function: FUN_00102440 =====

void FUN_00102440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  lVar1 = FUN_00101d20(&local_18,&local_10);
  uVar3 = local_10;
  if (lVar1 < 0x11) {
    FUN_00103120(local_10,local_18);
  }
  else {
    uVar2 = FUN_00102950(&local_10,0x10);
    FUN_00103120(uVar3,uVar2);
    uVar3 = FUN_00102950(&local_10,0x10);
    FUN_00103240(uVar3,local_18);
  }
  return;
}



// ===== Function: FUN_001024e0 =====

void FUN_001024e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  FUN_00102620(param_1,param_2,param_3);
  FUN_001026f0(local_10,local_18,&local_21);
  return;
}



// ===== Function: FUN_00102550 =====

undefined8 FUN_00102550(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_20 = param_2;
  local_18[0] = param_1;
  lVar1 = FUN_00101d20(&local_20,local_18);
  uVar2 = FUN_00102950(local_18,lVar1 / 2,lVar1 % 2);
  uVar5 = local_18[0];
  uVar3 = FUN_00102950(local_18,1);
  uVar4 = FUN_00102f40(&local_20,1);
  FUN_00102d10(uVar5,uVar3,uVar2,uVar4);
  uVar5 = FUN_00102950(local_18,1);
  uVar5 = FUN_00102f80(uVar5,local_20,local_18[0]);
  return uVar5;
}



// ===== Function: FUN_00102620 =====

void FUN_00102620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = param_2;
  local_30 = param_1;
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  FUN_00102760(param_1,param_2,&local_21);
  local_40 = local_18;
  while (uVar1 = FUN_00102820(&local_40,&local_20), (uVar1 & 1) != 0) {
    uVar1 = FUN_00102870(&local_21,local_40,local_10);
    if ((uVar1 & 1) != 0) {
      FUN_001028c0(local_10,local_18,local_40,&local_21);
    }
    FUN_00102930(&local_40);
  }
  return;
}



// ===== Function: FUN_001026f0 =====

void FUN_001026f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    lVar1 = FUN_00101d20(&local_18,&local_10);
    if (lVar1 < 2) break;
    FUN_00102cf0(&local_18);
    FUN_001028c0(local_10,local_18,local_18,param_3);
  }
  return;
}



// ===== Function: FUN_00102760 =====

void FUN_00102760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long extraout_RDX;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  lVar1 = FUN_00101d20(&local_18,&local_10);
  if (1 < lVar1) {
    local_28 = FUN_00101d20(&local_18,&local_10);
    local_30 = (local_28 + -2) / 2;
    lVar1 = (local_28 + -2) % 2;
    while( true ) {
      local_40 = FUN_00102950(&local_10,local_30,lVar1);
      puVar2 = (undefined4 *)FUN_00102990(&local_40);
      local_34 = *puVar2;
      FUN_001029b0(local_10,local_30,local_28,local_34);
      if (local_30 == 0) break;
      local_30 = local_30 + -1;
      lVar1 = extraout_RDX;
    }
  }
  return;
}



// ===== Function: FUN_00102820 =====

bool FUN_00102820(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)FUN_00101e10(param_1);
  uVar1 = *puVar2;
  puVar2 = (ulong *)FUN_00101e10(param_2);
  return uVar1 < *puVar2;
}



// ===== Function: FUN_00102870 =====

bool FUN_00102870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  piVar2 = (int *)FUN_00102990(&local_10);
  iVar1 = *piVar2;
  piVar2 = (int *)FUN_00102990(&local_18);
  return iVar1 < *piVar2;
}



// ===== Function: FUN_001028c0 =====

void FUN_001028c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  puVar4 = (undefined4 *)FUN_00102990(&local_20);
  uVar1 = *puVar4;
  puVar4 = (undefined4 *)FUN_00102990(&local_10);
  uVar2 = *puVar4;
  puVar4 = (undefined4 *)FUN_00102990(&local_20);
  uVar3 = local_10;
  *puVar4 = uVar2;
  uVar5 = FUN_00101d20(&local_18,&local_10);
  FUN_001029b0(uVar3,0,uVar5,uVar1);
  return;
}



// ===== Function: FUN_00102930 =====

void FUN_00102930(long *param_1)

{
  *param_1 = *param_1 + 4;
  return;
}



// ===== Function: FUN_00102950 =====

undefined8 FUN_00102950(long *param_1,long param_2)

{
  long local_28;
  long local_20;
  long *local_18;
  undefined8 local_10;
  
  local_28 = *param_1 + param_2 * 4;
  local_20 = param_2;
  local_18 = param_1;
  FUN_00102230(&local_10,&local_28);
  return local_10;
}



// ===== Function: FUN_00102990 =====

undefined8 FUN_00102990(undefined8 *param_1)

{
  return *param_1;
}



// ===== Function: FUN_001029b0 =====

void FUN_001029b0(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_38 = param_2;
  local_2c = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_10 = param_1;
  while (local_20 < (long)(local_28 - 1) / 2) {
    local_40 = (local_20 + 1) * 2;
    local_48 = FUN_00102950(&local_10,local_40);
    local_50 = FUN_00102950(&local_10,local_40 + -1);
    uVar2 = FUN_00102870(&local_11,local_48,local_50);
    if ((uVar2 & 1) != 0) {
      local_40 = local_40 + -1;
    }
    local_58 = FUN_00102950(&local_10,local_40);
    puVar3 = (undefined4 *)FUN_00102990(&local_58);
    uVar1 = *puVar3;
    local_60 = FUN_00102950(&local_10,local_20);
    puVar3 = (undefined4 *)FUN_00102990(&local_60);
    *puVar3 = uVar1;
    local_20 = local_40;
  }
  local_40 = local_20;
  if (((local_28 & 1) == 0) && (local_20 == (long)(local_28 - 2) / 2)) {
    local_40 = (local_20 + 1) * 2;
    local_68 = FUN_00102950(&local_10,local_40 + -1,(long)(local_28 - 2) % 2);
    puVar3 = (undefined4 *)FUN_00102990(&local_68);
    uVar1 = *puVar3;
    local_70 = FUN_00102950(&local_10,local_20);
    puVar3 = (undefined4 *)FUN_00102990(&local_70);
    *puVar3 = uVar1;
    local_20 = local_40 + -1;
  }
  FUN_00102b90(&local_71);
  FUN_00102ba0(local_10,local_20,local_38,local_2c,&local_71);
  return;
}



// ===== Function: FUN_00102b90 =====

void FUN_00102b90(void)

{
  return;
}



// ===== Function: FUN_00102ba0 =====

void FUN_00102ba0(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long extraout_RDX;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  undefined8 local_10;
  
  lVar3 = param_2 + -1;
  local_30 = param_5;
  local_24 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    uVar2 = local_30;
    local_38 = lVar3 / 2;
    lVar3 = lVar3 % 2;
    local_59 = 0;
    if (local_20 < local_18) {
      local_40 = FUN_00102950(&local_10,local_38,lVar3);
      local_59 = FUN_00102cb0(uVar2,local_40,&local_24);
      lVar3 = extraout_RDX;
    }
    uVar1 = local_24;
    if ((local_59 & 1) == 0) break;
    local_48 = FUN_00102950(&local_10,local_38,lVar3);
    puVar4 = (undefined4 *)FUN_00102990(&local_48);
    uVar1 = *puVar4;
    local_50 = FUN_00102950(&local_10,local_18);
    puVar4 = (undefined4 *)FUN_00102990(&local_50);
    *puVar4 = uVar1;
    local_18 = local_38;
    lVar3 = local_38 + -1;
  }
  local_58 = FUN_00102950(&local_10,local_18,lVar3);
  puVar4 = (undefined4 *)FUN_00102990(&local_58);
  *puVar4 = uVar1;
  return;
}



// ===== Function: FUN_00102cb0 =====

bool FUN_00102cb0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined8 local_10;
  
  local_10 = param_2;
  piVar1 = (int *)FUN_00102990(&local_10);
  return *piVar1 < *param_3;
}



// ===== Function: FUN_00102cf0 =====

void FUN_00102cf0(long *param_1)

{
  *param_1 = *param_1 + -4;
  return;
}



// ===== Function: FUN_00102d10 =====

void FUN_00102d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  uVar1 = FUN_00102870(&local_29,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00102870(&local_29,local_18,local_28);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_00102870(&local_29,local_20,local_28);
      if ((uVar1 & 1) == 0) {
        FUN_00103070(local_10,local_20);
      }
      else {
        FUN_00103070(local_10,local_28);
      }
    }
    else {
      FUN_00103070(local_10,local_18);
    }
  }
  else {
    uVar1 = FUN_00102870(&local_29,local_20,local_28);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_00102870(&local_29,local_18,local_28);
      if ((uVar1 & 1) == 0) {
        FUN_00103070(local_10,local_18);
      }
      else {
        FUN_00103070(local_10,local_28);
      }
    }
    else {
      FUN_00103070(local_10,local_20);
    }
  }
  return;
}



// ===== Function: FUN_00102f40 =====

undefined8 FUN_00102f40(long *param_1,long param_2)

{
  long local_28;
  long local_20;
  long *local_18;
  undefined8 local_10;
  
  local_28 = *param_1 + param_2 * -4;
  local_20 = param_2;
  local_18 = param_1;
  FUN_00102230(&local_10,&local_28);
  return local_10;
}



// ===== Function: FUN_00102f80 =====

undefined8 FUN_00102f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_28 = param_3;
  local_20 = param_2;
  local_18[0] = param_1;
  while( true ) {
    while (uVar1 = FUN_00102870(&local_29,local_18[0],local_28), (uVar1 & 1) != 0) {
      FUN_00102930(local_18);
    }
    FUN_00102cf0(&local_20);
    while (uVar1 = FUN_00102870(&local_29,local_28,local_20), (uVar1 & 1) != 0) {
      FUN_00102cf0(&local_20);
    }
    uVar1 = FUN_00102820(local_18,&local_20);
    if ((uVar1 & 1) == 0) break;
    FUN_00103070(local_18[0],local_20);
    FUN_00102930(local_18);
  }
  return local_18[0];
}



// ===== Function: FUN_00103070 =====

void FUN_00103070(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b0(param_1,param_2);
  return;
}



// ===== Function: FUN_001030b0 =====

void FUN_001030b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  uVar1 = FUN_00102990(&local_10);
  uVar2 = FUN_00102990(&local_18);
  FUN_001030f0(uVar1,uVar2);
  return;
}



// ===== Function: FUN_001030f0 =====

void FUN_001030f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



// ===== Function: FUN_00103120 =====

void FUN_00103120(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  uVar4 = FUN_001032a0(&local_10,&local_18);
  if ((uVar4 & 1) == 0) {
    local_28 = FUN_00102950(&local_10,1);
    while (uVar4 = FUN_001022f0(&local_28,&local_18), (uVar4 & 1) != 0) {
      uVar4 = FUN_00102870(&local_19,local_28,local_10);
      uVar2 = local_28;
      if ((uVar4 & 1) == 0) {
        FUN_00103400();
        FUN_00103360(uVar2);
      }
      else {
        puVar5 = (undefined4 *)FUN_00102990(&local_28);
        uVar3 = local_10;
        uVar2 = local_28;
        uVar1 = *puVar5;
        uVar6 = FUN_00102950(&local_28,1);
        FUN_001032f0(uVar3,uVar2,uVar6);
        puVar5 = (undefined4 *)FUN_00102990(&local_10);
        *puVar5 = uVar1;
      }
      FUN_00102930(&local_28);
    }
  }
  return;
}



// ===== Function: FUN_00103240 =====

void FUN_00103240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28[0] = param_1;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    uVar2 = FUN_001022f0(local_28,&local_18);
    uVar1 = local_28[0];
    if ((uVar2 & 1) == 0) break;
    FUN_00103400();
    FUN_00103360(uVar1);
    FUN_00102930(local_28);
  }
  return;
}



// ===== Function: FUN_001032a0 =====

bool FUN_001032a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e10(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e10(param_2);
  return lVar1 == *plVar2;
}



// ===== Function: FUN_001032f0 =====

undefined8 FUN_001032f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034b0(param_1);
  uVar2 = FUN_001034b0(param_2);
  uVar1 = FUN_00103420(uVar1,uVar2,param_3);
  return uVar1;
}



// ===== Function: FUN_00103360 =====

void FUN_00103360(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar2 = (undefined4 *)FUN_00102990(&local_10);
  local_18 = *puVar2;
  local_20 = local_10;
  FUN_00102cf0(&local_20);
  while( true ) {
    uVar3 = FUN_00103640(&local_11,&local_18,local_20);
    uVar1 = local_18;
    if ((uVar3 & 1) == 0) break;
    puVar2 = (undefined4 *)FUN_00102990(&local_20);
    uVar1 = *puVar2;
    puVar2 = (undefined4 *)FUN_00102990(&local_10);
    *puVar2 = uVar1;
    local_10 = local_20;
    FUN_00102cf0(&local_20);
  }
  puVar2 = (undefined4 *)FUN_00102990(&local_10);
  *puVar2 = uVar1;
  return;
}



// ===== Function: FUN_00103400 =====

void FUN_00103400(void)

{
  undefined1 local_9;
  
  FUN_00103680(&local_9);
  return;
}



// ===== Function: FUN_00103420 =====

undefined8 FUN_00103420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00103550(param_1);
  uVar2 = FUN_00103550(param_2);
  uVar3 = FUN_00103550(param_3);
  uVar1 = FUN_00103520(uVar1,uVar2,uVar3);
  uVar1 = FUN_001034d0(param_3,uVar1);
  return uVar1;
}



// ===== Function: FUN_001034b0 =====

undefined8 FUN_001034b0(undefined8 param_1)

{
  return param_1;
}



// ===== Function: FUN_001034d0 =====

undefined8 FUN_001034d0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  local_18[0] = param_1;
  lVar1 = FUN_00103550(param_1);
  uVar2 = FUN_00102950(local_18,param_2 - lVar1 >> 2);
  return uVar2;
}



// ===== Function: FUN_00103520 =====

void FUN_00103520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103570(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_00103550 =====

undefined8 FUN_00103550(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00101e10(&local_10);
  return *puVar1;
}



// ===== Function: FUN_00103570 =====

void FUN_00103570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035a0(param_1,param_2,param_3);
  return;
}



// ===== Function: FUN_001035a0 =====

long FUN_001035a0(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 < 2) {
    if (lVar1 == 1) {
      FUN_00102210(param_3 + -4,param_1);
    }
  }
  else {
    memmove((void *)(param_3 + lVar1 * -4),param_1,lVar1 << 2);
  }
  return param_3 + lVar1 * -4;
}



// ===== Function: FUN_00103640 =====

bool FUN_00103640(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_10;
  
  iVar1 = *param_2;
  local_10 = param_3;
  piVar2 = (int *)FUN_00102990(&local_10);
  return iVar1 < *piVar2;
}



// ===== Function: FUN_00103680 =====

void FUN_00103680(void)

{
  return;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: terminate =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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



