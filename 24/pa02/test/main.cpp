
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>   
#include <list>   
#include <numeric>   
#include <algorithm> 
using namespace std;


int main(int argv, char** argc)
{
	//define
	if(argv < 3){
		cout << "Please provide 2 file names" << endl;
		return 1;
    }
	typedef list<char> LISTCHAR;
	//fileinput
	ifstream fin (argc[1]);
	string agv1;
	ifstream fin2 (argc[2]);
	string agv2;
	
	if (fin.fail() || fin2.fail() ){
		cout << "Could not open file " << argc[2];
		return 1;
    }
	//input
	
	//ifstream in(argc[1]);
	//char buffer[200];
	//if(in.is_open())
	//{
		//while(!in.eof())
		//{
			//in.getline(buffer,100);
			//cout<<buffer<<endl;
		//}
	//}
	
	string sa, sb;
	sa = "";
	sb = "";

	string s;  

    while( fin >> s ) 
    {    
        cout << "Read from file: " << s << endl;
		sa += s;
    }
	cout<<"---------"<<endl;
	while( fin2 >> s ) 
    {    
        cout << "Read from file: " << s << endl;
		sb += s;
    }
	
	cout<<sa<<endl;
	cout<<"get the sting A"<<endl;
	cout<<sb<<endl;
	cout<<"get the sting B"<<endl;
	


	
	
	//while (!fin.eof() ) {
		//getline (fin, agv1);
		//getline (fin2, agv2);
	//}
	//cout<<"________________________"<<endl;
	//cout<<agv1<<endl;
	//cout<<agv2<<endl;
	//cout<<"________________________"<<endl;
	//fin.close();


}