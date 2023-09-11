#include<bits/stdc++.h>
using namespace std;

int getNextGap(int gap)
{
    gap = gap/1.3;

    if (gap < 1)
        return 1;
    return gap;
}

void combSort(int a[], int n)
{
    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped)
    {
        gap = getNextGap(gap);
        swapped = false;

        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
}

int main()
{
    int arr[] = {8, 4, 1,999, 56, 3, -44, 23, -6, 28, 0,100};
    int length = sizeof(arr) / sizeof(arr[0]);

    combSort(arr, length);

    for (int i: arr) {
        cout << i << " ";
    }

    return 0;
}


