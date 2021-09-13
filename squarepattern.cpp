#include<iostream>
using namespace std;

int main(){
    int n;  //length of one side 
    char ch; //character to be printed as pattern

    cout<<"Enter length of sided : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter character to print : ";
    cin>>ch;
    cout<<endl<<endl;

    for(int i=0;i<n;i++){        //loop to print rows
        for(int j=0;j<n;j++){    //loop to print columns
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;

}