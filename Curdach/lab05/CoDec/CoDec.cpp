#include "CoDec.h"
#include <cstring>
int Code(unsigned char* _pCode, unsigned char* _pStr, unsigned char* _pK)
{
    int iRet = -1;
    if ((_pStr != nullptr) && (_pCode != nullptr) && (_pK != nullptr))
    {
        int iLenStr = 0;
        while (_pStr[iLenStr] != '\0') iLenStr++;

        for (int i = 0; i < iLenStr; i++)
        {
            _pCode[i] = _pStr[i] + _pK[i % strlen((char*)_pK)]; // Используем разные ключи для каждого символа
        }
        _pCode[iLenStr] = '\0';

        iRet = iLenStr;
    }
    return iRet;
}

int DeCode(unsigned char* _pCode, unsigned char* _pStr, unsigned char* _pK)
{
    int iRet = -1;
    if ((_pStr != nullptr) && (_pCode != nullptr) && (_pK != nullptr))
    {
        int iLenStr = 0;
        while (_pStr[iLenStr] != '\0') iLenStr++;

        for (int i = 0; i < iLenStr; i++)
        {
            _pCode[i] = _pStr[i] - _pK[i % strlen((char*)_pK)]; // Используем разные ключи для каждого символа
        }
        _pCode[iLenStr] = '\0';

        iRet = iLenStr;
    }
    return iRet;
}
