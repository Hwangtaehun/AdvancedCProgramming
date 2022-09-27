#include <iostream>
#include <cstring>
#include <string>

class String
{
	char* data;
	int len;
	int capacity; //�����Ҵ� ũ�� �󸶳� �Ҵ��Ұǰ�?

public:
	String() : data((char *)malloc(sizeof(char)*100)), len(0), capacity(100){
		data[0] = '\0';
	}
	String(const char* str): String() {
		while (strlen(str) >= capacity)
		{
			//delete data;
			data = (char*)realloc(data, sizeof(char)* capacity); //realloc�� �Ÿ𸮸� Ȯ���ϴµ� �ڿ� �޸𸮰� ��� ������ �ڿ� ���� Ȯ��
			capacity *= 2;
			strcpy(data, str);
			len = strlen(str);
		}
	}
	~String(){}
	int size() {
		return len;
	}
	int length()
	{
		return len;
	}
	int capacity()
	{
		return capacity;
	}
};

using namespace std;