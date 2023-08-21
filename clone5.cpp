#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    //  for(int i=0;i<=4;i++)
    //  {
    //     cout<<arr[i]<<endl;
    //  }

    int *ptr = &arr;

    for (int i = 0; i <= 4; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}