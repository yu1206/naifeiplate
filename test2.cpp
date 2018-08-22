#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int test2(int argc, char *argv[])
{
	string filepath	="I:/naifeiPlate/nanfei1/0.txt";
	ofstream finSave;
	finSave.open("I:/naifeiPlate/nanfei-txt/4/4-vehicle.txt");
	ifstream finRead;	
	finRead.open(filepath);
		
	string nameJPG;
	while(getline(finRead,nameJPG))
	{	  
		string temp=nameJPG;

		temp.erase(0, temp.find_first_not_of(" \t"));
		temp.erase(temp.find_last_not_of(" \t") + 1);

		  nameJPG=temp;

		temp.replace(temp.find_last_of("."), 4,".txt");
		ifstream fin1;
		
		fin1.open(temp);
		
		string car; int x1;int y1;int x2;int y2;
		 fin1>>car>>x1>>y1>>x2>>y2;
		 finSave<<nameJPG<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	}
	finRead.close();
	finSave.close();
	return 0;
}