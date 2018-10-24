#include<iostream>

using namespace std;

#define MAX 10000
int main()
{
    int a[MAX], first, last, middle, item, size;

    cout << "Enter array size: " << endl;
    cin >> size;

    cout << "Enter array element" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the value which you want to search: " << endl;
    cin >> item;

    first = 0;
    last = size - 1;
    middle = (first+last)/2;

    while(first <= last)
    {
        if(item > a[middle])
        {
            first = middle + 1;
        }
        else if(item == a[middle])
        {
            cout << "" << item << " found in " << middle + 1 << "th position." << endl;
            break;
        }
        else
            last = middle -1;


        middle = (first+last)/2;
    }

    if(first > last)
        cout << "Item not found!\a" << endl;
}

