#pragma once

#ifdef PMO_PLATFORM_WINDOWS
	#ifdef PMO_BUILD_DLL
		#define PRISMO_API __declspec(dllexport)
	#else
		#define PRISMO_API __declspec(dllimport)
	#endif
#else
	#error Prismo Only supports Windows 
#endif