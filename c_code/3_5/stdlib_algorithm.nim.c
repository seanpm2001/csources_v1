/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ;
typedef struct tySequence__i7xpiUsxyv6cQ1xK3JbcGQ tySequence__i7xpiUsxyv6cQ1xK3JbcGQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct tySequence__76wc9cnTOK9c6epudv8uYE0w tySequence__76wc9cnTOK9c6epudv8uYE0w;
typedef struct tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
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
typedef struct tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg;
typedef struct tySequence__5PunAJrNQYcB8dF0jau3pQ tySequence__5PunAJrNQYcB8dF0jau3pQ;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* x, tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* y, void* ClE_0);
void* ClE_0;
} tyProc__oUBe9cr5fvX49bNNuH9bVbmnw;
typedef NU8 tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA;
struct TGenericSeq {
NI len;
NI reserved;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_2) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* x, tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* y);
typedef NU8 tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ;
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_PrefixMatch__Dkww2nY9cxJVLF9cfoQS5U6Q;
struct tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ {
tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ section;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* qualifiedPath;
NimStringDesc** name;
NimStringDesc* filePath;
NI line;
NI column;
NimStringDesc* doc;
NimStringDesc* forth;
NI quality;
NIM_BOOL isGlobal;
NIM_BOOL contextFits;
tyEnum_PrefixMatch__Dkww2nY9cxJVLF9cfoQS5U6Q prefix;
NU8 symkind;
NI scope;
NI localUsages;
NI globalUsages;
NI tokenLen;
NI version;
};
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_3) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* x, tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* y);
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* x, tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* y, void* ClE_0);
void* ClE_0;
} tyProc__BX9cYxd9cF2mTlqoQZOdSHDA;
struct tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q {
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* pnode;
NI id;
NI idx;
NI lowLink;
NIM_BOOL onStack;
tySequence__76wc9cnTOK9c6epudv8uYE0w* kids;
NI hAQ;
NI hIS;
NI hB;
NI hCmd;
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
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_4) (tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* x, tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_5) (tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* x, tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* y);
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (NimStringDesc* x, NimStringDesc* y, void* ClE_0);
void* ClE_0;
} tyProc__kTj9c3SX9agxDQPZYwemi6ug;
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_6) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_7) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_8) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_9) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_10) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_11) (NimStringDesc* x, NimStringDesc* y, void* ClE_0);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_12) (NimStringDesc* x, NimStringDesc* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_13) (NimStringDesc* x, NimStringDesc* y);
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* x, tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* y, void* ClE_0);
void* ClE_0;
} tyProc__zzrK9cTwi9admDvOCMDMSIXQ;
struct tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg {
NimStringDesc* keyword;
NimStringDesc* link;
NimStringDesc* linkTitle;
NimStringDesc* linkDesc;
};
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_14) (tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* x, tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_15) (tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* x, tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* y);
struct tySequence__i7xpiUsxyv6cQ1xK3JbcGQ {
  TGenericSeq Sup;
  tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* data[SEQ_DECL_SIZE];
};
struct tySequence__76wc9cnTOK9c6epudv8uYE0w {
  TGenericSeq Sup;
  tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q* data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__5PunAJrNQYcB8dF0jau3pQ {
  TGenericSeq Sup;
  tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, merge__6r30o9btqT1LYFtPsj530vg)(tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ** a, NI aLen_0, tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__oUBe9cr5fvX49bNNuH9bVbmnw cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(NI, star___kgZDSIMT2vrZak9bMmeL40walgorithm)(NI x, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(tySequence__76wc9cnTOK9c6epudv8uYE0w*, newSeq__hJ5RQ2a9bsrV6HM2KvQcKQw)(NI len);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, sort__Vxb3by8QIdxiQga2mKXTcg)(tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** a, NI aLen_0, tyProc__BX9cYxd9cF2mTlqoQZOdSHDA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(void, merge__iemomhlJ9bCvkwJyjR9c2ZWg)(tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** a, NI aLen_0, tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__BX9cYxd9cF2mTlqoQZOdSHDA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(NI, binarySearch__mXuSYz7TnkvkJ0CgoqjIDA)(NimStringDesc** a, NI aLen_0, NimStringDesc* key, tyProc__kTj9c3SX9agxDQPZYwemi6ug cmp);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__NAicU5bAGXmkx2NJujGi7g_2)(NimStringDesc* x, NimStringDesc* y);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, merge__VVQbaBxW408lyw1OOwyNdQ)(NimStringDesc** a, NI aLen_0, NimStringDesc** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__kTj9c3SX9agxDQPZYwemi6ug cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(void, merge__8uGPISzqbd9ax9aI8lxSAOQA)(tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* b, NI bLen_0, NI lo, NI m, NI hi, tyProc__zzrK9cTwi9admDvOCMDMSIXQ cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
extern TNimType NTI__i7xpiUsxyv6cQ1xK3JbcGQ_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
extern TNimType NTI__76wc9cnTOK9c6epudv8uYE0w_;
extern TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI__5PunAJrNQYcB8dF0jau3pQ_;
static N_INLINE(NI, star___kgZDSIMT2vrZak9bMmeL40walgorithm)(NI x, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI result;
	NI y;
	result = (NI)0;
	y = (NI)(order - ((NI) 1));
	result = (NI)((NI)(x ^ y) - y);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, merge__6r30o9btqT1LYFtPsj530vg)(tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ** a, NI aLen_0, tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__oUBe9cr5fvX49bNNuH9bVbmnw cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_2)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_3)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, sort__kf6UDq4IFBhg8XC5ISz8gQ)(tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ** a, NI aLen_0, tyProc__oUBe9cr5fvX49bNNuH9bVbmnw cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI n;
	tySequence__i7xpiUsxyv6cQ1xK3JbcGQ* b;
	NI s;
	n = aLen_0;
	b = (tySequence__i7xpiUsxyv6cQ1xK3JbcGQ*)0;
	b = (tySequence__i7xpiUsxyv6cQ1xK3JbcGQ*) newSeq((&NTI__i7xpiUsxyv6cQ1xK3JbcGQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge__6r30o9btqT1LYFtPsj530vg(a, aLen_0, b->data, (b ? b->Sup.len : 0), (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
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
N_LIB_PRIVATE N_NIMCALL(void, merge__iemomhlJ9bCvkwJyjR9c2ZWg)(tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** a, NI aLen_0, tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__BX9cYxd9cF2mTlqoQZOdSHDA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_4)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_5)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, sort__Vxb3by8QIdxiQga2mKXTcg)(tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** a, NI aLen_0, tyProc__BX9cYxd9cF2mTlqoQZOdSHDA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI n;
	tySequence__76wc9cnTOK9c6epudv8uYE0w* b;
	NI s;
	n = aLen_0;
	b = (tySequence__76wc9cnTOK9c6epudv8uYE0w*)0;
	b = (tySequence__76wc9cnTOK9c6epudv8uYE0w*) newSeq((&NTI__76wc9cnTOK9c6epudv8uYE0w_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge__iemomhlJ9bCvkwJyjR9c2ZWg(a, aLen_0, b->data, (b ? b->Sup.len : 0), (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(tySequence__76wc9cnTOK9c6epudv8uYE0w*, sorted__1d6z7mFg8pfnJxr2lUHibg)(tyObject_DepNcolonObjectType___eVONEEaK4II8kv8La51d2Q** a, NI aLen_0, tyProc__BX9cYxd9cF2mTlqoQZOdSHDA cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	tySequence__76wc9cnTOK9c6epudv8uYE0w* result;
	result = (tySequence__76wc9cnTOK9c6epudv8uYE0w*)0;
	result = newSeq__hJ5RQ2a9bsrV6HM2KvQcKQw(((NI) (aLen_0)));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (aLen_0-1);
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				asgnRef((void**) (&result->data[i]), a[i]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	sort__Vxb3by8QIdxiQga2mKXTcg(result->data, (result ? result->Sup.len : 0), cmp, order);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, binarySearch__mXuSYz7TnkvkJ0CgoqjIDA)(NimStringDesc** a, NI aLen_0, NimStringDesc* key, tyProc__kTj9c3SX9agxDQPZYwemi6ug cmp) {	NI result;
	NI len;
{	result = (NI)0;
	{
		if (!(aLen_0 == ((NI) 0))) goto LA3_;
		result = ((NI) -1);
		goto BeforeRet_;
	}
	LA3_: ;
	len = aLen_0;
	{
		if (!(len == ((NI) 1))) goto LA7_;
		{
			NI T11_;
			T11_ = (NI)0;
			T11_ = cmp.ClE_0? cmp.ClP_0(a[((NI) 0)], key, cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_6)(cmp.ClP_0))(a[((NI) 0)], key);
			if (!(T11_ == ((NI) 0))) goto LA12_;
			result = ((NI) 0);
			goto BeforeRet_;
		}
		goto LA9_;
		LA12_: ;
		{
			result = ((NI) -1);
			goto BeforeRet_;
		}
		LA9_: ;
	}
	LA7_: ;
	{
		NI step;
		NI cmpRes;
		if (!((NI)(len & (NI)(len - ((NI) 1))) == ((NI) 0))) goto LA17_;
		step = (NI)((NI64)(len) >> (NU64)(((NI) 1)));
		cmpRes = (NI)0;
		{
			while (1) {
				NI i;
				if (!(((NI) 0) < step)) goto LA20;
				i = (NI)(result | step);
				cmpRes = cmp.ClE_0? cmp.ClP_0(a[i], key, cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_7)(cmp.ClP_0))(a[i], key);
				{
					if (!(cmpRes == ((NI) 0))) goto LA23_;
					result = i;
					goto BeforeRet_;
				}
				LA23_: ;
				{
					if (!(cmpRes < ((NI) 1))) goto LA27_;
					result = i;
				}
				LA27_: ;
				step = (NI)((NI64)(step) >> (NU64)(((NI) 1)));
			} LA20: ;
		}
		{
			NI T31_;
			T31_ = (NI)0;
			T31_ = cmp.ClE_0? cmp.ClP_0(a[result], key, cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_8)(cmp.ClP_0))(a[result], key);
			if (!!((T31_ == ((NI) 0)))) goto LA32_;
			result = ((NI) -1);
		}
		LA32_: ;
	}
	goto LA15_;
	LA17_: ;
	{
		NI b;
		NI cmpRes_2;
		b = len;
		cmpRes_2 = (NI)0;
		{
			while (1) {
				NI mid;
				if (!(result < b)) goto LA36;
				mid = (NI)((NI64)((NI)(result + b)) >> (NU64)(((NI) 1)));
				cmpRes_2 = cmp.ClE_0? cmp.ClP_0(a[mid], key, cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_9)(cmp.ClP_0))(a[mid], key);
				{
					if (!(cmpRes_2 == ((NI) 0))) goto LA39_;
					result = mid;
					goto BeforeRet_;
				}
				LA39_: ;
				{
					if (!(cmpRes_2 < ((NI) 0))) goto LA43_;
					result = (NI)(mid + ((NI) 1));
				}
				goto LA41_;
				LA43_: ;
				{
					b = mid;
				}
				LA41_: ;
			} LA36: ;
		}
		{
			NIM_BOOL T48_;
			NI T50_;
			T48_ = (NIM_BOOL)0;
			T48_ = (len <= result);
			if (T48_) goto LA49_;
			T50_ = (NI)0;
			T50_ = cmp.ClE_0? cmp.ClP_0(a[result], key, cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_10)(cmp.ClP_0))(a[result], key);
			T48_ = !((T50_ == ((NI) 0)));
			LA49_: ;
			if (!T48_) goto LA51_;
			result = ((NI) -1);
		}
		LA51_: ;
	}
	LA15_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(NI, binarySearch__wa1aY9bsuTdXtbdvM9apunWQ)(NimStringDesc** a, NI aLen_0, NimStringDesc* key) {	NI result;
	tyProc__kTj9c3SX9agxDQPZYwemi6ug T1_;
	result = (NI)0;
	nimZeroMem((void*)(&T1_), sizeof(tyProc__kTj9c3SX9agxDQPZYwemi6ug));
	T1_.ClP_0 = ((TM__JdC9c6SaUkvO1XjYuWP1JWQ_11) (cmp__NAicU5bAGXmkx2NJujGi7g_2)); T1_.ClE_0 = NIM_NIL;
	result = binarySearch__mXuSYz7TnkvkJ0CgoqjIDA(a, aLen_0, key, T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, merge__VVQbaBxW408lyw1OOwyNdQ)(NimStringDesc** a, NI aLen_0, NimStringDesc** b, NI bLen_0, NI lo, NI m, NI hi, tyProc__kTj9c3SX9agxDQPZYwemi6ug cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(m + ((NI) 1))], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_12)(cmp.ClP_0))(a[m], a[(NI)(m + ((NI) 1))]);
		T4_ = (NI)0;
		T4_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb]), a[j]);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_13)(cmp.ClP_0))(b[i], a[j]);
				T16_ = (NI)0;
				T16_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k]), b[i]);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k]), a[j]);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k]), b[i]);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, sort__BLQ2Oe9csF8Sez29axQeuW6w)(NimStringDesc** a, NI aLen_0, tyProc__kTj9c3SX9agxDQPZYwemi6ug cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI n;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* b;
	NI s;
	n = aLen_0;
	b = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)0;
	b = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI__sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge__VVQbaBxW408lyw1OOwyNdQ(a, aLen_0, b->data, (b ? b->Sup.len : 0), (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, merge__8uGPISzqbd9ax9aI8lxSAOQA)(tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* b, NI bLen_0, NI lo, NI m, NI hi, tyProc__zzrK9cTwi9admDvOCMDMSIXQ cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI j;
	NI bb;
	NI i;
	NI k;
{	{
		NI T3_;
		NI T4_;
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0((&a[m]), (&a[(NI)(m + ((NI) 1))]), cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_14)(cmp.ClP_0))((&a[m]), (&a[(NI)(m + ((NI) 1))]));
		T4_ = (NI)0;
		T4_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	j = lo;
	bb = ((NI) 0);
	{
		while (1) {
			if (!(j <= m)) goto LA8;
			unsureAsgnRef((void**) (&b[bb].keyword), a[j].keyword);
			unsureAsgnRef((void**) (&b[bb].link), a[j].link);
			unsureAsgnRef((void**) (&b[bb].linkTitle), a[j].linkTitle);
			unsureAsgnRef((void**) (&b[bb].linkDesc), a[j].linkDesc);
			bb += ((NI) 1);
			j += ((NI) 1);
		} LA8: ;
	}
	i = ((NI) 0);
	k = lo;
	{
		while (1) {
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (k < j);
			if (!(T11_)) goto LA12_;
			T11_ = (j <= hi);
			LA12_: ;
			if (!T11_) goto LA10;
			{
				NI T15_;
				NI T16_;
				T15_ = (NI)0;
				T15_ = cmp.ClE_0? cmp.ClP_0((&b[i]), (&a[j]), cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_15)(cmp.ClP_0))((&b[i]), (&a[j]));
				T16_ = (NI)0;
				T16_ = star___kgZDSIMT2vrZak9bMmeL40walgorithm(T15_, order);
				if (!(T16_ <= ((NI) 0))) goto LA17_;
				unsureAsgnRef((void**) (&a[k].keyword), b[i].keyword);
				unsureAsgnRef((void**) (&a[k].link), b[i].link);
				unsureAsgnRef((void**) (&a[k].linkTitle), b[i].linkTitle);
				unsureAsgnRef((void**) (&a[k].linkDesc), b[i].linkDesc);
				i += ((NI) 1);
			}
			goto LA13_;
			LA17_: ;
			{
				unsureAsgnRef((void**) (&a[k].keyword), a[j].keyword);
				unsureAsgnRef((void**) (&a[k].link), a[j].link);
				unsureAsgnRef((void**) (&a[k].linkTitle), a[j].linkTitle);
				unsureAsgnRef((void**) (&a[k].linkDesc), a[j].linkDesc);
				j += ((NI) 1);
			}
			LA13_: ;
			k += ((NI) 1);
		} LA10: ;
	}
	{
		while (1) {
			if (!(k < j)) goto LA21;
			unsureAsgnRef((void**) (&a[k].keyword), b[i].keyword);
			unsureAsgnRef((void**) (&a[k].link), b[i].link);
			unsureAsgnRef((void**) (&a[k].linkTitle), b[i].linkTitle);
			unsureAsgnRef((void**) (&a[k].linkDesc), b[i].linkDesc);
			k += ((NI) 1);
			i += ((NI) 1);
		} LA21: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, sort__7qlGu9cYbTdvZ8E8NMXzZyQ)(tyObject_IndexEntry__G9ccBDFWfr9aYnLgXTNGDHDg* a, NI aLen_0, tyProc__zzrK9cTwi9admDvOCMDMSIXQ cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {	NI n;
	tySequence__5PunAJrNQYcB8dF0jau3pQ* b;
	NI s;
	n = aLen_0;
	b = (tySequence__5PunAJrNQYcB8dF0jau3pQ*)0;
	b = (tySequence__5PunAJrNQYcB8dF0jau3pQ*) newSeq((&NTI__5PunAJrNQYcB8dF0jau3pQ_), ((NI) ((NI)(n / ((NI) 2)))));
	s = ((NI) 1);
	{
		while (1) {
			NI m;
			if (!(s < n)) goto LA2;
			m = (NI)((NI)(n - ((NI) 1)) - s);
			{
				while (1) {
					if (!(((NI) 0) <= m)) goto LA4;
					merge__8uGPISzqbd9ax9aI8lxSAOQA(a, aLen_0, b->data, (b ? b->Sup.len : 0), (((NI)((NI)(m - s) + ((NI) 1)) >= ((NI) 0)) ? (NI)((NI)(m - s) + ((NI) 1)) : ((NI) 0)), m, (NI)(m + s), cmp, order);
					m -= (NI)(s * ((NI) 2));
				} LA4: ;
			}
			s = (NI)(s * ((NI) 2));
		} LA2: ;
	}
}
