#include "StdAfx.h"
#include "Messages.h"

// Wrappers
WRAPPER void CMessages::InsertNumberInString(const char* pszText, int nNumber1, int nNumber2, int nNumber3, int nNumber4, int nNumber5, int nNumber6, char* pszOutBuf)
{ WRAPARG(pszText); WRAPARG(nNumber1); WRAPARG(nNumber2); WRAPARG(nNumber3); WRAPARG(nNumber4); WRAPARG(nNumber5); WRAPARG(nNumber6); WRAPARG(pszOutBuf); EAXJMP(0x69DE90); }
WRAPPER void CMessages::InsertPlayerControlKeysInString(char* pszText) { WRAPARG(pszText); EAXJMP(0x69E160); }
WRAPPER void CMessages::AddToPreviousBriefArray(const char* pszText, int nNumber1, int nNumber2, int nNumber3, int nNumber4, int nNumber5, int nNumber6, char* pszOutBuf)
{ WRAPARG(pszText); WRAPARG(nNumber1); WRAPARG(nNumber2); WRAPARG(nNumber3); WRAPARG(nNumber4); WRAPARG(nNumber5); WRAPARG(nNumber6); WRAPARG(pszOutBuf); EAXJMP(0x69DD50); }
WRAPPER void CMessages::AddBigMessage(const char* pText, unsigned int nTime, unsigned short nStyle) { WRAPARG(pText); WRAPARG(nTime); WRAPARG(nStyle); EAXJMP(0x69F2B0); }
WRAPPER void CMessages::AddMessageJumpQ(const char* pText, unsigned int nTime, unsigned short, bool) { WRAPARG(pText); WRAPARG(nTime); EAXJMP(0x69F1E0); }
WRAPPER char CMessages::StringCompare(char *str1, char *str2, unsigned __int16 len) { WRAPARG(str1); WRAPARG(str2); WRAPARG(len); EAXJMP(0x69DBD0); }
WRAPPER int CMessages::StringCopy(char *dest, char *src, unsigned __int16 len) { WRAPARG(dest); WRAPARG(src); WRAPARG(len); EAXJMP(0x69DB70); }
