#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int guessNum;
    cout<<"Enter Your input value:";
    cin>>guessNum;
    int random_number = rand()%101; 
   while(guessNum!=random_number){
    if(guessNum>random_number){
        cout<<"Your input value is higher than the randomly generated number:"<<endl;
    }
    else{
        cout<<"Your input value is lower than the randomly generated number:"<<endl;
    }
    cout<<"Enter the value again:";
    cin>>guessNum;
   }
   cout<<"Congratulation Your Enter the correct value:"<<guessNum<<endl;
    return 0;
}