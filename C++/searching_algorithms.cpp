#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int key;
int flag, index;

// linear search
void searchData(int arr[], int size)
{
  flag = -1;
  for (int i = 0; i < size; i++)
  {
    if (key == arr[i])
    {
      flag = 1;
      index = i;
    }
  }
}

void display()
{
  if (flag == 1)
  {
    cout << endl << "Given key " << key << " is positioned at index " << index << " in the array" << endl;
  }
  else
  {
    cout << endl << "Given key " << key << " is not present in the array" << endl;
  }
}

int main()
{
  cout << "------------------------------------------------------" << endl;
  cout << "           CHAPTER 5: SEARCHING ALGORITHMS            " << endl;
  cout << "Student Name: Cunanan, Lovely Angeline OL. | BSM CS-2A" << endl;
  cout << "------------------------------------------------------" << endl;
  int size;
    cout << "\tArray Size: ";
    cin >> size;

  int Q[size];
  cout << "------------------------------------------------------";

    for (int i = 0; i < size; i++)
    {
      cout << "\n\tInput the element #" << i + 1 << ": ";
      cin >> Q[i];
    }

    // from the library <bits/stdc++.h>
    int n = sizeof(Q) / sizeof(Q[0]);
    sort(Q, Q + n);

  cout << "------------------------------------------------------";

    cout << "\n\tKey: ";
    cin >> key;

  cout << "------------------------------------------------------";

      cout << "\n\tSorted: ";
      for (int i = 0; i < size; i++)
      {
        cout << Q[i] << ", ";
      }
      cout << endl;

      cout << "\n\tKey: " << key << endl;

  searchData(Q, size);
  display();
  cout << "------------------------------------------------------" << endl;

  return 0;
}
