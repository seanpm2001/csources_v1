/* Generated by Nim Compiler v1.0.10 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <sys/types.h>
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
int MAP_POPULATE__VA0iC4AP6fJAacff09cx89ag;
TNimType NTI__r9bTMVI8f19ah9b11jMgY4kPg_;
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixInit000)(void) {
{
	MAP_POPULATE__VA0iC4AP6fJAacff09cx89ag = ((int) 0);
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void) {
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
}

