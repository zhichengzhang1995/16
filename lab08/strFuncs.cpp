#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result
 */
bool isAnagram(string s1, string s2){
    int n = s1.size();
	
	if (s2.size()!=n)
		return false;
	
	for (int i = 0; i < n; i++)
	{
		int i1 = 0;
		int i2 = 0;
		char b = s1[i];
		for (int j = 0; j < n; j++)
		{
			
			if (s1[j] == b)
				i1++;
			if (s2[j] == b)
				i2++;
		}
		if (i1 != i2)
			return false;
	}
	return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You may provide a recursive OR non-recursive solution*/
bool isPalindrome(const string s1){

	for (int i=0; i < s1.size(); i++){
		if (s1[i] != s1[s1.size()-i-1])
			return false;
	}
    return true;
}

bool isPalindromeHelper(const char *s1, int len);
/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide a recursive implementation and are recommended to write a helper function where the recursion actually takes place*/
bool isPalindrome(const char *s1){
    return true;
}

/* Precondition: s1 is a valid C-string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You MUST provide an iterative implementation */
bool isPalindromeIterative(const char *s1){
    return true;
}



