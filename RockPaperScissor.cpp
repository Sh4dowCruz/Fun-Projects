#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

//Program to play rock, paper, scissors
void delay(int milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
int main ()
{
  srand (time(NULL));
  int computer = std::rand() % 3 + 1;
  int user = 0;
  std::cout <<"=================\n";
  std::cout <<"rock paper scissors!\n";
  std::cout <<"=================\n";
  delay(2000);
  std::cout <<"1) Rock\n";
  delay(1000);
  std::cout <<"2) Paper\n";
  delay(1000);
  std::cout <<"3) Scissor\n";
  delay(1000);
  std::cout <<"SHOOT!\n";
  std::cin >> user;

  //Checking if computer won
  if (computer==user)
  {
    std::cout<<"TIE \n";
  }
  else if (computer==1 && user ==2)
  {
    std::cout<<"You won \n";
  }
  else if (computer==2 && user ==3)
  {
    std::cout<<"You won \n";
  }
    else if (computer==3 && user ==1)
  {
    std::cout<<"You won \n";
  }
 else if (user==1 && computer ==2)
  {
    std::cout<<"You lost \n";
  }
  else if (user==2 && computer ==3)
  {
    std::cout<<"You lost \n";
  }
  else if (user==3 && computer ==1)
  {
    std::cout<<"You lost \n";
  } 
  else
  {
    std::cout<<"Invalid input \n";
    user = 0;
  }
  std::cout<<"Computer chose:"<<computer<<", and the user chose:"<<user<<"\n";
}