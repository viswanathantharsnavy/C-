#include <iostream>
using namespace std;

 char board[3][3]={
     {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'}
   };
 
 void set_board(){
        cout<<endl;
 
       for(int i=0; i<3; i++){
          for(int j=0; j<3; j++){
             cout<<" "<<board[i] [j]<<" ";
           if(j<2)
                 cout<<"|";  
        }
          if  (i<2)
              cout<<"\n.... .... ...\n";
             
       }
          cout<<endl;
  }


  bool Checkwin(char player){
        for(int i=0; i<3;i++){
        if (board[i][0]==player &&
            board[i][1]==player &&
            board[i][2]==player)
        return true;

        if (board[0][i]==player &&
            board[1][i]==player &&
            board[2][i]==player)
        return true;

   }

        if (board[0][0]==player &&
            board[1][1]==player &&
            board[2][2]==player)
        return true;

         if (board[0][0]==player &&
            board[1][1]==player &&
            board[2][2]==player)
        return true;

     return false;
   }

     int main(){
              int choice;
              char player='X';
              int move=0;

           cout<<"TOW PLAYER GAME"<<endl;
          set_board();
   
             while(move < 9){
                 cout<<"  player:  "<<player<< "   choose(1-9):  ";
                 cin>>choice;

             int row=(choice - 1)/3;
             int col=(choice - 1)%3;

          if(choice < 1 || choice > 9 ||
             board[row][col]=='X' ||
             board[row][col]=='O')  {
                cout<<"Invalid move!";

             continue;
           }


           board[row][col]=player;
           set_board();
           move++;
   
        if(Checkwin (player)){
           cout<<"player"<<player<<"win!";

         return 0;
        }

      player=(player == 'X')?'O':'X';
     
    }

     cout<<"Game Draw!";
   
    return 0;
   }




   

              

