#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class MenuDTO{

private:
	int date;// 1~31일 사이의 해당하는 '일' (9월 5~11일)
	int time;// 1:오전, 2:오후, 3:저녁
	string name; //RecipeDTO의 name, FK

public:
	void setDate(int _date);
	int getDate();

	void setTIme(int _time);
	int getTime();

	void setName(string _name);
	string getName();

};