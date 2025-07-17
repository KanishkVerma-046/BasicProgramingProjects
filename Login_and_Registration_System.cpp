#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<cmath>

using namespace std;

int LoR;
string Username;
string Password;
char input;
string UsernameR;
string PasswordR;

void login();
void signup();


int main(){
    
    cout << "Welcome to this portal of Login and Registration\n" 
         << "You can choose whether you want to login or register\n"
         << "1. Login or Sign in\n2. Register or Sign up" << endl;
         cin >> LoR; 

    switch(LoR){
        case 1: 
            login();
        case 2:
            signup();
        default: 
            cout << "Please select either 1 or 2!" << endl;
    }
    return 0;   
}      

void login(){
            cout << "Enter your Username:" <<endl;
            cin >> Username;
            cout << "Enter your password:" <<endl;
            cin >> Password;
            cout << "Welcome to the portal!!\n\n"<< endl;

            cout << "Do you wish to create another account? (Y or N)" << endl;
            cin >> input;
            if(input == 'Y' || input == 'y'){
               signup();
            }
            else if(input == 'N' || input == 'n'){
               cout << "Ok, no worries!" << endl;
            }
            else{
               cout << "Please enter a valid response!" << endl;
            }
}

void signup(){
        cout << "Welcome to the SignUp page!"<< endl;
        cout << "Please enter you preferred username: " << endl;
        cin >> UsernameR;
        cout << "Create a password: " << endl;
        cin >> PasswordR;
        if(PasswordR == 'ABCS'){ 
            cout << "Please enter a strong Password!" << endl;
         } else {
            cout << "Congratulations, your account has been created!\n" << endl;
         }
        cout << "Do you wish to sign in? (Y or N)" << endl;
        cin >> input;

         if(input == 'Y' || input == 'y'){
            cout << "Enter your Username:" <<endl;
            cin >> Username;

          while(Username != UsernameR){
                cout << "Username does not exist, Please try again!\n" << endl;
                cout << "Enter your Username:" <<endl;
                cin >> Username;
                }

            if(Username == UsernameR){
              cout << "Enter your password:" <<endl;
              cin >> Password;

               while(Password != PasswordR){
               cout << "Incorrect Password, Please try again!\n" << endl;
               cout << "Enter your password:" <<endl;
               cin >> Password;
               }
             if(Password == PasswordR){
                cout << "Welcome to the portal!!\n\n" << endl;
            }
              }
        }
            else if(input == 'N' || input == 'n'){
              cout << "Ok, no worries!" << endl;
        }
            else{
                cout << "Please enter a valid response!" << endl;
        }

}