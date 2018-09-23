//Functions
//Write a function to calculate tax on commodity using functions.

//including libraries
#include<iostream>
using namespace std;

//constructing struct to enable return of multiple variables from function
struct accept{
	float unitCst;
	float units;
	float taxRt;
};
//writing function to accept data from user
accept VALUE(){
	//declaring variables
	float unitCst1, units1, taxRt1;

	//asking user for cost of per unit
	cout<<"Enter cost of each unit."<<endl;
	//accepting value
	cin>> unitCst1;
	
	//asking user for number of units purchased
	cout<<"Enter number of units purchased."<<endl;
	//accepting value
	cin>> units1;

	//asking user for tax rate
	cout<<"Enter the tax rate."<<endl;
	//accepting value
	cin>> taxRt1;

	//returning value
	return {unitCst1, units1, taxRt1};
}

//constructing struct to accept multiple vale return from function
struct tax{
	float salesTx;
	float totDue;
};
//writing function to calculate tax and total cost due
tax CALCULATE(float utc, float ut, float txr){
	//declaring variables
	float sltx, ttd;
	//calculating tax 
	sltx=utc*ut*txr/100;
	//calculating total cost due
	ttd=utc*ut+sltx;
	//returning values
	return{sltx, ttd};
}

//writing function which accepts all values and prints them 
void PRINT(float utc, float ut, float txr, float sltx, float ttd){
	//displaying all information
	cout<<"The cost per unit of commodity = "<<utc<<endl;
	cout<<"The number of units purchased = "<<ut<<endl;
	cout<<"The tax rate = "<<txr<<endl;
	cout<<"Sales tax = "<<sltx<<endl;
	cout<<"Total cost due = "<<ttd<<endl;
}

//declaring Driver function to call the functions
int main(){
	//declaring variables
	float unitCost, unitsPurch, taxRate, salesTax, totalDue;
	
	//calling function to accept value from user
	accept result1= VALUE();
	//storing value in appropriate variables
	unitCost = result1.unitCst;
	unitsPurch = result1.units;
	taxRate = result1.taxRt;

	//calling function to calculate tax and cost due
	tax result2= CALCULATE(unitCost, unitsPurch, taxRate);
	//storing value in appropriate variables
	salesTax = result2.salesTx;
	totalDue = result2.totDue;

	//calling function to display results
	PRINT(unitCost, unitsPurch, taxRate, salesTax, totalDue);
	
	//returning integer value to main function
	return 0;
}

