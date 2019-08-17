#include<iostream>
using namespace std;

void swap(int &a, int&b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}

void lsearch(int a[], int size, int item){
    for(int i = 0 ;i < size; i++)
        if(a[i]==item){
            cout<<"Item Found at "<<i<<" ";
            return;
        }
    cout<<"Item not found";
    return;
}

void bsearch(int a[], int size, int item){
    int lb, ub, mid;
    lb = 0; 
    ub = size-1;
    
    while(lb <= ub){
        
        mid = (lb + ub) /2;

        if(a[mid]==item){
            cout<<"Item found ";
            return;
        }

        else if(a[mid]>item ){
            ub = mid - 1; 
        }

        else lb = mid + 1;  
    }

    cout<<"Item not found";
    return;
    
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
    
    cout<<"Enter the item to look for ";
    int item;
    cin>>item;
    cout<<"bSearch "; 
    bsearch(a, size, item);


    return 0; 

}