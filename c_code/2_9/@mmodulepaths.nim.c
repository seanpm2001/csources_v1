/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA;
typedef struct tySequence__Ef05srmQTDulnBdXR4Ja6Q tySequence__Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA tySequence__DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ tySequence__DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc__NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc__NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence__Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
};
struct {tySequence__DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* transformedBody;
};
struct {tySequence__DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab;
};
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
};
};
tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NU8 tySet_tyEnum_TRenderFlag__wrPgUo1ExBlHvFnXN2nSHw;
typedef NU8 tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
struct tySequence__Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName__rlFejf61X39bVziQhhH7znQ)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pathSubs__paMedXIWX6si307wASTsQQ)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* p, NimStringDesc* config);
N_LIB_PRIVATE N_NIMCALL(void, nossplitFile)(NimStringDesc* path, tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toFullPath__VW1RaR1l9c9bPnJxr1KuvIrg)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NI32 fileIdx);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
N_LIB_PRIVATE N_NIMCALL(void, localError__NF6kBGchnhQYPbCedyefVA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, reraiseException)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderTree__ppjdh9aQ5L0SGPF8yz1gZ9cA)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tySet_tyEnum_TRenderFlag__wrPgUo1ExBlHvFnXN2nSHw renderFlags);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, localError__mMj7lrOf3zBP9bl69amiKu5g_3)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w msg, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, findModule__Y3iZ4DSoNguudlBW9cSwa2A)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* modulename, NimStringDesc* currentModule);
static N_INLINE(NIM_BOOL, isEmpty__kPpSxL0H5sJ9a6ujvdQ0QVQpathutils)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___qX5C9b0n9bOP7jk69amC8dA7A)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NI32, fileInfoIdx__3HRSVgYDcnQTolSZGx1zjA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* filename);
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
extern Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
extern Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
extern Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_3, "invalid path: ", 14);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_4, " ", 1);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_5, "using \'.\' instead of \'/\' in import paths is deprecated", 54);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_6, ".", 1);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_7, "/", 1);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_8, "invalid module name: \'$1\'", 25);
STRING_LITERAL(TM__GM5IT6miOywfWPAzqo7pmA_9, "cannot open file: ", 18);
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler__rqLlY5bs9atDw2OXYqJEn5g;
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = s;
}
static N_INLINE(void, nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
}
static N_INLINE(void, popSafePoint)(void) {	excHandler__rqLlY5bs9atDw2OXYqJEn5g = (*excHandler__rqLlY5bs9atDw2OXYqJEn5g).prev;
}
static N_INLINE(Exception*, getCurrentException)(void) {	Exception* result;
	result = (Exception*)0;
	result = currException__9bVPeDJlYTi9bQApZpfH8wjg;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI) 8)))));
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU32)((*c).refcount) - (NU32)(((NI) 8)));
	{
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(void, popCurrentException)(void) {	asgnRef((void**) (&currException__9bVPeDJlYTi9bQApZpfH8wjg), (*currException__9bVPeDJlYTi9bQApZpfH8wjg).up);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getModuleName__rlFejf61X39bVziQhhH7znQ)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {	NimStringDesc* volatile result;
	result = (NimStringDesc*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 20):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 21):
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		TSafePoint TM__GM5IT6miOywfWPAzqo7pmA_2;
		pushSafePoint(&TM__GM5IT6miOywfWPAzqo7pmA_2);
		TM__GM5IT6miOywfWPAzqo7pmA_2.status = setjmp(TM__GM5IT6miOywfWPAzqo7pmA_2.context);
		if (TM__GM5IT6miOywfWPAzqo7pmA_2.status == 0) {
			NimStringDesc* T3_;
			tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T4_;
			T3_ = (NimStringDesc*)0;
			T3_ = toFullPath__VW1RaR1l9c9bPnJxr1KuvIrg(conf, (*n).info.fileIndex);
			nimZeroMem((void*)(&T4_), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
			nossplitFile(T3_, (&T4_));
			result = pathSubs__paMedXIWX6si307wASTsQQ(conf, (*n).strVal, T4_.Field0);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI__yoNlBGx0D2tRizIdhQuENw_))) {
				NimStringDesc* T7_;
				TM__GM5IT6miOywfWPAzqo7pmA_2.status = 0;
				T7_ = (NimStringDesc*)0;
				T7_ = rawNewString(((*n).strVal ? (*n).strVal->Sup.len : 0) + 14);
appendString(T7_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_3));
appendString(T7_, (*n).strVal);
				localError__NF6kBGchnhQYPbCedyefVA(conf, (*n).info, T7_);
				result = copyString((*n).strVal);
				popCurrentException();
			}
		}
		if (TM__GM5IT6miOywfWPAzqo7pmA_2.status != 0) reraiseException();
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 2):
	{
		result = copyString((*(*n).ident).s);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = copyString((*(*(*n).sym).name).s);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 29):
	{
		tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n0;
		tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n1;
		NimStringDesc* modname;
		NimStringDesc* T11_;
		NimStringDesc* T12_;
		n0 = (*n).sons->data[((NI) 0)];
		n1 = (*n).sons->data[((NI) 1)];
		modname = getModuleName__rlFejf61X39bVziQhhH7znQ(conf, (*n).sons->data[((NI) 2)]);
		result = getModuleName__rlFejf61X39bVziQhhH7znQ(conf, n1);
		T11_ = (NimStringDesc*)0;
		T11_ = renderTree__ppjdh9aQ5L0SGPF8yz1gZ9cA(n0, 4);
		T12_ = (NimStringDesc*)0;
		T12_ = nsuReplaceStr(T11_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_4), ((NimStringDesc*) NIM_NIL));
		result = resizeString(result, (T12_ ? T12_->Sup.len : 0) + 0);
appendString(result, T12_);
		result = resizeString(result, (modname ? modname->Sup.len : 0) + 0);
appendString(result, modname);
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 30):
	{
		NimStringDesc* T14_;
		T14_ = (NimStringDesc*)0;
		T14_ = renderTree__ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
		result = nsuReplaceStr(T14_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_4), ((NimStringDesc*) NIM_NIL));
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 45):
	{
		NimStringDesc* T16_;
		localError__mMj7lrOf3zBP9bl69amiKu5g_3(conf, (*n).info, ((tyEnum_TMsgKind__29cbg2fC1z5iM1PAI28kR5w) 15), ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_5));
		T16_ = (NimStringDesc*)0;
		T16_ = renderTree__ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 4);
		result = nsuReplaceStr(T16_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_6), ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_7));
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 78):
	{
		result = getModuleName__rlFejf61X39bVziQhhH7znQ(conf, (*n).sons->data[((NI) 0)]);
	}
	break;
	default:
	{
		NimStringDesc* T19_;
		NimStringDesc* T20_;
		T19_ = (NimStringDesc*)0;
		T19_ = renderTree__ppjdh9aQ5L0SGPF8yz1gZ9cA(n, 0);
		T20_ = (NimStringDesc*)0;
		T20_ = nsuFormatSingleElem(((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_8), T19_);
		localError__NF6kBGchnhQYPbCedyefVA(conf, (*n).info, T20_);
		result = ((NimStringDesc*) NIM_NIL);
	}
	break;
	}
	return result;
}
static N_INLINE(NIM_BOOL, isEmpty__kPpSxL0H5sJ9a6ujvdQ0QVQpathutils)(NimStringDesc* x) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((x ? x->Sup.len : 0) == ((NI) 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI32, checkModuleName__fDy39b69bb9cFVEyPkMJp3GTg)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, NIM_BOOL doLocalError) {	NI32 result;
	NimStringDesc* modulename;
	NimStringDesc* fullPath;
	NimStringDesc* T1_;
	result = (NI32)0;
	modulename = getModuleName__rlFejf61X39bVziQhhH7znQ(conf, n);
	T1_ = (NimStringDesc*)0;
	T1_ = toFullPath__VW1RaR1l9c9bPnJxr1KuvIrg(conf, (*n).info.fileIndex);
	fullPath = findModule__Y3iZ4DSoNguudlBW9cSwa2A(conf, modulename, T1_);
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = isEmpty__kPpSxL0H5sJ9a6ujvdQ0QVQpathutils(fullPath);
		if (!T4_) goto LA5_;
		{
			NimStringDesc* m;
			NimStringDesc* T16_;
			if (!doLocalError) goto LA9_;
			{
				if (!(((NI) 0) < (modulename ? modulename->Sup.len : 0))) goto LA13_;
				m = modulename;
			}
			goto LA11_;
			LA13_: ;
			{
				m = dollar___qX5C9b0n9bOP7jk69amC8dA7A(n);
			}
			LA11_: ;
			T16_ = (NimStringDesc*)0;
			T16_ = rawNewString((m ? m->Sup.len : 0) + 18);
appendString(T16_, ((NimStringDesc*) &TM__GM5IT6miOywfWPAzqo7pmA_9));
appendString(T16_, m);
			localError__NF6kBGchnhQYPbCedyefVA(conf, (*n).info, T16_);
		}
		LA9_: ;
		result = ((NI32) -1);
	}
	goto LA2_;
	LA5_: ;
	{
		result = fileInfoIdx__3HRSVgYDcnQTolSZGx1zjA(conf, fullPath);
	}
	LA2_: ;
	return result;
}
