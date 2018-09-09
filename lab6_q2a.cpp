//Functions
//Write a program to add two numbers using functions (Call By Value)

//including library
#include<iostream>
using namespace std;
//declaring function to add numbers
int SUM(int a, int b){
	//declaring variables
	int s;
	//adding numbers
	s=a+b;
	//returning the value
	return s;
}
//declaring Driver function
int main(){
	//declaring variables
	int n1, n2, sum;
	//asking user for the numbers
	cout<<"Enter two numbers."<<endl;
	//accepting the values
	cin >>n1 >>n2;
	//calling function by value
	sum = SUM(n1, n2);
	//displaying the answer
	cout<<"The sum of the numbers is = "<<sum<<endl;
	//returning an integer value to main function
	return 0;
}
