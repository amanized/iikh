#include "RecipeDTO.h"

void RecipeDTO::setName(string _name){
	name = _name;
}

string RecipeDTO::getName(){
	return name;
}

void RecipeDTO::setMaterial(string _material){
	material = _material;
}

string RecipeDTO::getMaterial(){
	return material;
}

void RecipeDTO::setDetail(string _detail){
	detail = _detail;
}

string RecipeDTO::getDetail(){
	return detail;
}

void RecipeDTO::setSummary(string _summary){
	summary = _summary;
}

string RecipeDTO::getSummary(){
	return summary;
}