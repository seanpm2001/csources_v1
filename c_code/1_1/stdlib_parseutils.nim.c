/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
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
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_CHAR, toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__oz568vhg7PZ19ak9aiwQxGYw)(NimStringDesc* s, NI64* b, NI start);
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_NIMCALL(NI, nimParseBiggestFloat)(NimStringDesc* s, NF* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt__aIj9c6LpxzonIV8kjAVwtEg)(NimStringDesc* s, NU64* b, NI start);
extern TNimType NTI__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM__vI9aZNKIcImom6dDyKXW1ZA_2, "Parsed integer outside of valid range", 37);
static N_INLINE(NIM_CHAR, toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils)(NIM_CHAR c) {	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		result = ((NIM_CHAR) (((NI) ((NI)((NI)(((NU8)(c)) - ((NI) 65)) + ((NI) 97))))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = c;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, skipIgnoreCase__Z630VYBL4pZDWlOyn05K5w)(NimStringDesc* s, NimStringDesc* token, NI start) {	NI result;
	result = (NI)0;
	{
		while (1) {
			NIM_BOOL T3_;
			NIM_BOOL T4_;
			NIM_CHAR T7_;
			NIM_CHAR T8_;
			T3_ = (NIM_BOOL)0;
			T4_ = (NIM_BOOL)0;
			T4_ = ((NI)(start + result) < (s ? s->Sup.len : 0));
			if (!(T4_)) goto LA5_;
			T4_ = (result < (token ? token->Sup.len : 0));
			LA5_: ;
			T3_ = T4_;
			if (!(T3_)) goto LA6_;
			T7_ = (NIM_CHAR)0;
			T7_ = toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils(s->data[(NI)(result + start)]);
			T8_ = (NIM_CHAR)0;
			T8_ = toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils(token->data[result]);
			T3_ = ((NU8)(T7_) == (NU8)(T8_));
			LA6_: ;
			if (!T3_) goto LA2;
			result += ((NI) 1);
		} LA2: ;
	}
	{
		if (!!((result == (token ? token->Sup.len : 0)))) goto LA11_;
		result = ((NI) 0);
	}
	LA11_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__5URmSDed0NZg9au720T3U9aA)(NimStringDesc* s, NI* number, NI start, NI maxLen) {	NI result;
	NI i;
	NI output;
	NIM_BOOL foundDigit;
	NI last;
	NI T1_;
	result = (NI)0;
	i = start;
	output = ((NI) 0);
	foundDigit = NIM_FALSE;
	T1_ = (NI)0;
	{
		if (!(maxLen == ((NI) 0))) goto LA4_;
		T1_ = (s ? s->Sup.len : 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = (NI)(i + maxLen);
	}
	LA2_: ;
	last = (((s ? s->Sup.len : 0) <= T1_) ? (s ? s->Sup.len : 0) : T1_);
	{
		NIM_BOOL T9_;
		NIM_BOOL T10_;
		T9_ = (NIM_BOOL)0;
		T10_ = (NIM_BOOL)0;
		T10_ = ((NI)(i + ((NI) 1)) < last);
		if (!(T10_)) goto LA11_;
		T10_ = ((NU8)(s->data[i]) == (NU8)(48));
		LA11_: ;
		T9_ = T10_;
		if (!(T9_)) goto LA12_;
		T9_ = (((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(120)) || ((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(88)));
		LA12_: ;
		if (!T9_) goto LA13_;
		i += ((NI) 2);
	}
	goto LA7_;
	LA13_: ;
	{
		NIM_BOOL T16_;
		T16_ = (NIM_BOOL)0;
		T16_ = (i < last);
		if (!(T16_)) goto LA17_;
		T16_ = ((NU8)(s->data[i]) == (NU8)(35));
		LA17_: ;
		if (!T16_) goto LA18_;
		i += ((NI) 1);
	}
	goto LA7_;
	LA18_: ;
	LA7_: ;
	{
		while (1) {
			if (!(i < last)) goto LA21;
			switch (((NU8)(s->data[i]))) {
			case 95:
			{
			}
			break;
			case 48 ... 57:
			{
				output = (NI)((NI)((NU32)(output) << (NU32)(((NI) 4))) | (NI)(((NU8)(s->data[i])) - ((NI) 48)));
				foundDigit = NIM_TRUE;
			}
			break;
			case 97 ... 102:
			{
				output = (NI)((NI)((NU32)(output) << (NU32)(((NI) 4))) | (NI)((NI)(((NU8)(s->data[i])) - ((NI) 97)) + ((NI) 10)));
				foundDigit = NIM_TRUE;
			}
			break;
			case 65 ... 70:
			{
				output = (NI)((NI)((NU32)(output) << (NU32)(((NI) 4))) | (NI)((NI)(((NU8)(s->data[i])) - ((NI) 65)) + ((NI) 10)));
				foundDigit = NIM_TRUE;
			}
			break;
			default:
			{
				goto LA20;
			}
			break;
			}
			i += ((NI) 1);
		} LA21: ;
	} LA20: ;
	{
		if (!foundDigit) goto LA29_;
		(*number) = output;
		result = (NI)(i - start);
	}
	LA29_: ;
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
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig)(void) {	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* eX60gensym182022_;
	NimStringDesc* T1_;
	eX60gensym182022_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
	eX60gensym182022_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*eX60gensym182022_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
	(*eX60gensym182022_).Sup.Sup.name = "ValueError";
	T1_ = (NimStringDesc*)0;
	T1_ = (*eX60gensym182022_).Sup.Sup.message; (*eX60gensym182022_).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__vI9aZNKIcImom6dDyKXW1ZA_2));
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*eX60gensym182022_).Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)eX60gensym182022_, "ValueError", "integerOutOfRangeError", "parseutils.nim", 399);
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__oz568vhg7PZ19ak9aiwQxGYw)(NimStringDesc* s, NI64* b, NI start) {	NI result;
	NI64 sign;
	NI i;
	result = (NI)0;
	sign = IL64(-1);
	i = start;
	{
		if (!(i < (s ? s->Sup.len : 0))) goto LA3_;
		{
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA7_;
			i += ((NI) 1);
		}
		goto LA5_;
		LA7_: ;
		{
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA10_;
			i += ((NI) 1);
			sign = IL64(1);
		}
		goto LA5_;
		LA10_: ;
		LA5_: ;
	}
	LA3_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		T14_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
		LA15_: ;
		if (!T14_) goto LA16_;
		(*b) = IL64(0);
		{
			while (1) {
				NIM_BOOL T20_;
				NI c;
				T20_ = (NIM_BOOL)0;
				T20_ = (i < (s ? s->Sup.len : 0));
				if (!(T20_)) goto LA21_;
				T20_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
				LA21_: ;
				if (!T20_) goto LA19;
				c = (NI)(((NU8)(s->data[i])) - ((NI) 48));
				{
					if (!((NI64)((NI64)((IL64(-9223372036854775807) - IL64(1)) + ((NI64) (c))) / IL64(10)) <= (*b))) goto LA24_;
					(*b) = (NI64)((NI64)((*b) * IL64(10)) - ((NI64) (c)));
				}
				goto LA22_;
				LA24_: ;
				{
					integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
				}
				LA22_: ;
				i += ((NI) 1);
				{
					while (1) {
						NIM_BOOL T29_;
						T29_ = (NIM_BOOL)0;
						T29_ = (i < (s ? s->Sup.len : 0));
						if (!(T29_)) goto LA30_;
						T29_ = ((NU8)(s->data[i]) == (NU8)(95));
						LA30_: ;
						if (!T29_) goto LA28;
						i += ((NI) 1);
					} LA28: ;
				}
			} LA19: ;
		}
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = (sign == IL64(-1));
			if (!(T33_)) goto LA34_;
			T33_ = ((*b) == (IL64(-9223372036854775807) - IL64(1)));
			LA34_: ;
			if (!T33_) goto LA35_;
			integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
		}
		goto LA31_;
		LA35_: ;
		{
			(*b) = (NI64)((*b) * sign);
			result = (NI)(i - start);
		}
		LA31_: ;
	}
	LA16_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {	NI result;
	NI64 res;
	result = (NI)0;
	res = (NI64)0;
	result = rawParseInt__oz568vhg7PZ19ak9aiwQxGYw(s, (&res), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = res;
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {	NI result;
	NI64 res;
	result = (NI)0;
	res = (NI64)0;
	result = npuParseBiggestInt(s, (&res), start);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (res < IL64(-2147483648));
		if (T3_) goto LA4_;
		T3_ = (IL64(2147483647) < res);
		LA4_: ;
		if (!T3_) goto LA5_;
		integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
	}
	LA5_: ;
	{
		if (!!((result == ((NI) 0)))) goto LA9_;
		(*number) = ((NI) (res));
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NimStringDesc* s, NF* number, NI start) {	NI result;
	NF bf;
	result = (NI)0;
	bf = (NF)0;
	result = nimParseBiggestFloat(s, (&bf), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = bf;
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt__aIj9c6LpxzonIV8kjAVwtEg)(NimStringDesc* s, NU64* b, NI start) {	NI result;
	NU64 res;
	NU64 prev;
	NI i;
	result = (NI)0;
	res = 0ULL;
	prev = 0ULL;
	i = start;
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (i < (NI)((s ? s->Sup.len : 0) - ((NI) 1)));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)(s->data[i]) == (NU8)(45));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = (((NU8)(s->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(s->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
		LA6_: ;
		if (!T3_) goto LA7_;
		integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
	}
	LA7_: ;
	{
		NIM_BOOL T11_;
		T11_ = (NIM_BOOL)0;
		T11_ = (i < (s ? s->Sup.len : 0));
		if (!(T11_)) goto LA12_;
		T11_ = ((NU8)(s->data[i]) == (NU8)(43));
		LA12_: ;
		if (!T11_) goto LA13_;
		i += ((NI) 1);
	}
	LA13_: ;
	{
		NIM_BOOL T17_;
		T17_ = (NIM_BOOL)0;
		T17_ = (i < (s ? s->Sup.len : 0));
		if (!(T17_)) goto LA18_;
		T17_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
		LA18_: ;
		if (!T17_) goto LA19_;
		(*b) = 0ULL;
		{
			while (1) {
				NIM_BOOL T23_;
				T23_ = (NIM_BOOL)0;
				T23_ = (i < (s ? s->Sup.len : 0));
				if (!(T23_)) goto LA24_;
				T23_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
				LA24_: ;
				if (!T23_) goto LA22;
				prev = res;
				res = (NU64)((NU64)((NU64)((NU64)(res) * (NU64)(((NI) 10)))) + (NU64)(((NU64) ((NI)(((NU8)(s->data[i])) - ((NI) 48))))));
				{
					if (!((NU64)(res) < (NU64)(prev))) goto LA27_;
					integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
				}
				LA27_: ;
				i += ((NI) 1);
				{
					while (1) {
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (i < (s ? s->Sup.len : 0));
						if (!(T31_)) goto LA32_;
						T31_ = ((NU8)(s->data[i]) == (NU8)(95));
						LA32_: ;
						if (!T31_) goto LA30;
						i += ((NI) 1);
					} LA30: ;
				}
			} LA22: ;
		}
		(*b) = res;
		result = (NI)(i - start);
	}
	LA19_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestUInt)(NimStringDesc* s, NU64* number, NI start) {	NI result;
	NU64 res;
	result = (NI)0;
	res = (NU64)0;
	result = rawParseUInt__aIj9c6LpxzonIV8kjAVwtEg(s, (&res), start);
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		(*number) = res;
	}
	LA3_: ;
	return result;
}
