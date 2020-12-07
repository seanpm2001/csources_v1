/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA;
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA, classify__x3IKzrz1VNvfZbypScSTXg)(NF x);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, encodeVIntAux__lNzvVCaz9agOxH6nqWMG4Ww_2)(NI x, NimStringDesc** result);
STRING_LITERAL(TM__mZLUkjbotQF2WK9bQcNKBCA_2, "NAN", 3);
STRING_LITERAL(TM__mZLUkjbotQF2WK9bQcNKBCA_3, "-0.0", 4);
STRING_LITERAL(TM__mZLUkjbotQF2WK9bQcNKBCA_4, "0.0", 3);
STRING_LITERAL(TM__mZLUkjbotQF2WK9bQcNKBCA_5, "INF", 3);
STRING_LITERAL(TM__mZLUkjbotQF2WK9bQcNKBCA_6, "-INF", 4);
STRING_LITERAL(TM__mZLUkjbotQF2WK9bQcNKBCA_7, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toStrMaxPrecision__ayHojnbqAtgkZF8TXMNMzg)(NF f, NimStringDesc* literalPostfix) {	NimStringDesc* result;
	tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA T1_;
	result = (NimStringDesc*)0;
	T1_ = (tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0;
	T1_ = classify__x3IKzrz1VNvfZbypScSTXg(f);
	switch (T1_) {
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA) 4):
	{
		result = copyString(((NimStringDesc*) &TM__mZLUkjbotQF2WK9bQcNKBCA_2));
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA) 3):
	{
		NimStringDesc* T4_;
		T4_ = (NimStringDesc*)0;
		T4_ = rawNewString((literalPostfix ? literalPostfix->Sup.len : 0) + 4);
appendString(T4_, ((NimStringDesc*) &TM__mZLUkjbotQF2WK9bQcNKBCA_3));
appendString(T4_, literalPostfix);
		result = T4_;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA) 2):
	{
		NimStringDesc* T6_;
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((literalPostfix ? literalPostfix->Sup.len : 0) + 3);
appendString(T6_, ((NimStringDesc*) &TM__mZLUkjbotQF2WK9bQcNKBCA_4));
appendString(T6_, literalPostfix);
		result = T6_;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA) 5):
	{
		result = copyString(((NimStringDesc*) &TM__mZLUkjbotQF2WK9bQcNKBCA_5));
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA) 6):
	{
		result = copyString(((NimStringDesc*) &TM__mZLUkjbotQF2WK9bQcNKBCA_6));
	}
	break;
	default:
	{
		int n;
		result = mnewString(((NI) 81));
		n = snprintf(nimToCStringConv(result), ((NU) ((result ? result->Sup.len : 0))), "%#.16e%s", f, nimToCStringConv(literalPostfix));
		result = setLengthStr(result, ((NI) (n)));
	}
	break;
	}
	return result;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, encodeStr__Gl7oVckGOULa4RbIjSqJ6g)(NimStringDesc* s, NimStringDesc** result) {	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (s ? s->Sup.len : 0);
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA3;
				i = i_2;
				switch (((NU8)(s->data[i]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					unsureAsgnRef((void**) (&(*result)), addChar((*result), s->data[i]));
				}
				break;
				default:
				{
					NimStringDesc* T6_;
					NimStringDesc* T7_;
					T6_ = (NimStringDesc*)0;
					T7_ = (NimStringDesc*)0;
					T7_ = nsuToHex(((NI64) (((NU8)(s->data[i])))), ((NI) 2));
					T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + 1);
appendChar(T6_, 92);
appendString(T6_, T7_);
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T6_ ? T6_->Sup.len : 0) + 0));
appendString((*result), T6_);
				}
				break;
				}
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, encodeVIntAux__lNzvVCaz9agOxH6nqWMG4Ww_2)(NI x, NimStringDesc** result) {	NIM_CHAR dX60gensym556477_;
	NI vX60gensym556478_;
	NI remX60gensym556479_;
	NI idxX60gensym556480_;
	dX60gensym556477_ = (NIM_CHAR)0;
	vX60gensym556478_ = x;
	remX60gensym556479_ = (NI)(vX60gensym556478_ % ((NI) 190));
	{
		if (!(remX60gensym556479_ < ((NI) 0))) goto LA3_;
		unsureAsgnRef((void**) (&(*result)), addChar((*result), 45));
		vX60gensym556478_ = ((NI64)-((NI)(vX60gensym556478_ / ((NI) 190))));
		remX60gensym556479_ = ((NI64)-(remX60gensym556479_));
	}
	goto LA1_;
	LA3_: ;
	{
		vX60gensym556478_ = (NI)(vX60gensym556478_ / ((NI) 190));
	}
	LA1_: ;
	idxX60gensym556480_ = remX60gensym556479_;
	{
		if (!(idxX60gensym556480_ < ((NI) 62))) goto LA8_;
		dX60gensym556477_ = ((NimStringDesc*) &TM__mZLUkjbotQF2WK9bQcNKBCA_7)->data[idxX60gensym556480_];
	}
	goto LA6_;
	LA8_: ;
	{
		dX60gensym556477_ = ((NIM_CHAR) (((NI) ((NI)((NI)(idxX60gensym556480_ - ((NI) 62)) + ((NI) 128))))));
	}
	LA6_: ;
	{
		if (!!((vX60gensym556478_ == ((NI) 0)))) goto LA13_;
		encodeVIntAux__lNzvVCaz9agOxH6nqWMG4Ww_2(vX60gensym556478_, result);
	}
	LA13_: ;
	unsureAsgnRef((void**) (&(*result)), addChar((*result), dX60gensym556477_));
}
N_LIB_PRIVATE N_NIMCALL(void, encodeVInt__lNzvVCaz9agOxH6nqWMG4Ww)(NI x, NimStringDesc** result) {	encodeVIntAux__lNzvVCaz9agOxH6nqWMG4Ww_2((NI)((NU64)(x) + (NU64)(((NI) 5))), result);
}
