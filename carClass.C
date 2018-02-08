#include <iostream>
using namespace std;

enum direc {NORTH, EAST, SOUTH, WEST};//datatype called direc
class Car
{
private:
  string VIN;
  string make;
  string model;
  string color;
  int year;
  int mileage;
  direc direction;
  int X;
  int Y;

public:
  Car(string v, string mk, string md, string c, int yr);
  string getModel();
  void goForward(int blks);
  int getX();
  int getY();
  void turnRight();
  void turnLeft();
  int getMileage();
};

Car::Car(string v, string mk, string md, string c, int yr)
{
  VIN = v;
  make = mk;
  model = md;
  color = c;
  year = yr;
  mileage = 0;
  direction = NORTH;
  X = Y = 0;
}


string Car::getModel()
{
  return model; 
}

void Car::goForward(int blks)
{
  if (direction == NORTH)
    Y += blks;
  else if (direction == EAST)
    X += blks;
  else if (direction == SOUTH)
    Y -= blks;
  else if (direction == WEST)
    X -=blks;

  mileage += blks;
}

int Car::getX()
{
  return X;
}

int Car::getY()
{
return Y;
}

void Car::turnRight()
{
  if (direction < WEST)
    direction = (direc)(direction + 1);
  else //direction is WEST
    direction = NORTH;
}

void Car::turnLeft()
{
  if (direction == NORTH)
    direction = WEST;
  else
    direction = (direc)(direction - 1);

}

int Car::getMileage()
{
  return mileage;
}

int main()
{
  Car c1("w12345", "VW", "Beetle", "green", 2015);
  cout << c1.getModel() << endl;

  cout << "c1 is at " << "(" << c1.getX() << "," << c1.getY() << ")" << endl;
  c1.goForward(2);
  cout << "c1 is at " << "(" << c1.getX() << "," << c1.getY() << ")" << endl;
  c1.turnRight();
  c1.goForward(3);
  cout << "c1 is at " << "(" << c1.getX() << "," << c1.getY() << ")" << endl;

  c1.turnRight();
  c1.goForward(5);
  cout << "c1 is at " << "(" << c1.getX() << "," << c1.getY() << ")" << endl;

  c1.turnLeft();
  c1.goForward(3);
  cout << "c1 is at " << "(" << c1.getX() << "," << c1.getY() << ")" << endl;

  cout << "c1's mileage is " << c1.getMileage() << endl;
  return 0;
}
