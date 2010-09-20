#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class RecipeDTO{

private:
	string name;
	string material;
	string detail;
	string summary;

public:

	RecipeDTO(string _name, string _material, string _detail, string _summary);
	
	void setName(string _name);
	string getName();
	
	void setMaterial(string _material);
	string getMaterial();

	void setDetail(string _detail);
	string getDetail();

	void setSummary(string _summary);
	string getSummary();
	


};