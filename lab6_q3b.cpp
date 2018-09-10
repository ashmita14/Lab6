//Functions
//Write a program to find the maximum of two numbers using functions (Call By Reference).

//including libraries
#include<iostream>
using namespace std;

//declaring function to find maximum
void MAXIMUM(int &n1, int &n2, int &max){
	//finding maximum
	if(n1>n2){
		max=n1;
	}
	else{
		max=n2;
	}
}

//declaring Driver function
int main(){
	//declaring variables
	int n1, n2, max;
	//asking user for two numbers
	cout<<"Enter two numbers."<<endl;
	//accepting values
	cin >>n1 >>n2;
	//calling function by reference
	MAXIMUM(n1, n2, max);
	//displaying result
	cout<<"The maximum of the two numbers is = "<<max<<endl;
	//returning integer value to main function
	return 0;
}
