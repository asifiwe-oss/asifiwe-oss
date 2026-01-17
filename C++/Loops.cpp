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
        cout << i << " " <<endl;
    }
    //while loop

    int o;
    int a = 1;
    cout << "Enter o" <<endl;
    cin >> o;
    while (a <= o){
    cout << a <<endl;
    a += 1;
    }
   

    int x;
        cout << "Enter a number: " <<endl;
    cin>> x;
    while( x != 0){
        cout << "Enter a number: " <<endl;
        cin >> x;
    } 
   cout <<"Finished!" <<endl; 

   int m;
   int sum = 0;
      cout << "Enter a numbers: "<<endl;
      cin >> m;
      while( m != 0){
      cout << "Enter a number: " <<endl;
      sum += m;
      cin >> m;               } 
      cout <<"Sum = " <<sum;

    return 0;
}