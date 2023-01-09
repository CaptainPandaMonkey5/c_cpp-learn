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
  char driverName[10];
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
  printf("Race!\n");
}

void printFirstPlaceAfterLap(struct Race race)
{
  printf("After lap number %d\n", race.currentLap);
  printf("First Place Is: %s in the yellow race car!\n", race.firstPlaceDriverName);
}

void printCongratulation(struct Race race)
{
  printf("Let's all congratulate %d in the %d race car for an amazing performance.\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
  printf("It truly was a great race and everybody have a goodnight!\n");
}
// Logic functions section
int calculateTimeToCompleteLap()
{
  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;

  return speed + acceleration + nerves;
}

void updateRaceCar(struct RaceCar* raceCar)
{
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2)
{
  
}

int main() {
	srand(time(0));
  printIntro();
  printCountDown();
};