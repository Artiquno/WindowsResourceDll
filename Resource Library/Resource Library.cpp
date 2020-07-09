// Resource Library.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Resource Library.h"
#include "resource.h"


// This is an example of an exported variable
RESOURCELIBRARY_API int nResourceLibrary=0;
RESOURCELIBRARY_API WCHAR szGeneral[100];

// This is an example of an exported function.
RESOURCELIBRARY_API int fnResourceLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CResourceLibrary::CResourceLibrary()
{
	LoadStringW(NULL, IDS_GENERAL, szGeneral, 100);
    return;
}

void CResourceLibrary::printSomeString(const std::string & str)
{
	std::cout << "Hello There!" << std::endl;
}

const WCHAR * CResourceLibrary::getSomeResource()
{
	return szGeneral;
}

const WCHAR * CResourceLibrary::getSomePlainResource()
{
	WCHAR *str = new WCHAR[100];
	LoadStringW(NULL, IDS_HELLO, str, 100);
	return str;
}

int CResourceLibrary::getSomeInt()
{
	return 42;
}
