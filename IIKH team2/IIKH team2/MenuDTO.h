#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class MenuDTO{

private:
	int date;// 1~31�� ������ �ش��ϴ� '��' (9�� 5~11��)
	int time;// 1:����, 2:����, 3:����
	string name; //RecipeDTO�� name, FK

public:
	void setDate(int _date);
	int getDate();

	void setTIme(int _time);
	int getTime();

	void setName(string _name);
	string getName();

};