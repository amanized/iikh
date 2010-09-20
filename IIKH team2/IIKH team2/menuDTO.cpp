#include "MenuDTO.h"

void MenuDTO::setDate(int _date){
	date = _date;
}

int MenuDTO::getDate(){
	return date;
}

void MenuDTO::setTIme(int _time){
	time = _time;
}

int MenuDTO::getTime(){
	return time;
}

void MenuDTO::setName(string _name){
	name = _name;
}

string MenuDTO::getName(){
	return name;
}