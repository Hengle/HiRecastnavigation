// HiRecastnavigation.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"


extern "C" __declspec(dllexport) int TestCsharpCallC(int a, int b)
{
	return a + b;
}