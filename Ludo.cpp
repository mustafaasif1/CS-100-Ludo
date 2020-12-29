#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>x
#include <cstdlib>
#include <windows.h>
#include <mmsystem.h>


using namespace std;


void token_is_beaten(string blue_array[35], string red_array[35], string green_array[35], string yellow_array[35], int &pos_B1, int &pos_B2 ,int &pos_B3, int &pos_B4, int &pos_R1, int &pos_R2, int &pos_R3, int &pos_R4, int &pos_G1, int &pos_G2, int &pos_G3, int &pos_G4, int &pos_Y1, int &pos_Y2, int &pos_Y3, int &pos_Y4)
{

  for (int x = 0; x < 7; x++){
  if (pos_B1 == x || pos_B2 == x || pos_B3 == x || pos_B4 == x)
  {
      if (pos_R1 == 21 + x && pos_R1 != 27)
      {
          red_array[21 + x] = "..";
          red_array[33] = red_array[34];
          pos_R1 = 33;
      }

      else if (pos_R2 == 21 + x && pos_R2 != 27)
      {
          red_array[21 + x] = "..";
          red_array[30] = red_array[34];
          pos_R1 = 30;
      }

      else if (pos_R3 == 21 + x && pos_R3 != 27)
      {
          red_array[21 + x] = "..";
          red_array[31] = red_array[34];
          pos_R3 = 31;
      }

      else if (pos_R4 == 21 + x && pos_R4 != 27)
      {
          red_array[21 + x] = "..";
          red_array[32] = red_array[34];
          pos_R4 = 32;
      }

      else if (pos_Y1 == 7 + x)
      {
          yellow_array[7 + x] = "..";
          yellow_array[33] = yellow_array[34];
          pos_Y1 = 33;
      }

      else if (pos_Y2 == 7 + x)
      {
          yellow_array[7 + x] = "..";
          yellow_array[30] = yellow_array[34];
          pos_Y2 = 30;
      }

      else if (pos_Y3 == 7 + x)
      {
          yellow_array[7 + x] = "..";
          yellow_array[31] = yellow_array[34];
          pos_Y3 = 31;
      }

      else if (pos_Y4 == 7 + x)
      {
          yellow_array[7 + x] = "..";
          yellow_array[32] = yellow_array[34];
          pos_Y4 = 32;
      }

      else if (pos_G1 == 14 + x)
      {
          green_array[14 + x] = "..";
          green_array[33] = green_array[34];
          pos_G1 = 33;
      }

      else if (pos_G2 == 14 + x)
      {
          green_array[14 + x] = "..";
          green_array[30] = green_array[34];
          pos_G2 = 30;
      }

      else if (pos_G3 == 14 + x)
      {
          green_array[14 + x] = "..";
          green_array[31] = green_array[34];
          pos_G3 = 31;
      }

      else if (pos_G4 == 14 + x)
      {
          green_array[14 + x] = "..";
          green_array[32] = green_array[34];
          pos_G4 = 32;
      }
   }
   }

   //////////// FIRST ROUND OF 7 ENDS HERE //////////////////////////////////

   for (int x = 0; x < 7; x++){
  if (pos_B1 == 7 + x || pos_B2 == 7 + x || pos_B3 == 7 + x || pos_B4 == 7 + x)
  {
      if (pos_R1 == 0 + x)
      {
          red_array[0 + x] = "..";
          red_array[33] = red_array[34];
          pos_R1 = 33;
      }

      else if (pos_R2 == 0 + x)
      {
          red_array[0 + x] = "..";
          red_array[30] = red_array[34];
          pos_R1 = 30;
      }

      else if (pos_R3 == 0 + x)
      {
          red_array[0 + x] = "..";
          red_array[31] = red_array[34];
          pos_R3 = 31;
      }

      else if (pos_R4 == 0 + x)
      {
          red_array[0 + x] = "..";
          red_array[32] = red_array[34];
          pos_R4 = 32;
      }

      else if (pos_Y1 == 14 + x)
      {
          yellow_array[14 + x] = "..";
          yellow_array[33] = yellow_array[34];
          pos_Y1 = 33;
      }

      else if (pos_Y2 == 14 + x)
      {
          yellow_array[14 + x] = "..";
          yellow_array[30] = yellow_array[34];
          pos_Y2 = 30;
      }

      else if (pos_Y3 == 14 + x)
      {
          yellow_array[14 + x] = "..";
          yellow_array[31] = yellow_array[34];
          pos_Y3 = 31;
      }

      else if (pos_Y4 == 14 + x)
      {
          yellow_array[14 + x] = "..";
          yellow_array[32] = yellow_array[34];
          pos_Y4 = 32;
      }

      else if (pos_G1 == 21 + x && pos_G1 != 27)
      {
          green_array[21 + x] = "..";
          green_array[33] = green_array[34];
          pos_G1 = 33;
      }

      else if (pos_G2 == 21 + x && pos_G2 != 27)
      {
          green_array[21 + x] = "..";
          green_array[30] = green_array[34];
          pos_G2 = 30;
      }

      else if (pos_G3 == 21 + x && pos_G3 != 27)
      {
          green_array[21 + x] = "..";
          green_array[31] = green_array[34];
          pos_G3 = 31;
      }

      else if (pos_G4 == 21 + x && pos_G4 != 27)
      {
          green_array[21 + x] = "..";
          green_array[32] = green_array[34];
          pos_G4 = 32;
      }
   }
   }

  ///////////////////// SECOND ROUND OF 7 ENDS HERE///////////////////

  for (int x = 0; x < 7; x++){
  if (pos_B1 == 14 + x || pos_B2 == 14 + x || pos_B3 == 14 + x || pos_B4 == 14 + x)
  {
      if (pos_R1 == 7 + x)
      {
          red_array[7 + x] = "..";
          red_array[33] = red_array[34];
          pos_R1 = 33;
      }

      else if (pos_R2 == 7 + x)
      {
          red_array[7 + x] = "..";
          red_array[30] = red_array[34];
          pos_R2 = 30;
      }

      else if (pos_R3 == 7 + x)
      {
          red_array[7 + x] = "..";
          red_array[31] = red_array[34];
          pos_R3 = 31;
      }

      else if (pos_R4 == 7 + x)
      {
          red_array[7 + x] = "..";
          red_array[32] = red_array[34];
          pos_R4 = 32;
      }

      else if (pos_Y1 == 21 + x && pos_Y1 != 27)
      {
          yellow_array[21 + x] = "..";
          yellow_array[33] = yellow_array[34];
          pos_Y1 = 33;
      }

      else if (pos_Y2 == 21 + x && pos_Y2 != 27)
      {
          yellow_array[21 + x] = "..";
          yellow_array[30] = yellow_array[34];
          pos_Y2 = 30;
      }

      else if (pos_Y3 == 21 + x && pos_Y3 != 27)
      {
          yellow_array[21 + x] = "..";
          yellow_array[31] = yellow_array[34];
          pos_Y3 = 31;
      }

      else if (pos_Y4 == 21 + x && pos_Y4 != 27)
      {
          yellow_array[21 + x] = "..";
          yellow_array[32] = yellow_array[34];
          pos_Y4 = 32;
      }

      else if (pos_G1 == 0 + x)
      {
          green_array[0 + x] = "..";
          green_array[33] = green_array[34];
          pos_G1 = 33;
      }

      else if (pos_G2 == 0 + x )
      {
          green_array[0 + x] = "..";
          green_array[30] = green_array[34];
          pos_G2 = 30;
      }

      else if (pos_G3 == 0 + x)
      {
          green_array[0 + x] = "..";
          green_array[31] = green_array[34];
          pos_G3 = 31;
      }

      else if (pos_G4 == 0 + x )
      {
          green_array[0 + x] = "..";
          green_array[32] = green_array[34];
          pos_G4 = 32;
      }
   }
   }

   //////////////////////////// THIRD ROUND OF 7 ENDS HERE ////////////////////////////////////////////

   for (int x = 0; x < 6; x++){
  if (pos_B1 == 21 + x || pos_B2 == 21 + x || pos_B3 == 21 + x || pos_B4 == 21 + x)
  {
      if (pos_R1 == 14 + x)
      {
          red_array[14 + x] = "..";
          red_array[33] = red_array[34];
          pos_R1 = 33;
      }

      else if (pos_R2 == 14 + x)
      {
          red_array[14 + x] = "..";
          red_array[30] = red_array[34];
          pos_R2 = 30;
      }

      else if (pos_R3 == 14 + x)
      {
          red_array[14 + x] = "..";
          red_array[31] = red_array[34];
          pos_R3 = 31;
      }

      else if (pos_R4 == 14 + x)
      {
          red_array[14 + x] = "..";
          red_array[32] = red_array[34];
          pos_R4 = 32;
      }

      else if (pos_Y1 == 0 + x)
      {
          yellow_array[0 + x] = "..";
          yellow_array[33] = yellow_array[34];
          pos_Y1 = 33;
      }

      else if (pos_Y2 == 0 + x)
      {
          yellow_array[0 + x] = "..";
          yellow_array[30] = yellow_array[34];
          pos_Y2 = 30;
      }

      else if (pos_Y3 == 0 + x)
      {
          yellow_array[0 + x] = "..";
          yellow_array[31] = yellow_array[34];
          pos_Y3 = 31;
      }

      else if (pos_Y4 == 0 + x)
      {
          yellow_array[0 + x] = "..";
          yellow_array[32] = red_array[34];
          pos_Y4 = 32;
      }

      else if (pos_G1 == 7 + x)
      {
          green_array[7 + x] = "..";
          green_array[33] = green_array[34];
          pos_G1 = 33;
      }

      else if (pos_G2 == 7 + x )
      {
          green_array[7 + x] = "..";
          green_array[30] = green_array[34];
          pos_G2 = 30;
      }

      else if (pos_G3 == 7 + x)
      {
          green_array[7 + x] = "..";
          green_array[31] = green_array[34];
          pos_G3 = 31;
      }

      else if (pos_G4 == 7 + x )
      {
          green_array[7 + x] = "..";
          green_array[32] = green_array[34];
          pos_G4 = 32;
      }
   }
   }
}

//Player 1 function B1

void move_values_1(string blue_array[35], int dice_number, int &pos_B1)
{
     if (pos_B1 != 29){
     if (pos_B1 == 33)
     {
         if (dice_number == 6)
         {
             blue_array[0] = blue_array[34];
             blue_array[33] = "..";
             pos_B1 = 0;
         }
     }

     else
     {
         if (pos_B1 + dice_number <= 29){
         blue_array[pos_B1] = "..";
         blue_array[pos_B1 + dice_number] = blue_array[34];
         pos_B1 = pos_B1 + dice_number;
         }
     }
     }

     blue_array[pos_B1] = blue_array[34];

}


void move_values_2(string blue_array[35], int dice_number, int& pos_B2)
{
     if (pos_B2 != 29){
     if (pos_B2 == 30)
     {
         if (dice_number == 6)
         {
             blue_array[0] = blue_array[34];
             blue_array[30] = "..";
             pos_B2 = 0;
         }
     }

     else
     {
         if (pos_B2 + dice_number <= 29){
         blue_array[pos_B2] = "..";
         blue_array[pos_B2 + dice_number] = blue_array[34];
         pos_B2 = pos_B2 + dice_number;
         }
     }
     }

     blue_array[pos_B2] = blue_array[34];
}

void move_values_3(string blue_array[35], int dice_number, int &pos_B3)
{
     if (pos_B3 != 29){
     if (pos_B3 == 31)
     {
         if (dice_number == 6)
         {
             blue_array[0] = blue_array[34];
             blue_array[31] = "..";
             pos_B3 = 0;
         }
     }

     else
     {
         if (pos_B3 + dice_number <= 29){
         blue_array[pos_B3] = "..";
         blue_array[pos_B3 + dice_number] = blue_array[34];
         pos_B3 = pos_B3 + dice_number;
         }
     }
     }

     blue_array[pos_B3] = blue_array[34];
}

void move_values_4(string blue_array[35], int dice_number, int &pos_B4)
{
     if (pos_B4 != 29){
     if (pos_B4 == 32)
     {
         if (dice_number == 6)
         {
             blue_array[0] = blue_array[34];
             blue_array[32] = "..";
             pos_B4 = 0;
         }
     }

     else
     {
         if (pos_B4 + dice_number <= 29){
         blue_array[pos_B4] = "..";
         blue_array[pos_B4 + dice_number] = blue_array[34];
         pos_B4 = pos_B4 + dice_number;
         }
     }
     }
     blue_array[pos_B4] = blue_array[34];
}

//Function for printing the board on the screen
void print_board(string red_array[35], string blue_array[35], string green_array[35], string yellow_array[35],int pos_B1, int pos_B2 ,int pos_B3, int pos_B4, int pos_R1, int pos_R2,int pos_R3,int pos_R4,int pos_Y1, int pos_Y2, int pos_Y3, int pos_Y4, int pos_G1, int pos_G2, int pos_G3, int pos_G4)
{
    // This is the heading of the game
    cout<<setw(40)<<"LUDO!"<<endl<<endl<<endl;

    cout<<"Player 1: B1 "<<pos_B1<<"  B2:"<<pos_B2<<"  B3:"<<pos_B3<<"  B4:"<<pos_B4<<endl<<endl;
    cout<<"Player 2: R1 "<<pos_R1<<"  R2:"<<pos_R2<<"  R3:"<<pos_R3<<"  R4:"<<pos_R4<<endl<<endl;
    cout<<"Player 3: G1 "<<pos_G1<<"  G2:"<<pos_G2<<"  G3:"<<pos_G3<<"  G4:"<<pos_G4<<endl<<endl;
    cout<<"Player 4: Y1 "<<pos_Y1<<"  Y2:"<<pos_Y2<<"  Y3:"<<pos_Y3<<"  Y4:"<<pos_Y4<<endl<<endl;


    cout<<"-------------------------------------------------------"<<endl;
    cout<<"|                 |"<<blue_array[4]<<" "<<red_array[25]<<"|"<<blue_array[5]<<" "<<red_array[26]<<"|"<<blue_array[6]<<" ..|                 |"<<endl;
    cout<<"|                 |"<<yellow_array[11]<<" "<<green_array[18]<<"|"<<yellow_array[12]<<" "<<green_array[19]<<"|"<<yellow_array[13]<<" "<<green_array[20]<<"|                 |"<<endl;
    cout<<"|                 |-----|-----|-----|                 |"<<endl;
    cout<<"|      Blue       |"<<blue_array[3]<<" "<<red_array[24]<<"|.. "<<red_array[27]<<"|"<<blue_array[7]<<" "<<red_array[0]<<"|      Red        |"<<endl;
    cout<<"|    "<<blue_array[33]<<"  "<<blue_array[30]<<"       |"<<yellow_array[10]<<" "<<green_array[17]<<"|.. ..|"<<yellow_array[14]<<" "<<green_array[21]<<"|    "<<red_array[33]<<"  "<<red_array[30]<<"       |"<<endl;
    cout<<"|    "<<blue_array[31]<<"  "<<blue_array[32]<<"       |-----|-----|-----|    "<<red_array[31]<<"  "<<red_array[32]<<"       |"<<endl;
    cout<<"|                 |"<<blue_array[2]<<" "<<red_array[23]<<"|.. "<<red_array[28]<<"|"<<blue_array[8]<<" "<<red_array[1]<<"|                 |"<<endl;
    cout<<"|                 |"<<yellow_array[9]<<" "<<green_array[16]<<"|.. ..|"<<yellow_array[15]<<" "<<green_array[22]<<"|                 |"<<endl;
    cout<<"|-----------------|-----------------|-----------------|"<<endl;
    cout<<"|.. "<<red_array[20]<<"|"<<blue_array[0]<<" "<<red_array[21]<<"|"<<blue_array[1]<<" "<<red_array[22]<<"|                 |"<<blue_array[9]<<" "<<red_array[2]<<"|"<<blue_array[10]<<" "<<red_array[3]<<"|"<<blue_array[11]<<" "<<red_array[4]<<"|"<<endl;
    cout<<"|"<<yellow_array[6]<<" "<<green_array[13]<<"|"<<yellow_array[7]<<" "<<green_array[14]<<"|"<<yellow_array[8]<<" "<<green_array[15]<<"|                 |"<<yellow_array[16]<<" "<<green_array[23]<<"|"<<yellow_array[17]<<" "<<green_array[24]<<"|"<<yellow_array[18]<<" "<<green_array[25]<<"|"<<endl;
    cout<<"|-----|-----|-----|                 |-----|-----|-----|"<<endl;
    cout<<"|"<<blue_array[26]<<" "<<red_array[19]<<"|"<<blue_array[27]<<" ..|"<<blue_array[28]<<" ..|                 |.. ..|.. ..|"<<blue_array[12]<<" "<<red_array[5]<<"|"<<endl;
    cout<<"|"<<yellow_array[5]<<" "<<green_array[12]<<"|.. ..|.. ..|                 |.. "<<green_array[28]<<"|.. "<<green_array[27]<<"|"<<yellow_array[19]<<" "<<green_array[26]<<"|"<<endl;
    cout<<"|-----|-----|-----|                 |-----|-----|-----|"<<endl;
    cout<<"|"<<blue_array[25]<<" "<<red_array[18]<<"|"<<blue_array[24]<<" "<<red_array[17]<<"|"<<blue_array[23]<<" "<<red_array[16]<<"|                 |"<<blue_array[15]<<" "<<red_array[8]<<"|"<<blue_array[14]<<" "<<red_array[7]<<"|"<<blue_array[13]<<" "<<red_array[6]<<"|"<<endl;
    cout<<"|"<<yellow_array[4]<<" "<<green_array[11]<<"|"<<yellow_array[3]<<" "<<green_array[10]<<"|"<<yellow_array[2]<<" "<<green_array[9]<<"|                 |"<<yellow_array[22]<<" "<<green_array[1]<<"|"<<yellow_array[21]<<" "<<green_array[0]<<"|"<<yellow_array[20]<<" ..|"<<endl;
    cout<<"|-----------------|-----------------|-----------------|"<<endl;
    cout<<"|                 |"<<blue_array[22]<<" "<<red_array[15]<<"|.. ..|"<<blue_array[16]<<" "<<red_array[9]<<"|                 |"<<endl;
    cout<<"|                 |"<<yellow_array[1]<<" "<<green_array[8]<<"|"<<yellow_array[28]<<" ..|"<<yellow_array[23]<<" "<<green_array[2]<<"|                 |"<<endl;
    cout<<"|                 |-----|-----|-----|                 |"<<endl;
    cout<<"|     Yellow      |"<<blue_array[21]<<" "<<red_array[14]<<"|.. ..|"<<blue_array[17]<<" "<<red_array[10]<<"|     Green       |"<<endl;
    cout<<"|     "<<yellow_array[33]<<" "<<yellow_array[30]<<"       |"<<yellow_array[0]<<" "<<green_array[7]<<"|"<<yellow_array[27]<<" ..|"<<yellow_array[24]<<" "<<green_array[3]<<"|     "<<green_array[33]<<" "<<green_array[30]<<"       |"<<endl;
    cout<<"|     "<<yellow_array[31]<<" "<<yellow_array[32]<<"       |-----|-----|-----|     "<<green_array[31]<<" "<<green_array[32]<<"       |"<<endl;
    cout<<"|                 |"<<blue_array[20]<<" "<<red_array[13]<<"|"<<blue_array[19]<<" "<<red_array[12]<<"|"<<blue_array[18]<<" "<<red_array[11]<<"|                 |"<<endl;
    cout<<"|                 |.. "<<green_array[6]<<"|"<<yellow_array[26]<<" "<<green_array[5]<<"|"<<yellow_array[25]<<" "<<green_array[4]<<"|                 |"<<endl;
    cout<<"-------------------------------------------------------"<<endl;

}

int main()
{

int pos_B1 = 33;
int pos_B2 = 30;
int pos_B3 = 31;
int pos_B4 = 32;

int pos_R1 = 33;
int pos_R2 = 30;
int pos_R3 = 31;
int pos_R4 = 32;

int pos_Y1 = 33;
int pos_Y2 = 30;
int pos_Y3 = 31;
int pos_Y4 = 32;

int pos_G1 = 33;
int pos_G2 = 30;
int pos_G3 = 31;
int pos_G4 = 32;


  bool GameOver = false;

  // The initial lines
  cout<<"Hello! This is LUDO!"<<endl;
  cout<<"Enter any integer to continue"<<endl;
  int a;
  cin>>a;

  if (cin.fail())
  {
      cout<<"You did not enter a number"<<endl;
      cout<<"Ending program"<<endl;
      return 0;

  }

     /* First I made all the arrays for the red, blue, green and yellow array. I assigned the values of 35 but only
       32 positions are being used. Then I arranged all the position of the arrays on the board, where the specified token
       is supposed to move. */


    string red_array[35];
    string blue_array[35];
    string green_array[35];
    string yellow_array[35];

    /* I assigned the values of all the indexes to ".." so that only the The tokens are visible and nothing else is seen on the
     board.*/

    for (int x = 0; x < 35; x++)
    {
        red_array[x] = "..";
        blue_array[x] = "..";
        green_array[x] = "..";
        yellow_array[x] = "..";
    }

    // I named all the tokens of each color so they are easily visible on the board

    red_array[33] = "RR";
    red_array[30] = "RR";
    red_array[31] = "RR";
    red_array[32] = "RR";

    blue_array[33] = "BB";
    blue_array[30] = "BB";
    blue_array[31] = "BB";
    blue_array[32] = "BB";

    green_array[33] = "GG";
    green_array[30] = "GG";
    green_array[31] = "GG";
    green_array[32] = "GG";

    yellow_array[33] = "YY";
    yellow_array[30] = "YY";
    yellow_array[31] = "YY";
    yellow_array[32] = "YY";

    red_array[34] = "RR";
    blue_array[34] = "BB";
    green_array[34] = "GG";
    yellow_array[34] = "YY";



  //This clears the screen after the input for the number of users have been taken
  system("cls");

  cout<<"Lets begin"<<endl;
  cout<<"Loading.. Please wait"<<endl;
  cout<<endl;

  //wait(3);
  //The program will wait for 3 seconds before executing the next lines of code

  system("cls");

  //The board will be printed on the screen.
  print_board( red_array, blue_array, green_array, yellow_array,pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2,pos_R3,pos_R4,pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_G1, pos_G2, pos_G3, pos_G4);

  PlaySound(TEXT("123.wav"), NULL, SND_FILENAME || SND_ASYNC);

  while(!GameOver){
  /*Insert a function that generates a random input between 1 and 6*/


  //Player 1's turn.
  cout<<"Player 1's turn (BLUE)"<<endl;
  cout<<"Enter the number between 1 and 6"<<endl;
  int dice_number1 = 0;
  int dice_number2 = 0;
  int dice_number3 = 0;
  cin>>dice_number1;


  if (dice_number1 == 6)
  {
      cout<<"You have another turn. Enter a number between 1 and 6."<<endl;
      cin>>dice_number2;
      if (dice_number2 == 6)
      {
          cout<<"You have another turn. If you get 6, then you turn will be canceled."<<endl;
          cin>>dice_number3;
          if (dice_number3 == 6)
          {
              cout<<"Your turn has been canceled."<<endl<<endl;
          }
      }
  }

  if (dice_number1 > 0 && dice_number3 != 6)
  {
  cout<<"Which token do you want to move? B1, B2, B3 or B4"<<endl;
  string blue_token_number;
  cin>>blue_token_number;

  if (blue_token_number == "B1")
  {
      move_values_1(blue_array, dice_number1, pos_B1);

  }

  else if (blue_token_number == "B2")
  {
      move_values_2(blue_array, dice_number1,pos_B2);
  }

  else if (blue_token_number == "B3")
  {
      move_values_3(blue_array, dice_number1, pos_B3);
  }

  else if (blue_token_number == "B4")
  {
      move_values_4(blue_array, dice_number1, pos_B4);
  }

  else
    cout<<"Wrong input"<<endl;
  }

  if (dice_number2 > 0 & dice_number3 != 6)
  {
  cout<<"Which token do you want to move? B1, B2, B3 or B4"<<endl;
  string blue_token_number;
  cin>>blue_token_number;

  if (blue_token_number == "B1")
  {
      move_values_1(blue_array, dice_number2, pos_B1);
  }

  else if (blue_token_number == "B2")
  {
      move_values_2(blue_array, dice_number2, pos_B2);
  }

  else if (blue_token_number == "B3")
  {
      move_values_3(blue_array, dice_number2, pos_B3);
  }

  else if (blue_token_number == "B4")
  {
      move_values_4(blue_array, dice_number2, pos_B4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  if (dice_number3 > 0 && dice_number3 < 6)
  {
  cout<<"Which token do you want to move? B1, B2, B3 or B4"<<endl;
  string blue_token_number;
  cin>>blue_token_number;

  if (blue_token_number == "B1")
  {
      move_values_1(blue_array, dice_number3, pos_B1);
  }

  else if (blue_token_number == "B2")
  {
      move_values_2(blue_array, dice_number3, pos_B2);
  }

  else if (blue_token_number == "B3")
  {
      move_values_3(blue_array, dice_number3, pos_B3);
  }

  else if (blue_token_number == "B4")
  {
      move_values_4(blue_array, dice_number3, pos_B4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////

  token_is_beaten(blue_array, red_array, green_array , yellow_array, pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2, pos_R3, pos_R4, pos_G1, pos_G2, pos_G3, pos_G4, pos_Y1, pos_Y2, pos_Y3, pos_Y4);



   ////////////////////////////// FOURTH ROUND OF 7 ENDS HERE /////////////////////////////////////////////////////
   dice_number1 = 0;
   dice_number2 = 0;
   dice_number3 = 0;

   system("cls");

   if (pos_B1 == 29 && pos_B2 == 29 && pos_B3 == 29 && pos_B4 == 29)
   {
       GameOver = true;
   }

   ///////////////////////////////////////////////////////////////////////////////////////////////////
   //The code for player1 ends here

  //Player 2's turn (New code)
  system("cls");
  print_board( red_array, blue_array, green_array, yellow_array,pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2,pos_R3,pos_R4,pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_G1, pos_G2, pos_G3, pos_G4);


  cout<<"Player 2's turn (RED)"<<endl;
  cout<<"Enter the number between 1 and 6"<<endl;
  dice_number1 = 0;
  dice_number2 = 0;
  dice_number3 = 0;
  cin>>dice_number1;

  if (dice_number1 == 6)
  {
      cout<<"You have another turn. Enter a number between 1 and 6."<<endl;
      cin>>dice_number2;
      if (dice_number2 == 6)
      {
          cout<<"You have another turn. If you get 6, then you turn will be canceled."<<endl;
          cin>>dice_number3;
          if (dice_number3 == 6)
          {
              cout<<"Your turn has been canceled."<<endl<<endl;
          }
      }
  }


  if (dice_number1 > 0 && dice_number3 != 6)
  {
  cout<<"Which token do you want to move? R1, R2, R3 or R4"<<endl;
  string red_token_number;
  cin>>red_token_number;

  if (red_token_number == "R1")
  {
      move_values_1(red_array, dice_number1, pos_R1);

  }

  else if (red_token_number == "R2")
  {
      move_values_2(red_array, dice_number1, pos_R2);
  }

  else if (red_token_number == "R3")
  {
      move_values_3(red_array, dice_number1, pos_R3);
  }

  else if (red_token_number == "R4")
  {
      move_values_4(red_array, dice_number1, pos_R4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }


  if (dice_number2 > 0 & dice_number3 != 6)
  {
  cout<<"Which token do you want to move? R1, R2, R3 or R4"<<endl;
  string red_token_number;
  cin>>red_token_number;

  if (red_token_number == "R1")
  {
      move_values_1(red_array, dice_number2, pos_R1);
  }

  else if (red_token_number == "R2")
  {
      move_values_2(red_array, dice_number2, pos_R2);
  }

  else if (red_token_number == "R3")
  {
      move_values_3(red_array, dice_number2, pos_R3);
  }

  else if (red_token_number == "R4")
  {
      move_values_4(red_array, dice_number2, pos_R4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  if (dice_number3 > 0 && dice_number3 < 6)
  {
  cout<<"Which token do you want to move? R1, R2, R3 or R4"<<endl;
  string red_token_number;
  cin>>red_token_number;

  if (red_token_number == "R1")
  {
      move_values_1(red_array, dice_number3, pos_R1);
  }

  else if (red_token_number == "R2")
  {
      move_values_2(red_array, dice_number3, pos_R2);
  }

  else if (red_token_number == "R3")
  {
      move_values_3(red_array, dice_number3, pos_R3);
  }

  else if (red_token_number == "R4")
  {
      move_values_4(red_array, dice_number3, pos_R4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////

   token_is_beaten(red_array, green_array, yellow_array, blue_array, pos_R1, pos_R2, pos_R3, pos_R4, pos_G1, pos_G2, pos_G3, pos_G4, pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_B1, pos_B2, pos_B3, pos_B4);

   system("cls");
   if (pos_R1 == 29 && pos_R2 == 29 && pos_R3 == 29 && pos_R4 == 29)
   {
       GameOver = true;
   }
   ////////////////////////////// FOURTH ROUND OF 7 ENDS HERE /////////////////////////////////////////////////////

   system("cls");
   print_board(red_array, blue_array, green_array, yellow_array,pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2,pos_R3,pos_R4,pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_G1, pos_G2, pos_G3, pos_G4);

   ////////////////////////// Player 3's turn ////////////////////////

   cout<<"Player 3's turn (GREEN)"<<endl;
  cout<<"Enter the number between 1 and 6"<<endl;
  dice_number1 = 0;
  dice_number2 = 0;
  dice_number3 = 0;
  cin>>dice_number1;

  if (dice_number1 == 6)
  {
      cout<<"You have another turn. Enter a number between 1 and 6."<<endl;
      cin>>dice_number2;
      if (dice_number2 == 6)
      {
          cout<<"You have another turn. If you get 6, then you turn will be canceled."<<endl;
          cin>>dice_number3;
          if (dice_number3 == 6)
          {
              cout<<"Your turn has been canceled."<<endl<<endl;
          }
      }
  }


  if (dice_number1 > 0 && dice_number3 != 6)
  {
  cout<<"Which token do you want to move? G1, G2, G3 or G4"<<endl;
  string green_token_number;
  cin>>green_token_number;

  if (green_token_number == "G1")
  {
      move_values_1(green_array, dice_number1, pos_G1);

  }

  else if (green_token_number == "G2")
  {
      move_values_2(green_array, dice_number1, pos_G2);
  }

  else if (green_token_number == "G3")
  {
      move_values_3(green_array, dice_number1, pos_G3);
  }

  else if (green_token_number == "G4")
  {
      move_values_4(green_array, dice_number1, pos_G4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }


  if (dice_number2 > 0 & dice_number3 != 6)
  {
  cout<<"Which token do you want to move? G1, G2, G3 or G4"<<endl;
  string green_token_number;
  cin>>green_token_number;

  if (green_token_number == "G1")
  {
      move_values_1(green_array, dice_number2, pos_G1);
  }

  else if (green_token_number == "G2")
  {
      move_values_2(green_array, dice_number2, pos_G2);
  }

  else if (green_token_number == "G3")
  {
      move_values_3(green_array, dice_number2, pos_G3);
  }

  else if (green_token_number == "G4")
  {
      move_values_4(green_array, dice_number2, pos_G4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  if (dice_number3 > 0 && dice_number3 < 6)
  {
  cout<<"Which token do you want to move? G1, G2, G3 or G4"<<endl;
  string green_token_number;
  cin>>green_token_number;

  if (green_token_number == "G1")
  {
      move_values_1(green_array, dice_number3, pos_G1);
  }

  else if (green_token_number == "G2")
  {
      move_values_2(green_array, dice_number3, pos_G2);
  }

  else if (green_token_number == "G3")
  {
      move_values_3(green_array, dice_number3, pos_G3);
  }

  else if (green_token_number == "G4")
  {
      move_values_4(green_array, dice_number3, pos_G4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////

 token_is_beaten(green_array, yellow_array, blue_array, red_array, pos_G1, pos_G2, pos_G3, pos_G4, pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_B1, pos_B2, pos_B3, pos_B4, pos_R1, pos_R2, pos_R3, pos_R4);

 ///////////////////////////////////////////////////////////////////////////////

   dice_number1 = 0;
   dice_number2 = 0;
   dice_number3 = 0;


   system("cls");
   if (pos_G1 == 29 && pos_G2 == 29 && pos_G3 == 29 && pos_G4 == 29)
   {
       GameOver = true;
   }


   system("cls");
   print_board(red_array, blue_array, green_array, yellow_array, pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2,pos_R3,pos_R4,pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_G1, pos_G2, pos_G3, pos_G4);

   ///////////////////// Player 4's Turn /////////////////////////////////////////////////


   //player 4's turn

   //Player 2's turn (New code)
  system("cls");
  print_board( red_array, blue_array, green_array, yellow_array, pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2,pos_R3,pos_R4,pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_G1, pos_G2, pos_G3, pos_G4);


  cout<<"Player 4's turn (YELLOW)"<<endl;
  cout<<"Enter the number between 1 and 6"<<endl;
  dice_number1 = 0;
  dice_number2 = 0;
  dice_number3 = 0;
  cin>>dice_number1;

  if (dice_number1 == 6)
  {
      cout<<"You have another turn. Enter a number between 1 and 6."<<endl;
      cin>>dice_number2;
      if (dice_number2 == 6)
      {
          cout<<"You have another turn. If you get 6, then you turn will be canceled."<<endl;
          cin>>dice_number3;
          if (dice_number3 == 6)
          {
              cout<<"Your turn has been canceled."<<endl<<endl;
          }
      }
  }


  if (dice_number1 > 0 && dice_number3 != 6)
  {
  cout<<"Which token do you want to move? Y1, Y2, Y3 or Y4"<<endl;
  string yellow_token_number;
  cin>>yellow_token_number;

  if (yellow_token_number == "Y1")
  {
      move_values_1(yellow_array, dice_number1, pos_Y1);

  }

  else if (yellow_token_number == "Y2")
  {
      move_values_2(yellow_array, dice_number1, pos_Y2);
  }

  else if (yellow_token_number == "Y3")
  {
      move_values_3(yellow_array, dice_number1, pos_Y3);
  }

  else if (yellow_token_number == "Y4")
  {
      move_values_4(yellow_array, dice_number1, pos_Y4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }


  if (dice_number2 > 0 & dice_number3 != 6)
  {
  cout<<"Which token do you want to move? Y1, Y2, Y3 or Y4"<<endl;
  string yellow_token_number;
  cin>>yellow_token_number;

  if (yellow_token_number == "Y1")
  {
      move_values_1(yellow_array, dice_number2, pos_Y1);
  }

  else if (yellow_token_number == "Y2")
  {
      move_values_2(yellow_array, dice_number2, pos_Y2);
  }

  else if (yellow_token_number == "Y3")
  {
      move_values_3(yellow_array, dice_number2, pos_Y3);
  }

  else if (yellow_token_number == "Y4")
  {
      move_values_4(yellow_array, dice_number2, pos_Y4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

  if (dice_number3 > 0 && dice_number3 < 6)
  {
  cout<<"Which token do you want to move? Y1, Y2, Y3 or Y4"<<endl;
  string yellow_token_number;
  cin>>yellow_token_number;

  if (yellow_token_number == "Y1")
  {
      move_values_1(yellow_array, dice_number3, pos_Y1);
  }

  else if (yellow_token_number == "Y2")
  {
      move_values_2(yellow_array, dice_number3, pos_Y2);
  }

  else if (yellow_token_number == "Y3")
  {
      move_values_3(yellow_array, dice_number3, pos_Y3);
  }

  else if (yellow_token_number == "Y4")
  {
      move_values_4(yellow_array, dice_number3, pos_Y4);
  }

  else
  {
      cout<<"Wrong input! Next players turn!"<<endl;
  }
  }

   token_is_beaten(yellow_array, blue_array, red_array, green_array, pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_B1, pos_B2, pos_B3, pos_B4, pos_R1, pos_R2, pos_R3, pos_R4, pos_G1, pos_G2, pos_G3, pos_G4);




   system("cls");
   if (pos_Y1 == 29 && pos_Y2 == 29 && pos_Y3 == 29 && pos_Y4 == 29)
   {
       GameOver = true;
   }

  system("cls");
  print_board(red_array, blue_array, green_array, yellow_array,pos_B1, pos_B2 , pos_B3, pos_B4, pos_R1, pos_R2,pos_R3,pos_R4,pos_Y1, pos_Y2, pos_Y3, pos_Y4, pos_G1, pos_G2, pos_G3, pos_G4);
  }

  system("cls");
   if (pos_B1 == 29 && pos_B2 == 29 && pos_B3 == 29 && pos_B4 == 29)
   {
       cout<<"CONGRATULATIONS! PLAYER 1 HAS WON THE GAME!"<<endl;
   }

   else if (pos_R1 == 29 && pos_R2 == 29 && pos_R3 == 29 && pos_R4 == 29)
   {
       cout<<"CONGRATULATIONS! PLAYER 2 HAS WON THE GAME!"<<endl;
   }

   else if (pos_G1 == 29 && pos_G2 == 29 && pos_G3 == 29 && pos_G4 == 29)
   {
       cout<<"CONGRATULATIONS! PLAYER 3 HAS WON THE GAME!"<<endl;
   }

   else if (pos_Y1 == 29 && pos_Y2 == 29 && pos_Y3 == 29 && pos_Y4 == 29)
   {
       cout<<"CONGRATULATIONS! PLAYER 4 HAS WON THE GAME!"<<endl;
   }

  return 0;
}


