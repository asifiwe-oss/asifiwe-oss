#include<iostream>
using namespace std;

int main(){
    //for loop

    for(int i = 1; i <= 5; i++){
        cout << i << endl;
    }

    int n;
    cout << "How many numbers do you want to print?" <<endl;
    cin>>n;
    for(int i = 0; i <= n; i++){
        cout << i << " ";
    }
    //while loop

    return 0;
}