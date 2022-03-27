#include <iostream>
#include <iomanip>
using namespace std;
int main() {

  double original_price;
  double market_rate;
  double tax_rate;

  double sale_price;
  double saletaxes;
  double total_price;

 cout <<fixed<<setprecision(2);
 cout << "Calculates Pricing Information for Store Product. " <<endl;
 cout <<endl;
 cout << "Enter Orginal Price :"; 
 cin >> original_price; 
 cout << "Enter Market Rate as percentage: ";
 cin >> market_rate;
 cout << "Enter Tax Rate as percentage: ";
 cin >> tax_rate;
 cout <<endl;
 sale_price= original_price*((market_rate/100)+1) ;
 saletaxes= sale_price*(tax_rate/100) ;
 total_price= sale_price + saletaxes;
 cout << "Sales Price: $" <<setw(8)<<sale_price<< "." <<endl;
 cout << "Sales taxes: $" <<setw(8)<<saletaxes<< "." <<endl;
 cout << "Total Price: $" <<setw(8)<<total_price<< "." <<endl;
return 0;
 }