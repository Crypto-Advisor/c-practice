#include <iostream>
#include <cstdlib>

int main(){
  int choice1;
  int choice2;

  std::cout << "Welcome to the text adventure game, choose a door you would like to enter: \n";
  std::cout << "Door 1\n";
  std::cout << "Door 2\n";
  std::cout << "Door 3\n";
  std::cin >> choice1;

  std::cout << "You chose " << choice1 << "!\n";
  
  std::cout << "You have encountered some monsters!\n";
  for(int i = 0;i<choice1;i++){
    std::cout << "Monster " << i+1 << "\n";;	
  }
  
  std::cout << "What would you like to do?\n";
  std::cout << "1 Attack\n";
  std::cout << "2 Defend\n";

  std::cin >> choice2;

  srand( time(0) );
  if(choice2 == 1){
    if(rand()%10 > 5){
	std::cout << "You lost\n";
    } else{
        std::cout << "You won\n";
    }
  } else if(choice2 == 2){
    std::cout << "You lost\n";
  } else{
    std::cout << "Invalid input!\n";
  }

  std::cout << "GAME OVER!\n";

}
