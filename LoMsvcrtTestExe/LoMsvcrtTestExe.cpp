// LoMsvcrtTestExe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Hello world\n");
	std::string str = "Press any key to continue";
	printf(str.c_str());
	getchar();
	return 0;
}

