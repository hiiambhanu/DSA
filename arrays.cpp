#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selsort(int a[], int size)
{

    int small;

    for (int i = 0; i < size - 1; i++)
    {
        small = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[small] > a[j])
                small = j;
        }

        swap(a[i], a[small]);
    }
}

void lsearch(int a[], int size, int item)
{
    for (int i = 0; i < size; i++)
        if (a[i] == item)
        {
            cout << "Item Found at " << i << " ";
            return;
        }
    cout << "Item not found";
    return;
}

void bsearch(int a[], int size, int item)
{
    int lb, ub, mid;
    lb = 0;
    ub = size - 1;

    while (lb <= ub)
    {

        mid = (lb + ub) / 2;

        if (a[mid] == item)
        {
            cout << "Item found ";
            return;
        }

        else if (a[mid] > item)
        {
            ub = mid - 1;
        }

        else
            lb = mid + 1;
    }

    cout << "Item not found";
    return;
}

void bsort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j + 1], a[j]);
        }
    }
}

void insort(int a[], int size)
{
    int temp, j;
    for (int i = 1; i < size; i++)
    {
        temp = a[i]; // 2 1 3 4 5    temp = 1;
        j = i - 1;

        while (j >= 0 && temp < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void merge(int left[], int lsize, int right[], int rsize, int arr[], int arrsize)
{

    int i, j, k;
    i = j = k = 0;
    while (i < lsize && j < lsize)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < lsize)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j< rsize)
    {
        arr[k] =right[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int size){
    if(size<2)
        return;
    
    int mid = size/2;
    int left [mid];
    int right[size - mid];

    for(int i = 0 ; i < mid ; i ++){
        left[i]= a[i];
    }


    for(int i = mid; i < size ; i ++){
        right[i-mid ] = a[i];
    }

    mergesort(left, mid);
    mergesort(right, size - mid);

    merge(left, mid, right, size-mid, a, size);
}

void insert(int a[], int &size, int item)
{
    int pos;
    if (a[0] > item)
    {
        pos = 0;
        for (int i = size - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[pos] = item;

        size++;
        return;
    }
    else if (a[size - 1] < item)
    {
        pos = size;
        size++;
        a[pos] = item;
        return;
    }

    else
    {
        cout << "Im here  ";
        for (int i = 0; i < size - 1; i++)
        {
            if (a[i] < item && a[i + 1] > item)
            {
                pos = i + 1;
                break;
            }
        }
    }
    cout << "pos is " << pos << "  ";
    for (int i = size; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = item;
    size++;
    return;
}

void del(int a[], int &size, int item)
{
    int pos;
    for (int i = 0; i < size; i++)
        if (a[i] == item)
            pos = i;

    for (int i = pos; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
}

void display(int a[], int size)
{
    cout << "The array is ";
    for (int i = 0; i < size; i++)
        cout << a[i] << endl;
}
int main()
 {
    int a[100], size;
    cout << "Enter size ";
    cin >> size;
    cout << "Enter the array elements ";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    // int x[10];
    // int y[] = {1,3,5,7,9};
    // int z[] = {2,4,6,8,10};
    
    // merge(y, 5, z,5, x, 10);
    // display(x, 10 );
    mergesort(a, size);
    display(a, size);

    return 0;
}