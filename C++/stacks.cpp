#include <iostream>
using namespace std;

class S1
{
private:
  int top;
  string *index;
  int num2;
public:
   S1(int size)
  {
    num2 = size;
    top = -1;
    index= new string[num2];
  }

  void push(string val)
  {
    index[++top] = val;
  }

  void display(int num3)
  {
    int i = num3;
    for (int counter = i; counter >= 0; counter--)
    {
      if(counter == i)
      {
        cout << "\n\t" << index[counter] << "    <- Top of the Stack" << endl;
      }
      else
      {
        cout << "\n\t" << index[counter] << endl;
      }
    }
  }
};

S1 stack(5);
int option;
string Q[5];
char choice;

int main ()
{

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
    cout << "\tEnter Choice[1-4]: ";
    cin >> option;

    switch(option)
    {
      case 1:
        // ask user input for 5 subjects
        cout << "\nEnter 5 Subjects Names in Array Q" << endl;
          for (int i = 0; i <= 4; i++)
          {
            i += 1;
            printf("\n\t%i.  ", i);
            i -= 1;
            getline(cin >> ws, Q[i]);
          }
        break;
      case 2:
        // Display inputted subject names by user
        cout << "\nArray Q Elements" << endl;
        for (int i = 0; i <= 4; i++)
        {
          // print index of the subject
          printf("\n\t-> @ array index %i is ", i);
          cout << Q[i] << endl;
        }
        break;
      case 3:
        // stack the copied array
        cout << "Do you want to copy Array Q elements to Stack?[Y/N]: ";
        cin >> choice;

        if(choice == 'y' || choice == 'Y')
        {
          cout << "Array Q elements are copied to Stack..." << endl;
          cout << "Stack Contains =" << endl;

          for(int ctr = 0; ctr < 5; ctr++)
          {
            stack.push(Q[ctr]);
          }
          stack.display(4);
        }
        break;
      case 4:
        cout << "Program closed..." << endl;
        exit(0);
        break;
      default:
        cout << "XXXX Invalid Input... XXXX" << endl;
        break;
    }
  } while(true);
   return 0;
}
