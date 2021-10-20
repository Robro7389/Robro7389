#include<iostream>
using namespace std;

//Palindrome is a word which remains same is we reverse the letters.  e.g- Nitin

int main(){

    //input
    int n;
    cin>>n;

    char a[n+1];
    cin>>a;

   // Logic
    bool check =1;

    for (int i = 0; i < n; i++)
    {
        if (a[i]!=a[n-1-i])
        {
            check = 0;
            break;
        }
        
    }
    // output 
    if (check==1)
    {
        cout<<"Word is a palindrome"<<endl;
    }
    else{
        cout<<"Word is not a palindrome"<<endl;
    }

    return 0;
}