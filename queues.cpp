#include <iostream>
#include <stdlib.h>

using namespace std;

const int MAX = 5;

// stores the grades input by user means Queue_Grades
int Q[MAX];

// index of the item
int front = -1;
int rear = -1;

void insert(int num)
{
  if (rear == MAX - 1)
  {
    cout << "Queue is full..." << endl;
  }
  else
  {
    if (front == -1)
      front = 0;
      rear += 1;
      Q[rear] = num;
  }
}

void clear_queue()
{
  for (int i = 0; i < MAX; i++)
  {
    Q[i] == NULL;
  }
  front = -1;
  rear = -1;
}


void display()
{
  if (front == -1)
  {
    cout << "\n\tThe Queue is Empty" << endl;
  }
  else
  {
    cout << "Grades in the Queue:" << endl;
    for (int i = front; i <= rear; i++)
    {
      cout << "\nGrade #" << i + 1 << ": " << Q[i] << "\n";
    }
    cout << endl;
  }
}

void eReverse()
  {
    int rev[MAX];

    for (int i = 0; i < MAX; i++)
    {
      rev[i] = Q[rear - i];
    }

    for (int i = 0; i < MAX; i++)
    {
      Q[i] = rev[i];
    }
}

class Stack
{
private:
  int top, SMAX;
  int *items;
public:
  Stack(int size)
  {
    top = -1;
    SMAX = size;

    items = new int[SMAX];
  }

  void push(int num)
  {
    top++;
    items[top] = num;
  }

  void display(void)
  {
    for (int i = top; i >= 0; i--)
    {
      if (i == top)
      {
        cout << items[i] << " <-- top of stack" << endl;
      }
      else
      {
        cout << items[i] << endl;
      }
    }
  }
};

int main()
{
  int choice, grades, nGrades;
  Stack st(MAX);
  do
  {
    cout << "------------------------------------------------------" << endl;
    cout << "                 CHAPTER 4: QUEUES                    " << endl;
    cout << "Student Name: Cunanan, Lovely Angeline OL. | BSM CS-2A" << endl;

    cout << "\n\t[1] Input your 5 Grades" << endl;
    cout << "\n\t[2] Transfer Grades from Queues to Stack" << endl;
    cout << "\n\t[3] Reverse Grades from Queues" << endl;
    cout << "\n\t[4] Exit" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "\tEnter Choice[1-4]: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
      case 1:
        for(int i; i < MAX; i++)
        {
          cout << "Input your Grade: ";
          cin >> grades;
          insert(grades);
          cout << endl;
        }
        display();
        break;
      case 2:
        cout << "Transferring Grades from Queue to Stack..." << endl;
        cout << endl;
        for (int i = 0; i <= rear; i++)
        {
          st.push(Q[rear - i]);
        }
        clear_queue();
        st.display();
        display();
        break;
      case 3:
        for (int i = 0; i < MAX; i++)
        {
          cout << "Input Grades: ";
          cin >> nGrades;
          insert(nGrades);
          cout << endl;
        }
        display();
        cout << "Reversing Elements..." << endl << endl;
        eReverse();
        display();
        break;
      case 4:
        cout << "\tProgram has ended..." << endl;
        exit(0);
      default:
        cout << "\tPlease input only from numbers 1 to 4..." << endl;
    }
  } while (true);
  return 0;
}
