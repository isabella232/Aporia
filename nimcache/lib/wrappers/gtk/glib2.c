/* Generated by Nimrod Compiler v0.8.8 */
/*   (c) 2009 Andreas Rumpf */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   C:\Programy\nimrod\dist\mingw\bin\gcc.exe -c  -w  -IC:\Programy\nimrod\lib -o nimcache\lib\wrappers\gtk\glib2.o nimcache\lib\wrappers\gtk\glib2.c */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY18357 TY18357;
typedef struct TY17370 TY17370;
typedef struct TY18365 TY18365;
typedef N_CDECL_PTR(void, TY18361) (void);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
typedef N_CDECL_PTR(void, TY18355) (void* Data_18366, TY18357* Closure_18367);
typedef N_CDECL_PTR(NI, TY18718) (void* Instance_18719, NCSTRING Detailedsignal_18720, TY18361 Chandler_18721, void* Data_18722, TY18355 Destroydata_18723, NI32 Connectflags_18724);
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CDECL_PTR(void, TY18370) (TY18357* Closure_18371, TY17370* Returnvalue_18372, NI32 Nparamvalues_18373, TY17370* Paramvalues_18374, void* Invocationhint_18375, void* Marshaldata_18376);
struct TY18357 {
NI32 Flag0;
TY18370 Marshal;
void* Data;
TY18365* Notifiers;
};
typedef NF64 TY17445[2];
struct TY17370 {
NI Gtype;
TY17445 Data;
};
struct TY18365 {
void* Data;
TY18355 Notify;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* Path_6470);
N_NIMCALL(void, nimUnloadLibrary)(void* Lib_6473);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* Path_6480);
N_NIMCALL(void*, nimGetProcAddr)(void* Lib_6476, NCSTRING Name_6477);
STRING_LITERAL(TMP124190, "libgobject-2.0-0.dll", 20);
STRING_LITERAL(TMP124191, "libgobject-2.0-0.dll", 20);
static void* TMP124189;
TY18718 Dl_18717;
N_NIMCALL(NI, Gsignalconnect_18786)(void* Instance_18788, NCSTRING Detailedsignal_18789, TY18361 Chandler_18790, void* Data_18791) {
NI Result_24286;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "glib2.g_signal_connect";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\glib2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_24286 = 0;
F.line = 4292;
Result_24286 = Dl_18717(Instance_18788, Detailedsignal_18789, Chandler_18790, Data_18791, 0, ((NI32) 0));
framePtr = framePtr->prev;
return Result_24286;
}
N_NIMCALL(TY18361, Gcallback_18401)(void* F_18403) {
TY18361 Result_24199;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "glib2.G_CALLBACK";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\glib2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_24199 = 0;
F.line = 4210;
Result_24199 = ((TY18361) (F_18403));
framePtr = framePtr->prev;
return Result_24199;
}
N_NOINLINE(void, glib2Init)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "module glib2";
F.prev = framePtr;
F.filename = "C:\\Programy\\nimrod\\lib\\wrappers\\gtk\\glib2.nim";
F.line = 0;
framePtr = (TFrame*)&F;
if (!((TMP124189 = nimLoadLibrary((NimStringDesc*) &TMP124190))
)) nimLoadLibraryError((NimStringDesc*) &TMP124191);
Dl_18717 = (TY18718) nimGetProcAddr(TMP124189, "g_signal_connect_data");
F.len = 0;
framePtr = framePtr->prev;
}

