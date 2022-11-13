#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class stack
{
private:
  int top;
  string value[5];
  char null = 0;

public:

   stack()
  {
    top = -1;
    for (int i = 0; i < 5; i++)
    {
      value[i] = null;
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
      value[top] = val;
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
      string popValue = value[top];
      value[top] = null;
      top--;
      cout << popValue;
    }
  }

  void display()
  {
    cout << "Stack contains =" << endl;
    for (int i = 4; i >= 0; i--)
    {
      cout << value[i] << endl;
    }
  }
};

int main ()
{
  stack s1;
  int option, position;
  string value[5] = {" "};
  string choice;
  int sNum[5] = {1, 2, 3, 4, 5};
  int indexNum[5] = {0, 1, 2, 3, 4};

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
        /*for (int a = 0; a <= 4; a++)
        {
          cout << "\n\t" << sNum[a] << ".";
          cin >> value[100];
        }
        break;*/
        cout << "\n\t1. ";
        cin >> value[0];

        cout << "\n\t2. ";
        cin >> value[1];

        cout << "\n\t3. ";
        cin >> value[2];
        cout << "\n\t4. ";
        cin >> value[3];
        cout << "\n\t5. ";
        cin >> value[4];
        cout << endl;
        break;
      }
      case 2:
      {
        // Display inputted subject names by user
        cout << "\nArray Q Elements" << endl;
        /*for (int i = 0; i < 5; i++)
        {
          // print index of the subject
          cout << "\n\t-> @ index " << indexNum[i] << " is " << value[5];
        }
        cout << endl;*/

        cout << "\n\t-> @ index 0 is " << value[0];
        cout << "\n\t-> @ index 1 is " << value[1];
        cout << "\n\t-> @ index 2 is " << value[2];
        cout << "\n\t-> @ index 3 is " << value[3];
        cout << "\n\t-> @ index 4 is " << value[4];
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
            for(int v1:value[0])
                s1.push(v1);
            for(char v2:value[1])
                s1.push(v2);
            for(char v3:value[2])
                s1.push(v3);
            for(char v4:value[3])
                s1.push(v4);
            for(char v5:value[4])
                s1.push(v5);
            s1.display();
        }
        break;
      }
    }
  } while(option != 4);

  return 0;
}
