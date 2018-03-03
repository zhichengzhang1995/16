// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  
  ifstream ifs;
  ifs.open(argv[1]);
  string thisline;
  string duck = "duck";
  int i = (-1);
  int d = 0;
  int fd = 0;
  while(!ifs.eof()){
	  getline(ifs,thisline);
	  cout<<thisline<<endl;
	  i++;
	  if (thisline == duck){
		  d++;
	  }
  }
  cout << i<<endl<<d<<endl<<i-d<<endl;
  return 0;
}
