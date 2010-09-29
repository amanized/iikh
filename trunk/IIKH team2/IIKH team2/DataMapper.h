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
	RecipeDTO *recipeDTO; //레시피 담는 DTO
	RecipeDTO *recipeList[100]; //레시피 리스트 담는 DTO배열
	int cnt; //임시 counter

public:

	void recipeMapper(RecipeDTO _dto);
	RecipeDTO** getList();
	map<string, RecipeDTO> getMap();


};