#ifndef SAXLOADER_EXPAT_H
#define SAXLOADER_EXPAT_H

#include "direfal.h"

#include <stdio.h>
#include <expat.h>

	#if defined(__amigaos__) && defined(__USE_INLINE__)
	#include <proto/expat.h>
	#endif

	#ifdef XML_LARGE_SIZE
	#if defined(XML_USE_MSC_EXTENSIONS) && _MSC_VER < 1400
	#define XML_FMT_INT_MOD "I64"
	#else
	#define XML_FMT_INT_MOD "ll"
	#endif
	#else
	#define XML_FMT_INT_MOD "l"
	#endif

	#define BUFFSIZE        8192

int loadModuleFromXmlFile(RefUserModule*, RefProgram*, const char*, bool redefine, const char* codepage = 0);
int loadModuleFromXmlCode(RefUserModule*, RefProgram*, std::string xml, bool redefine, const char* codepage = 0);


#endif
