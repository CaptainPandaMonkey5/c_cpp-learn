// Rock Paper Scissor + Lizard and Spock (Big Bang Theory)
#include <iostream>
#include <stdlib.h>

int main()
{
  // Live long and prosper
  srand(time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "rock paper scissors!\n";
  std::cout << "\n";

  std::cout << "1) ✊ ROCK \n";
  std::cout << "2) ✋ PAPER\n";
  std::cout << "3) ✌ SCISSOR\n";
  std::cout << "4) 🖖 SPOCK\n";
  std::cout << "5) 🦎 LIZARD\n";

  std::cout << "USER: SHOOT! ";
  std::cin >> user;

  std::cout << "COMPUTER: SHOOT! " << computer << "\n";

  if (user == computer)
  {
    std::cout << "TIE!\n";
  }

  // user rock
  else if (user == 1)
  {
    if (computer == 2)
    {
      std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
    if (computer == 3)
    {
      std::cout << "USER WINS...COMPUTER LOSS!\n";
    }
    if (computer == 4)
    {
        std::cout << "SPOCK HAS VAPORIZED ROCK!!\n";
        std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
    if (computer == 5)
    {
        std::cout << "ROCK CRUSHES LIZARD!!\n";
        std::cout << "USER WINS...COMPUTER LOSS!!\n";
    }
  }

  // user paper
  else if (user == 2)
  {
    if (computer == 1)
    {
      std::cout << "USER WINS...COMPUTER LOSS!\n";
    }
    if (computer == 3)
    {
      std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
    if (computer == 4)
    {
        std::cout << "PAPER DISPROVES SPOCK!!\n";
        std::cout << "USER WINS...COMPUTER LOSS!\n";
    }
    if (computer == 5)
    {
        std::cout << "LIZARD EATS PAPER!!\n";
        std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
  }

  // user scissors
  else if (user == 3)
  {
    if (computer == 1)
    {
      std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
    if (computer == 2)
    {
      std::cout << "USER WINS...COMPUTER LOSS!\n";
    }
    if (computer == 4)
    {
        std::cout << "SPOCK SMASHES SCISSOR!!\n";
        std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
    if (computer == 5)
    {
        std::cout << "SCISSOR DECAPITATE LIZARD!!\n";
        std::cout << "USER WINS...COMPUTER LOSS!\n";
    }
  }

  // user spock
  else if (user == 4)
  {
    if (computer == 1)
    {
        std::cout << "SPOCK VAPORIZES ROCK!!\n";
        std::cout << "USER WINS...COMPUTER LOSS\n";
    }
    if (computer == 2)
    {
        std::cout << "PAPER DISPROVES SPOCK!!\n";
        std::cout << "COMPUTER WINS...USER LOSS!\n";
    }
    if (computer == 3)
    {
        std::cout << "SPOCK SMASHES SCISSORS!!\n";
        std::cout << "USER WINS...COMPUTER LOSS!\n";
    }
    if (computer == 5)
    {
        std::cout << "LIZARD POISONS SPOCK!!\n";
        std::cout << "COMPUTER WINS...USER LOSS!\n";
    }

    // user lizard
    else if (user == 5)
    {
        if (computer == 1)
        {
            std::cout << "ROCK CRUSHES LIZARD!!\n";
            std::cout << "COMPUTER WINS...USER LOSS!\n";
        }
        if (computer == 2)
        {
            std::cout << "LIZARD EATS PAPER!!\n";
            std::cout << "USER WINS...COMPUTER LOSS!\n";
        }
        if (computer == 3)
        {
            std::cout << "SCISSORS DECAPITATE LIZARD!!\n";
            std::cout << "COMPUTER WINS...USER LOSS!\n";
        }
        if (computer == 4)
        {
            std::cout << "LIZARD POISONS SPOCK!!\n";
            std::cout << "USER WINS...COMPUTER LOSS!\n";
        }
    }
  }
  return 0;
}