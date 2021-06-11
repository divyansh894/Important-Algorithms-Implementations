#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10] = {2, 3, 1, 4, 6, 7, 8, 10, 5, 6};
  int min = arr[0], max = arr[0];
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  cout << "max= " << max << "\n"
       << "min= " << min;
  return 0;
}