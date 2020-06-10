#pragma once

#define SCL_API_EXPORT

#ifdef SCL_API_EXPORT
#define SCL_API_CLS _declspec(dllexport)
#define SCL_API_FUN extern"C" _declspec(dllexport)
#else
#define SCL_API_CLS _declspec(dllimport)
#define SCL_API_FUN extern"C" _declspec(dllimport)
#endif

class SCL_API_CLS SupersLIUnknown {
	virtual SupersLIUnknown* SLClsFinder(GUID iid, void** ppv) = 0;
	virtual void AddRef() = 0;
	virtual void Release() = 0;
};