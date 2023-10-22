#include <iostream>
using namespace std;
void printup(int numRows);
void printdown(int numRows);
int main()
{
    int numRows;
    cout << "Enter desired number of rows: ";
    cin >> numRows;
    printup(numRows);
    printdown(numRows);
}
void printup(int numRows)
{

    for (int i = 1; i <= numRows/2; i++)
    {
        for (int j = 1; j <= (numRows/2) - i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void printdown(int numRows)
{
    for(int i = numRows / 2; i >= 1; i--)
    {
        for(int j = 1; j <= (numRows / 2) - i; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


