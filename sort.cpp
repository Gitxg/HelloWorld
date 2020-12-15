#include <iostream>
using namespace std;

void main()
{
  int arr[5] = {1,21,31,22,0};
  for(int i=0; i<5; i++)
  {
     for(int j=i; j<4;j++)
     {
       if(arr[j]>arr[j+1])
        {
          int buf = arr[j];
           arr[j] = arr[j+1];
          arr[j+1] = buf;
        }
     }
  }
  for(int i=0; i<5; i++)
  cout << arr[i] <<" ";
  cout << endl;
  return 0;
}
