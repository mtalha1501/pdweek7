#include<iostream>
using namespace std;
void amplify(int number);
main(){
    int number;
    cout<<"Enter the number to Amplify: ";
    cin>>number;
     amplify(number);
}
void amplify(int number)
{
    for(int i=1;i<=number;i++){
            int x=i;
            
            if (i%4==0){
                x=i*10;
            }
          cout<<x<<", ";
    }
}