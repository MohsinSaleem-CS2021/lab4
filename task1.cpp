#include<iostream>

class TollBooth{
private:
  unsigned int no_of_cars;
  double amount;

public:
  TollBooth()
  {
    no_of_cars = 0;
    amount     = 0;
  }

  void payingCar()
  {
    no_of_cars++;
    amount+=150.50;
  }

  void nonpayCar()
  {/* message */
    no_of_cars++;
  }

  double display()
  {
    std::cout << "number of cars = " << no_of_cars << '\n';
    std::cout << "amount = " << amount << '\n';
    std::cout << "loss = " << ((no_of_cars * 150.50) - amount) << '\n';
  }

};


int main() {

  TollBooth tool;
  char key;
  std::cout << "enter p to count paying cars" << '\n';
  std::cout << "enter n to count non-paying cars" << '\n';
  std::cout << "enter q to display the results" << '\n';


  std::cout << "/************************/" << '\n';
  std::cout << "/************************/" << '\n';
  std::cout << "/************************/" << '\n';
  std::cout << "/************************/" << '\n';



  while(true){
    std::cout << "enter choice: ";std::cin >> key;
    if(key=='p')
    {
        tool.payingCar();
    }

    else if(key=='n')
    {
      tool.nonpayCar();
    }

    else if(key=='q')
    {
      tool.display();
      break;
    }

    else
    {std::cout << "invalid key!!" << '\n';
    break;}

  }

}
