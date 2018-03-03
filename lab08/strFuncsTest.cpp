#include "strFuncs.h"
#include "tddFuncs.h"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	
	
	string s1 = "caonima";
	string s2 = "nimacao";
	assertTrue(isAnagram(s1, s2),
		"1"
	);
	
	string s4 = "12121";
	string s5 = "122221";
	assertTrue(isPalindrome(s4),
		"d");
	assertTrue(isPalindrome(s5),
		"e");
	
	
	
	
	return 0;
}