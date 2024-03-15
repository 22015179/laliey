#include <iostream>

using namespace std;

int main()
{
double merchandiseCost , yearlyrent , employeersSalary , electricityCost;
double netProfit = 0.10;
double priceIteam = 0.15;

cout << "enter the total merchandise cost";
cin>>merchandiseCost;

cout<< "enter the yearly rent";
cin>> yearlyrent;

cout<<"enter the employeers salary of the whole year";
cin>> employeersSalary;

cout<<"enter the total electricity cost";
cin>> electricityCost;


double totalExpenses = merchandiseCost + yearlyrent +employeersSalary + electricityCost;
double totalNeed = totalExpenses /(1 - netProfit);
double calculateAfter = totalNeed / (1- priceIteam);
double calculateSaleBefore = markSaleAfter / (1 - priceIteam);

cout<< "The total merchadise will be calculated  by approximately " << calculateAfter , calculateSaleBefore;

 return 0;
}
