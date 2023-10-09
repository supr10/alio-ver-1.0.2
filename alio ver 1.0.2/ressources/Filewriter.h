#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

namespace fileSystem{
	void writeFile(char filename[]){
		std::ofstream file(filename);
		char awn;
		while(awn!='q'){
			std::string text;
			std::getline(std::cin,text);
			file<<text<<std::endl;
			awn=getch();
	}
	}
	
}

