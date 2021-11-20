/*
  Arthur:Antoine Demount Price jr.
  11/19/2021
  I hope you like this game
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <unistd.h>
#define OSWindows "cls"
#define OSlinux "clear"
using namespace std;

void Menu(){

  string menu[13]={   {"|_____________________menu_______________________|"},
                     {"|  \"This program can run on linux and Windows\"   |"},
                      {"|  Hello this is a rock, paper,and scissors game,|"},
                      {"|   the rules are simple rock bets scissors      |"},
                      {"|   paper bets rock and scissors bets paper.     |"},
                      {"|    Also you have three spelling mistake to make|"},
                      {"|   after three spelling mistakes game Over.     |"},
                      {"|    It is you the Player vs the computer.       |"},
                      {"|________________________________________________|"}};

           for (int display = 0;display <=8;display++)
           {
             cout<<setfill(' ');
             cout<<setw(85);
              sleep(1);
             cout<<menu[display]<<endl;

           }

}
void game(bool GameSwitch){

 while(GameSwitch){
    static int turns = 0;
    srand(time(NULL));
    string UserChoice;
    int Choice;
    int ComputerChoice=rand()%3;
    static int ComputerPoints;
    static int PlayerPoints;
    static int round =0;
    cout<<"                            Player points: |"<<PlayerPoints <<"| Computer points : |"<< ComputerPoints<<"| Spelling Mistakes: |"<<turns<<"|"<<" Round: |"<<round<<"| \n \n";
    sleep(1);
    if (turns < 3)
    {
      cout<<"Please enter a choice rock, paper, or scissor  "<<endl;
      cin >>UserChoice;
    }
    else
    {
     cout<< "Sorry you made three spelling mistakes"<<endl;
     cout<<"\"Game Over\"";
     sleep(10);
     GameSwitch=false;
     break;
   }
   if ( UserChoice == "rock"|| UserChoice == "ROCK"  )
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
    if (turns <3)
      {
        cout<<"\"Spelling mistake you did not entered the right command\""<<endl;
        cout<< "\"\a you have to enter rock, paper,or scissor \""<<endl;
        sleep(10);
        system(OSWindows);
        system(OSlinux);
        cout<<endl<<endl;
        turns++;
        game(GameSwitch);
      }
    GameSwitch=false;
    break;
   }

  string ChoiceArray[3]={"rock","paper","scissor"};
  if(Choice == ComputerChoice)
  {
     ComputerPoints++;
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

             if (ComputerPoints >= 3 && PlayerPoints < 3)
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
    bool GameSwitch =true;
    Menu();//this the menu
    game(GameSwitch);// this is the function game
    return 0;
}
