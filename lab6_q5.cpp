//Functions
//Write a program to execute three operations :- *Finding Sum *Finding Maximum *Finding Minimum using functions and execute operation as per users's choice.

//including libraries
#include<iostream>
using namespace std;

//declaring function for finding sum
int SUM(int a, int b){
	//declaring variables
	int s;
	//finding sum
	s=a+b;
	//returning value to Driver function
	return s;
}

//declaring function for finding maximum
int MAXIMUM(int a, int b){
	//declaring variables
	int max;
	//finding maximum value
	if(a>b){
		max=a;
	}
	else{
		max=b;
	}
	//returning value to Driver function
	return max;
}

//declaring function for finding minimum
int MINIMUM(int a, int b){
	//declaring variables
	int min;
	//finding minimum value
	if(a<b){
		min=a;
	}
	else{
		min=b;
	}
	//returning result to Driver function
	return min;
}

//declaring Driver function
int main(){
	//declaring variables
	int n1, n2, ans, c;
	//asking user for two numbers
	cout<<"Enter two numbers."<<endl;
	//accepting numbers
	cin >>n1 >>n2;
	//asking user for the type of operation required
	cout<<"1. Find sum."<<endl;
	cout<<"2. Find maximum."<<endl;
	cout<<"3. Find minimum."<<endl;
	cout<<"Enter your choice."<<endl;
	//accepting user's choice
	cin >>c;
	//performing task as per user's choice
	if(c==1){
		//calling function to calculate sum
		ans= SUM(n1, n2);
		//displaying result
		cout<<"The sum of the numbers is = "<<ans<<endl;
	}
	else if(c==2){
		//calling function to find maximum
		ans= MAXIMUM(n1, n2);
		//displaying result
		cout<<"The maximum of two numbers is = "<<ans<<endl;
	}
	else if(c==3){
		//calling function to find minimum
		ans= MINIMUM(n1, n2);
		//displaying result
		cout<<"The minimum of two numbers is = "<<ans<<endl;
	}
	else{
		//displaying invalid response
		cout<<"Invalid Response."<<endl;
	}
	//returning integer value to int main function
	return 0;
}
 
