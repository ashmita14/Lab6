//Functions
//Write a program to find the minimum of two numbers using functions (Call by Value).

//including libraries
#include<iostream>
using namespace std;

//declaring function to find minimum
int MINIMUM(int a, int b){
	//declaring variables
	int m;
	//checking minimum
	if(a<b){
		m=a;
	}
	else{
		m=b;
	}	
	//returning minimum value to function
	return m;
}

//declaring Driver function
int main(){
	//declaring variables
	int n1, n2, min;
	//asking user for two numbers
	cout<<"Enter two numbers."<<endl;
	//accepting values
	cin >>n1 >>n2;
	//calling function by value
	min= MINIMUM(n1, n2);
	//displaying result
	cout<<"The minimum of the two numbers is = "<<min<<endl;
	//returning integer value to main function
	return 0;
}
