#include "Recipe.h"

	
void Recipe::showMenu_M() //�߸޴��� �����ִ� �Լ�
{
	cout<<"������������������������������������������������"<<endl;
	cout<<"1.�̸� �˻�"<<endl;
	cout<<"2.��� �˻�"<<endl;
	cout<<"3.��ü ����"<<endl;
	cout<<"4.��     ��"<<endl;
	cout<<"������������������������������������������������"<<endl;

	cin>>choice_M;

	switch(choice_M)
	{
		case 1 :
			//�̸��˻��ؼ� �����ִ� �Լ�
			break;
		case 2 :
			//���˻��ؼ� �����ִ� �Լ�
			break;
		case 3 :
			//��ü���⸦ �ؼ� �����ִ� �Լ�
			break;
		case 4 :
			//�����Ǹ� �߰���Ű�� �Լ� insertRecipe();
			break;
		default :
			cout<<"illegal Expression"<<endl;
			break;

	}

}

void Recipe::showMenu_S() //�Ҹ޴��� �����ִ� �Լ�
{
	cout<<"������������������������������������������������"<<endl;
	cout<<"1.��     ��"<<endl;
	cout<<"2.��     ��"<<endl;
	cout<<"������������������������������������������������"<<endl;

	cin>>choice_S;

	switch(choice_S)
	{
		case 1 : 
			//�����Ǹ� �߰� ���� ��ų �Լ� insertRecipe();
			break;
		case 2 :
			//�����Ǹ� ������ų �Լ� deleteRecipe();
			break;
		default:
			cout<<"illegal Expression"<<endl;
			break;
	}
}

	//void listAll();     //��ü �����Ǹ� �����ִ� �Լ�
	//void checkPrint();  //������ ������Ű�� �Լ� 
	//void insertRecipe(); //�����Ǹ� �߰� ��Ű�� �Լ�
	//void deleteRecipe(); //�����Ǹ� ���� ��Ű�� �Լ�