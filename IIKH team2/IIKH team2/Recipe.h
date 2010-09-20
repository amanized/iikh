#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

class Recipe{

private:
	int choice_M;         //중메뉴 선택을 하는 변수(Middle)
	int choice_S;         //소메뉴 선택을 하는 변수(Small)
	string checkFood;     //이름을 검색할때 쓰는 스트링
	string checkMaterial; //재료를 검색할때 쓰는 스트링
	//용준이가 만들어준 DTO 배열 선언 파일로부터 받아와야하므로 필요함
public:
	void showMenu_M();  //중메뉴를 보여주는 함수
	void showMenu_S();  //소메뉴를 보여주는 함수
	void listAll()      //전체 레시피를 보여주는 함수

}
