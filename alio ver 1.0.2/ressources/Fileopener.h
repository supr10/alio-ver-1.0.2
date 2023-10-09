#include <fstream>
#include <string>


namespace fileSystem{
	std::string openFile(char File[]){
		std::ifstream file(File);
		char a[100];
		std::string content( (std::istreambuf_iterator<char>(file) ),
		(std::istreambuf_iterator<char>() ) );
		return content;
	}
}
