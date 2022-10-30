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
};

int main()
{
  Candle candleOne("yum", 2.00, 24, 12);

  cout << candleOne.getName() << " " << candleOne.getPrice() << " " << candleOne.getBurnTime() << " " << candleOne.getAmount();
  return 0;
}
