#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include "RecipeDTO.h"

using namespace std;

class DataMapper{

private:
	map<string, RecipeDTO> m;
	RecipeDTO *recipeDTO; //������ ��� DTO
	RecipeDTO *recipeList[100]; //������ ����Ʈ ��� DTO�迭
	int cnt; //�ӽ� counter

public:

	void recipeMapper(RecipeDTO _dto);
	RecipeDTO** getList();
	map<string, RecipeDTO> getMap();


};