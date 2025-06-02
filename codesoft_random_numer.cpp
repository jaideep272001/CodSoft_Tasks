#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int random_number = rand() % 1000 + 1;
    int input_number;
    jump:
    cout<<"Enter Your Number : ";
    cin>>input_number;

        if(random_number == input_number){
            cout<<"YOU GUESSED THE CORRECT NUMBER !"<<endl;
            return 0;
        }

    // Greater Digit Code
        else if(input_number*10 < random_number){
            cout<<"GUESS A MUCH BIGGER NUMBER"<<endl;
            goto jump;
        }
        else if(input_number < random_number){
            cout<<"GUESS A BIGGER NUMBER"<<endl;
            goto jump;
        }
        
    // Smaller Digits Code
        else if(input_number*10 > random_number){
            cout<<"GUESS A MUCH SMALLER NUMBER"<<endl;
            goto jump;
        }
        else if(input_number < random_number){
            cout<<"GUESS A BIGGER NUMBER"<<endl;
            goto jump;
        }
    return 0;

}
