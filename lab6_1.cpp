#include<iostream>
using namespace std;
int main(){2
int i = -1;
int y;
int ku = 0;
int ke = 0;
while (i < 0)
{
        cout << "Enter an integer: ";
        cin >> y;
        if(y == 0){
        i=1;
    }else{
            
            if(y%2 == 0){
            ku=ku+1;
        }
            else{
            ke=ke+1;
        }
    }
}
    cout << "#Even numbers = " << ku << "\n";
    cout << "#Odd numbers = " << ke;
    return 0;
}
