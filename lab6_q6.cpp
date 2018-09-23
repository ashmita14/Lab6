//Functions

//including libraries
#include<iostream>
using namespace std;

//declaring function for sum of even numbers
int sumEvenNumbers(int n1, int n2){
	//declaring variables
	int sum, i;
	//initializing sum
	sum=0;
	//running loop to check condition and add numbers
	for(i=n1; i<=n2; i++){
		//adding numbers if they are even
		if(i%2==0){
			sum=sum+i;
		}
	}
	//returning sum to main function
	return sum;
}

//declaring function for sum of odd numbers
int sumOddNumbers(int n1, int n2){
	//declaring variables
	int sum, i;
	//initializing sum
	sum=0;
	//running loop to check condition and add numbers
	for(i=n1; i<=n2; i++){
		//adding numbers if they are odd
		if(i%2!=0){
			sum=sum+i;
		}
	}
	//returning sum to main function
	return sum;
}

//declaring function for sum of square of even numbers
int sumSquareEvenNumbers(int n1, int n2){
	//declaring variables
	int sum, i;
	//initializing sum
	sum=0;
	//running loop to check condition and add numbers
	for(i=n1; i<=n2; i++){
		//adding square of numbers if they are even
		if(i%2==0){
			sum=sum+(i*i);
		}
	}
	//returning sum to main function
	return sum;
}

//declaring function for sum of square of odd numbers
int sumSquareOddNumbers(int n1, int n2){
	//declaring variables
	int sum, i;
	//initializing sum
	sum=0;
	//running loop to check condition and add numbers
	for(i=n1; i<=n2; i++){
		//adding square of numbers if they are odd
		if(i%2!=0){
			sum=sum+(i*i);
		}
	}
	//returning sum to main function
	return sum;
}

//declaring Driver function
int main(){
	//declaring variables
	int sumEven, sumOdd, sumSquareEven, sumSquareOdd, firstNum, secondNum;
	//asking user for values
	cout<< "Enter two numbers."<<endl;
	//accepting values
	cin>> firstNum>> secondNum;
	//calling functions by value
	sumEven = sumEvenNumbers(firstNum,secondNum);
	sumOdd = sumOddNumbers(firstNum,secondNum);
	sumSquareEven = sumSquareEvenNumbers(firstNum,secondNum);
	sumSquareOdd = sumSquareOddNumbers(firstNum,secondNum);
	//displaying values
	cout <<"Sum of all even numbers between "<<firstNum<<" and "<<secondNum<<" is = "<<sumEven<<endl;
	cout <<"Sum of all odd numbers between "<<firstNum<<" and "<<secondNum<<" is = "<<sumOdd<<endl;
	cout <<"Sum of square of all even numbers between "<<firstNum<<" and "<<secondNum<<" is = "<<sumSquareEven<<endl;
	cout <<"Sum of square of all odd numbers between "<<firstNum<<" and "<<secondNum<<" is = "<<sumSquareOdd<<endl;
	//returning integer value to main function
	return 0;
}
	
