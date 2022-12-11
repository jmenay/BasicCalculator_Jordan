#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//void showMenu();
//void chooseOperation();

void showMenu()
{
  cout <<"\tMENU\n" <<endl;
  cout <<"Enter + for Addition\n" 
       <<"Enter - for Subtraction\n"
       <<"Enter * for Multiplication\n"   
       <<"Enter / for Division\n" << endl;
};

void chooseOperation(char operation, double numOne, double numTwo)
{
  
  cin >> operation;
  if((operation != '+') &&
     (operation != '-') &&
     (operation != '*') &&
     (operation != '/'))
  {
    cout << "operation " << operation << "INVALID" << endl;
  }
  
  cout <<endl;
  cout <<"Enter your first number: ";
  cin >> numOne;
  cout <<"Enter your second number: ";
  cin >> numTwo;
  cout <<endl;
  
  switch (operation)
    {
      case '+':
      cout << numOne << " + " << numTwo << " = " << (numOne+numTwo) << endl;
      break;
      case '-':
      cout << numOne << " - " << numTwo << " = " << (numOne-numTwo) << endl;
      break;
      case '*':
      cout << numOne << " * " << numTwo << " = " << (numOne*numTwo) << endl;
      break;
      case '/':
      cout << numOne << " / " << numTwo << " = " << (numOne/numTwo) << endl;
      break;
    }
  
}

int main() 
{
  cout << ".----------------------." <<endl;
  cout << "| Green Tea Calculator |" <<endl;
  cout << "'----------------------'" <<endl;
  
  bool end{false};
  while (end == false)
    { 
      showMenu();
      chooseOperation();
      bool done = false;
      while (!done)
        {
          cout << "Continue ? (Y/N) : ";
          char keepGoing;
          cin >> keepGoing;
          if ((keepGoing =='Y') || (keepGoing =='y'))
          {
            end = false;
            done = true;
          }
          if ((keepGoing =='N') || (keepGoing =='n'))
          {
            done = true;
            end = true;
          }
          else
          {
            cout << "\nInvalid input."<<endl;
            cout << "Enter Y to Continue\n"<<"Enter N to Exit"<<"\n"<<endl;
            done = false;
          }
        }
    }
return 0;
}