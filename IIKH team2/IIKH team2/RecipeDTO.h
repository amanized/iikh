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
	
	void setName(string name);
	string getName();
	
	void setMaterial(string material);
	string getMaterial();

	void setDetail(string detail);
	string getDetail();

	void setSummary(string summary);
	string getSummary();
	


}