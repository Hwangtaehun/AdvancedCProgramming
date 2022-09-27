#include <iostream>
#include <cstring>
#include <string>

class String
{
	char* data;
	int len;
	int capacity; //동적할당 크기 얼마나 할당할건가?

public:
	String() : data((char *)malloc(sizeof(char)*100)), len(0), capacity(100){
		data[0] = '\0';
	}
	String(const char* str): String() {
		while (strlen(str) >= capacity)
		{
			//delete data;
			data = (char*)realloc(data, sizeof(char)* capacity); //realloc은 매모리를 확보하는데 뒤에 메모리가 비어 있으면 뒤에 까지 확보
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