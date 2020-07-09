// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the RESOURCELIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// RESOURCELIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef RESOURCELIBRARY_EXPORTS
#define RESOURCELIBRARY_API __declspec(dllexport)
#else
#define RESOURCELIBRARY_API __declspec(dllimport)
#endif

#include <iostream>

// This class is exported from the dll
class RESOURCELIBRARY_API CResourceLibrary {
public:
	CResourceLibrary(void);
	// TODO: add your methods here.

	void printSomeString(const std::string &str);

	const WCHAR *getSomeResource();

	const WCHAR *getSomePlainResource();

	int getSomeInt();
};

extern RESOURCELIBRARY_API int nResourceLibrary;
extern RESOURCELIBRARY_API WCHAR szGeneral[100];

RESOURCELIBRARY_API int fnResourceLibrary(void);
