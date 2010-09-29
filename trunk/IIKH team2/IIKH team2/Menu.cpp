#include "Menu.h"

Menu::Menu(DataMapper dm){

	myMenu[0][0] = "  ";
	myMenu[1][0] = "일";
	myMenu[2][0] = "월";
	myMenu[3][0] = "화";
	myMenu[4][0] = "수";
	myMenu[5][0] = "목";
	myMenu[6][0] = "금";
	myMenu[7][0] = "토";
	myMenu[0][1] = "아침          ";
	myMenu[0][2] = "  점심      ";
	myMenu[0][3] = "      저녁";
	
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


void Menu::showList(){ //식단을 1주일단위로 보여주는 함수
	
	cout<<"────────────────────────────────────"<<endl;
	 
	for(int i=0;i<8;i++){
	  
		for(int j=0;j<4;j++){
			cout<<myMenu[i][j]<<"        ";
		}
	
		cout<<endl<<endl;
	}

	cout<<"────────────────────────────────────"<<endl;
	myList=dm.getList();
	count=dm.getMap().size();
	allMenu.init();
	Question();
	
}




void Menu::Question(){  //물어보는 함수
	
	cout<<"1. 추가  2. 삭제 3. 상세설명 4.이전메뉴"<<endl;
	cin>>selectNumber;

	if(selectNumber==1 || selectNumber==2)
	{
		cout<<"요일을 입력바랍니다(1:일...7:토)"<<endl;
		cin>>selectDate;
		if(selectDate<1 || selectDate>7)
		{
			cout<<"요일을 잘못입력하셨습니다."<<endl;
			return;
		}
		cout<<"시간을 선택하시기 바랍니다.(1:아침, 2: 점심 ,3:저녁)"<<endl;
		cin>>selectTime;
		if(selectTime<1 || selectTime>3)
		{
			cout<<"시간을 잘못입력하셨습니다."<<endl;
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
		cout<<"잘못 입력하셨습니다. 다시 확인하여주시기 바랍니다"<<endl;
		Question();
	}

}
void Menu::addMenu()  //식단을 추가시키는 메뉴
{
	

	



	count=dm.getMap().size();
	int i=0;
	int select =0;

	while(1){
		cout<<"메뉴를 보시려면 1번, 음식을 추가하시려면 2번을 눌러 주세요"<<endl;
		cin>>select;
		if(select==1){
			allMenu.checkPrint("listAll");
		}
		else if(select==2){
			break;
		}
		else{
			cout<<"번호를 잘 못 입력하셨습니다"<<endl;
		}
	}
	cout<<"추가시키려는 음식의 번호를 입력하시기 바랍니다."<<endl;
	cin>>foodNumber;
	
	if(foodNumber<0 || foodNumber>=count)
	{
		cout<<"음식의 번호를 잘못입력하셨습니다."<<endl;
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
void Menu::delMenu()  //식단을 삭제시키는 메뉴
{

	myMenu[selectDate][selectTime]=".             ";
	showList();

}
void Menu::showDetail()  //레시피상세설명
{
		allMenu.checkPrint("name");
}