
#include <stdlib.h>
#include <iostream>
#include <array>
#include <string>
#include <stack>

using namespace std;
//to_string() method to convert int to string

// figure out how to make this into an array that accept strings
/*int stack[5], n = 5, top = -1;
void push (int subject)
{
  if (top >= n - 1)
  cout << "Stack Overflow" << endl;
  else
  {
    top++;
    stack[top] = subject;
  }
}*/
char subject[5];
int top = -1, n = 5;
int isfull();


void push(char subject[5])
{
  if (top >= n - 1)
  {
    cout << "Stack is full" << endl;
  }
  else
  {
    top++;
    stack[top] = subject;
  }
}

// figure out how to make the stack display everything from bottom to top
void display()
{
  if (top >= 0)
  {
    cout << "\nArray Q Elements are copied to stack.. " << endl;
    cout << "Stack contains = " << endl;
    for (int i = top; i >= 0; i++)
    cout << stack[i] << " ";
    cout << endl;
  }
  else
  cout << "Stack is Empty";
}

int main()
{
    int ch;
    string subject[5];

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
          cout << "Enter 5 Subjec Names in Array Q" << endl;
          cout << "\n\t1. ";
          cin >> subject[0];

          cout << "\n\t2. ";
          cin >> subject[1];

          cout << "\n\t3.";
          cin >> subject[2];

          cout << "\n\t4. ";
          cin >> subject[3];

          cout << "\n\t5. ";
          cin >> subject[4];

          push(subject);
          break;
        }
        case 2:
        {

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
