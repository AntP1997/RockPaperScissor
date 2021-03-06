/*
  Arthur:Antoine Demount Price jr.
  Date:  11/19/2021
  gmail: pricejr7777@gmail.com
  Note: I hope you like this game
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <unistd.h>
#define OSWindows "cls"
#define OSlinux "clear"
using namespace std;

void Menu()
{

  string menu[13]={   {"|_____________________menu_______________________|"},
                     {"|                                                 |"},
                      {"|  Hello this is a rock, paper,and scissors game,|"},
                      {"|   the rules are simple rock bets scissors      |"},
                      {"|   paper bets rock and, scissors bets paper.    |"},
                      {"|   Also you have three spelling mistakes to make|"},
                      {"|   after three spelling mistakes game Over.     |"},
                      {"|    It is you the Player vs the computer.       |"},
                      {"|________________________________________________|"}};

           for (int display = 0;display <=8;display++)
           {
             cout<<setfill(' '); //this will cover the space 
             cout<<setw(85); // this will put the menu in the center of the screen
              sleep(1);// this means wait one second
             cout<<menu[display]<<endl; // this statment display menu

           }

}
void game(bool GameSwitch){

 while(GameSwitch){
    static int turns = 0;
    srand(time(NULL)); // starting rand time to zero
    string UserChoice;
    int Choice;
    int ComputerChoice=rand()%3; // starting random genorator
    static int ComputerPoints;// Computer points
    static int PlayerPoints; // Player points
    static int round =0;
    cout<<"                            Player points: |"<<PlayerPoints <<"| Computer points : |"<< ComputerPoints<<"| Spelling Mistakes: |"<<turns<<"|"<<" Round: |"<<round<<"| \n \n";
    sleep(1);
    if (turns < 3) // thus code keeps you from excieding the max limit more than three mistakes
    {
      cout<<"Please enter a choice rock, paper, or scissor  "<<endl;
      cin >>UserChoice;
    }
    else
    {
     cout<< "Sorry you made three spelling mistakes"<<endl;
     cout<<"\"Game Over\"";
     sleep(10);
     GameSwitch=false; //this stops the while loop 
     break; // this break out the function
   }
   if ( UserChoice == "rock"|| UserChoice == "ROCK"  )// this symbol || means or 
    {
      Choice =0;
   }

   else if ( UserChoice == "paper"|| UserChoice == "PAPER")
   {
      Choice =1;
   }
   else if( UserChoice == "scissor"|| UserChoice == "SCISSOR")
   {
      Choice=2;
   }
   else
   {
    if (turns <3) //this means if your turns again this is just keeping up with your mistakes if you mistake is under three execute the if statment 
      {
        cout<<"\"Spelling mistake you did not entered the right command\""<<endl;
        cout<< "\"\a you have to enter rock, paper,or scissor \""<<endl;
        sleep(10);
        system(OSWindows);
        system(OSlinux);
        cout<<endl<<endl;
        turns++;
        game(GameSwitch); // this is a recursion 
      }
     /*
     these two statments will execute at the bottom if your mistake is equal to 3
     */
    GameSwitch=false;
    break;
   }

  string ChoiceArray[3]={"rock","paper","scissor"};
  if(Choice == ComputerChoice)
  {
     ComputerPoints++;// add points 
     PlayerPoints++;;
     cout<<"\"Its a tie\" "<<endl;
     cout<<" Your choice was "<<UserChoice;
     cout<<" The computer choice was "<<ChoiceArray[ComputerChoice]<<endl;
     sleep(8);
     system(OSWindows);
     system(OSlinux);
     cout<<endl<<endl;
  }
   else if(Choice != ComputerChoice  )
       {
            if (Choice == 0 && ComputerChoice == 2) // if enter rock and the computer enter scissors so you win
             {  //this symbol && means and
                PlayerPoints++;
                cout<<" You win this round "<<endl;
                cout<<" Your choice was "<<UserChoice;
                cout<<" The computer choice was "<< ChoiceArray[ComputerChoice]<<endl;
                sleep(8);
                system(OSWindows);
                system(OSlinux);
                cout<<endl<<endl;
             }
            else if(Choice == 1 && ComputerChoice ==0) // if enter paper and the computer enter paper so you win
             {
                PlayerPoints++;
                cout<<" You win this round "<<endl;
                cout<<" Your choice was "<<UserChoice;
                cout<<" The computer choice was "<< ChoiceArray[ComputerChoice]<<endl;
                sleep(8);
                system(OSWindows);
                system(OSlinux);
                cout<<endl<<endl;
             }
            else if(Choice == 2 && ComputerChoice == 1 ) // if you enter paper and the computer enter paper you win
             {
                PlayerPoints++;
                cout<<" You win this round "<<endl<<endl;
                cout<<" Your choice was "<<UserChoice;
                cout<<" The computer choice was "<< ChoiceArray[ComputerChoice]<<endl;
                sleep(8);
                system(OSWindows);
                system(OSlinux);
                cout<<endl<<endl;
             }
             else if(Choice == 0 && ComputerChoice == 1)
             {
               ComputerPoints++;
               cout<<" You lose this round "<<endl;
               cout<<" Your choice was "<<UserChoice;
               cout<<" The computer choice was "<< ChoiceArray[ComputerChoice]<<endl;
               sleep(8);
               system(OSWindows);
               system(OSlinux);
               cout<<endl<<endl;
             }
             else if(Choice == 1 && ComputerChoice ==2 ){
               ComputerPoints++;
               cout<<" You lose this round "<<endl;
               cout<<" Your choice was "<<UserChoice;
               cout<<" The computer choice was "<< ChoiceArray[ComputerChoice]<<endl;
               sleep(8);
               system(OSWindows);
               system(OSlinux);
               cout<<endl<<endl;
             }
             else if (Choice == 2 && ComputerChoice == 0)
             {
               ComputerPoints++;
               cout<< " You lose this round "<<endl;
               cout<<" Your choice was "<<UserChoice;
               cout<<" The computer choice was "<< ChoiceArray[ComputerChoice]<<endl;
               sleep(8);
               system(OSWindows);
               system(OSlinux);
               cout<<endl<<endl;
             }
           }



             round++;

             if (ComputerPoints >= 3 && PlayerPoints < 3)// this statment means if computer points is greater than 3 or equal to it and Player points is less than 3
            {
               system(OSWindows);
               system(OSlinux);
               cout<<endl<<endl;
               cout<<"\" The computer wins \""<<endl;
               cout<<"                            Player points: |"<<PlayerPoints <<"| Computer points : |"<< ComputerPoints<<"| Spelling Mistakes: |"<<turns<<"|"<<" Round: |"<<round<<"| \n \n";
               sleep(1);
               cout<<"\"GameOver\""<<endl;
               sleep(10);
               GameSwitch = false;
               break;

             }
             else if(PlayerPoints >= 3 && ComputerPoints < 3)
             {
               system(OSWindows);
               system(OSlinux);
               cout<<endl<<endl;
               cout<< "\" You the player wins \" "<<endl;
               cout<<"                            Player points: |"<<PlayerPoints <<"| Computer points : |"<< ComputerPoints<<"| Spelling Mistakes: |"<<turns<<"|"<<" Round: |"<<round<<"| \n \n";
               sleep(1);
               cout<<"\"GameOver\""<<endl;
               sleep(10);
               GameSwitch = false;
               break;

             }
             else if(PlayerPoints >= 3 && ComputerPoints >=3)
             {
               system(OSWindows);
               system(OSlinux);
               cout<<endl<<endl;
               cout<<"\" Its a draw \""<<endl;
               cout<< " You the player and the Computer are at a draw"<<endl;
               cout<<"                            Player points: |"<<PlayerPoints <<"| Computer points : |"<< ComputerPoints<<"| Spelling Mistakes: |"<<turns<<"|"<<" Round: |"<<round<<"| \n \n";
               sleep(1);
               cout<<"\"GameOver\""<<endl;
               sleep(10);
               GameSwitch = false;
               break;
             }
       }
   }


int main()
{
    bool GameSwitch =true;// this code keeps the loop runing 
    system(OSWindows);
    system(OSlinux);
    Menu();//this the menu
    game(GameSwitch);// this is the function game
    return 0;
}
