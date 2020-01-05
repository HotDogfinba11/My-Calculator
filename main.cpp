#include <iostream>
#include <cstdlib>



using namespace std;

int choice;
double value1, value2, result;


int main(){

    string pass = "oliver2003";
    string input;
    cout << "What is your password: \n";
    cin >> input;
    if (input == pass){
        cout << "Correct\n" << endl;
    }else{
        cout << "Wrong\n" << endl;
        return(0);

    }

    cout << "Calculator\nBy Oliver\n\n";

    while(true)
    {
        cout << "1. Add\n"
                "2. Subtract\n"
                "3. Divide\n"
                "4. Multiply\n"
                "5. Exit\n\n"
                "What would you like to do?\n"
                "1/2/3/4/5\n";



        cin >> choice;

        if(choice == 5)
            break;
{


        cout << "\nEnter first value: ";
        cin >> value1;
        cout << "\nEnter second value: ";
        cin >> value2;
        if(choice == 1)
            result = value1 + value2;
        else if(choice == 2)
            result = value1 - value2;
        else if(choice == 3)
            result = value1 / value2;
        else if(choice == 4)
            result = value1 * value2;



     cout << "\nThe result is: " << result << "\n\n";
}
    }

    return 0;
}
