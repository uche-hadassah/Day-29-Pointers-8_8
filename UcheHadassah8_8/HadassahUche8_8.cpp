/*Write a void function that uses pointers to delete a single character from the end of a C-string. 
The function takes as parameter the C-string*/
#include<iostream>
#include<cstring>
using namespace std;
void removeChar(char*);//Function Prototype
int main()
{
	char Str[100];
	cout << "Enter a string:";
	cin.getline(Str, 100);
	removeChar(Str);
	cout << "The new string is:" << Str;
}
void removeChar(char*)
{
}
