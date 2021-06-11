#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int front = 0, end = 4;
  while (front < end)
  {
    swap(arr[front], arr[end]);
    front++;
    end--;
  }
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}