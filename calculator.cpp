#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the first input value:";
    cin>>x;
    float y;
    cout<<"Enter the sec input value:";
    cin>>y;
    char ch;
    cout<<"Enter the operator to perform:";
    cin>>ch;
    switch(ch){
        case '+':
        {
            cout<<"The sum of two input is:"<<x+y<<endl;
            break;
        }
        case '-':
        {
            cout<<"The subtraction of two number:"<<x-y<<endl;
            break;
        }
        case '*':
        {
          cout<<"The multiplication of two number is:"<<x*y<<endl;
          break;
        }
        case '/':
        {
            cout<<"The division of two number is:"<<x/y<<endl;
            break;
        }
        default:
        {
            cout<<"You enter the wrong operator:Enter again";
            break;
        }
    }
    
    return 0;
}