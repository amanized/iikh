#include "Recipe.h"

	
void Recipe::showMenu_M() //중메뉴를 보여주는 함수
{
	cout<<"────────────────────────"<<endl;
	cout<<"1.이름 검색"<<endl;
	cout<<"2.재료 검색"<<endl;
	cout<<"3.전체 보기"<<endl;
	cout<<"4.추     가"<<endl;
	cout<<"────────────────────────"<<endl;

	cin>>choice_M;

	switch(choice_M)
	{
		case 1 :
			//이름검색해서 보여주는 함수
			break;
		case 2 :
			//재료검색해서 보여주는 함수
			break;
		case 3 :
			//전체보기를 해서 보여주는 함수
			break;
		case 4 :
			//레시피를 추가시키는 함수 insertRecipe();
			break;
		default :
			cout<<"illegal Expression"<<endl;
			break;

	}

}

void Recipe::showMenu_S() //소메뉴를 보여주는 함수
{
	cout<<"────────────────────────"<<endl;
	cout<<"1.수     정"<<endl;
	cout<<"2.삭     제"<<endl;
	cout<<"────────────────────────"<<endl;

	cin>>choice_S;

	switch(choice_S)
	{
		case 1 : 
			//레시피를 추가 수정 시킬 함수 insertRecipe();
			break;
		case 2 :
			//레시피를 삭제시킬 함수 deleteRecipe();
			break;
		default:
			cout<<"illegal Expression"<<endl;
			break;
	}
}

	//void listAll();     //전체 레시피를 보여주는 함수
	//void checkPrint();  //조건을 만족시키는 함수 
	//void insertRecipe(); //레시피를 추가 시키는 함수
	//void deleteRecipe(); //레시피를 삭제 시키는 함수