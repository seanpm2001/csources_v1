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
typedef struct tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg;
typedef struct tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
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
typedef struct tyTuple__9aIi6GdTSD27YtPkWxMqNxA tyTuple__9aIi6GdTSD27YtPkWxMqNxA;
struct tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg {
tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* root;
NI entries;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray__9aijZrM1syqzleJpcL8bUyw[512];
typedef tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* tyArray__VznXOmL540VWlOp56dB9cqA[512];
typedef tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* tyArray__jSFVQ48g222vuMjoJArs8A[512];
struct tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g {
NI entries;
tyArray__9aijZrM1syqzleJpcL8bUyw keys;
NIM_BOOL isInternal;
union{
struct {tyArray__VznXOmL540VWlOp56dB9cqA vals;
};
struct {tyArray__jSFVQ48g222vuMjoJArs8A links;
};
};
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
struct tyTuple__9aIi6GdTSD27YtPkWxMqNxA {
NimStringDesc* Field0;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* Field1;
NI Field2;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__tPE9ckDbaXj82MdUy0JgA7w)(void* p, NI op);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__NAicU5bAGXmkx2NJujGi7g)(NimStringDesc* x, NimStringDesc* y);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*, insert__J9bkvsuQNLcr7jeLPdOelGQ)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* h, NimStringDesc* key, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* val);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*, split__yftxuAKQL15Q5Hq7NIaang)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* h);
N_LIB_PRIVATE N_NIMCALL(void, copyHalf__QHbavwJ9cIUJ59b9aC42MHBDg)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* h, tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* result);
N_LIB_PRIVATE N_NIMCALL(NI, countSubTree__9bmJBiJZIhY26taaMZrwXcw)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* it);
TNimType NTI__VZdzO0Tlflp7WMN4gS8oPg_;
TNimType NTI__dNELmBSmY7nthjhZupWO6g_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI__9aijZrM1syqzleJpcL8bUyw_;
extern TNimType NTI__VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType NTI__fKfcLzXYiz5jNu3NH3Tv8Q_;
TNimType NTI__VznXOmL540VWlOp56dB9cqA_;
TNimType NTI__jSFVQ48g222vuMjoJArs8A_;
TNimType NTI__tPE9ckDbaXj82MdUy0JgA7w_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
TNimNode* NimDT___dNELmBSmY7nthjhZupWO6g_isInternal[3];
static N_NIMCALL(void, Marker_tyRef__tPE9ckDbaXj82MdUy0JgA7w)(void* p, NI op) {
	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* a;
	NI T1_;
	NI T2_;
	NI T3_;
	a = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 512; T1_++) {
	nimGCvisit((void*)(*a).keys[T1_], op);
	}
	switch ((*a).isInternal) {
	case NIM_FALSE:
	T2_ = (NI)0;
	for (T2_ = 0; T2_ < 512; T2_++) {
	nimGCvisit((void*)(*a).vals[T2_], op);
	}
	break;
	case NIM_TRUE:
	T3_ = (NI)0;
	for (T3_ = 0; T3_ < 512; T3_++) {
	nimGCvisit((void*)(*a).links[T3_], op);
	}
	break;
	} 
}
N_LIB_PRIVATE N_NIMCALL(void, initBTree__k5whnwDpZp6YeM19cX9ajL9aQ)(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg* Result) {	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* T1_;
	genericReset((void*)Result, (&NTI__VZdzO0Tlflp7WMN4gS8oPg_));
	T1_ = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*)0;
	T1_ = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*) newObj((&NTI__tPE9ckDbaXj82MdUy0JgA7w_), sizeof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g));
	(*T1_).entries = ((NI) 0);
	(*T1_).isInternal = NIM_FALSE;
	unsureAsgnRef((void**) (&(*Result).root), T1_);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__R2s6PEbDP9biCUJnpsKoeYw)(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg b, NimStringDesc* key) {	NIM_BOOL result;
	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* x;
{	result = (NIM_BOOL)0;
	x = b.root;
	{
		while (1) {
			if (!(*x).isInternal) goto LA2;
			{
				NI j;
				NI i;
				j = (NI)0;
				i = ((NI) 0);
				{
					while (1) {
						if (!(i < (*x).entries)) goto LA5;
						j = i;
						{
							NIM_BOOL T8_;
							NI T10_;
							T8_ = (NIM_BOOL)0;
							T8_ = ((NI)(j + ((NI) 1)) == (*x).entries);
							if (T8_) goto LA9_;
							T10_ = (NI)0;
							T10_ = cmp__NAicU5bAGXmkx2NJujGi7g(key, (*x).keys[((NI)(j + ((NI) 1)))- 0]);
							T8_ = (T10_ < ((NI) 0));
							LA9_: ;
							if (!T8_) goto LA11_;
							x = (*x).links[(j)- 0];
							goto LA3;
						}
						LA11_: ;
						i += ((NI) 1);
					} LA5: ;
				}
			} LA3: ;
		} LA2: ;
	}
	{
		NI j_2;
		NI i_2;
		j_2 = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < (*x).entries)) goto LA15;
				j_2 = i_2;
				{
					NI T18_;
					T18_ = (NI)0;
					T18_ = cmp__NAicU5bAGXmkx2NJujGi7g(key, (*x).keys[(j_2)- 0]);
					if (!(T18_ == ((NI) 0))) goto LA19_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA19_: ;
				i_2 += ((NI) 1);
			} LA15: ;
		}
	}
	result = NIM_FALSE;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
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
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, copyHalf__QHbavwJ9cIUJ59b9aC42MHBDg)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* h, tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* result) {	{
		NI j;
		NI i;
		j = (NI)0;
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				if (!(i < ((NI) 256))) goto LA3;
				j = i;
				T4_ = (NimStringDesc*)0;
				T4_ = (*result).keys[(j)- 0]; (*result).keys[(j)- 0] = copyStringRC1((*h).keys[((NI)(((NI) 256) + j))- 0]);
				if (T4_) nimGCunrefNoCycle(T4_);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	{
		if (!(*h).isInternal) goto LA7_;
		{
			NI j_2;
			NI i_2;
			j_2 = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < ((NI) 256))) goto LA11;
					j_2 = i_2;
					asgnRef((void**) (&(*result).links[(j_2)- 0]), (*h).links[((NI)(((NI) 256) + j_2))- 0]);
					i_2 += ((NI) 1);
				} LA11: ;
			}
		}
	}
	goto LA5_;
	LA7_: ;
	{
		{
			NI j_3;
			NI i_3;
			j_3 = (NI)0;
			i_3 = ((NI) 0);
			{
				while (1) {
					if (!(i_3 < ((NI) 256))) goto LA15;
					j_3 = i_3;
					asgnRef((void**) (&(*result).vals[(j_3)- 0]), (*h).vals[((NI)(((NI) 256) + j_3))- 0]);
					i_3 += ((NI) 1);
				} LA15: ;
			}
		}
	}
	LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*, split__yftxuAKQL15Q5Hq7NIaang)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* h) {	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* result;
	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* T1_;
	result = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*)0;
	T1_ = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*)0;
	T1_ = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*) newObj((&NTI__tPE9ckDbaXj82MdUy0JgA7w_), sizeof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g));
	(*T1_).entries = ((NI) 256);
	(*T1_).isInternal = (*h).isInternal;
	result = T1_;
	(*h).entries = ((NI) 256);
	copyHalf__QHbavwJ9cIUJ59b9aC42MHBDg(h, result);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*, insert__J9bkvsuQNLcr7jeLPdOelGQ)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* h, NimStringDesc* key, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* val) {	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* result;
	NimStringDesc* newKey;
	NI j;
	NimStringDesc* T36_;
{	result = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*)0;
	newKey = copyString(key);
	j = ((NI) 0);
	{
		if (!!((*h).isInternal)) goto LA3_;
		{
			while (1) {
				if (!(j < (*h).entries)) goto LA6;
				{
					NI T9_;
					T9_ = (NI)0;
					T9_ = cmp__NAicU5bAGXmkx2NJujGi7g(key, (*h).keys[(j)- 0]);
					if (!(T9_ < ((NI) 0))) goto LA10_;
					goto LA5;
				}
				LA10_: ;
				j += ((NI) 1);
			} LA6: ;
		} LA5: ;
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)(j + ((NI) 1));
			res = (*h).entries;
			{
				while (1) {
					if (!(colontmp_ <= res)) goto LA14;
					i = res;
					asgnRef((void**) (&(*h).vals[(i)- 0]), (*h).vals[((NI)(i - ((NI) 1)))- 0]);
					res -= ((NI) 1);
				} LA14: ;
			}
		}
		asgnRef((void**) (&(*h).vals[(j)- 0]), val);
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* newLink;
		newLink = NIM_NIL;
		{
			while (1) {
				if (!(j < (*h).entries)) goto LA17;
				{
					NIM_BOOL T20_;
					NI T22_;
					tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* u;
					T20_ = (NIM_BOOL)0;
					T20_ = ((NI)(j + ((NI) 1)) == (*h).entries);
					if (T20_) goto LA21_;
					T22_ = (NI)0;
					T22_ = cmp__NAicU5bAGXmkx2NJujGi7g(key, (*h).keys[((NI)(j + ((NI) 1)))- 0]);
					T20_ = (T22_ < ((NI) 0));
					LA21_: ;
					if (!T20_) goto LA23_;
					u = insert__J9bkvsuQNLcr7jeLPdOelGQ((*h).links[(j)- 0], key, val);
					j += ((NI) 1);
					{
						if (!(u == NIM_NIL)) goto LA27_;
						result = NIM_NIL;
						goto BeforeRet_;
					}
					LA27_: ;
					newKey = copyString((*u).keys[(((NI) 0))- 0]);
					newLink = u;
					goto LA16;
				}
				LA23_: ;
				j += ((NI) 1);
			} LA17: ;
		} LA16: ;
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (NI)(j + ((NI) 1));
			res_2 = (*h).entries;
			{
				while (1) {
					if (!(colontmp__2 <= res_2)) goto LA31;
					i_2 = res_2;
					asgnRef((void**) (&(*h).links[(i_2)- 0]), (*h).links[((NI)(i_2 - ((NI) 1)))- 0]);
					res_2 -= ((NI) 1);
				} LA31: ;
			}
		}
		asgnRef((void**) (&(*h).links[(j)- 0]), newLink);
	}
	LA1_: ;
	{
		NI i_3;
		NI colontmp__3;
		NI res_3;
		i_3 = (NI)0;
		colontmp__3 = (NI)0;
		colontmp__3 = (NI)(j + ((NI) 1));
		res_3 = (*h).entries;
		{
			while (1) {
				NimStringDesc* T35_;
				if (!(colontmp__3 <= res_3)) goto LA34;
				i_3 = res_3;
				T35_ = (NimStringDesc*)0;
				T35_ = (*h).keys[(i_3)- 0]; (*h).keys[(i_3)- 0] = copyStringRC1((*h).keys[((NI)(i_3 - ((NI) 1)))- 0]);
				if (T35_) nimGCunrefNoCycle(T35_);
				res_3 -= ((NI) 1);
			} LA34: ;
		}
	}
	T36_ = (NimStringDesc*)0;
	T36_ = (*h).keys[(j)- 0]; (*h).keys[(j)- 0] = copyStringRC1(newKey);
	if (T36_) nimGCunrefNoCycle(T36_);
	(*h).entries += ((NI) 1);
	{
		if (!((*h).entries < ((NI) 512))) goto LA39_;
		result = NIM_NIL;
	}
	goto LA37_;
	LA39_: ;
	{
		result = split__yftxuAKQL15Q5Hq7NIaang(h);
	}
	LA37_: ;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__oXWfa5DZ9ar9aQWG8k6z5P6Q)(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg* b, NimStringDesc* key, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* val) {	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* u;
	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* t;
	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* T5_;
	NimStringDesc* T6_;
	NimStringDesc* T7_;
{	u = insert__J9bkvsuQNLcr7jeLPdOelGQ((*b).root, key, val);
	(*b).entries += ((NI) 1);
	{
		if (!(u == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	T5_ = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*)0;
	T5_ = (tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*) newObj((&NTI__tPE9ckDbaXj82MdUy0JgA7w_), sizeof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g));
	(*T5_).entries = ((NI) 2);
	(*T5_).isInternal = NIM_TRUE;
	t = T5_;
	T6_ = (NimStringDesc*)0;
	T6_ = (*t).keys[(((NI) 0))- 0]; (*t).keys[(((NI) 0))- 0] = copyStringRC1((*(*b).root).keys[(((NI) 0))- 0]);
	if (T6_) nimGCunrefNoCycle(T6_);
	asgnRef((void**) (&(*t).links[(((NI) 0))- 0]), (*b).root);
	T7_ = (NimStringDesc*)0;
	T7_ = (*t).keys[(((NI) 1))- 0]; (*t).keys[(((NI) 1))- 0] = copyStringRC1((*u).keys[(((NI) 0))- 0]);
	if (T7_) nimGCunrefNoCycle(T7_);
	asgnRef((void**) (&(*t).links[(((NI) 1))- 0]), u);
	unsureAsgnRef((void**) (&(*b).root), t);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, getOrDefault__N7mBvvE4jWcEmzBA3UoB0A)(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg b, NimStringDesc* key) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* x;
{	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	x = b.root;
	{
		while (1) {
			if (!(*x).isInternal) goto LA2;
			{
				NI j;
				NI i;
				j = (NI)0;
				i = ((NI) 0);
				{
					while (1) {
						if (!(i < (*x).entries)) goto LA5;
						j = i;
						{
							NIM_BOOL T8_;
							NI T10_;
							T8_ = (NIM_BOOL)0;
							T8_ = ((NI)(j + ((NI) 1)) == (*x).entries);
							if (T8_) goto LA9_;
							T10_ = (NI)0;
							T10_ = cmp__NAicU5bAGXmkx2NJujGi7g(key, (*x).keys[((NI)(j + ((NI) 1)))- 0]);
							T8_ = (T10_ < ((NI) 0));
							LA9_: ;
							if (!T8_) goto LA11_;
							x = (*x).links[(j)- 0];
							goto LA3;
						}
						LA11_: ;
						i += ((NI) 1);
					} LA5: ;
				}
			} LA3: ;
		} LA2: ;
	}
	{
		NI j_2;
		NI i_2;
		j_2 = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < (*x).entries)) goto LA15;
				j_2 = i_2;
				{
					NI T18_;
					T18_ = (NI)0;
					T18_ = cmp__NAicU5bAGXmkx2NJujGi7g(key, (*x).keys[(j_2)- 0]);
					if (!(T18_ == ((NI) 0))) goto LA19_;
					result = (*x).vals[(j_2)- 0];
					goto BeforeRet_;
				}
				LA19_: ;
				i_2 += ((NI) 1);
			} LA15: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__4Wt9aVmAb9agcjxA5gGDTJQw)(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg b, NI index) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (index < b.entries);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, countSubTree__9bmJBiJZIhY26taaMZrwXcw)(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* it) {	NI result;
	result = (NI)0;
	{
		if (!(*it).isInternal) goto LA3_;
		result = ((NI) 0);
		{
			NI k;
			NI i;
			k = (NI)0;
			i = ((NI) 0);
			{
				while (1) {
					NI T8_;
					if (!(i < (*it).entries)) goto LA7;
					k = i;
					T8_ = (NI)0;
					T8_ = countSubTree__9bmJBiJZIhY26taaMZrwXcw((*it).links[(k)- 0]);
					result += T8_;
					i += ((NI) 1);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		result = (*it).entries;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, next__CqTK9bD6dhLiHbJZ5GMdxDQ)(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg b, NI index, tyTuple__9aIi6GdTSD27YtPkWxMqNxA* Result) {	tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g* it;
	NI i;
	NimStringDesc* colontmp_;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* colontmp__2;
	NI colontmp__3;
	it = b.root;
	i = index;
	{
		while (1) {
			NI sum;
			if (!(*it).isInternal) goto LA2;
			sum = ((NI) 0);
			{
				NI k;
				NI i_2;
				k = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						NI c;
						if (!(i_2 < (*it).entries)) goto LA5;
						k = i_2;
						c = countSubTree__9bmJBiJZIhY26taaMZrwXcw((*it).links[(k)- 0]);
						sum += c;
						{
							if (!(i < sum)) goto LA8_;
							it = (*it).links[(k)- 0];
							i -= (NI)(sum - c);
							goto LA3;
						}
						LA8_: ;
						i_2 += ((NI) 1);
					} LA5: ;
				}
			} LA3: ;
		} LA2: ;
	}
	colontmp_ = copyString((*it).keys[(i)- 0]);
	colontmp__2 = (*it).vals[(i)- 0];
	colontmp__3 = (NI)(index + ((NI) 1));
	unsureAsgnRef((void**) (&(*Result).Field0), copyString(colontmp_));
	unsureAsgnRef((void**) (&(*Result).Field1), colontmp__2);
	(*Result).Field2 = colontmp__3;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_btreesDatInit000)(void) {
static TNimNode* TM__XwGTJ9cLNTC3OG1qQV0hHqQ_2_2[2];
static TNimNode* TM__XwGTJ9cLNTC3OG1qQV0hHqQ_3_3[3];
static TNimNode TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[9];
NTI__VZdzO0Tlflp7WMN4gS8oPg_.size = sizeof(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg);
NTI__VZdzO0Tlflp7WMN4gS8oPg_.kind = 18;
NTI__VZdzO0Tlflp7WMN4gS8oPg_.base = 0;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_2_2[0] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[1];
NTI__dNELmBSmY7nthjhZupWO6g_.size = sizeof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g);
NTI__dNELmBSmY7nthjhZupWO6g_.kind = 18;
NTI__dNELmBSmY7nthjhZupWO6g_.base = 0;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_3_3[0] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[3];
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[3].kind = 1;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[3].offset = offsetof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g, entries);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[3].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[3].name = "entries";
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_3_3[1] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[4];
NTI__9aijZrM1syqzleJpcL8bUyw_.size = sizeof(tyArray__9aijZrM1syqzleJpcL8bUyw);
NTI__9aijZrM1syqzleJpcL8bUyw_.kind = 16;
NTI__9aijZrM1syqzleJpcL8bUyw_.base = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
NTI__9aijZrM1syqzleJpcL8bUyw_.flags = 2;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[4].kind = 1;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[4].offset = offsetof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g, keys);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[4].typ = (&NTI__9aijZrM1syqzleJpcL8bUyw_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[4].name = "keys";
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_3_3[2] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5];
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5].kind = 3;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5].offset = offsetof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g, isInternal);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5].name = "isInternal";
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5].sons = &NimDT___dNELmBSmY7nthjhZupWO6g_isInternal[0];
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[5].len = 2;
NTI__VznXOmL540VWlOp56dB9cqA_.size = sizeof(tyArray__VznXOmL540VWlOp56dB9cqA);
NTI__VznXOmL540VWlOp56dB9cqA_.kind = 16;
NTI__VznXOmL540VWlOp56dB9cqA_.base = (&NTI__fKfcLzXYiz5jNu3NH3Tv8Q_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[6].kind = 1;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[6].offset = offsetof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g, vals);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[6].typ = (&NTI__VznXOmL540VWlOp56dB9cqA_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[6].name = "vals";
NimDT___dNELmBSmY7nthjhZupWO6g_isInternal[0] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[6];
NTI__jSFVQ48g222vuMjoJArs8A_.size = sizeof(tyArray__jSFVQ48g222vuMjoJArs8A);
NTI__jSFVQ48g222vuMjoJArs8A_.kind = 16;
NTI__jSFVQ48g222vuMjoJArs8A_.base = (&NTI__tPE9ckDbaXj82MdUy0JgA7w_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[7].kind = 1;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[7].offset = offsetof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g, links);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[7].typ = (&NTI__jSFVQ48g222vuMjoJArs8A_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[7].name = "links";
NimDT___dNELmBSmY7nthjhZupWO6g_isInternal[1] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[7];
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[2].len = 3; TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[2].kind = 2; TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[2].sons = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_3_3[0];
NTI__dNELmBSmY7nthjhZupWO6g_.node = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[2];
NTI__tPE9ckDbaXj82MdUy0JgA7w_.size = sizeof(tyObject_NodecolonObjectType___dNELmBSmY7nthjhZupWO6g*);
NTI__tPE9ckDbaXj82MdUy0JgA7w_.kind = 22;
NTI__tPE9ckDbaXj82MdUy0JgA7w_.base = (&NTI__dNELmBSmY7nthjhZupWO6g_);
NTI__tPE9ckDbaXj82MdUy0JgA7w_.marker = Marker_tyRef__tPE9ckDbaXj82MdUy0JgA7w;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[1].kind = 1;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[1].offset = offsetof(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg, root);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[1].typ = (&NTI__tPE9ckDbaXj82MdUy0JgA7w_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[1].name = "root";
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_2_2[1] = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[8];
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[8].kind = 1;
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[8].offset = offsetof(tyObject_BTree__VZdzO0Tlflp7WMN4gS8oPg, entries);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[8].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[8].name = "entries";
TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[0].len = 2; TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[0].kind = 2; TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[0].sons = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_2_2[0];
NTI__VZdzO0Tlflp7WMN4gS8oPg_.node = &TM__XwGTJ9cLNTC3OG1qQV0hHqQ_0[0];
}

