#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	/*���ڿ� ����*/
	/*string str1;
	string str2;
	str1 = "string";
	str2 = str1;

	cout << str2 << endl;*/

	/*���ڿ� �Ҵ�*/
	/*string str1("IT Cookbook");
	string str2("Hello");

	str2.assign(str1, 0, 5);

	cout << str2 << ", " << str2.size() << endl;*/

	/*���ڿ� �߰�*/
	/*string str1("Sample");
	string str2("Hello");

	str1 += " Program";

	cout << str1 << endl;*/

	/*���ڿ� ���԰� ����*/
	//string src("World Programmer");
	//string dest("Best");

	////cout << dest << ", " << dest.length() << endl;
	////
	/////*dest.insert(1, src);
	////cout << dest << ", " << dest.length() << endl;*/
	////
	////dest.insert(3, src, 5, 8);
	////cout << dest << ", " << dest.length() << endl;

	//cout << src << ", " << src.length() << endl;

	//cout << src.erase(0, 6) << ", " << src.length() << endl;

	/*���ڿ��� ġȯ*/
	/*string dest("You hate me");

	dest.replace(4, 4, "dislike");

	cout << dest << endl;*/
	
	/*���ڿ��� �˻�*/
	/*string dest("You hate hate me");

	int idx = dest.find("hate");
	int anotherIdx = dest.rfind("hate");

	cout << "find: " << idx << "\n" << "rfind: " << anotherIdx << endl;*/

	char buff[80];

	cout << "���ڿ� �Է����ּ��� ";
	cin.get(buff, 80);

	cout << buff << endl;

	return 0;
}