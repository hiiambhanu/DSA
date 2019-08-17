#include<iostream>
using namespace std;

void swap(int &a, int&b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}

void bsort(int a[], int size)
{
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1])   swap(a[j+1], a[j]);
        }
    }
}

void display(int a[], int size){
    for(int i = 0 ;i < size; i++)
        cout<<a[i]<<endl;
}
int main()
{
    int a[100], size;
    cout<<"Enter size ";
    cin>>size;
    cout<<"Enter the array elements ";
    for(int i = 0;i < size; i++)
        cin>>a[i];
    bsort(a, size);
    cout<<"\n the sorted array is "<<endl;

    display(a, size);
    return 0; 

}