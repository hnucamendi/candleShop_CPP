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
  Candle(string new_name, double new_price, int new_burnTime, int new_amount);
  ~Candle();

  // Getters
  string getName();

  double getPrice();

  int getBurnTime();

  int getAmount();

  // Setters
  void setAmount(int &amount);
};