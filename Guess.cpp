#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

int main() {

  int guess;
  srand (time(NULL));
  int computer = std::rand() % 10+1;
  int tries = 10;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  while (guess!=computer && tries < 13)
  {
    std::cout <<"Wrong guess, try again: ";
    std::cin >> guess;
    std::cout<<"\n";
    if (guess == computer) 
    {
    tries = 9;
    }
   tries++;
  }
  if (tries!=10)
  {
    std::cout<<"Out of tries, reset required \n";
  }
  if (guess == computer) 
{    
    std::cout << "You got it!\n";
   }
  std::cout<<"Computer guess was: "<<computer<<"\n";
  
}