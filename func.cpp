// C++ program for tha above approach 
#include <iostream> 
#include <string> 
#include <algorithm>
using namespace std; 

// Function to convert string to 
// integer without using functions 
void convert(string s) 
{ 
    s.erase(remove(s.begin(), s.end(), '"'), s.end()); // clean it of any double quotes
    // alternative approach to the above will be creating an additional check for removing all special characters ina loop, rather than using erase method
    // cout<<s;
	int num = 0; 
    string res;
	// Iterate till length of the string 
	for (int i = 0; i < s.length(); i++) {
	   // cout << int(s[i]) << endl;
	   int val = int(s[i]);
	   if((val >= 97 && val <= 122) || (val >= 65 && val <= 90) ) {
	        break;
	   } else {
	       res += s[i];
	   }
	}

for (int i = 0; i < res.length(); i++) {
		// Subtract 48 from the current digit 
		num = num * 10 + (int(res[i]) - 48); 
}

	// Print the answer 
	cout << num; 
} 

// Driver Code 
int main() 
{ 
	// Given string of number 
    char s[100];
    cin >> s;
	// Function Call 
	convert(s); 
	return 0; 
} 
