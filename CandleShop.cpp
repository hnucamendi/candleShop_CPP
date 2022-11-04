#include <iostream>
#include "Candle.hpp"
using namespace std;

int main()
{
  double grandTotal = 0.0;
  int grandBurnTime = 0;
  int grandCostPerBurnTime = 0;
  int start;

  Candle candleOne("Luscious Lavender", 2.50, 5, 0);
  Candle candleTwo("Fragrant Floral's", 3.75, 7, 0);
  Candle candleThree("Spicy N' Dicey", 5.99, 12, 0);

  vector<Candle> candles = {candleOne, candleTwo, candleThree};

  cout << "Enter 0 to continue\n";
  cin >> start;
  if (start != 0)
  {
    return 1;
  }

  for (int i = 0; i < 3; i++)
  {
    int input;
    cout << "\nHow many " << candles[i].getName() << " candles would you like? Enter a number amount.\n";
    cin >> input;
    cout << input << "\n";
    candles[i].setAmount(input);
  }

  cout << candleOne.getAmount() << "\n";
  cout << candleTwo.getAmount() << "\n";
  cout << candleThree.getAmount() << "\n";

  //   for (int i = 0; i < candles.length; i++) {
  //     System.out.println(String.format(
  //             "How many of the %s candles would you like? Enter a number amount.", candles[i].getName()));
  //     candles[i].setAmount(keyboard.nextInt());

  //     candles[i].totalPrice();

  //     grandTotal += candles[i].totalPrice();
  //     grandTotalBurnTime += candles[i].totalBurnTime();
  //     grandCostPerBurnTime += candles[i].costPerBurnTime();
  // }

  return 0;
}
