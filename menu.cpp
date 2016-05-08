/*Chris Carlan
  CSCI 12700
  CN1[11819]
  Hunter College
*/

#include <iostream>
using namespace std;

int main()
{
    double months,total,KIDS_PRICE,ADULTS_PRICE,SENIOR_PRICE;
    int input; //used as case for switch statement
    KIDS_PRICE = 30.00; //assigns the constant kids price a value of 30 dollars
    ADULTS_PRICE = 50.00;// assigns the constant adult price a value of 40 dollars
    SENIOR_PRICE = 40.00; // assigns the constant adult price a value of 40 dollars
    total = 00.00; //he total is initially 0 dollars

    do //this will run once
    {
    cout<<"\n     Health Membership Menu"<<endl; //title for gym membership
    cout<<"1. Children's Membership"<<endl; //childrens option with option selection 1
    cout<<"2. Adult's Membership"<<endl; // addults selection with option selection 2
    cout<<"3. Senior Citizen's Membership"<<endl; //senior citizenship selection with option selection 3
    cout<<"4. Exit\n"<<endl; //option 4 is the exit menu
    cout<<"Enter your choice "; // asks user to input value
    cin>>input; //user inputs a number that is set to input

        switch (input) // switch statement with input as a parameter
        {
            case 1: cout<<"For how many months? "; //if input is equal to 1
                    cin>>months; //asks how many months
                    total += months * KIDS_PRICE; //multiplies months by the constant for kids price and adds it to the current total
                    cout<<"Your Total is : $"<<total<<endl; //reports total
            break;

            case 2: cout<<"For how many months? "; //if input is equal to 2
                    cin>>months;
                    total += months * ADULTS_PRICE; //multiplies adult price constant by months and adds it total
                    cout<<"Your Total is : $"<<total<<endl;
            break;

            case 3: cout<<"For how many months? ";// if input is equal to 3
                    cin>>months;
                    total += months * SENIOR_PRICE; //multiplies senior citizen constant by months and adds it to total
                    cout<<"Your Total is : $"<<total<<endl;
            break;

            case 4: //if input is 4
                    cout<<"Your Total is : $"<<total<<endl; //this reports the total and in this case is the end of the while loop; exits the menu.

            break;

            default: //the default if any of the cases arent met above in this case if the user doesnt not eneter option 1,2,3 or 4.
                     cout<<"Enter a valid input from the menu "; //user is asked to enter another option
                     cin>>input; // user input option
            break;
        }

    }
    while(input != 4); // loop will only work if the input is not 4. in this case if it is 4 it will say the total and exit the program

    }
