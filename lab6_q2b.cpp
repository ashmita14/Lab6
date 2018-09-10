//Functions
//Write a program to add two numbers using functions (Call By Reference).

//including libraries
#include<iostream>
using namespace std;

//declaring function to add numbers
void SUM(int &n1, int &n2, int &sum){
	//adding numbers
	sum=n1+n2;
}

//declaring driver functions
int main(){
	//declaring variables
	int n1, n2, sum;
	//initialising value of sum
	sum=0;
	//asking user for numbers
	cout<<"Enter two numbers."<<endl;
	//accepting value
	cin >>n1 >>n2;
	//calling function by reference 
	SUM(n1, n2, sum);
	//declaring result
	cout<<"The sum of the two numbers is = "<<sum<<endl;
	//returning integer value to main function
	return 0;
}
