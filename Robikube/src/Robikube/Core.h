#pragma once

#ifdef RBK_PLATFORM_WINDOWS
	#ifdef RBK_BUILD_DLL
		#define RBK_API __declspec(dllexport)
	#else
		#define RBK_API __declspec(dllimport)
	#endif
#else
	#error Robikube only supports Windows for now !
#endif
