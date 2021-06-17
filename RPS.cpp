ROCK PAPEER SCISSORS AGAINST COMPUTER 
// created RPS against a computer, we gave the computer a random number selection between numbers 0-2. we added a +1 in the code to make sure it adds 1 so it can pick options 1 2 or 3 instead of 0 1 2 because 0 is not an option.
// creating Rock Paper Scissors 
#include <iostream> 
#include <stdlib.h>

int main(){

srand(time(NULL));
int computer = rand() % 3 + 1;
int user = 0;

std::cout<<" Rock, Paper, Sciccors! \n\n";
std::cout<<" 1) Rock\n";
std::cout<<" 2) Paper\n";
std::cout<<" 3) Scissors\n";

std::cin >> user;

if(user == 1){
  std::cout<< "Rock\n";

}
else if(user == 2){
  std::cout<<" Paper\n";
}
else if(user ==3){
  std::cout<<" Scissors\n";

}
else{
  std::cout<<" Invalid input";
}

if(computer == 1){
  std::cout<< "Rock\n";

}
else if(computer == 2){
  std::cout<<" Paper\n";
}
else if(computer==3){
  std::cout<<" Scissors\n";

}
else{
  std::cout<<" Invalid input\n";
}

if(computer==user){
  std::cout<<" It's a tie!\n ";

}
else if(user == 1 && computer==2){
  std::cout<< " Computer wins!\n";

}
else if(user == 2 && computer==1){
  std::cout<<" User wins!\n";
}
else if(user ==1 && computer==3){
  std::cout<<" User wins!\n";

}
else if(user == 3 && computer==1){
  std::cout<< "Computer wins! \n";

}
else if(user == 2 && computer== 3){
  std::cout<<" Computer wins! ";
}
else if(user ==3 && computer== 2){
  std::cout<<" User wins!\n";

}
else{
  std::cout<<" Invalid input";
}
}
