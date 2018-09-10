//Functions
//Write a function to find the maximum of two numbers using function (Call by Value).

//including libraries
#include<iostream>
using namespace std;

//declaring functions
int MAXIMUM(int a, int b){
	//declaring variables
	int m;
	//finding maximum number
	if(a>b){
		m=a;
	}
	else{
		m=b;
	}
	//returning value to main function
	return m;
}

//declaring Driver function
int main(){
	//declaring variables
	int n1, n2, max;
	//asking user for numbers
	cout<<"Enter two numbers."<<endl;
	//accepting numbers
	cin >>n1 >>n2;
	//calling function by reference
	max = MAXIMUM(n1, n2);
	//displaying result
	cout<<"The maximum of the two numbers is = "<<max<<endl;
	//returning integer value to int main function
	return 0;
}
