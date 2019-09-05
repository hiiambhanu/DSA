#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter main and sub";
    char m[100], sub[100];
    cin>>m>>sub;
    int count = 0;
    int j;
    for(int i = 0 ; i < strlen(m); i++){
        if(m[i]==sub[0]){
            
            for( j = i ; j<i+strlen(sub) ; j++){   
                
                if(sub[j-i]!=m[j])
                    break;
            }

            if(j==i+strlen(sub))
                count++;
        }       
    }

    cout<<count;
    return 0;   
} 