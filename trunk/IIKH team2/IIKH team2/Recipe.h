#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

class Recipe{

private:
	int choice_M;         //�߸޴� ������ �ϴ� ����(Middle)
	int choice_S;         //�Ҹ޴� ������ �ϴ� ����(Small)
	string checkFood;     //�̸��� �˻��Ҷ� ���� ��Ʈ��
	string checkMaterial; //��Ḧ �˻��Ҷ� ���� ��Ʈ��
	//�����̰� ������� DTO �迭 ���� ���Ϸκ��� �޾ƿ;��ϹǷ� �ʿ���
public:
	void showMenu_M();  //�߸޴��� �����ִ� �Լ�
	void showMenu_S();  //�Ҹ޴��� �����ִ� �Լ�
	void listAll()      //��ü �����Ǹ� �����ִ� �Լ�

}
