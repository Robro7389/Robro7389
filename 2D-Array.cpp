#include<iostream>
using namespace std;

int main(){

    // Taking input for 2D array
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    // Input for the missing element
    int mis;
    cin>>mis;

   
    // Printing array
    
    cout<<"The Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

 // Code logic for missing element and printing
 bool ans=false;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           if (arr[i][j]==mis)
           {
               cout<<i<<" "<<j<<endl;
               ans=true;
             }  
               
           
           
       }
       
    }

    if (ans)
    {
        cout<<"Element found.\n";
    }else{
        cout<<"Element not found\n";
    }
    

    return 0;
}