/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Int128__9a9axPfb75jdWY25AamJewkA tyObject_Int128__9a9axPfb75jdWY25AamJewkA;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__Ef05srmQTDulnBdXR4Ja6Q tySequence__Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence__MvZmat48bhe9b6x9aUD58D5Q tySequence__MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
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
typedef struct tyTuple__zwpS6d6iewrdlBSTNFoyVA tyTuple__zwpS6d6iewrdlBSTNFoyVA;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU32 tyArray__FleBT9cC2nxhgiXmSYYnEKA[4];
struct tyObject_Int128__9a9axPfb75jdWY25AamJewkA {
tyArray__FleBT9cC2nxhgiXmSYYnEKA udata;
};
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw;
typedef tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* tyArray__PsPyPA45AAjHu4uDGHNjTg[4];
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
struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence__Ef05srmQTDulnBdXR4Ja6Q* sons;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
tyArray__PsPyPA45AAjHu4uDGHNjTg attachedOps;
tySequence__MvZmat48bhe9b6x9aUD58D5Q* methods;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
NI16 lockLevel;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typeInst;
NI uniqueId;
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
struct tyTuple__zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {
  TGenericSeq Sup;
  NU8 data[SEQ_DECL_SIZE];
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence__MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple__zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, toBitSet__WoVO5FKglpQIWZt87zKYXA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* s, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Int128__9a9axPfb75jdWY25AamJewkA, firstOrd__hjogdnp59cMX1rwmjikBhqw)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t);
N_LIB_PRIVATE N_NIMCALL(void, bitSetInit__gToByGL9ch7eFNIHS6bVK5A)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** b, NI length);
N_LIB_PRIVATE N_NIMCALL(NI64, getSize__vCG1GF2Iu043oALVyuJfOw)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ);
static N_INLINE(NI, len__P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_Int128__9a9axPfb75jdWY25AamJewkA, getOrdValue__GvVg8kpCh7QA2PDTJnFJlQ)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_Int128__9a9axPfb75jdWY25AamJewkA onError);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, lteq___7c5Zw7H31uJfWmmhZe9aEqw_2)(tyObject_Int128__9a9axPfb75jdWY25AamJewkA a, tyObject_Int128__9a9axPfb75jdWY25AamJewkA b);
N_LIB_PRIVATE N_NIMCALL(void, bitSetIncl__D8VuDiNSH5ExQEnnktgOfw)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, NI64 elem);
N_LIB_PRIVATE N_NIMCALL(NI64, toInt64__1szweXXq3RBN50owrYu2Xw)(tyObject_Int128__9a9axPfb75jdWY25AamJewkA arg);
N_LIB_PRIVATE N_NIMCALL(tyObject_Int128__9a9axPfb75jdWY25AamJewkA, minus___Sp7OcCEIFoBYolB6PB1fAg_2)(tyObject_Int128__9a9axPfb75jdWY25AamJewkA a, tyObject_Int128__9a9axPfb75jdWY25AamJewkA b);
N_LIB_PRIVATE N_NIMCALL(void, inc__Glh2geFlMs9aE78UZ1JZGAA)(tyObject_Int128__9a9axPfb75jdWY25AamJewkA* a, NU32 y);
N_LIB_PRIVATE N_NIMCALL(NI64, bitSetCard__QrtRGG3oB8KZ1S1qGGrV7Q)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetContains__3Tz13qSD8R5sqlragWAI2w)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetEquals__3Tz13qSD8R5sqlragWAI2w_2)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetIntersect__ws9bXSVLc7PIKQ9b1eTjSYSg)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* s, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* settype, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newNodeI__vokyXY9cZDshCSxFKChhG9bg)(tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetIn__9cpK2jtBEfO3u5uE3OUjrSA)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x, NI64 e);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, newIntTypeNode__9azVbThnGagKx8BBa5Ph9cDw)(NI64 intVal, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ);
N_LIB_PRIVATE N_NIMCALL(void, addSon__P8dDSotTW25BkfbyspojGg_2)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(void, bitSetUnion__ws9bXSVLc7PIKQ9b1eTjSYSg_2)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetDiff__ws9bXSVLc7PIKQ9b1eTjSYSg_3)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y);
N_LIB_PRIVATE N_NIMCALL(void, bitSetSymDiff__ws9bXSVLc7PIKQ9b1eTjSYSg_4)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** x, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, leValue__uOYuOsiCZAbEPMGwBL8r8g_2)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameValue__uOYuOsiCZAbEPMGwBL8r8g)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b);
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
NIM_CONST tyObject_Int128__9a9axPfb75jdWY25AamJewkA TM__RCpa9aHGGIKsR9cKRKvszwow_2 = {{((NU32) IL64(4294967295)),
((NU32) IL64(4294967295)),
((NU32) IL64(4294967295)),
((NU32) 2147483647)}
};
static N_INLINE(void, nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
}
static N_INLINE(NI, len__P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, toBitSet__WoVO5FKglpQIWZt87zKYXA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* s, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ** b) {	tyObject_Int128__9a9axPfb75jdWY25AamJewkA first;
	tyObject_Int128__9a9axPfb75jdWY25AamJewkA j;
	NI64 T1_;
	nimZeroMem((void*)(&first), sizeof(tyObject_Int128__9a9axPfb75jdWY25AamJewkA));
	nimZeroMem((void*)(&j), sizeof(tyObject_Int128__9a9axPfb75jdWY25AamJewkA));
	first = firstOrd__hjogdnp59cMX1rwmjikBhqw(conf, (*(*s).typ).sons->data[((NI) 0)]);
	T1_ = (NI64)0;
	T1_ = getSize__vCG1GF2Iu043oALVyuJfOw(conf, (*s).typ);
	bitSetInit__gToByGL9ch7eFNIHS6bVK5A(b, ((NI) (T1_)));
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__P89cqdlERShb9alU3iC0yj8wast(s);
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA4;
				i = i_2;
				{
					if (!((*(*s).sons->data[i]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA7_;
					j = getOrdValue__GvVg8kpCh7QA2PDTJnFJlQ((*(*s).sons->data[i]).sons->data[((NI) 0)], first);
					{
						while (1) {
							tyObject_Int128__9a9axPfb75jdWY25AamJewkA T11_;
							NIM_BOOL T12_;
							tyObject_Int128__9a9axPfb75jdWY25AamJewkA T13_;
							NI64 T14_;
							T11_ = getOrdValue__GvVg8kpCh7QA2PDTJnFJlQ((*(*s).sons->data[i]).sons->data[((NI) 1)], first);
							T12_ = (NIM_BOOL)0;
							T12_ = lteq___7c5Zw7H31uJfWmmhZe9aEqw_2(j, T11_);
							if (!T12_) goto LA10;
							T13_ = minus___Sp7OcCEIFoBYolB6PB1fAg_2(j, first);
							T14_ = (NI64)0;
							T14_ = toInt64__1szweXXq3RBN50owrYu2Xw(T13_);
							bitSetIncl__D8VuDiNSH5ExQEnnktgOfw(b, T14_);
							inc__Glh2geFlMs9aE78UZ1JZGAA((&j), ((NU32) 1));
						} LA10: ;
					}
				}
				goto LA5_;
				LA7_: ;
				{
					tyObject_Int128__9a9axPfb75jdWY25AamJewkA T16_;
					tyObject_Int128__9a9axPfb75jdWY25AamJewkA T17_;
					NI64 T18_;
					T16_ = getOrdValue__GvVg8kpCh7QA2PDTJnFJlQ((*s).sons->data[i], TM__RCpa9aHGGIKsR9cKRKvszwow_2);
					T17_ = minus___Sp7OcCEIFoBYolB6PB1fAg_2(T16_, first);
					T18_ = (NI64)0;
					T18_ = toInt64__1szweXXq3RBN50owrYu2Xw(T17_);
					bitSetIncl__D8VuDiNSH5ExQEnnktgOfw(b, T18_);
				}
				LA5_: ;
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NI64, cardSet__rIy8FkZfgdui9cmJlRrbtNA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a) {	NI64 result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	result = (NI64)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	result = bitSetCard__QrtRGG3oB8KZ1S1qGGrV7Q(x);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsSets__Jr5d2PbcnAZ0pFa4Ny88lg)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	NIM_BOOL result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y;
	result = (NIM_BOOL)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	y = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, b, (&y));
	result = bitSetContains__3Tz13qSD8R5sqlragWAI2w(x, y);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, equalSets__Jr5d2PbcnAZ0pFa4Ny88lg_2)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	NIM_BOOL result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y;
	result = (NIM_BOOL)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	y = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, b, (&y));
	result = bitSetEquals__3Tz13qSD8R5sqlragWAI2w_2(x, y);
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
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* s, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* settype, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* elemType;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n;
	tyObject_Int128__9a9axPfb75jdWY25AamJewkA T1_;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	a = (NI64)0;
	b = (NI64)0;
	e = (NI64)0;
	first = (NI64)0;
	elemType = (tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
	n = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	elemType = (*settype).sons->data[((NI) 0)];
	T1_ = firstOrd__hjogdnp59cMX1rwmjikBhqw(conf, elemType);
	first = toInt64__1szweXXq3RBN50owrYu2Xw(T1_);
	result = newNodeI__vokyXY9cZDshCSxFKChhG9bg(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 39), info);
	asgnRef((void**) (&(*result).typ), settype);
	(*result).info = info;
	e = IL64(0);
	{
		while (1) {
			NI T4_;
			T4_ = (s ? s->Sup.len : 0);
			if (!(e < ((NI64) ((NI)(T4_ * ((NI) 8)))))) goto LA3;
			{
				NIM_BOOL T7_;
				tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* aa;
				T7_ = (NIM_BOOL)0;
				T7_ = bitSetIn__9cpK2jtBEfO3u5uE3OUjrSA(s, e);
				if (!T7_) goto LA8_;
				a = e;
				b = e;
				{
					while (1) {
						b += ((NI) 1);
						{
							NIM_BOOL T14_;
							NI T15_;
							NIM_BOOL T17_;
							T14_ = (NIM_BOOL)0;
							T15_ = (s ? s->Sup.len : 0);
							T14_ = (((NI64) ((NI)(T15_ * ((NI) 8)))) <= b);
							if (T14_) goto LA16_;
							T17_ = (NIM_BOOL)0;
							T17_ = bitSetIn__9cpK2jtBEfO3u5uE3OUjrSA(s, b);
							T14_ = !(T17_);
							LA16_: ;
							if (!T14_) goto LA18_;
							goto LA10;
						}
						LA18_: ;
					}
				} LA10: ;
				b -= ((NI) 1);
				aa = newIntTypeNode__9azVbThnGagKx8BBa5Ph9cDw((NI64)(a + first), elemType);
				(*aa).info = info;
				{
					if (!(a == b)) goto LA22_;
					addSon__P8dDSotTW25BkfbyspojGg_2(result, aa);
				}
				goto LA20_;
				LA22_: ;
				{
					tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* bb;
					n = newNodeI__vokyXY9cZDshCSxFKChhG9bg(((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 44), info);
					asgnRef((void**) (&(*n).typ), elemType);
					addSon__P8dDSotTW25BkfbyspojGg_2(n, aa);
					bb = newIntTypeNode__9azVbThnGagKx8BBa5Ph9cDw((NI64)(b + first), elemType);
					(*bb).info = info;
					addSon__P8dDSotTW25BkfbyspojGg_2(n, bb);
					addSon__P8dDSotTW25BkfbyspojGg_2(result, n);
				}
				LA20_: ;
				e = b;
			}
			LA8_: ;
			e += ((NI) 1);
		} LA3: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, intersectSets__DJXyM0ZYUUgI9bAP6orixDA)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	y = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, b, (&y));
	bitSetIntersect__ws9bXSVLc7PIKQ9b1eTjSYSg((&x), y);
	result = toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA(conf, x, (*a).typ, (*a).info);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, unionSets__DJXyM0ZYUUgI9bAP6orixDA_2)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	y = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, b, (&y));
	bitSetUnion__ws9bXSVLc7PIKQ9b1eTjSYSg_2((&x), y);
	result = toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA(conf, x, (*a).typ, (*a).info);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, diffSets__DJXyM0ZYUUgI9bAP6orixDA_3)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	y = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, b, (&y));
	bitSetDiff__ws9bXSVLc7PIKQ9b1eTjSYSg_3((&x), y);
	result = toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA(conf, x, (*a).typ, (*a).info);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, symdiffSets__DJXyM0ZYUUgI9bAP6orixDA_4)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* y;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	y = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, b, (&y));
	bitSetSymDiff__ws9bXSVLc7PIKQ9b1eTjSYSg_4((&x), y);
	result = toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA(conf, x, (*a).typ, (*a).info);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, inSet__b4nxsJCvqXRlyalSWskgNA)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* s, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* elem) {	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!!(((*s).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 39)))) goto LA3_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__P89cqdlERShb9alU3iC0yj8wast(s);
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7;
				i = i_2;
				{
					if (!((*(*s).sons->data[i]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA10_;
					{
						NIM_BOOL T14_;
						T14_ = (NIM_BOOL)0;
						T14_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2((*(*s).sons->data[i]).sons->data[((NI) 0)], elem);
						if (!(T14_)) goto LA15_;
						T14_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2(elem, (*(*s).sons->data[i]).sons->data[((NI) 1)]);
						LA15_: ;
						if (!T14_) goto LA16_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA16_: ;
				}
				goto LA8_;
				LA10_: ;
				{
					{
						NIM_BOOL T21_;
						T21_ = (NIM_BOOL)0;
						T21_ = sameValue__uOYuOsiCZAbEPMGwBL8r8g((*s).sons->data[i], elem);
						if (!T21_) goto LA22_;
						result = NIM_TRUE;
						goto BeforeRet_;
					}
					LA22_: ;
				}
				LA8_: ;
				i_2 += ((NI) 1);
			} LA7: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, overlap__tlIBRycg3YyKwtO2aPbGGg)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!((*a).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA3_;
		{
			NIM_BOOL T9_;
			if (!((*b).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA7_;
			T9_ = (NIM_BOOL)0;
			T9_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2((*a).sons->data[((NI) 0)], (*b).sons->data[((NI) 1)]);
			if (!(T9_)) goto LA10_;
			T9_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2((*b).sons->data[((NI) 0)], (*a).sons->data[((NI) 1)]);
			LA10_: ;
			result = T9_;
		}
		goto LA5_;
		LA7_: ;
		{
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2((*a).sons->data[((NI) 0)], b);
			if (!(T12_)) goto LA13_;
			T12_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2(b, (*a).sons->data[((NI) 1)]);
			LA13_: ;
			result = T12_;
		}
		LA5_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NIM_BOOL T19_;
			if (!((*b).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 44))) goto LA17_;
			T19_ = (NIM_BOOL)0;
			T19_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2((*b).sons->data[((NI) 0)], a);
			if (!(T19_)) goto LA20_;
			T19_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2(a, (*b).sons->data[((NI) 1)]);
			LA20_: ;
			result = T19_;
		}
		goto LA15_;
		LA17_: ;
		{
			result = sameValue__uOYuOsiCZAbEPMGwBL8r8g(a, b);
		}
		LA15_: ;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, emptyRange__tlIBRycg3YyKwtO2aPbGGg_2)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = leValue__uOYuOsiCZAbEPMGwBL8r8g_2(a, b);
	result = !(T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, deduplicate__npqksG7nXsyGRBfJK1db1g)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x;
	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	x = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
	toBitSet__WoVO5FKglpQIWZt87zKYXA(conf, a, (&x));
	result = toTreeSet__79a9c5tLWFpEXKKI9cu53sNIA(conf, x, (*a).typ, (*a).info);
	return result;
}
