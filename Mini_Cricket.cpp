#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;


void balling();
void batting();

int player=0;
int computer=0;
char Bob;
int input;
int num=0;

int main(){
     cout << "*****************************************************************************" << endl;
     cout << "                 Welcome to this game of Odd and Eve!!\n" 
      << "I assume that you are already aware of the rules of this amazingly exciting game...\n"
      << "and if not, then plainly, you choose a number, computer choses a number, if they are same, the one with batting is out!!\n\n"
      << "                     So...Let's BEGIN!!!!\n\n" << endl;
     
       cout << "Choose Batting or Balling?!\n" << endl;
       cout << "Type 'B' for Batting and 'b' for balling" << endl;
       cin  >> Bob;

       if(Bob == 'B'){
          batting();
       }
       else if(Bob== 'b'){
          balling();
        }
       else{
          cout << "Please enter a valid response" << endl;
       }
       return 0;

}
void balling(){
    cout << "Woohoo!! It's your balling!" << endl;
          
      static int random; //static
      
      
      int Cscore=0;

      do{
         srand(time(NULL));
         random = rand();
         random = random % 10 + 1;
           cout << "Choose your number: " << endl;
           cin >> input ;
           if (input > 9 || input < 0){
            cout << "Please enter a number from 0-9!!" << endl;
           }
           else {
             computer = computer + random;
             cout << "Computer's Score is: " << computer << endl;
             if(random == input){
               int Cfscore = computer - random;
             cout << "Computer's Out!!" << endl;
             cout << "Computer's Final Score is: " << Cfscore << "\n" << endl;
             num = num+2;
           }
           if(num == 2){
              batting();
              }
           
           }
           
        }while(random != input);
}

void batting(){
    cout << "Woohoo!! It's your batting!" << endl;
      static int random; //static
      
       do{
         srand(time(NULL));
         random = rand();
         random = random % 10 + 1;
           cout << "Choose your number: " << endl;
           cin >> input ;
          
          
           if(input > 9){
            cout << "Please enter a number from 0-9!!" << endl;
           }
           else {
           player = player + input;
           cout << "Computer's Number: " << random << endl;
           cout << "Your Score is: " << player << endl;
           
           
           if(random == input){
            int finalscore = player - input;
            cout << "You're Out!!" << endl;
            cout << "Your Final Score is: " << finalscore << "\n" << endl;
            num++;
            
            
            if(num == 1){
            balling();
               }
             }
           }
        }while(random != input);
}





