/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <setjmp.h>
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
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
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
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc__YrlAFY4fseJeExebH9aRGbw) (unsigned int codepage);
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
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
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NimStringDesc* tyArray__XL8FfPqMNtuU56fW9c8pBtQ[5];
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
struct tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg {
  tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw Sup;
};
typedef NU8 tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(void, writeWindows__JO9bn8JE1R6MjKZqdvhBrWg)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) __attribute__((noreturn));
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void*, fopen__bn2yAzk2l19aVmr8QZTptyA)(NCSTRING filename, NCSTRING mode);
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__G8rSmf9akUNUzuZWlrfFAmA)(NCSTRING s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2)(FILE* f);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll__mQf9blHFlTwuSvJjirhpY6g)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__2ezUTSmBrmr5VkZNxReTYQ)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile__W4tKfHpbz7kHhikLsBc0EA)(FILE* file, NI64 len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__f3MIZh4IV2qRTxlOpckbRA)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__FK5lmHTzEdX6epYBp9bfgMg)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2)(FILE* file);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, popSafePoint)(void);
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__FbqDHP9bu7nqCh9c04dnSOxw)(FILE* f, NimStringDesc** line);
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF__CA1KPE9bDgvXVjqamZd5T9bQ)(void) __attribute__((noreturn));
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, newSeq__5tQ8ny8q7AB9cp1xE2MILLQ)(NI len);
static void* TM__MnCJ0VAmeZ9aTATUB39cx60Q_2;
tyProc__YrlAFY4fseJeExebH9aRGbw Dl_176603_;
tyProc__YrlAFY4fseJeExebH9aRGbw Dl_176606_;
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI__LEclZrWX2FQAodlapxGITw_;
extern TNimType NTI__KGSY1JdrNB7Xi8KDhXFhSg_;
TNimType NTI__2gIj3gQlK3HZJjQaYCP6ZQ_;
TNimType NTI__MAWzaQJYFu3mlxj0Ppxhmw_;
TNimType NTI__XBeRj4rw9bUuE7CB3DS1rgg_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4, "kernel32", 8);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5, "kernel32", 8);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_10, "cannot write string to file", 27);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_11, "rb", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12, "wb", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_13, "w+b", 3);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_14, "r+b", 3);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_15, "ab", 2);
NIM_CONST tyArray__XL8FfPqMNtuU56fW9c8pBtQ FormatOpen__iWZDMxVvD1FETfmW09b8gFQ = {((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_11),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_12),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_13),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_14),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_15)}
;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_16, "cannot open: ", 13);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_17, "errno: ", 7);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_18, " `", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_19, "`", 1);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_21, "EOF reached", 11);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_24, "cannot set file position", 24);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_25, "cannot retrieve file position", 29);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
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
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) {	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* eX60gensym170424_;
	NimStringDesc* T1_;
	eX60gensym170424_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
	eX60gensym170424_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*eX60gensym170424_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
	(*eX60gensym170424_).Sup.Sup.name = "IOError";
	T1_ = (NimStringDesc*)0;
	T1_ = (*eX60gensym170424_).Sup.Sup.message; (*eX60gensym170424_).Sup.Sup.message = copyStringRC1(msg);
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*eX60gensym170424_).Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)eX60gensym170424_, "IOError", "raiseEIO", "io.nim", 132);
}
N_LIB_PRIVATE N_NIMCALL(void, writeWindows__JO9bn8JE1R6MjKZqdvhBrWg)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise) {	int i;
	i = fprintf(f, "%s", nimToCStringConv(s));
	{
		while (1) {
			if (!(((NI) (i)) < (s ? s->Sup.len : 0))) goto LA2;
			{
				int w;
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA5_;
				w = fputc(0, f);
				{
					if (!!((w == ((NI32) 0)))) goto LA9_;
					{
						if (!doRaise) goto LA13_;
						raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10));
					}
					LA13_: ;
					goto LA1;
				}
				LA9_: ;
				i += ((NI) 1);
			}
			goto LA3_;
			LA5_: ;
			{
				int w_2;
				w_2 = fprintf(f, "%s", (&s->data[i]));
				{
					if (!(w_2 <= ((NI32) 0))) goto LA18_;
					{
						if (!doRaise) goto LA22_;
						raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10));
					}
					LA22_: ;
					goto LA1;
				}
				LA18_: ;
				i += ((NI) (w_2));
			}
			LA3_: ;
		} LA2: ;
	} LA1: ;
}
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {	int T4_;
	int T5_;
	{
		NimStringDesc* s;
		NI i;
		s = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < argsLen_0)) goto LA3;
				s = args[i];
				writeWindows__JO9bn8JE1R6MjKZqdvhBrWg(stdout, s, NIM_FALSE);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	T4_ = (int)0;
	T4_ = fwrite(((void*) ("\012")), ((NI) 1), ((NI) 1), stdout);
	(void)(T4_);
	T5_ = (int)0;
	T5_ = fflush(stdout);
	(void)(T5_);
}
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__hOwLbM7eXaZgEJrHWLeiNg)(FILE* f) {	int result;
	result = (int)0;
	result = _fileno(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s) {	writeWindows__JO9bn8JE1R6MjKZqdvhBrWg(f, s, NIM_TRUE);
}
N_LIB_PRIVATE N_NIMCALL(void, flushFile__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f) {	int T1_;
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void*, fopen__bn2yAzk2l19aVmr8QZTptyA)(NCSTRING filename, NCSTRING mode) {	void* result;
	NI16* f;
	NI16* m;
	result = (void*)0;
	f = newWideCString__G8rSmf9akUNUzuZWlrfFAmA(filename);
	m = newWideCString__G8rSmf9akUNUzuZWlrfFAmA(mode);
	result = _wfopen(f, m);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {	NIM_BOOL result;
	void* p;
	result = (NIM_BOOL)0;
	p = fopen__bn2yAzk2l19aVmr8QZTptyA(nimToCStringConv(filename), nimToCStringConv(FormatOpen__iWZDMxVvD1FETfmW09b8gFQ[(mode)- 0]));
	{
		if (!!((p == NIM_NIL))) goto LA3_;
		result = NIM_TRUE;
		(*f) = ((FILE*) (p));
		{
			NIM_BOOL T7_;
			int T11_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) < bufSize);
			if (!(T7_)) goto LA8_;
			T7_ = (bufSize <= ((NI) 2147483647));
			LA8_: ;
			if (!T7_) goto LA9_;
			T11_ = (int)0;
			T11_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (((int) (bufSize)))));
			(void)(T11_);
		}
		goto LA5_;
		LA9_: ;
		{
			int T15_;
			if (!(bufSize == ((NI) 0))) goto LA13_;
			T15_ = (int)0;
			T15_ = setvbuf((*f), NIM_NIL, _IONBF, ((NI) 0));
			(void)(T15_);
		}
		goto LA5_;
		LA13_: ;
		LA5_: ;
	}
	LA3_: ;
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
N_LIB_PRIVATE N_NIMCALL(FILE*, open__cb1k9citqyT9a9brBSJAz8pkg)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {	FILE* result;
	result = (FILE*)0;
	{
		NIM_BOOL T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* eX60gensym173882_;
		NimStringDesc* T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&result, filename, mode, bufSize);
		if (!!(T3_)) goto LA4_;
		eX60gensym173882_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		eX60gensym173882_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*eX60gensym173882_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*eX60gensym173882_).Sup.Sup.name = "IOError";
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_16));
appendString(T6_, filename);
		asgnRef((void**) (&(*eX60gensym173882_).Sup.Sup.message), T6_);
		asgnRef((void**) (&(*eX60gensym173882_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym173882_, "IOError", "open", "io.nim", 572);
	}
	LA4_: ;
	return result;
}
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2)(FILE* f) {	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = nimIntToStr(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = (NimStringDesc*)0;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_17));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_18));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_19));
		msg = T6_;
		clearerr(f);
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(msg);
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__FbqDHP9bu7nqCh9c04dnSOxw)(FILE* f, NimStringDesc** line) {	NIM_BOOL result;
	NI pos;
	NI sp;
{	result = (NIM_BOOL)0;
	pos = ((NI) 0);
	sp = ((((*line) ? (*line)->Sup.len : 0) >= ((NI) 80)) ? ((*line) ? (*line)->Sup.len : 0) : ((NI) 80));
	unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (sp))));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			NCSTRING T6_;
			NIM_BOOL T7_;
			void* m;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < sp)) goto LA5;
						i = i_2;
						(*line)->data[(NI)(pos + i)] = 10;
						i_2 += ((NI) 1);
					} LA5: ;
				}
			}
			T6_ = (NCSTRING)0;
			T6_ = fgets(((NCSTRING) ((&(*line)->data[pos]))), ((int) (sp)), f);
			T7_ = (NIM_BOOL)0;
			T7_ = eqeq___aqip9cmQIuefPKdd25wuEEwsystem(T6_, NIM_NIL);
			fgetsSuccess = !(T7_);
			{
				if (!!(fgetsSuccess)) goto LA10_;
				checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2(f);
			}
			LA10_: ;
			m = memchr(((void*) ((&(*line)->data[pos]))), ((int) 10), sp);
			{
				NI last;
				NIM_BOOL T35_;
				if (!!((m == NIM_NIL))) goto LA14_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line)->data[((NI) 0)]))));
				{
					NIM_BOOL T18_;
					NIM_BOOL T22_;
					T18_ = (NIM_BOOL)0;
					T18_ = (((NI) 0) < last);
					if (!(T18_)) goto LA19_;
					T18_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(13));
					LA19_: ;
					if (!T18_) goto LA20_;
					unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(last - ((NI) 1))))));
					T22_ = (NIM_BOOL)0;
					T22_ = (((NI) 1) < last);
					if (T22_) goto LA23_;
					T22_ = fgetsSuccess;
					LA23_: ;
					result = T22_;
					goto BeforeRet_;
				}
				goto LA16_;
				LA20_: ;
				{
					NIM_BOOL T25_;
					T25_ = (NIM_BOOL)0;
					T25_ = (((NI) 0) < last);
					if (!(T25_)) goto LA26_;
					T25_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(0));
					LA26_: ;
					if (!T25_) goto LA27_;
					{
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (last < (NI)((NI)(pos + sp) - ((NI) 1)));
						if (!(T31_)) goto LA32_;
						T31_ = !(((NU8)((*line)->data[(NI)(last + ((NI) 1))]) == (NU8)(0)));
						LA32_: ;
						if (!T31_) goto LA33_;
						last -= ((NI) 1);
					}
					LA33_: ;
				}
				goto LA16_;
				LA27_: ;
				LA16_: ;
				unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (last))));
				T35_ = (NIM_BOOL)0;
				T35_ = (((NI) 0) < last);
				if (T35_) goto LA36_;
				T35_ = fgetsSuccess;
				LA36_: ;
				result = T35_;
				goto BeforeRet_;
			}
			goto LA12_;
			LA14_: ;
			{
				sp -= ((NI) 1);
			}
			LA12_: ;
			pos += sp;
			sp = ((NI) 128);
			unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(pos + sp)))));
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f) {	{
		int T5_;
		if (!!((f == 0))) goto LA3_;
		T5_ = (int)0;
		T5_ = fclose(f);
		(void)(T5_);
	}
	LA3_: ;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler__rqLlY5bs9atDw2OXYqJEn5g;
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = s;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__2ezUTSmBrmr5VkZNxReTYQ)(FILE* file) {	NI64 result;
	NI64 oldPos;
	int T1_;
	int T2_;
	result = (NI64)0;
	oldPos = ftell(file);
	T1_ = (int)0;
	T1_ = fseek(file, IL64(0), ((int) 2));
	(void)(T1_);
	result = ftell(file);
	T2_ = (int)0;
	T2_ = fseek(file, oldPos, ((int) 0));
	(void)(T2_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__f3MIZh4IV2qRTxlOpckbRA)(FILE* f, void* buffer, NI len) {	NI result;
	result = (NI)0;
	result = fread(buffer, ((NI) 1), ((size_t) (len)), f);
	{
		if (!!((result == ((NI) (len))))) goto LA3_;
		checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2(f);
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__FK5lmHTzEdX6epYBp9bfgMg)(FILE* f) {	NIM_BOOL result;
	int c;
	int T1_;
{	result = (NIM_BOOL)0;
	c = fgetc(f);
	T1_ = (int)0;
	T1_ = ungetc(c, f);
	(void)(T1_);
	result = (c < ((NI32) 0));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2)(FILE* file) {	NimStringDesc* result;
	NimStringDesc* buffer;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	buffer = mnewString(((NI) 4000));
	{
		while (1) {
			NI bytesRead;
			bytesRead = readBuffer__f3MIZh4IV2qRTxlOpckbRA(file, ((void*) ((&buffer->data[((NI) 0)]))), ((NI) 4000));
			{
				if (!(bytesRead == ((NI) 4000))) goto LA5_;
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
			}
			goto LA3_;
			LA5_: ;
			{
				buffer = setLengthStr(buffer, ((NI) (bytesRead)));
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
				goto LA1;
			}
			LA3_: ;
		}
	} LA1: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile__W4tKfHpbz7kHhikLsBc0EA)(FILE* file, NI64 len) {	NimStringDesc* result;
	NI bytes;
	result = (NimStringDesc*)0;
	result = mnewString(((NI) (len)));
	bytes = readBuffer__f3MIZh4IV2qRTxlOpckbRA(file, ((void*) ((&result->data[((NI) 0)]))), ((NI) (len)));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = endOfFile__FK5lmHTzEdX6epYBp9bfgMg(file);
		if (!T3_) goto LA4_;
		{
			if (!(((NI64) (bytes)) < len)) goto LA8_;
			result = setLengthStr(result, ((NI) (bytes)));
		}
		LA8_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T11_;
		T11_ = (NimStringDesc*)0;
		T11_ = readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2(file);
		result = resizeString(result, (T11_ ? T11_->Sup.len : 0) + 0);
appendString(result, T11_);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll__mQf9blHFlTwuSvJjirhpY6g)(FILE* file) {	NimStringDesc* result;
	NI64 len;
	result = (NimStringDesc*)0;
	{
		if (!!((file == stdin))) goto LA3_;
		len = rawFileSize__2ezUTSmBrmr5VkZNxReTYQ(file);
	}
	goto LA1_;
	LA3_: ;
	{
		len = IL64(-1);
	}
	LA1_: ;
	{
		if (!(IL64(0) < len)) goto LA8_;
		result = readAllFile__W4tKfHpbz7kHhikLsBc0EA(file, len);
	}
	goto LA6_;
	LA8_: ;
	{
		result = readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2(file);
	}
	LA6_: ;
	return result;
}
static N_INLINE(void, popSafePoint)(void) {	excHandler__rqLlY5bs9atDw2OXYqJEn5g = (*excHandler__rqLlY5bs9atDw2OXYqJEn5g).prev;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile__4PGnM9bWmsH0Nu7dnr3XzgA)(NimStringDesc* filename) {	NimStringDesc* volatile result;
	FILE* f;
	result = (NimStringDesc*)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		TSafePoint TM__MnCJ0VAmeZ9aTATUB39cx60Q_20;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM__MnCJ0VAmeZ9aTATUB39cx60Q_20);
		TM__MnCJ0VAmeZ9aTATUB39cx60Q_20.status = setjmp(TM__MnCJ0VAmeZ9aTATUB39cx60Q_20.context);
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_20.status == 0) {
			result = readAll__mQf9blHFlTwuSvJjirhpY6g(f);
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close__fU6ZlJAtQ9bre04EDZLdGsA_3(f);
		}
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_20.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* eX60gensym176838_;
		NimStringDesc* T10_;
		eX60gensym176838_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		eX60gensym176838_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*eX60gensym176838_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*eX60gensym176838_).Sup.Sup.name = "IOError";
		T10_ = (NimStringDesc*)0;
		T10_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T10_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_16));
appendString(T10_, filename);
		asgnRef((void**) (&(*eX60gensym176838_).Sup.Sup.message), T10_);
		asgnRef((void**) (&(*eX60gensym176838_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym176838_, "IOError", "readFile", "io.nim", 676);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEOF__CA1KPE9bDgvXVjqamZd5T9bQ)(void) {	tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg* eX60gensym170657_;
	NimStringDesc* T1_;
	eX60gensym170657_ = (tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg*)0;
	eX60gensym170657_ = (tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg*) newObj((&NTI__LEclZrWX2FQAodlapxGITw_), sizeof(tyObject_EOFError__KGSY1JdrNB7Xi8KDhXFhSg));
	(*eX60gensym170657_).Sup.Sup.Sup.Sup.m_type = (&NTI__KGSY1JdrNB7Xi8KDhXFhSg_);
	(*eX60gensym170657_).Sup.Sup.Sup.name = "EOFError";
	T1_ = (NimStringDesc*)0;
	T1_ = (*eX60gensym170657_).Sup.Sup.Sup.message; (*eX60gensym170657_).Sup.Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_21));
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*eX60gensym170657_).Sup.Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)eX60gensym170657_, "EOFError", "raiseEOF", "io.nim", 135);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine__IfmAdseskhTUnfEYpOo5fA)(FILE* f) {	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) 80));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = readLine__FbqDHP9bu7nqCh9c04dnSOxw(f, (&result));
		if (!!(T3_)) goto LA4_;
		raiseEOF__CA1KPE9bDgvXVjqamZd5T9bQ();
	}
	LA4_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, writeFile__D6Pj9c29aCLEJP9beOWa08HYA)(NimStringDesc* filename, NimStringDesc* content) {	FILE* f;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		TSafePoint TM__MnCJ0VAmeZ9aTATUB39cx60Q_22;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM__MnCJ0VAmeZ9aTATUB39cx60Q_22);
		TM__MnCJ0VAmeZ9aTATUB39cx60Q_22.status = setjmp(TM__MnCJ0VAmeZ9aTATUB39cx60Q_22.context);
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_22.status == 0) {
			write__PArlm09bKklm2BLsCg6YtaA(f, content);
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close__fU6ZlJAtQ9bre04EDZLdGsA_3(f);
		}
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_22.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* eX60gensym177034_;
		NimStringDesc* T10_;
		eX60gensym177034_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		eX60gensym177034_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*eX60gensym177034_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*eX60gensym177034_).Sup.Sup.name = "IOError";
		T10_ = (NimStringDesc*)0;
		T10_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T10_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_16));
appendString(T10_, filename);
		asgnRef((void**) (&(*eX60gensym177034_).Sup.Sup.message), T10_);
		asgnRef((void**) (&(*eX60gensym177034_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym177034_, "IOError", "writeFile", "io.nim", 689);
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, readLines__UgG9cRBA8hHA9aJABIdHeQyw)(NimStringDesc* filename, NI n) {	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* volatile result;
	FILE* f;
	result = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		TSafePoint TM__MnCJ0VAmeZ9aTATUB39cx60Q_23;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!T3_) goto LA4_;
		pushSafePoint(&TM__MnCJ0VAmeZ9aTATUB39cx60Q_23);
		TM__MnCJ0VAmeZ9aTATUB39cx60Q_23.status = setjmp(TM__MnCJ0VAmeZ9aTATUB39cx60Q_23.context);
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_23.status == 0) {
			result = newSeq__5tQ8ny8q7AB9cp1xE2MILLQ(n);
			{
				NI i;
				NI colontmp_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = (NI)(((NI) (n)) - ((NI) 1));
				res = ((NI) 0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA9;
						i = res;
						{
							NIM_BOOL T12_;
							T12_ = (NIM_BOOL)0;
							T12_ = readLine__FbqDHP9bu7nqCh9c04dnSOxw(f, (&result->data[i]));
							if (!!(T12_)) goto LA13_;
							raiseEOF__CA1KPE9bDgvXVjqamZd5T9bQ();
						}
						LA13_: ;
						res += ((NI) 1);
					} LA9: ;
				}
			}
			popSafePoint();
		}
		else {
			popSafePoint();
		}
		{
			close__fU6ZlJAtQ9bre04EDZLdGsA_3(f);
		}
		if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_23.status != 0) reraiseException();
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* eX60gensym177280_;
		NimStringDesc* T18_;
		eX60gensym177280_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		eX60gensym177280_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*eX60gensym177280_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*eX60gensym177280_).Sup.Sup.name = "IOError";
		T18_ = (NimStringDesc*)0;
		T18_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T18_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_16));
appendString(T18_, filename);
		asgnRef((void**) (&(*eX60gensym177280_).Sup.Sup.message), T18_);
		asgnRef((void**) (&(*eX60gensym177280_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym177280_, "IOError", "readLines", "io.nim", 707);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__y2dplmr7ar8o7Yykk7MOlA)(FILE* f, NimStringDesc** a, NI aLen_0) {	{
		NimStringDesc* x;
		NI i;
		x = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < aLen_0)) goto LA3;
				x = a[i];
				write__PArlm09bKklm2BLsCg6YtaA(f, x);
				i += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, setFilePos__FA7rp0y5drPpfGuceb3IJg)(FILE* f, NI64 pos, tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw relativeTo) {	{
		int T3_;
		T3_ = (int)0;
		T3_ = fseek(f, pos, ((int) (relativeTo)));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_24));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos__ihE3HyH1VBDfrPO1nZT7RQ)(FILE* f) {	NI64 result;
	result = (NI64)0;
	result = ftell(f);
	{
		if (!(result < IL64(0))) goto LA3_;
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_25));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__f3MIZh4IV2qRTxlOpckbRA_2)(FILE* f, void* buffer, NI len) {	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((NI) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioInit000)(void) {
{
	int T1_;
	int T2_;
	int T3_;
	NI32 T4_;
	NI32 T5_;
	T1_ = (int)0;
	T1_ = _fileno(stdin);
	_setmode(T1_, _O_BINARY);
	T2_ = (int)0;
	T2_ = _fileno(stdout);
	_setmode(T2_, _O_BINARY);
	T3_ = (int)0;
	T3_ = _fileno(stderr);
	_setmode(T3_, _O_BINARY);
	T4_ = (NI32)0;
	T4_ = Dl_176603_(((unsigned int) 65001));
	(void)(T4_);
	T5_ = (NI32)0;
	T5_ = Dl_176606_(((unsigned int) 65001));
	(void)(T5_);
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void) {
static TNimNode TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[1];
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.size = sizeof(int);
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.kind = 34;
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.base = 0;
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.flags = 3;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.size = sizeof(void*);
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.kind = 18;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.base = 0;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.flags = 3;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.node = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[0];
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.size = sizeof(FILE*);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.kind = 21;
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.base = (&NTI__MAWzaQJYFu3mlxj0Ppxhmw_);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.flags = 3;
if (!((TM__MnCJ0VAmeZ9aTATUB39cx60Q_2 = nimLoadLibrary(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5));
	Dl_176603_ = (tyProc__YrlAFY4fseJeExebH9aRGbw) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "SetConsoleOutputCP");
	Dl_176606_ = (tyProc__YrlAFY4fseJeExebH9aRGbw) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "SetConsoleCP");
}

