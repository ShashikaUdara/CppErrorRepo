#include<iostream>
#include<cstdlib>

#define STR_ALLOC_LEN 2048
using namespace std;

int main()
{

	// pointer string pointing to the constent string literal "Udara Abeyrathne", without declaringthe size
	// char *str1 = "Udara Abeyrathne"; // Allowod in C but not in C++ (ISO C++ forbids converting a string constant to ‘char*’)
	const char *str2 = "Udara Abeyrathne"; // Allowod in C++ (making str constent char pointer)
	char *str3 = (char *)"Udara Abeyrathne"; // Allowod in C++ (cast string it self to char pointer from string constent)

	// cout<<"str1: "<<str1<<endl;
	cout<<"Before str2: "<<str2<<endl;
	cout<<"Before str3: "<<str3<<endl;

	// *(str+1) = 'A';
	// *(str2+1) = 'A'; // error: assignment of read-only location ‘*(str2 + 1)’
	// *(str3+1) = 'A'; // program will pass this while compliation. But will give a Segmentation fault (core dumped) in runtime.

	cout<<"After str2: "<<str2<<endl;
	cout<<"After str3: "<<str3<<endl;

	// dynamicall allocated memory for 
	const char *str4 = (char *)malloc(sizeof(char) * STR_ALLOC_LEN);
	const char *str5;

	str4 = "str4 string";

	cout<<"Allocated memory - empty char pointer: "<<str4<<endl;
	cout<<"Not memory allocated - empty char pointer: "<<str5<<endl;
	return 0;
}