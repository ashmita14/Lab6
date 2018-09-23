//Functions
//Write a program to convert a lower case character to upper case and vice versa using functions

//including libraries
#include<iostream>
using namespace std;

//writing function to convert lower case character to upper case
char toUpper(char ch){
	//declaring variables
	int i, c;
	char chf;
	//converting given character to integer(ASCII code) by explicit conversion
	c= int(ch);
	//converting the ASCII code to corresponding code for upper case letters
	i=c-32;
	//converting ASCII code to letter
	chf=char(i);
	//returning value to caller function
	return chf;
}

//writing function to convert upper case character to lower case
char toLower(char ch){
	//declaring variables
	int i, c;
	char chf;
	//converting given character to integer(ASCII code) by explicit conversion
	c= int(ch);
	//converting the ASCII code to corresponding code for lower case letters
	i=c+32;
	//converting ASCII code to letter
	chf=char(i);
	//returning value to caller function
	return chf;
}

//declaring Driver function
int main(){
	//declaring variables
	char inputChar, outputChar;
	int n, j;
	//asking user to enter a letter
	cout<<"Enter a letter."<<endl;
	//accepting value
	cin>> inputChar;
	//converting character to ASCII code by explicit conversion
	n=int(inputChar);

	//running loop to check if character is uppercase
	for(j=65; j<=90; j++){
		//checking value of ASCII code
		if(n==j){
			//calling function to convert character to lowercase
			outputChar= toLower(inputChar);
			//breaking loop
			break;
		}
	}

	//running loop to check if character is lowercase
	for(j=97; j<=122; j++){
		//checking ASCII code
		if(n==j){
			//calling function to convert character to uppercase
			outputChar= toUpper(inputChar);
			//breaking loop
			break;
		}
	}
	
	//displaying output
	cout<<"Character, after conversion = "<<outputChar<<endl;
	//returning integer value to main function
	return 0;
}

