#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Welcome to the Game "<<endl;
    int a;
    int secretNumber = rand() % 100 + 1;
    int i=0;

    while (a != secretNumber) {
    cout<<"Enter the number ";
    cin>>a;
       
        i++;

        if (a < secretNumber) {
            cout << "You guessed too low Number Try again." << endl;
        } else if (a > secretNumber) {
            cout << "You guessed too high number Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << i << " attempts." << endl;
        }

        cout<<"Secret number was "<<secretNumber<<endl;
    } 

}