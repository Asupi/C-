#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"MD5.h"
#include<fstream >

void menu()
{
	printf("****************************************************************\n");
	printf("****************************************************************\n");
	printf("**********************  0.计算文件    **************************\n");
	printf("**********************  1.计算字符串  **************************\n");
	printf("****************************************************************\n");
	printf("****************************************************************\n");
}

int main()
{
	MD5 md5;
	std::string s1;
	std::ifstream fin;
	fin.open(s1.c_str());
	int input = 0;
	menu();
	std::string str;
	while (std::cin >> input)
	{
		switch (input)
		{
		case 0:
		
		    std::cout << "请输入文件路径 ";
			std::cin >> s1;
			std::cout << md5.getFileMd5(s1.c_str()) << std::endl;
			break;
		case 1:
			std::cout << "请输入字符串 ";
			std::cin >> str;
			std::cout << md5.getStringMd5(str) << std::endl;
			break;
		default:
			std::cout << "输入错误，请重新输入" << std::endl;
			break;
		}
	}
	
    //D:\\vs\\c++程序编码\\C++项目（MD5）\\Debug\\C++项目（MD5）.pdb
	//CertUtil -hashfile "文件路径" MD5
	//D:\vs\c++程序编码\C++项目（MD5）\Debug\C++项目（MD5）.ilk
	fin.close();

	return 0;
}


