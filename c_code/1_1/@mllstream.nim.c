/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
typedef struct tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_llstreamdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_llstreamdotnim___diB2NTuAIWY0FO9c5IUJRGg;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen, void* ClE_0);
void* ClE_0;
} tyProc__vqN8F2I9cNb9agHf5QUpC2lg;
struct tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g {
  RootObj Sup;
tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineOffset;
tyProc__vqN8F2I9cNb9agHf5QUpC2lg repl;
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
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_llstreamdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
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
typedef N_CLOSURE_PTR(NI, TM__ml9aueblxGz9aYsRLKvPmpow_7) (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen);
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__WO3j4yVQ0yN0aRCt9bFEbtg)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__f3MIZh4IV2qRTxlOpckbRA)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__FbqDHP9bu7nqCh9c04dnSOxw)(FILE* f, NimStringDesc** line);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__f3MIZh4IV2qRTxlOpckbRA_2)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__qdgWNgp9caij5krvzhfMCdQ)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLineFromStdin__6ffPyXmVcdswv6Vos4sTjg)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NI, countTriples__WwNVZc49ctzd9a9b9a4b9bHnwrw)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueLine__nv2vimOedET8u7U3HE4lAwllstream)(NimStringDesc* line, NIM_BOOL inTripleString);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith__sberXLoaiFnBA9azzLZ5m2Q)(NimStringDesc* x, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw s);
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI__a5oZYQ9aTktYME2449ayEi6g_;
TNimType NTI__jVcKY16LbOamXE9bxXUD6pQ_;
extern TNimType NTI__XBeRj4rw9bUuE7CB3DS1rgg_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI__vqN8F2I9cNb9agHf5QUpC2lg_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
TNimType NTI__WO3j4yVQ0yN0aRCt9bFEbtg_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM__ml9aueblxGz9aYsRLKvPmpow_8, "\012", 1);
STRING_LITERAL(TM__ml9aueblxGz9aYsRLKvPmpow_9, ">>> ", 4);
STRING_LITERAL(TM__ml9aueblxGz9aYsRLKvPmpow_10, "... ", 4);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__ml9aueblxGz9aYsRLKvPmpow_11 = {
0x00, 0x00, 0x00, 0x00, 0x7a, 0xbc, 0x00, 0xf4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static N_NIMCALL(void, Marker_tyRef__WO3j4yVQ0yN0aRCt9bFEbtg)(void* p, NI op) {
	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* a;
	a = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).repl.ClE_0, op);
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
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI) 8)))));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen__jzv9bBGhVSDMwEPDegAAa2w)(NimStringDesc* data) {	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	NimStringDesc* T1_;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*)0;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*) newObj((&NTI__WO3j4yVQ0yN0aRCt9bFEbtg_), sizeof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g));
	(*result).Sup.m_type = (&NTI__a5oZYQ9aTktYME2449ayEi6g_);
	T1_ = (NimStringDesc*)0;
	T1_ = (*result).s; (*result).s = copyStringRC1(data);
	if (T1_) nimGCunrefNoCycle(T1_);
	(*result).kind = ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 1);
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
N_LIB_PRIVATE N_NIMCALL(NI, llStreamRead__ioi0zlIEx7dNasBjD9brSbA)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen) {	NI result;
	result = (NI)0;
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 0):
	{
		result = ((NI) 0);
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		result = ((bufLen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? bufLen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
		{
			if (!(((NI) 0) < result)) goto LA5_;
			copyMem__M04YC71iJg1N7gBF3HZTngsystem(buf, ((void*) ((&(*s).s->data[(NI)(((NI) 0) + (*s).rd)]))), ((NI) (result)));
			(*s).rd += result;
		}
		LA5_: ;
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		result = readBuffer__f3MIZh4IV2qRTxlOpckbRA((*s).f, buf, ((NI) (bufLen)));
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
		result = (*s).repl.ClE_0? (*s).repl.ClP_0(s, buf, bufLen, (*s).repl.ClE_0):((TM__ml9aueblxGz9aYsRLKvPmpow_7)((*s).repl.ClP_0))(s, buf, bufLen);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__pzACjlxXGrH2rRQU5WrSmg)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s) {	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 1):
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		close__fU6ZlJAtQ9bre04EDZLdGsA_3((*s).f);
	}
	break;
	}
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen__knWUQJsEzojha6AJCi6LcA)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode) {	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*)0;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*) newObj((&NTI__WO3j4yVQ0yN0aRCt9bFEbtg_), sizeof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g));
	(*result).Sup.m_type = (&NTI__a5oZYQ9aTktYME2449ayEi6g_);
	(*result).kind = ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&(*result).f, filename, mode, ((NI) -1));
		if (!!(T3_)) goto LA4_;
		result = NIM_NIL;
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__7RtV9aJubfIMSghb2POqd9ag)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc** line) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) 0)));
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		NIM_BOOL T12_;
		{
			while (1) {
				if (!((*s).rd < ((*s).s ? (*s).s->Sup.len : 0))) goto LA4;
				switch (((NU8)((*s).s->data[(*s).rd]))) {
				case 13:
				{
					(*s).rd += ((NI) 1);
					{
						if (!((NU8)((*s).s->data[(*s).rd]) == (NU8)(10))) goto LA8_;
						(*s).rd += ((NI) 1);
					}
					LA8_: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).rd += ((NI) 1);
					goto LA3;
				}
				break;
				default:
				{
					unsureAsgnRef((void**) (&(*line)), addChar((*line), (*s).s->data[(*s).rd]));
					(*s).rd += ((NI) 1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		T12_ = (NIM_BOOL)0;
		T12_ = (((NI) 0) < ((*line) ? (*line)->Sup.len : 0));
		if (T12_) goto LA13_;
		T12_ = ((*s).rd < ((*s).s ? (*s).s->Sup.len : 0));
		LA13_: ;
		result = T12_;
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		result = readLine__FbqDHP9bu7nqCh9c04dnSOxw((*s).f, line);
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
		result = readLine__FbqDHP9bu7nqCh9c04dnSOxw(stdin, line);
	}
	break;
	}
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__qdgWNgp9caij5krvzhfMCdQ)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data) {	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		asgnRef((void**) (&(*s).s), resizeString((*s).s, (data ? data->Sup.len : 0) + 0));
appendString((*s).s, data);
		(*s).wr += (data ? data->Sup.len : 0);
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		write__PArlm09bKklm2BLsCg6YtaA((*s).f, data);
	}
	break;
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith__sberXLoaiFnBA9azzLZ5m2Q)(NimStringDesc* x, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw s) {	NIM_BOOL result;
	NI i;
	result = (NIM_BOOL)0;
	i = (NI)((x ? x->Sup.len : 0) - ((NI) 1));
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (((NI) 0) <= i);
			if (!(T3_)) goto LA4_;
			T3_ = ((NU8)(x->data[i]) == (NU8)(32));
			LA4_: ;
			if (!T3_) goto LA2;
			i -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (((NI) 0) <= i);
		if (!(T7_)) goto LA8_;
		T7_ = ((s[(NU)(((NU8)(x->data[i])))>>3] &(1U<<((NU)(((NU8)(x->data[i])))&7U)))!=0);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_TRUE;
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__eHN6oO0rdFcz7KOdSd4bXw)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NIM_CHAR data) {	NIM_CHAR c;
	c = (NIM_CHAR)0;
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 0):
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 3):
	{
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 1):
	{
		asgnRef((void**) (&(*s).s), addChar((*s).s, data));
		(*s).wr += ((NI) 1);
	}
	break;
	case ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2):
	{
		NI T4_;
		c = data;
		T4_ = (NI)0;
		T4_ = writeBuffer__f3MIZh4IV2qRTxlOpckbRA_2((*s).f, ((void*) ((&c))), ((NI) 1));
		(void)(T4_);
	}
	break;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln__qdgWNgp9caij5krvzhfMCdQ_2)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, NimStringDesc* data) {	llStreamWrite__qdgWNgp9caij5krvzhfMCdQ(s, data);
	llStreamWrite__qdgWNgp9caij5krvzhfMCdQ(s, ((NimStringDesc*) &TM__ml9aueblxGz9aYsRLKvPmpow_8));
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, llStreamOpen__ocAqkLNlxt5nOhrSLH4gwQ)(FILE* f) {	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*)0;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*) newObj((&NTI__WO3j4yVQ0yN0aRCt9bFEbtg_), sizeof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g));
	(*result).Sup.m_type = (&NTI__a5oZYQ9aTktYME2449ayEi6g_);
	(*result).f = f;
	(*result).kind = ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 2);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*, llStreamOpenStdIn__pPk7sU4bFjpcMn84L1CEgw)(tyProc__vqN8F2I9cNb9agHf5QUpC2lg r) {	tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* result;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*)0;
	result = (tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*) newObj((&NTI__WO3j4yVQ0yN0aRCt9bFEbtg_), sizeof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g));
	(*result).Sup.m_type = (&NTI__a5oZYQ9aTktYME2449ayEi6g_);
	(*result).kind = ((tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ) 3);
	asgnRef((void**) (&(*result).s), ((NimStringDesc*) NIM_NIL));
	(*result).lineOffset = ((NI) -1);
	asgnRef((void**) (&(*result).repl.ClE_0), r.ClE_0);
	(*result).repl.ClP_0 = r.ClP_0;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLineFromStdin__6ffPyXmVcdswv6Vos4sTjg)(NimStringDesc* prompt, NimStringDesc** line) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	write__PArlm09bKklm2BLsCg6YtaA(stderr, prompt);
	result = readLine__FbqDHP9bu7nqCh9c04dnSOxw(stdin, line);
	{
		if (!!(result)) goto LA3_;
		write__PArlm09bKklm2BLsCg6YtaA(stderr, ((NimStringDesc*) &TM__ml9aueblxGz9aYsRLKvPmpow_8));
		exit(((NI) 0));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, countTriples__WwNVZc49ctzd9a9b9a4b9bHnwrw)(NimStringDesc* s) {	NI result;
	NI i;
	result = (NI)0;
	i = ((NI) 0);
	{
		while (1) {
			if (!((NI)(i + ((NI) 2)) < (s ? s->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL T5_;
				NIM_BOOL T6_;
				T5_ = (NIM_BOOL)0;
				T6_ = (NIM_BOOL)0;
				T6_ = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(T6_)) goto LA7_;
				T6_ = ((NU8)(s->data[(NI)(i + ((NI) 1))]) == (NU8)(34));
				LA7_: ;
				T5_ = T6_;
				if (!(T5_)) goto LA8_;
				T5_ = ((NU8)(s->data[(NI)(i + ((NI) 2))]) == (NU8)(34));
				LA8_: ;
				if (!T5_) goto LA9_;
				result += ((NI) 1);
				i += ((NI) 2);
			}
			LA9_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}
static N_INLINE(NIM_BOOL, continueLine__nv2vimOedET8u7U3HE4lAwllstream)(NimStringDesc* line, NIM_BOOL inTripleString) {	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T3_;
	NIM_BOOL T5_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = inTripleString;
	if (T1_) goto LA2_;
	T3_ = (NIM_BOOL)0;
	T3_ = (((NI) 0) < (line ? line->Sup.len : 0));
	if (!(T3_)) goto LA4_;
	T5_ = (NIM_BOOL)0;
	T5_ = ((NU8)(line->data[((NI) 0)]) == (NU8)(32));
	if (T5_) goto LA6_;
	T5_ = endsWith__sberXLoaiFnBA9azzLZ5m2Q(line, TM__ml9aueblxGz9aYsRLKvPmpow_11);
	LA6_: ;
	T3_ = T5_;
	LA4_: ;
	T1_ = T3_;
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, llReadFromStdin__ioi0zlIEx7dNasBjD9brSbA_2)(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g* s, void* buf, NI bufLen) {	NI result;
	NimStringDesc* line;
	NI triples;
	result = (NI)0;
	asgnRef((void**) (&(*s).s), ((NimStringDesc*) NIM_NIL));
	(*s).rd = ((NI) 0);
	line = rawNewString(((NI) 120));
	triples = ((NI) 0);
	{
		while (1) {
			NimStringDesc* T3_;
			NIM_BOOL T9_;
			NI T10_;
			T3_ = (NimStringDesc*)0;
			{
				if (!(((*s).s ? (*s).s->Sup.len : 0) == ((NI) 0))) goto LA6_;
				T3_ = copyString(((NimStringDesc*) &TM__ml9aueblxGz9aYsRLKvPmpow_9));
			}
			goto LA4_;
			LA6_: ;
			{
				T3_ = copyString(((NimStringDesc*) &TM__ml9aueblxGz9aYsRLKvPmpow_10));
			}
			LA4_: ;
			T9_ = (NIM_BOOL)0;
			T9_ = readLineFromStdin__6ffPyXmVcdswv6Vos4sTjg(T3_, (&line));
			if (!T9_) goto LA2;
			asgnRef((void**) (&(*s).s), resizeString((*s).s, (line ? line->Sup.len : 0) + 0));
appendString((*s).s, line);
			asgnRef((void**) (&(*s).s), resizeString((*s).s, 1));
appendString((*s).s, ((NimStringDesc*) &TM__ml9aueblxGz9aYsRLKvPmpow_8));
			T10_ = (NI)0;
			T10_ = countTriples__WwNVZc49ctzd9a9b9a4b9bHnwrw(line);
			triples += T10_;
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				T13_ = continueLine__nv2vimOedET8u7U3HE4lAwllstream(line, ((NI)(triples & ((NI) 1)) == ((NI) 1)));
				if (!!(T13_)) goto LA14_;
				goto LA1;
			}
			LA14_: ;
		} LA2: ;
	} LA1: ;
	(*s).lineOffset += ((NI) 1);
	result = ((bufLen <= (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd)) ? bufLen : (NI)(((*s).s ? (*s).s->Sup.len : 0) - (*s).rd));
	{
		if (!(((NI) 0) < result)) goto LA18_;
		copyMem__M04YC71iJg1N7gBF3HZTngsystem(buf, ((void*) ((&(*s).s->data[(*s).rd]))), ((NI) (result)));
		(*s).rd += result;
	}
	LA18_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_llstreamDatInit000)(void) {
static TNimNode* TM__ml9aueblxGz9aYsRLKvPmpow_2_7[7];
static TNimNode* TM__ml9aueblxGz9aYsRLKvPmpow_3_4[4];
NI TM__ml9aueblxGz9aYsRLKvPmpow_5;
static char* NIM_CONST TM__ml9aueblxGz9aYsRLKvPmpow_4[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode* TM__ml9aueblxGz9aYsRLKvPmpow_6_2[2];
static TNimNode TM__ml9aueblxGz9aYsRLKvPmpow_0[16];
NTI__a5oZYQ9aTktYME2449ayEi6g_.size = sizeof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g);
NTI__a5oZYQ9aTktYME2449ayEi6g_.kind = 17;
NTI__a5oZYQ9aTktYME2449ayEi6g_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[0] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[1];
NTI__jVcKY16LbOamXE9bxXUD6pQ_.size = sizeof(tyEnum_TLLStreamKind__jVcKY16LbOamXE9bxXUD6pQ);
NTI__jVcKY16LbOamXE9bxXUD6pQ_.kind = 14;
NTI__jVcKY16LbOamXE9bxXUD6pQ_.base = 0;
NTI__jVcKY16LbOamXE9bxXUD6pQ_.flags = 3;
for (TM__ml9aueblxGz9aYsRLKvPmpow_5 = 0; TM__ml9aueblxGz9aYsRLKvPmpow_5 < 4; TM__ml9aueblxGz9aYsRLKvPmpow_5++) {
TM__ml9aueblxGz9aYsRLKvPmpow_0[TM__ml9aueblxGz9aYsRLKvPmpow_5+2].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[TM__ml9aueblxGz9aYsRLKvPmpow_5+2].offset = TM__ml9aueblxGz9aYsRLKvPmpow_5;
TM__ml9aueblxGz9aYsRLKvPmpow_0[TM__ml9aueblxGz9aYsRLKvPmpow_5+2].name = TM__ml9aueblxGz9aYsRLKvPmpow_4[TM__ml9aueblxGz9aYsRLKvPmpow_5];
TM__ml9aueblxGz9aYsRLKvPmpow_3_4[TM__ml9aueblxGz9aYsRLKvPmpow_5] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[TM__ml9aueblxGz9aYsRLKvPmpow_5+2];
}
TM__ml9aueblxGz9aYsRLKvPmpow_0[6].len = 4; TM__ml9aueblxGz9aYsRLKvPmpow_0[6].kind = 2; TM__ml9aueblxGz9aYsRLKvPmpow_0[6].sons = &TM__ml9aueblxGz9aYsRLKvPmpow_3_4[0];
NTI__jVcKY16LbOamXE9bxXUD6pQ_.node = &TM__ml9aueblxGz9aYsRLKvPmpow_0[6];
TM__ml9aueblxGz9aYsRLKvPmpow_0[1].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[1].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, kind);
TM__ml9aueblxGz9aYsRLKvPmpow_0[1].typ = (&NTI__jVcKY16LbOamXE9bxXUD6pQ_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[1].name = "kind";
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[1] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[7];
TM__ml9aueblxGz9aYsRLKvPmpow_0[7].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[7].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, f);
TM__ml9aueblxGz9aYsRLKvPmpow_0[7].typ = (&NTI__XBeRj4rw9bUuE7CB3DS1rgg_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[7].name = "f";
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[2] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[8];
TM__ml9aueblxGz9aYsRLKvPmpow_0[8].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[8].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, s);
TM__ml9aueblxGz9aYsRLKvPmpow_0[8].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[8].name = "s";
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[3] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[9];
TM__ml9aueblxGz9aYsRLKvPmpow_0[9].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[9].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, rd);
TM__ml9aueblxGz9aYsRLKvPmpow_0[9].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[9].name = "rd";
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[4] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[10];
TM__ml9aueblxGz9aYsRLKvPmpow_0[10].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[10].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, wr);
TM__ml9aueblxGz9aYsRLKvPmpow_0[10].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[10].name = "wr";
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[5] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[11];
TM__ml9aueblxGz9aYsRLKvPmpow_0[11].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[11].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, lineOffset);
TM__ml9aueblxGz9aYsRLKvPmpow_0[11].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[11].name = "lineOffset";
TM__ml9aueblxGz9aYsRLKvPmpow_2_7[6] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[12];
NTI__vqN8F2I9cNb9agHf5QUpC2lg_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__vqN8F2I9cNb9agHf5QUpC2lg_.kind = 18;
NTI__vqN8F2I9cNb9agHf5QUpC2lg_.base = 0;
TM__ml9aueblxGz9aYsRLKvPmpow_6_2[0] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[14];
TM__ml9aueblxGz9aYsRLKvPmpow_0[14].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[14].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__ml9aueblxGz9aYsRLKvPmpow_0[14].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[14].name = "Field0";
TM__ml9aueblxGz9aYsRLKvPmpow_6_2[1] = &TM__ml9aueblxGz9aYsRLKvPmpow_0[15];
TM__ml9aueblxGz9aYsRLKvPmpow_0[15].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[15].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__ml9aueblxGz9aYsRLKvPmpow_0[15].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[15].name = "Field1";
TM__ml9aueblxGz9aYsRLKvPmpow_0[13].len = 2; TM__ml9aueblxGz9aYsRLKvPmpow_0[13].kind = 2; TM__ml9aueblxGz9aYsRLKvPmpow_0[13].sons = &TM__ml9aueblxGz9aYsRLKvPmpow_6_2[0];
NTI__vqN8F2I9cNb9agHf5QUpC2lg_.node = &TM__ml9aueblxGz9aYsRLKvPmpow_0[13];
TM__ml9aueblxGz9aYsRLKvPmpow_0[12].kind = 1;
TM__ml9aueblxGz9aYsRLKvPmpow_0[12].offset = offsetof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g, repl);
TM__ml9aueblxGz9aYsRLKvPmpow_0[12].typ = (&NTI__vqN8F2I9cNb9agHf5QUpC2lg_);
TM__ml9aueblxGz9aYsRLKvPmpow_0[12].name = "repl";
TM__ml9aueblxGz9aYsRLKvPmpow_0[0].len = 7; TM__ml9aueblxGz9aYsRLKvPmpow_0[0].kind = 2; TM__ml9aueblxGz9aYsRLKvPmpow_0[0].sons = &TM__ml9aueblxGz9aYsRLKvPmpow_2_7[0];
NTI__a5oZYQ9aTktYME2449ayEi6g_.node = &TM__ml9aueblxGz9aYsRLKvPmpow_0[0];
NTI__WO3j4yVQ0yN0aRCt9bFEbtg_.size = sizeof(tyObject_TLLStream__a5oZYQ9aTktYME2449ayEi6g*);
NTI__WO3j4yVQ0yN0aRCt9bFEbtg_.kind = 22;
NTI__WO3j4yVQ0yN0aRCt9bFEbtg_.base = (&NTI__a5oZYQ9aTktYME2449ayEi6g_);
NTI__WO3j4yVQ0yN0aRCt9bFEbtg_.marker = Marker_tyRef__WO3j4yVQ0yN0aRCt9bFEbtg;
}

