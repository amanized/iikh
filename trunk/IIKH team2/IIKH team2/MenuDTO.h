#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class MenuDTO{

private:
	int date;// 1~31�� ������ �ش��ϴ� '��'
	int time;// 1:����, 2:����, 3:����
	string name;

public:
	void setDate(int date);
	int getDate();

	void setTIme(int time);
	int getTime();

	void setName(string name);
	string getName();

}