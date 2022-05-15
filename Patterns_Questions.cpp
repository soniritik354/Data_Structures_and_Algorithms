//All Types of Pattern problems are here..
#include <iostream>
using namespace std;

int main() {
    //Half Pyramid Pattern.
    int n=5;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=i;
        while(j>0){
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
    return 0;
}

int main() {
    //Half pyramid of numbers
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    
    return 0;
}

