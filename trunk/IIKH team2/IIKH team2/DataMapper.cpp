#include "DataMapper.h"


void DataMapper::recipeMapper(RecipeDTO *_dto){ //file에서 불러온 data를 map에 맵핑

	cnt = getCnt();

	for(int i=0; i<cnt; i++){
		recipeDTO = new RecipeDTO();
		recipeDTO = recipeList[cnt];

		m.insert(pair<string, RecipeDTO>(recipeDTO->getName(), recipeDTO));
	}
}

void DataMapper::getList(){

	string temp="";
	string nameTemp="";
	string temp1="";
	string materialTemp="";
	string detailTemp="";
	string summaryTemp="";
	int index = 0;
	int	index1 = 0;

	ifstream fin("file1.txt", ios::in);

	while(fin>>temp){

		// fin>>temp;
		nameTemp=temp;
		fin>>temp;
		materialTemp=temp;

		fin>>temp;

		while(temp1!="-"){

			fin>>temp1;

			if(temp1!="-"){
				temp += " ";
				temp += temp1;
			}

		}
		detailTemp=temp;
		fin>>temp;

		while(temp1!="--"){

			fin>>temp1;
			if(temp1!="--"){
				temp += " ";
				temp += temp1;
			}

		}

		summaryTemp=temp;
		recipeList[index]=new RecipeDTO(nameTemp, materialTemp, detailTemp, summaryTemp);
		index++;
	}
}
