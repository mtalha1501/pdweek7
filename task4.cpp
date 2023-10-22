#include<iostream>
using namespace std;
void dots(int numtriangle);
main(){
    int numtriangle;
    cout<<"Enter number of Triangle: ";
    cin>>numtriangle;
    dots(numtriangle);
}
void dots(int numtriangle)
{
    int dot=0;
    for(int i=1;i<=numtriangle;i++){
        dot=dot+i;
    }
     cout<<dot;   

}