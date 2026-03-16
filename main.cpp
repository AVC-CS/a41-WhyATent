
//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer.
//**    If we have negative input, just quit the program.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double PERC19 = 0.2;
  const double PERC49 = 0.3;
  const double PERC99 = 0.4;
  const double PERC100 = 0.5;
  const double Price = 99.00;
  double totalCost, originalAmount, discountAmount, dRate;
  int numberofSold;

  cout << "Enter the number of units sold\n";
  // TODO
  cin >> numberofSold;
  // Input Validation
  // TODO

  // Determine discount rate based on quantity
  // TODO
if (numberofSold < 10 and numberofSold >= 0){
  originalAmount = numberofSold*Price;
  discountAmount = 0;
  totalCost = originalAmount;
}
else if (numberofSold >= 10 and numberofSold < 20){
  originalAmount = numberofSold*Price;
  discountAmount = originalAmount*PERC19;
  totalCost = originalAmount-discountAmount;
}
else if (numberofSold >= 20 and numberofSold < 50){
  originalAmount = numberofSold*Price;
  discountAmount = originalAmount*PERC49;
  totalCost = originalAmount-discountAmount;
}
else if (numberofSold >= 50 and numberofSold <100){
  originalAmount = numberofSold*Price;
  discountAmount = originalAmount*PERC99;
  totalCost = originalAmount-discountAmount;
}
else if (numberofSold >= 100){
  originalAmount = numberofSold*Price;
  discountAmount = originalAmount*PERC100;
  totalCost = originalAmount-discountAmount;
}

  // Calculate original amount, discount, and total
  // TODO

  /* To print out your result, use the following statements */
if (numberofSold >= 0){
  cout << setprecision(2) << fixed;
  cout << "Original amount is " << originalAmount << endl;
  cout << "Discount amount is " << discountAmount << endl;
  cout << "Total Price is " << totalCost << endl;
}
else if (numberofSold < 0){
  cout << "Error, please provide a positive number of sold." << endl;
}
}
