#include "Menu.h"

Menu::Menu(DataMapper dm){

	myMenu[0][0] = "  ";
	myMenu[1][0] = "��";
	myMenu[2][0] = "��";
	myMenu[3][0] = "ȭ";
	myMenu[4][0] = "��";
	myMenu[5][0] = "��";
	myMenu[6][0] = "��";
	myMenu[7][0] = "��";
	myMenu[0][1] = "��ħ          ";
	myMenu[0][2] = "  ����      ";
	myMenu[0][3] = "      ����";
	
	for(int i=1; i<8; i++){
		for(int j=1; j<4; j++){
			myMenu[i][j] = ".		";
		}
	}

	 this->dm= dm;
	
}

void Menu::putMenu(){
	ofstream fout;
	fout.open("file2.txt");

	for(int i=1;i<8;i++){
		for(int j=1;j<4;j++){
			fout<<myMenu[i][j]<<endl;
			
		}
	}


	


	
}

void Menu::getMenu(){
	int i=0;
	int j=1;
	string temp;
	ifstream fin("file2.txt", ios::in);
	for(i=1;i<8;i++){
		for(j=1;j<4;j++){
			fin>>temp;
			myMenu[i][j]=temp;
			myMenu[i][j]=myMenu[i][j]+"		";
		}
		
	}
	

}


void Menu::showList(){ //�Ĵ��� 1���ϴ����� �����ִ� �Լ�
	
	cout<<"������������������������������������������������������������������������"<<endl;
	 
	for(int i=0;i<8;i++){
	  
		for(int j=0;j<4;j++){
			cout<<myMenu[i][j]<<"        ";
		}
	
		cout<<endl<<endl;
	}

	cout<<"������������������������������������������������������������������������"<<endl;
	myList=dm.getList();
	count=dm.getMap().size();
	allMenu.init();
	Question();
	
}




void Menu::Question(){  //����� �Լ�
	
	cout<<"1. �߰�  2. ���� 3. �󼼼��� 4.�����޴�"<<endl;
	cin>>selectNumber;

	if(selectNumber==1 || selectNumber==2)
	{
		cout<<"������ �Է¹ٶ��ϴ�(1:��...7:��)"<<endl;
		cin>>selectDate;
		if(selectDate<1 || selectDate>7)
		{
			cout<<"������ �߸��Է��ϼ̽��ϴ�."<<endl;
			return;
		}
		cout<<"�ð��� �����Ͻñ� �ٶ��ϴ�.(1:��ħ, 2: ���� ,3:����)"<<endl;
		cin>>selectTime;
		if(selectTime<1 || selectTime>3)
		{
			cout<<"�ð��� �߸��Է��ϼ̽��ϴ�."<<endl;
			return;
		}
		
		switch(selectNumber)
		{
			case 1:
				addMenu();
				break;
			case 2:
				delMenu();
				break;
		}
	}
	else if(selectNumber==3){

				showDetail();
	}

	else if(selectNumber==4)
	{
		return;
	}

	else
	{
		cout<<"�߸� �Է��ϼ̽��ϴ�. �ٽ� Ȯ���Ͽ��ֽñ� �ٶ��ϴ�"<<endl;
		Question();
	}

}
void Menu::addMenu()  //�Ĵ��� �߰���Ű�� �޴�
{
	

	



	count=dm.getMap().size();
	int i=0;
	int select =0;

	while(1){
		cout<<"�޴��� ���÷��� 1��, ������ �߰��Ͻ÷��� 2���� ���� �ּ���"<<endl;
		cin>>select;
		if(select==1){
			allMenu.checkPrint("listAll");
		}
		else if(select==2){
			break;
		}
		else{
			cout<<"��ȣ�� �� �� �Է��ϼ̽��ϴ�"<<endl;
		}
	}
	cout<<"�߰���Ű���� ������ ��ȣ�� �Է��Ͻñ� �ٶ��ϴ�."<<endl;
	cin>>foodNumber;
	
	if(foodNumber<0 || foodNumber>=count)
	{
		cout<<"������ ��ȣ�� �߸��Է��ϼ̽��ϴ�."<<endl;
		return;
	}

	for(i=0;i<count;i++){
		if(foodNumber==myList[i]->getNumber())
			break;
	}
	
	myMenu[selectDate][selectTime] = myList[i]->getName();
	int l = myMenu[selectDate][selectTime].length();
	if(l < 3) myMenu[selectDate][selectTime] += "            ";
	else if(l < 5) myMenu[selectDate][selectTime] += "          ";
	else if(l < 7) myMenu[selectDate][selectTime] += "        ";
	else if(l < 9) myMenu[selectDate][selectTime] += "      ";
	else if(l < 11) myMenu[selectDate][selectTime] += "    ";
	else if(l < 13) myMenu[selectDate][selectTime] += "  ";
	else if(l < 15) myMenu[selectDate][selectTime] += "";
	
	showList();

}
void Menu::delMenu()  //�Ĵ��� ������Ű�� �޴�
{

	myMenu[selectDate][selectTime]=".             ";
	showList();

}
void Menu::showDetail()  //�����ǻ󼼼���
{
		allMenu.checkPrint("name");
}