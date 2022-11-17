#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race
{
  int numberOfLaps;
  int currentLap;
  char firstPlaceDriverName[20];
  char firstPlaceRaceCarColor[10];
};

struct RaceCar
{
  char driverName[30];
  char raceCarColor[10];
  int totalLapTime;
};
// Print functions section
void printIntro()
{
  printf("Welcome to our main event digital race fans!\n");
  printf("I hope everybody has their snacks because we are about to begin!\n");
}

void printCountDown()
{
  printf("Racers Ready! In...\n");
  printf("5\n");
  printf("4\n");
  printf("3\n");
  printf("2\n");
  printf("1\n");
  printf("Race!");
}

void printFirstPlaceAfterLap(struct Race race, struct Race currentlap)
{

}
// Logic functions section

int main() {
	srand(time(0));
  /*printf("");
  printIntro();*/

  /*printf(" ");
  printCountDown();*/
};
