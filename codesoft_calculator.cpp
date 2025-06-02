#include<iostream>
using namespace std;

class Calculator{

    double input_number1;
    double input_number2;
    char operation;
    
    public:

    int inputOperations(){
        cout<<"Enter First Number : ";
        cin>>input_number1;
        cout<<"Enter the Operator : ";
        cin>>operation;
        cout<<"Enter Second Number : ";
        cin>>input_number2;
        return 0;
    }

    int calculate(){

        switch(operation){
            case '+' : cout<<"Addition of "<<input_number1<<" and "<<input_number2<< " is "<<input_number1 + input_number2;
                            break;
            case '-' : cout<<"Subtraction of "<<input_number1<<" and "<<input_number2<< " is "<<input_number1 - input_number2;
                            break;
            case '*' : cout<<"Multiplication of "<<input_number1<<" and "<<input_number2<< " is "<<input_number1 * input_number2;
                            break;
            case '/' : cout<<"Division of "<<input_number1<<" and "<<input_number2<< " is "<<input_number1 / input_number2;
                            break;
            case '%' : cout<<"Modulus of "<<int(input_number1)<<" and "<<int(input_number2)<< " is "<<int(input_number1) % int(input_number2);
                            break;
            default : cout<<"Error Occured, Please Try Again !";
                            break;
        }
        return 0;
    }

};

int main(){
    Calculator obj;
    obj.inputOperations();
    obj.calculate();
    return 0;
}