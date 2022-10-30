#include <iostream>
using namespace std;

class Candle
{
private:
  string name;
  double price;
  int burnTime;
  int amount;

public:
  Candle(string name, double price, int burnTime, int amount)
  {
    this->name = name;
    this->price = price;
    this->burnTime = burnTime;
    this->amount = amount;
  }

  string getName()
  {
    return this->name;
  }

  double getPrice()
  {
    return this->price;
  }

  int getBurnTime()
  {
    return this->burnTime;
  }

  int getAmount()
  {
    return this->amount;
  }

  // Setters
  void setAmount(int amount)
  {
    this->amount = amount;
  }
};

int main()
{
  double grandTotal = 0.0;
  int grandBurnTime = 0;
  int grandCostPerBurnTime = 0;
  int start;

  Candle candleOne("Luscious Lavender", 2.50, 5, 0);
  Candle candleTwo("Fragrant Floral's", 3.75, 7, 0);
  Candle candleThree("Spicy N' Dicey", 5.99, 12, 0);

  Candle candles[3] = {candleOne, candleTwo, candleThree};

  // cout << "Enter 0 to continue\n";
  // cin >> start;

  for (int i = 0; i < 3; i++)
  {
    int input;
    // cout << "\nHow many " << candles[i].getName() << " candles would you like? Enter a number amount.\n";
    // cin >> input;
    candles[i].setAmount(i);
    cout << "candles" << candles[i].getAmount();
  }

  cout << candleOne.getAmount();
  cout << candleTwo.getAmount();
  cout << candleThree.getAmount();

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
