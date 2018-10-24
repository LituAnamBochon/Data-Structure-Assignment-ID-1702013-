#include<iostream>

using namespace std;

int count,ck,c;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    c++;
}

void bubble_Sort(int arr[], int x)
{
   int i, j;
   bool swapped;
   for (i = 0; i < x-1; i++)
   {
     swapped = false;
     for (j = 0; j < x-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
        ++count;
     }
     ck++;
     if (swapped == false)
        break;
   }
}


void print_Array(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n\n%d Comparisons %d Passes %d Interchanges.\n",count,ck,c);
}


int main()
{
    int a[6] = {'P','E','O','P','L','E'};
    bubble_Sort(a, 6);
    printf("Sorted array: \n");
    print_Array(a, 6);
    return 0;
}
