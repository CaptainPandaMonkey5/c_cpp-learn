#include <iostream>
#include <stdlib.h>

using namespace std;

const int MAX = 5;
int q_arr[MAX];
int front = -1;
int rear = -1;

void insert()
{
  int addedItem;

  if (rear == MAX - 1)
  {
    cout << "\n\tQueue is full..." << endl;
    return;
  }
  else
  {
    if (front == -1)
      front = 0;
    cout << "\n\t Input Grade to insert in queue: ";
    cin >> addedItem;
    rear += 1;
    q_arr[rear] = addedItem;
  }
};

int main()
{
  int choice;

  while(1)
  {
    cout << "\n\t[1] Input Grades" << endl;
    cout << "\n\t[2] Transfer Grades from Queues to Stack" << endl;
    cout << "\n\t[3] Display Grades in Stack and Queue" << endl;
    cout << "\n\t[4] Reverse Grades from Queues" << endl;
    cout << "\n\t[5] Exit" << endl;
    cout << "\n\tChoice: ";
    cin >> choice;

    switch(choice)
    {
      case 1:
        insert();
        break;
      case 2:
        break;
      case 3:
    }
  }
}
