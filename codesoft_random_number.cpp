#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

class numberGame{
        int input_number;
    
    public:

        int input_values(){
            cout<<"Enter Your Number : ";
            cin>>input_number;
            return 0;
        }
    
        int gameOperations(int &random_number){
        
            while(random_number!=input_number){
                if(input_number*5 < random_number){
                    cout<<"GUESS A MUCH BIGGER NUMBER"<<endl;
                    input_values();
                }

                else if(input_number < random_number){
                    cout<<"GUESS A BIGGER NUMBER"<<endl;
                    input_values();
                }

                else if(input_number > random_number*5){
                    cout<<"GUESS A MUCH SMALLER NUMBER"<<endl;
                    input_values();
                }

                else if(input_number > random_number){
                    cout<<"GUESS A SMALLER NUMBER"<<endl;
                    input_values();
                }
            }   
                cout<<"YOU GUESSED THE CORRECT NUMBER !"<<endl;
                return 0;
        }
 
    };

int main(){
    numberGame game;
    srand(time(0));
    int random_number = rand() % 1000 + 1;
    game.input_values();
    game.gameOperations(random_number);
    return 0;

}
