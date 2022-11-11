
#include <stdlib.h>
#include <iostream>
#include <array>
#include <string>
#include <stack>
#include <cstring>

using namespace std;
//to_string() method to convert int to string

string Q[5];
char  A[100][100];
int top = -1;
int indexNUM[5] = {0, 1, 2, 3, 4};
int sNum[5] = {1, 2, 3, 4, 5};

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
          cout << "\nEnter 5 Subjects Names in Array Q" << endl;
          for (int a = 0; a <= 4; a++)
          {
            cout << "\n\t" << sNum[a] << ".";
            cin >> Q[a];
          }
          break;
        }
        case 2:
        {
          // Display inputted subject names by user
          cout << "\nArray Q Elements" << endl;
          for (int i = 0; i <= 4; i++)
          {
            // print index of the subject
            cout << "\n\t-> @ index " << indexNUM[i] << " is " << Q[i];
          }
          cout << endl;
          break;
        }
        case 3:
        {
          // do complete this there are a lot of references for it
          cout << "\nDo you want to copy Array Q elements to Stack?[Y/N]: " << endl;
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
