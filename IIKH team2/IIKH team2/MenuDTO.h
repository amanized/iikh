#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class MenuDTO{

private:
	int date;// 1~31일 사이의 해당하는 '일'
	int time;// 1:오전, 2:오후, 3:저녁
	string name;

public:
	void setDate(int date);
	int getDate();

	void setTIme(int time);
	int getTime();

	void setName(string name);
	string getName();

}