#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"MD5.h"
#include<fstream >

void menu()
{
	printf("****************************************************************\n");
	printf("****************************************************************\n");
	printf("**********************  0.�����ļ�    **************************\n");
	printf("**********************  1.�����ַ���  **************************\n");
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
		
		    std::cout << "�������ļ�·�� ";
			std::cin >> s1;
			std::cout << md5.getFileMd5(s1.c_str()) << std::endl;
			break;
		case 1:
			std::cout << "�������ַ��� ";
			std::cin >> str;
			std::cout << md5.getStringMd5(str) << std::endl;
			break;
		default:
			std::cout << "�����������������" << std::endl;
			break;
		}
	}
	
    //D:\\vs\\c++�������\\C++��Ŀ��MD5��\\Debug\\C++��Ŀ��MD5��.pdb
	//CertUtil -hashfile "�ļ�·��" MD5
	//D:\vs\c++�������\C++��Ŀ��MD5��\Debug\C++��Ŀ��MD5��.ilk
	fin.close();

	return 0;
}


