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



// ===== Function: memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00104000)();
  return pvVar1;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00104008)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00104010)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00104018)();
  return pvVar1;
}



// ===== Function: __cxa_bad_typeid =====

void __cxa_bad_typeid(void)

{
  (*(code *)PTR___cxa_bad_typeid_00104020)();
  return;
}



// ===== Function: strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00104028)();
  return iVar1;
}



// ===== Function: _Unwind_Resume =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Unwind_Resume(void)

{
  (*_DAT_00104030)();
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
            (FUN_001011a0,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_001010e0 =====

/* WARNING: Removing unreachable block (ram,0x001010f3) */
/* WARNING: Removing unreachable block (ram,0x001010ff) */

void FUN_001010e0(void)

{
  return;
}



// ===== Function: FUN_00101110 =====

/* WARNING: Removing unreachable block (ram,0x00101134) */
/* WARNING: Removing unreachable block (ram,0x00101140) */

void FUN_00101110(void)

{
  return;
}



// ===== Function: _FINI_0 =====

void _FINI_0(void)

{
  if (DAT_00104050 == '\0') {
    if (PTR___cxa_finalize_00103fb8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104040);
    }
    FUN_001010e0();
    DAT_00104050 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101110();
  return;
}



// ===== Function: FUN_001011a0 =====

undefined8 FUN_001011a0(void)

{
  long *__s;
  ulong uVar1;
  
  __s = (long *)operator_new(8);
  memset(__s,0,8);
  FUN_00101260(__s);
  if (__s == (long *)0x0) {
    __cxa_bad_typeid();
  }
  uVar1 = FUN_001012a0(*(undefined8 *)(*__s + -8),&PTR_vtable_00103d40);
  if ((uVar1 & 1) != 0) {
    std::operator<<((ostream *)PTR_cout_00103fc8,&DAT_0010200f);
  }
  (**(code **)*__s)();
  if (__s != (long *)0x0) {
    (**(code **)(*__s + 0x10))();
  }
  return 0;
}



// ===== Function: FUN_00101260 =====

void FUN_00101260(undefined8 *param_1)

{
  FUN_00101360();
  *param_1 = &PTR_FUN_00103d68;
  return;
}



// ===== Function: FUN_001012a0 =====

bool FUN_001012a0(long param_1,long param_2)

{
  char *__s1;
  int iVar1;
  ulong uVar2;
  char *__s2;
  undefined1 local_29;
  undefined1 local_9;
  
  uVar2 = FUN_001014b0();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
      local_9 = true;
    }
    else {
      local_29 = false;
      if (**(char **)(param_1 + 8) != '*') {
        __s1 = *(char **)(param_1 + 8);
        __s2 = (char *)FUN_001014c0(param_2);
        iVar1 = strcmp(__s1,__s2);
        local_29 = iVar1 == 0;
      }
      local_9 = local_29;
    }
  }
  else {
    local_9 = param_1 == param_2;
  }
  return local_9;
}



// ===== Function: FUN_00101360 =====

void FUN_00101360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d90;
  return;
}



// ===== Function: FUN_00101380 =====

void FUN_00101380(void)

{
  std::operator<<((ostream *)PTR_cout_00103fc8,"Woof!\n");
  return;
}



// ===== Function: FUN_001013b0 =====

void FUN_001013b0(undefined8 param_1)

{
  FUN_00101450(param_1);
  return;
}



// ===== Function: FUN_001013d0 =====

void FUN_001013d0(void *param_1)

{
                    /* try { // try from 001013e4 to 001013e8 has its CatchHandler @ 001013fd */
  FUN_001013b0();
  operator_delete(param_1);
  return;
}



// ===== Function: FUN_00101420 =====

void FUN_00101420(void)

{
  std::operator<<((ostream *)PTR_cout_00103fc8,"Base\n");
  return;
}



// ===== Function: FUN_00101450 =====

void FUN_00101450(void)

{
  return;
}



// ===== Function: FUN_00101460 =====

void FUN_00101460(void *param_1)

{
                    /* try { // try from 00101474 to 00101478 has its CatchHandler @ 0010148d */
  FUN_00101450();
  operator_delete(param_1);
  return;
}



// ===== Function: FUN_001014b0 =====

undefined8 FUN_001014b0(void)

{
  return 0;
}



// ===== Function: FUN_001014c0 =====

long FUN_001014c0(long param_1)

{
  undefined8 local_20;
  
  if (**(char **)(param_1 + 8) == '*') {
    local_20 = *(long *)(param_1 + 8) + 1;
  }
  else {
    local_20 = *(long *)(param_1 + 8);
  }
  return local_20;
}



// ===== Function: _DT_FINI =====

void _DT_FINI(void)

{
  return;
}



// ===== Function: memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

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



// ===== Function: __cxa_bad_typeid =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_bad_typeid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== Function: strcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

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



// ===== Function: __gxx_personality_v0 =====

/* WARNING: Control flow encountered bad instruction data */

void __gxx_personality_v0(void)

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



