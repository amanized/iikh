#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	//클래스 선언
	int choice_L=0;          //대메뉴 선택을 하는 변수(Large)

	system("cls");
	cout<<"────────────────────────"<<endl;
	cout<<"*****************OOP Project*******************"<<endl;
	cout<<"────────────────────────"<<endl<<endl;

	while(true){
		
		cout<<"────────────────────────"<<endl;
		cout<<"1.레시피"<<endl;
		cout<<"2.식단"<<endl;
		cout<<"3.종료"<<endl;
		cout<<"────────────────────────"<<endl;

		cin>>choice_L;

		switch(choice_L){
			case 1 : 
				//레시피 조회 및 관리
				break;
			case 2 :
				//식단
				break;
			case 3 :
				//종료
				return 0;
			default:
				cout<<"illegal Expression"<<endl;
				break;
		}
	}

	return 0;
}
