#include <iostream>
#include <fstream>
#include <string>
#include <numeric>   
#include <algorithm> 

using namespace std;

int main(int argv, char** argc){
  if(argv < 3){
    cout << "Please provide 2 file names" << endl;
    return 1;
  }
  
  ifstream cardFile1 (argc[1]);
  ifstream cardFile2 (argc[2]);
  string line;
  string sa, sb;
  sa = "";
  sb = "";

  if (cardFile1.fail() || cardFile2.fail() ){
    cout << "Could not open file " << argc[2];
    return 1;
  }

  //Read each file
  while (cardFile1 >> line){
		cout << "Read from file: " << line << endl;
		sa += line;
  }
  cardFile1.close();


  while (cardFile2 >> line){
		cout << "Read from file: " << line << endl;
		sb += line;
  }
  cardFile2.close();
  
	cout<<sa<<endl;
	cout<<"get the sting A"<<endl;
	cout<<sb<<endl;
	cout<<"get the sting B"<<endl;
  
  
  return 0;
}
