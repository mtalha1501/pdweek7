#include<iostream>
using namespace std;
void printstars(int numrows);
main()
{
    int numrows;
    cout<<"Enter desired number of rows: ";
    cin>>numrows;
    printstars(numrows);


}
void printstars(int numrows){
    for (int row=1;row>=numrows;row++){
        for(int col=1;col<=row;col++){
                cout<<"*";
        }
    cout<<endl;    
    }
    }