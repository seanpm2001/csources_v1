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
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__6C2AvGe9brWF3cZheLyMXgA)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2, "&lt;", 4);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3, "&gt;", 4);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4, "&amp;", 5);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5, "&quot;", 6);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6, "&apos;", 6);
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
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__6C2AvGe9brWF3cZheLyMXgA)(NimStringDesc** result, NimStringDesc* s) {	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), 4));
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2));
				}
				break;
				case 62:
				{
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), 4));
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3));
				}
				break;
				case 38:
				{
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), 5));
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4));
				}
				break;
				case 34:
				{
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), 6));
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5));
				}
				break;
				case 39:
				{
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), 6));
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6));
				}
				break;
				default:
				{
					unsureAsgnRef((void**) (&(*result)), addChar((*result), c));
				}
				break;
				}
				i += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, escape__MqjZ9c9b479ayFgA5h9aAscAFA)(NimStringDesc* s) {	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
	addEscaped__6C2AvGe9brWF3cZheLyMXgA((&result), s);
	return result;
}
