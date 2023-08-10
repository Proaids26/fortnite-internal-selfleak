#include "includes.h"




BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		novacane::init();
	}

	return TRUE;
}
