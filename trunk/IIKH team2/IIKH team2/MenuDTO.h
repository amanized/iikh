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
	void setDate(int _date);
	int getDate();

	void setTIme(int _time);
	int getTime();

	void setName(string _name);
	string getName();

};