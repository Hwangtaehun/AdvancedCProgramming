#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdlib.h> // == <cstdlib>
#include <string>
#include <fstream>

using namespace std;

struct Insa {
	char name[20];
	int age;
	char address[20];
};

class CInsa {
	char name[20];
	int age;
	char address[20];

public:
	CInsa(const char* name, int age, const char* address) :age(age)
	{
		strcpy(this->name, name);
		strcpy(this->address, address);
	}

	void print()
	{
		cout << name << " " << age << " " << address << endl;
	}
};

//int main(void)
//{
//	char ch;
//	
//	ofstream fout("test.txt");
//
//	while (cin.get(ch))
//	{
//		fout.put(ch);
//	}
//
//	fout.close();
//
//	//while (cin.get(ch))//���۸��� �Ǿ��־� ��� ������ �ϳ��� ���� �ִ� ���� �� ���� -> ó�� �ӵ��� ������
//	//{
//	//	cout.put(ch);
//	//}
//
//	return 0;
//}

//int main(int argc, char* argv[])
//{
//	ifstream fin;
//	ofstream fout;
//
//	if (argc != 3)
//	{
//		cout << "Usage : SystemPrograming �ҽ����ϸ� �����ϸ�" << endl;
//		return 0;
//	}
//	//argc == 3
//
//	fin.open(argv[1]);
//	if (!fin)
//	{
//		cout << "file" << argv[1] << "cannot be openned" << endl;
//		return 0;
//	}
//
//	fout.open(argv[2], ios::out | ios::app );
//	if (!fout)
//	{
//		cout << "file " << argv[2] << "cannot be openned" << endl;
//		fin.close();
//		return 0;
//	}
//
//	char ch;
//	while (fin.get(ch))
//	{
//		fout.put(ch);
//		if (fout.fail() || fout.bad())
//		{
//			cout << "file " << argv[2] << " cannot be written " << endl;
//			break;
//		}
//	}
//	
//	fout.close();
//	fin.close();
//
//	return 0;
//}

int main(int argc, char* argv[])
{
	//Insa my []= {
	//				{ "������", 20, "����" },
	//				{ "�迹��", 10, "����" }
	//			 };
	//ofstream fout("test.data", ios::out | ios::binary); //�Է��ϸ鼭 �������ִ� ����

	//if (!fout)
	//{
	//	cout << "file cannot be created or opend" << endl;
	//	return 0;
	//}

	//int angle = 123456789;
	
	//fout << angle;

	//fout.write((char*)&angle, sizeof(angle));//�ؽ�Ʈ ����̼� ����Ǿ� �̻��ϰԵ� -> ��Ʈ �������� ���ƾ���

	/*char buf[100];
	_itoa(angle, buf, 10);
	fout << buf;*/
	
	//for (int i = 0; i < 2; i++)
	//{
	//	fout << my[i].name << "," << my[i].age << "," << my[i].address << endl; //���ڿ� ��ȯ�ؼ� ����
	//}
	
	/*for (int i = 0; i < 2; i++)
	{
		fout.write((char*)(&my[i]), sizeof(Insa));
	}

	fout.close();*/

	ifstream fin("test.data", ios::in | ios::binary);
	if (!fin)
	{
		cout << "file cannot be created or opened" << endl;
	}

	Insa my;
	int count = 0;

	while (fin.read((char*)&my, sizeof(Insa)))
	{
		cout << "[" << count << "]" << my.address << "," << my.name << "," << my.age << endl;
		count++;
	}

	fin.close();

	return 0;
}