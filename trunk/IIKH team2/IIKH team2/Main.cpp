#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	//Ŭ���� ����
	int choice_L=0;          //��޴� ������ �ϴ� ����(Large)

	system("cls");
	cout<<"������������������������������������������������"<<endl;
	cout<<"*****************OOP Project*******************"<<endl;
	cout<<"������������������������������������������������"<<endl<<endl;

	while(true){
		
		cout<<"������������������������������������������������"<<endl;
		cout<<"1.������"<<endl;
		cout<<"2.�Ĵ�"<<endl;
		cout<<"3.����"<<endl;
		cout<<"������������������������������������������������"<<endl;

		cin>>choice_L;

		switch(choice_L){
			case 1 : 
				//������ ��ȸ �� ����
				break;
			case 2 :
				//�Ĵ�
				break;
			case 3 :
				//����
				return 0;
			default:
				cout<<"illegal Expression"<<endl;
				break;
		}
	}

	return 0;
}
