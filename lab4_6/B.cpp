#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a][a];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
        cin>>arr[i][j];
    }
    }

    int p = arr[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (p < arr[i][j])
            {
                p = arr[i][j];
            }
            
        }
        
    }
    int op = arr[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (op < arr[i][j] and arr[i][j]< p){
                op = arr[i][j];
            }
          
            
        }
        
    }
    if (op == p)
    {
        cout<<"0";
    }else{
        cout<<op;
    }
    
}