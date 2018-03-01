#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int response;
  int wins = 0;
  
  cout<<"How many times do you want to play the game?"<<endl;
  cin>>response;
  
for( int i = 0; i < response; i++)
  {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
  if(game.isWinner() == true)
  {
    wins++;
  }
  }
 cout<<"You won "<<wins<<endl;
  
  return 0;
}
