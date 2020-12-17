#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1,21,31,22,0};
  for(int i=0; i<5; i++)
  {
     for(int j=0; j<5-i-1;j++)
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
  cout << "123" <<endl;
  cout << "gewfewf" <<endl;
  return 0;
}
