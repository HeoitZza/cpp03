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
  (*(code *)PTR_00103fa8)();
  return;
}



// ===== Function: __cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00103fd8)();
  return;
}



// ===== Function: operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00103fb0)();
  return;
}



// ===== Function: operator<< =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00103fb8)();
  return poVar1;
}



// ===== Function: operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00103fc0)();
  return pvVar1;
}



// ===== Function: __cxa_bad_typeid =====

void __cxa_bad_typeid(void)

{
  (*(code *)PTR___cxa_bad_typeid_00103fc8)();
  return;
}



// ===== Function: strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00103fd0)();
  return iVar1;
}



// ===== Function: entry =====

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fe0)
            (FUN_001011c9,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Function: FUN_00101110 =====

/* WARNING: Removing unreachable block (ram,0x00101123) */
/* WARNING: Removing unreachable block (ram,0x0010112f) */

void FUN_00101110(void)

{
  return;
}



// ===== Function: FUN_00101140 =====

/* WARNING: Removing unreachable block (ram,0x00101164) */
/* WARNING: Removing unreachable block (ram,0x00101170) */

void FUN_00101140(void)

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
    FUN_00101110();
    DAT_00104150 = 1;
    return;
  }
  return;
}



// ===== Function: _INIT_0 =====

void _INIT_0(void)

{
  FUN_00101140();
  return;
}



// ===== Function: FUN_001011c9 =====

undefined8 FUN_001011c9(void)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(8);
  *plVar2 = 0;
  FUN_001013fe(plVar2);
  if (plVar2 == (long *)0x0) {
    __cxa_bad_typeid();
  }
  else {
    cVar1 = FUN_001012b6(*(undefined8 *)(*plVar2 + -8),&PTR_vtable_00103d70);
    if (cVar1 == '\0') goto LAB_0010123c;
  }
  std::operator<<((ostream *)std::cout,&DAT_00102018);
LAB_0010123c:
  (**(code **)*plVar2)(plVar2);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return 0;
}



// ===== Function: FUN_00101272 =====

undefined8 FUN_00101272(void)

{
  return 0;
}



// ===== Function: FUN_00101282 =====

long FUN_00101282(long param_1)

{
  long lVar1;
  
  if (**(char **)(param_1 + 8) == '*') {
    lVar1 = *(long *)(param_1 + 8) + 1;
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
  }
  return lVar1;
}



// ===== Function: FUN_001012b6 =====

bool FUN_001012b6(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  char *__s2;
  bool bVar3;
  
  cVar1 = FUN_00101272();
  if (cVar1 == '\0') {
    if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
      bVar3 = true;
    }
    else {
      if (**(char **)(param_1 + 8) != '*') {
        __s2 = (char *)FUN_00101282(param_2);
        iVar2 = strcmp(*(char **)(param_1 + 8),__s2);
        if (iVar2 == 0) {
          return true;
        }
      }
      bVar3 = false;
    }
  }
  else {
    bVar3 = param_1 == param_2;
  }
  return bVar3;
}



// ===== Function: FUN_00101340 =====

void FUN_00101340(void)

{
  std::operator<<((ostream *)std::cout,"Base\n");
  return;
}



// ===== Function: FUN_0010136c =====

void FUN_0010136c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d58;
  return;
}



// ===== Function: FUN_0010138a =====

void FUN_0010138a(void *param_1)

{
  FUN_0010136c(param_1);
  operator_delete(param_1);
  return;
}



// ===== Function: FUN_001013b4 =====

void FUN_001013b4(void)

{
  std::operator<<((ostream *)std::cout,"Woof!\n");
  return;
}



// ===== Function: FUN_001013e0 =====

void FUN_001013e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d58;
  return;
}



// ===== Function: FUN_001013fe =====

void FUN_001013fe(undefined8 *param_1)

{
  FUN_001013e0(param_1);
  *param_1 = &PTR_FUN_00103d30;
  return;
}



// ===== Function: FUN_0010142c =====

void FUN_0010142c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00103d30;
  FUN_0010136c(param_1);
  return;
}



// ===== Function: FUN_0010145a =====

void FUN_0010145a(void *param_1)

{
  FUN_0010142c(param_1);
  operator_delete(param_1);
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



// ===== Function: _ITM_deregisterTMCloneTable =====

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

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



