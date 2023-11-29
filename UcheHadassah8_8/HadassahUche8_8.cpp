/*Name:Uche Hadassah
This program uses pointers to remove the last character at the end of an existing string*/
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
void removeChar(char* str)
{
	while (*str != '\0')//While we have not reached the end of the string
	{
		str++;//Increment the pointer location
	}
	str--;//Move to the location before the null
	*str = '\0';//Make that character the null
}
