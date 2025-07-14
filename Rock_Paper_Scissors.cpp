#include <iostream>
#include <string> 
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

void input();
void output_check();
char playerInput;
int main (){
    input();
   output_check();
}

void input (){
    cout << "Welcome to this game of Rock Paper and Scissors!!" << endl;
    
    cout << "Choose Rock(R) or Paper(P) or Scissors(S)" << endl;
    cin >> playerInput; 

    if(playerInput == 'R' || playerInput == 'r'){
    cout << "You Chose Rock" << endl;
    }
    else if(playerInput == 'P' || playerInput == 'p'){
    cout << "You Chose Paper" << endl;
    }
    else if(playerInput == 'S' || playerInput == 's'){
    cout << "You Chose Scissors" << endl;
    }
    else{
        cout << "Please enter a valid RPS value!!" << endl;
        }
    }

 void output_check(){
    srand(time(NULL));
    int random = rand();
    random = random % 3 + 1;
    
    if(random == 1 && (playerInput == 'S' || playerInput == 's')){
        cout << "Computer's Choice: Rock" << endl;
        cout << "Computer won :( " << endl;
    }
    else if(random == 1 && (playerInput == 'P'|| playerInput == 'p')){
        cout << "Computer's Choice: Rock" << endl;
        cout << "You won!!" << endl;
    }
    else if(random == 1 && (playerInput == 'R'|| playerInput == 'r')){
        cout << "Computer's Choice: Rock" << endl;
        cout << "It's a tie '_' " << endl;
    }
    else if(random == 2 && (playerInput == 'S'|| playerInput == 's')){
        cout << "Computer's Choice: Paper" << endl;
        cout << "You won!!" << endl;
    }
    else if(random == 2 && (playerInput == 'P'|| playerInput == 'p')){
        cout << "Computer's Choice: Paper" << endl;
        cout << "It's a tie '_' " << endl;
    }
     else if(random == 2 && (playerInput == 'R'|| playerInput == 'r')){
        cout << "Computer's Choice: Paper" << endl;
        cout << "Computer won!!" << endl;
    }
     else if(random == 3 && (playerInput == 'S'|| playerInput == 's')){
        cout << "Computer's Choice: Scissors" << endl;
        cout << "It's a tie '_' " << endl;
    }
     else if(random == 3 && (playerInput == 'P'|| playerInput == 'p')){
        cout << "Computer's Choice: Scissors" << endl;
        cout << "Computer Won " << endl;
    }
     else{
        cout << "Computer's Choice: Scissors" << endl;
        cout << "You won!! " << endl;
    }
} 
 



