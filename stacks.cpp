
#include <stdlib.h>
#include <iostream>
#include <array>
#include <string>
#include <stack>
#include <cstring>

using namespace std;
//to_string() method to convert int to string

char Q[5][30];
char  A[100][100];
int top = -1;

int isempty();
int isfull();
void push();
void display();
int pop();

int main()
{
    int ch;

    do
    {
      cout << "------------------------------------------------------" << endl;
      cout << "                 CHAPTER 3: STACKS                    " << endl;
      cout << "Student Name: Cunanan, Lovely Angeline OL. | BSM CS-2A" << endl;

      cout << "\n\t[1] - Input 5 Array Q Elements\n\t";
      cout << "\n\t[2] - Display Array Q Elements\n\t";
      cout << "\n\t[3] - Array Q Elements to Stack\n\t";
      cout << "\n\t[4] - Exit\n";
      cout << "------------------------------------------------------" << endl;
      cout << "Enter Choice[1-4]: ";
      cin >> ch;

      switch(ch)
      {
        case 1:
        {
          // ask user input for 5 subjects
          cout << "Enter 5 Subjects Names in Array Q" << endl;
          cout << "\n\t1. ";
          cin >> Q[0];

          cout << "\n\t2. ";
          cin >> Q[1];

          cout << "\n\t3. ";
          cin >> Q[2];

          cout << "\n\t4. ";
          cin >> Q[3];

          cout << "\n\t5. ";
          cin >> Q[4];

          push();
          break;
        }
        case 2:
        {
          pop();
          break;
        }
        case 3:
        {
          display();
          break;
        }
      }

    } while(ch != 4);
    return 0;
}

int isfull()
{
  if (top == 5 -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isempty()
{
  if(top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void push()
{
  if (isfull())
  {
    cout << "Stack is full" << endl;
  }
  else
  {
    top++;
    strcpy(A[top], Q);
  }
}

int pop()
{
  if(isempty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    strcpy(Q, A[top]);
    cout << " " << Q[5];
    top--;
  }
}

void display()
{
  if(isempty())
  {
    cout << "No data is displayed";
    exit(0);
  }
  else
  {
    for (int i = 0; i < top+1; i++)
    {
      cout << " \n", A[i];
    }
  }
}
