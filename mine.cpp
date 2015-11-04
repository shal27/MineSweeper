#include<iostream> 
    
#include<stdlib.h>	
//#include<process.h>
#include<string.h>
//#include<conio.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
char csh;
void gotoxy(int x,int y)
{
printf("%c[%d;%df",0x1B,y,x);
}
void level();  
void welcome()        // function for welcome
{
         char s,o[20];
         int i,j;
         cout<<"\n\t **\\/\"WELCOME FRIEND AND ENJOY MINESWEEPER!!!!!!!!\"\\/\** ";
         cout<<"\n\n\t\t  Enter your Name Please:- ";
         gets(o);
         cout<<"\n\n\t\t         ____      ____     ____          ";
         cout<<"\n\t\t	|    |    |    |   |    |    ";
         cout<<"\n\t\t	|    |____|    |   |    |         ";
         cout<<"\n\t\t        |     ____     |   |    |    ";
         cout<<"\n\t\t	|____|    |____|   |____|              ";

         int l=strlen(o);            //for finding length of the string.
         for(i=0;i<l;i++)
           o[i]=toupper(o[i]);
       cout<<"\n\n\n\t\t Hello! "<<o<<"."<<"\n\t\t press any key to start the game :-";
            cin>>csh;
                        }

void rules()        // function for rules
{
              char x;
              
              cout<<"\n\t\t RULES TO PLAY THE GAME:"<<"\n\n\t\t 1.Enter the row and column when  asked." ;
              cout<<"\n\n\t\t 2.If the matrix shows a 'o' then you have found a mine,and you";
              cout<<"\n\t\t will earn 1 point each;";
              cout<<"\n\t\t but if it shows 'x' in the whole matrix then ";
              cout<<"\n\t\t that means you have lost the game.";
              cout<<"\n\n\t\t 3.you have to find total";
              cout<<"\n\t\t 25 mines to win the game.";
              cout<<"\n\n\t\t 4.Out of these mines,5 of the mines have bonus points "<<"\n\t\t (with a '*' sign) which is of 5 points each.";
              cout<<"\n\n\n\t\t press any key to choose the level:-";
              cin>>csh;
}
 void fun(char a[20][20],int W,int z,int q1=3,int l3=1)    // function for the management of game
 {
      int i,j;
      int m1=0;
      for(i=0;i<W;i++)
          {
                for(j=0;j<z;j++)
                  {
                         a[i][j]='.';
                            }
                        cout<<endl;
              }
           int r,c;
           int count=0;
           int b[20][20];
          do
          {
              top:
              if(l3==1)
              {
               cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t Enter Row From 0-"<<W-1<<":- ";
               cin>> r;
               cout<<"\n\t\t Enter Column From 0-"<<z-1<<":- ";
                cin>>c;
                l3=5;
                }
               else{
                   cout<<"\n\t\t Enter Row From 0-"<<W-1<<":- ";
               cin>> r;
               cout<<"\n\t\t Enter Column From 0-"<<z-1<<":- ";
                cin>>c;}
               if(a[r][c]=='o' ||a[r][c]=='*')     //so as to avoid same entry again 
                {
                      cout<<"\n\t\t Renter- ";
                      goto top;
                  }
                else
                {
                     for(i=0;i<W;i++)
                       {
                          for(j=0;j<z;j++)
                            {int random = rand() % 2;
                                b[i][j]=random;
                             }
                        }   
                  if(r<W && c<z)
                   {
                     if(b[r][c]==0 || b[r][c]==1)
                      {
                            if(b[r][c]==0)
                      {
                       ;
                              if (z=10)
                               {
                                  for(i=0;i<1;i++)
                                   {
                                      for(j=0;j<1;j++)
                                      {
                                      cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ _";
                                       }
                                   }
                                 }
                            else
                         {
                          for(i=0;i<1;i++)
                         {
                          for(j=0;j<1;j++)
                            {
                           cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __";
                              }
                          }
                      }
                     cout<<"\n";
                    for(i=0;i<W;i++)
                    {
                      cout<<"\t\t";
                      for(j=0;j<z;j++)
                     {                                
                       a[i][j]='x';
                       cout<<"|_"<<a[i][j]<<"_|";
                    }
                     cout<<endl;
                  }
                char  t;
                cout<<"\n\n\a\t\t SORRY you have lost the game!!";
               cout<<"\n\t\t Your Total Score Is: "<<(count+(5*m1));
                cout<<"\n\t\t GAME OVER!"<<"\n\t\t Thanks for playing ,hope you have enjoyed a lot!";
                cout<<"\n\n\t\t\t\t Made by:-"<<"\n\t\t\t\t Shalvi mahajan ";
               }
             else
            {
              if(a[r][c]=='o' ||a[r][c]=='*')
              {
                  cout<<"\n\t\t Renter-  ";
                  goto top;
             }                 
             else 
             {
              if(m1<=4) 
              {                     
                  m1++;
                  ;
                  a[r][c]='*'; 
                  if(z=10)
                   {
                     for(i=0;i<1;i++)
                     {
                        for(j=0;j<1;j++)
                        {
                         cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ _";
                          }
                      }
                  }
                   else
                  {
                  for(i=0;i<1;i++)
                 {
                    for(j=0;j<1;j++)
                    {
                      cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __";
                  }
                               } 
                             }
                         cout<<"\n";
               for(i=0;i<W;i++)
               { 
               cout<<"\t\t";
               for(j=0;j<z;j++)
                 {
                     cout<<"|_"<<a[i][j]<<"_|";
                  }
              cout<<endl;
             }
        }
        if(m1>4)
          {
            a[r][c]='o';
          count++;
     ;
         if(z=10)
         {
            for(i=0;i<1;i++)
            {
           for(j=0;j<1;j++)
              {
               cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ _";
               }
            }
         }
       else
      {
           for(i=0;i<1;i++)
           {
         for(j=0;j<1;j++)
          {
              cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __";
            }
          } 
     }
     cout<<"\n";
     for(i=0;i<W;i++)
     {
    cout<<"\t\t";
    for(j=0;j<z;j++)
     {
      cout<<"|_"<<a[i][j]<<"_|";
     }
     cout<<endl;
     }
    char t;
  if((count+m1)==25)
  {
 cout<<"\n\t\t Well done!Your Total Score Is: "<<(count+(5*m1));
 cout<<"\n\n\t\t\t Hurray! You are the lucky winner of this game";
 cout<<"\n\t\t\t Thanks for playing,hope you have enjoyed the game";
 cout<<"\n\n\t\t\t\t Made by:-"<<"\n\t\t\t\t Shalvi mahajan ";
  } 
 }
}
}
}
 else
 {
 a[r][c]='o';
 count++;
 ;
 if(z=10)
  { 
   for(i=0;i<1;i++)
    {
     for(j=0;j<1;j++)
     {
        cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ _";
     }
 }
}
  else
 {
 for(i=0;i<1;i++)
 {
   for(j=0;j<1;j++)
   { 
      cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __";
   }
  }
} 
 cout<<"\n";
 for(i=0;i<W;i++)
 {  
 cout<<"\t\t";
 for(j=0;j<z;j++)
  {
 cout<<"|_"<<a[i][j]<<"_|";
 } 
 cout<<endl;
 } 
 if((count+m1)==25)
  { 
cout<<"\n\t\t Well done!Your Total Score Is: "<<(count+(5*m1));
cout<<"\n\n\t\t\t Hurray!You are the lucky winner of this game";
cout<<"\n\t\t\t Thanks for playing,hope you have enjoyed the game";
cout<<"\n\n\t\t\t\t Made by:-"<<"\n\t\t\t\t Shalvi mahajan ";
  }
 }
}
  else if(r>(W-1) && c>(z-1))
   {
   cout<<"\n\n\t\t Wrong Number Of Row and Column Entered!!";
   goto top;
    }
  else if(c>(z-1))
    {
      cout<<"\n\n\t\t Wrong Number Of Column Entered!!";
     goto top;
   }
   else
    {
  cout<<"\n\n\t\t Wrong Number Of Row  Entered!!";
  goto top;
  }
 }
}while(b[r][c]!=0);
}
void level()          //function for choosing level
{
char m;
;
cout<<"\n\t\t choose the level"<<"\n\n\t\t - easy"<<"\n\t\t - difficult"<<"\n\t\t - exit"<<"\n\n\t\t type 'e' for easy or 'd' for difficult level "<<"\n\t\t or n to exit:-"<<"  ";
cin>>m;
char a[20][20];
int b[20][20];
 int i,j;
char o[20];
if(m=='n')
 {
 ;
 cout<<"\n\t\t ~~~BYE BYE FRIEND~~~"<<"\n\t\t ~~~YOU CAN EXIT NOW!!!~~~";
 }
if(m=='e')
 {
 ;
 for(i=0;i<1;i++)
 {
for(j=0;j<1;j++)
{
cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ _";
}
}
cout<<"\n";
for(i=0;i<10;i++)
{
 cout<<"\t\t";
for(j=0;j<10;j++)
 { 
  a[i][j]='.';
cout<<"|_"<<a[i][j]<<"_|";
  }
 cout<<endl;
}
gotoxy(3,3);
char h[20][20];
fun(h,10,10,1);     //function  call
}
char l[20][20];
if(m=='d')
{
;
 int k,t;
for(i=0;i<1;i++)
{
for(j=0;j<1;j++)
{
cout<<"\t         _ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ _ ";
}
}
cout<<"\n";
for(i=0;i<12;i++)
{
cout<<"\t\t";
for(j=0;j<10;j++)
{
l[i][j]='.';
cout<<"|_"<<l[i][j]<<"_|";
}
cout<<endl;
}
gotoxy(3,3);
char q[20][20];   int q1;
fun(q,12,10,q1=5);
}
}


int main()                    // main function
{
welcome();       //function call
rules();
level();
char t;
do
{
cout<<"\n\t\t Press 'y' to try the game once more- ";
cin>>t;
if(t=='y')
level();
}while(t=='y');
return 0;
}















 
