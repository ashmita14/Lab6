//Functions
//Write a program to find minimum of two numbers using functions (Call by Reference).

//including libraries
#include<iostream>
using namespace std;

//declaring function to find minimum of two numbers
void MINIMUM(int &n1, int &n2, int &min){
	//finding minimum
	if(n1<n2){
		min=n1;
	}
	else{
		min=n2;
	}
}

//declaring Driver function
int main(){
	//declaring variables
	int n1, n2, min;
	//asking user for numbers
	cout<<"Enter two numbers."<<endl;
	//accepting value
	cin >>n1 >>n2;
	//calling function by reference
	MINIMUM(n1, n2, min);
	//displaying result
	cout<<"The minimum of two numbers is = "<<min<<endl;
	//returning integer value to main function
	return 0;
}
