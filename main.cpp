#include <iostream>

using namespace std;

int main()
{

int digit();
    int number, firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, remainder_1, remainder_2, remainder_3;
    cout << "Input your 5 digit number you wish to separate: ";
    cin >> number;

    int i = number;//12345
    //the length of zero is 1
    int len = 1;

    if(i > 0){
        for(len = 0; i > 0; len++){
            i = i / 10;
            }
    }
    if(len < 5 || len > 5){
        cout << "Invalid input" <<endl;
    }else{
    firstNumber = number / 10000;
    remainder_1 = number / 1000;
    secondNumber = remainder_1 % 10;
    remainder_2 = number / 100;
    thirdNumber = remainder_2 % 10;
    remainder_3 = number / 10;
    fourthNumber = remainder_3 % 10;
    fifthNumber = number % 10;
    cout << firstNumber <<"  " << secondNumber <<"  "<< thirdNumber <<"  "<< fourthNumber <<"  "<< fifthNumber <<endl;
    }
    char choice;
    while(true){
        cout<<"Do you wish to continue?(Y/N) ";
        cin >> choice;
        if(choice == 'Y'|| choice =='y'){
        return true;
        }else if(choice =='N'||choice =='n'){
        return false;

        }
    }


    return 0;

}
