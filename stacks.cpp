#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class stack
{
private:
  char top;
  char Q[5];

public:

   stack()
  {
    top = -1;
    for (int i = 0; i < 5; i++)
    {
      Q[i] = 0;
    }
  }
  bool isEmpty()
  {
    if (top == -1)
      return true;
    else
      return false;
  }

  bool isFull()
  {
    if (top == 4)
      return true;
    else
      return false;
  }

  void push(int val)
  {
    if (isFull())
    {
      cout << "Stack Overflow" << endl;
    }
    else
    {
      top++;
      Q[top] = val;
    }
  }

  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack Underflow" << endl;
      return 0;
    }
    else
    {
      char popValue = Q[top];
      Q[top] = 0;
      top--;
      return popValue;
    }
  }

  int count()
  {
    return(top+1);
  }

  int peek(char pos)
  {
    if(isEmpty())
    {
      cout << "Stack Underflow" << endl;
      return 0;
    }
    else
    {
      return Q[pos];
    }
  }

  void display()
  {
    cout << "All values in the stack are " << endl;
    for (int i = 4; i >= 0; i--)
    {
      cout << Q[i] << endl;
    }
  }
};

int main ()
{
  stack s1;
  int option, position;
  int value[5];
  string choice;
  int sNum[5] = {1, 2, 3, 4, 5};
  int indexNum[5] = {0, 1, 2, 3, 4};
  char Q[5][30];
  int top;

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
    cin >> option;

    switch(option)
    {
      case 1:
      {
        // ask user input for 5 subjects
        cout << "\nEnter 5 Subjects Names in Array Q" << endl;
        for (int a = 0; a <= 4; a++)
        {
          cout << "\n\t" << sNum[a] << ".";
          cin >> value[5];
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
          cout << "\n\t-> @ index " << indexNum[i] << " is " << Q[i];
        }
        cout << endl;
        break;
      }
      case 3:
      {
        // do complete this there are a lot of references for it
        cout << "\nDo you want to copy Array Q elements to Stack?[Y/N]: ";
        cin >> choice;
        if (choice == "y" || "Y")
        {
            cout << "Array Q elemets are copied to Stack..." << endl;
            cout << "Stack contains =" << endl;
            s1.display();
        }
        break;
      }
    }
  } while(option != 4);

  return 0;
}
