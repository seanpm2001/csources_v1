/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
N_LIB_PRIVATE N_NIMCALL(void, writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg)(NIM_CHAR* buf, NCSTRING value);
N_LIB_PRIVATE N_NIMCALL(void, writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg)(NIM_CHAR* buf, NCSTRING value) {	NI i;
	i = ((NI) 0);
	{
		while (1) {
			if (!!(((NU8)(value[i]) == (NU8)(0)))) goto LA2;
			buf[(i)- 0] = value[i];
			i += ((NI) 1);
		} LA2: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(NI, writeFloatToBuffer__UrA9aquvUwHFUFx78eUQk3A)(NIM_CHAR* buf, NF value) {	NI result;
	NI n;
	int T1_;
	NIM_BOOL hasDot;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = sprintf(((NCSTRING) (buf)), "%.16g", value);
	n = ((NI) (T1_));
	hasDot = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(n - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA4;
				i = res;
				{
					if (!((NU8)(buf[(i)- 0]) == (NU8)(44))) goto LA7_;
					buf[(i)- 0] = 46;
					hasDot = NIM_TRUE;
				}
				goto LA5_;
				LA7_: ;
				{
					if (!(((NU8)(buf[(i)- 0])) >= ((NU8)(97)) && ((NU8)(buf[(i)- 0])) <= ((NU8)(122)) || ((NU8)(buf[(i)- 0])) >= ((NU8)(65)) && ((NU8)(buf[(i)- 0])) <= ((NU8)(90)) || ((NU8)(buf[(i)- 0])) == ((NU8)(46)))) goto LA10_;
					hasDot = NIM_TRUE;
				}
				goto LA5_;
				LA10_: ;
				LA5_: ;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	{
		if (!!(hasDot)) goto LA14_;
		buf[(n)- 0] = 46;
		buf[((NI)(n + ((NI) 1)))- 0] = 48;
		buf[((NI)(n + ((NI) 2)))- 0] = 0;
		result = (NI)(n + ((NI) 2));
	}
	goto LA12_;
	LA14_: ;
	{
		result = n;
	}
	LA12_: ;
	{
		if (!(((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(110)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(78)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(68)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(100)))) goto LA19_;
		writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg(buf, "nan");
		result = ((NI) 3);
	}
	goto LA17_;
	LA19_: ;
	{
		if (!((NU8)(buf[((NI)(n - ((NI) 1)))- 0]) == (NU8)(70))) goto LA22_;
		{
			if (!((NU8)(buf[(((NI) 0))- 0]) == (NU8)(45))) goto LA26_;
			writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg(buf, "-inf");
			result = ((NI) 4);
		}
		goto LA24_;
		LA26_: ;
		{
			writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg(buf, "inf");
			result = ((NI) 3);
		}
		LA24_: ;
	}
	goto LA17_;
	LA22_: ;
	LA17_: ;
	return result;
}
