/*alio by supr10.*/

#include "Filewriter.h"
#include "Fileopener.h"
#include <conio.h>
#include <string>
#include <windows.h>
#define maxSize 80

using namespace std;
using namespace fileSystem;


int main(void){
	//variables declarations
	char cmd;
	int lines;
	char fileName[maxSize];
	
	//main
	cout<<"welcome to alio!"<<endl<<"press h for the help menu."<<endl;
	getch();
	system("cls");
	while(true){
		cmd=getch();
		switch (cmd){
			case 'n':
				cout<<"file name: ";
				cin>>fileName;
				cout<<"press 'q' to quit"<<endl;
				writeFile(fileName);
				break;
			case 'q':{
				int chc=MessageBox(0,"are you sure?","quit",MB_YESNO);
				if(chc==6){exit(0);}
				break;}
			case 'h':
				cout<<"help on commands:"<<endl<<"press:"<<endl<<"h to display help"
				<<" (this!)"<<endl<<"n to write a new file"<<endl<<"o to open a file("
				<<"read only)"<<endl<<"c to enter a cmd command"<<endl
				<<"m to clear screen"<<endl<<"q to quit"<<endl;
				system("pause");
				system("cls");
				break;
			case 'm':
				system("cls");
				break;
			case 'o':
				char path[maxSize];
				cout<<"file path: ";
				cin>>path;
				cout<<endl;
				cout<<openFile(path);
				system("pause");
				break;
			case 'c':
				string C;
				cout<<"enter a command: ";
				getline(cin,C);
				const char* C2 = C.c_str();
				system(C2);
				break;
			//to mod it,please put the rest of the code here.
			
		}
	}
	
	//end
	return 0;
}
