#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


#include <hx/CFFI.h>
#include "Utils.h"


using namespace testextension;



static value testextension_sample_method (value inputValue) {
	
	int returnValue = SampleMethod(val_int(inputValue));
	return alloc_int(returnValue);
	
}
DEFINE_PRIM (testextension_sample_method, 1);



extern "C" void testextension_main () {}
DEFINE_ENTRY_POINT (testextension_main);



extern "C" int testextension_register_prims () { return 0; }