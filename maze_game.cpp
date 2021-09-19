/*---------------------------------------------------------------
Name: Tyreke Scott
Date: July 1, 2021
Purpose: To create a program that has a maze which is an array that the user
    should navigate from room to room until s/he reaches one of two exits


I CERTIFY THAT I HAVE NOT GIVEN OR RECEIVED ANY	
UNAUTHORIZED ASSISTANCE ON THIS ASSIGNMENT
---------------------------------------------------------------*/


#include<iostream>
using namespace std;

#define MAPR 15
#define MAPC 22


void play_game()
{
    //variables I use to hold the values needed to allow the player to move along the maze
    int move;
    int pos;

    /*cout<<"\nWhere do you want to move?";
    cin>>move;
    while(maze_array !=21)
    {

    }

    run1.maze_array[1][1]= 2;

    run*/


}

void print_update_maze()
{
    //Borders for the maze array
    int top_left = 201;
    int hor_mid = 205;
    int top_right = 187;
    int ver_mid = 186;
    int bas_left = 200;
    int bas_right = 188;

    //Symbols for the special rooms
    char R1 = 5;
    char R2 = 5;
    char R3 = 5;
    char R4 = 5;
    char R5 = 5; 
    char R6 = 5;

    //Symbols for the exits
    char E2 = 6;
    char E4 = 6;

    int lnum, lnum2;

    char maze_array[MAPR][MAPC] = {     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                        {1, R1, 1, 0, 0, 0, 0, 1, R2, 1, 0, 0, 0, 0, 1, R3, 1, 0, 0, 0, 0, 1,},
                                        {1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                                        {1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1},
                                        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, R5, 1},
                                        {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                        {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
                                        {E2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
                                        {1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, R4, 1},
                                        {1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1},
                                        {1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, R6, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, E4, 1, 1, 1, 1, 1, 1, 1, 1, 1} };

    /*==================================================*/
    printf("\n%c", top_left);//Top left cober of the border 

    //Loop to create the top mid section of the border 
    for(lnum = 1; lnum < 45; lnum++)
    {
        printf("%c", hor_mid);
    }
    printf("%c\n", top_right);//Top right coner of the border

    //Start of the loop to print the maze inside of the borders
    for(lnum = 0; lnum < 1; lnum++)
    {

            //Attempting to insert the maze into the borders
            for(int row=0; row<=14; row++)
            {
                printf("%c", ver_mid);//Left mid section of the border

                for(int col=0; col<=21; col++)  
                {
                    cout<<maze_array[row][col]<<" ";//The actual array gets printed at this point
                }
                printf("%c", ver_mid);//Right mid section of the border
                cout<<endl;
            }
        
    }

    printf("%c", bas_left);//Base left corner of the border 

    //Loop to create the base mid section of the border 
    for(lnum = 1; lnum < 45; lnum++)
    {
        printf("%c", hor_mid);
    }

    printf("%c", bas_right);//Base right corner of the border
}

void print_maze()
{

    //Borders for the maze array
    int top_left = 201;
    int hor_mid = 205;
    int top_right = 187;
    int ver_mid = 186;
    int bas_left = 200;
    int bas_right = 188;

    //Symbols for the special rooms
    char R1 = 5;
    char R2 = 5;
    char R3 = 5;
    char R4 = 5;
    char R5 = 5; 
    char R6 = 5;

    //Symbols for the exits
    char E2 = 6;
    char E4 = 6;

    char person = 3;

    

    int lnum, lnum2;



    /*Making the thing use 'CHAR' as its data type outputs it as this
    ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ 
    ☺   ☺         ☺   ☺         ☺   ☺         ☺
    ☺   ☺         ☺   ☺         ☺   ☺         ☺
    ☺   ☺ ☺ ☺ ☺   ☺   ☺ ☺ ☺ ☺   ☺   ☺   ☺ ☺ ☺ ☺
    ☺                                         ☺
    ☺ ☺ ☺ ☺ ☺   ☺ ☺ ☺ ☺   ☺             ☺ ☺ ☺ ☺
    ☺           ☺         ☺                   ☺
    ☺ ☺ ☺ ☺ ☺   ☺   ☺     ☺   ☺ ☺ ☺ ☺ ☺ ☺ ☺   ☺
                ☺   ☺     ☺               ☺   ☺
    ☺ ☺ ☺ ☺ ☺   ☺   ☺     ☺   ☺           ☺   ☺
    ☺       ☺   ☺   ☺     ☺   ☺           ☺ ☺ ☺
    ☺           ☺   ☺     ☺   ☺               ☺
    ☺ ☺ ☺ ☺ ☺ ☺ ☺   ☺     ☺   ☺               ☺
    ☺               ☺     ☺   ☺               ☺
    ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺ ☺

    Versus when using 'DOUBLE' as the data type I get
    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    1 4.43842e-317 1 0 0 0 0 1 6.91692e-323 1 0 0 0 0 1 4.94066e-324 1 0 0 0 0 1
    1 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 1 0 0 0 0 1
    1 0 1 1 1 1 0 1 0 1 1 1 1 0 1 0 1 0 1 1 1 1
    1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2.07493e-317 1
    1 1 1 1 1 0 1 1 1 1 0 1 0 0 0 0 0 0 1 1 1 1
    1 0 0 0 0 0 1 0 0 0 0 1 0 0 0 0 0 0 0 0 0 1
    1 1 1 1 1 0 1 0 1 0 0 1 0 1 1 1 1 1 1 1 0 1
    7.90505e-323 0 0 0 0 0 1 0 1 0 0 1 0 0 0 0 0 0 0 1 0 1
    1 1 1 1 1 0 1 0 1 0 0 1 0 1 0 0 0 0 0 1 0 1
    1 0 0 0 1 0 1 0 1 0 0 1 0 1 0 0 0 0 0 1 1 1
    1 0 0 0 0 0 1 0 1 0 0 1 0 1 0 0 0 0 0 0 0 1
    1 1 1 1 1 1 1 0 1 0 0 1 0 1 0 0 0 0 0 0 0 1
    1 0 0 0 0 0 0 0 1 0 0 1 0 1 0 0 0 0 0 0 0 1
    1 1 1 1 1 1 1 1 1 1 1 1 2.37152e-322 1 1 1 1 1 1 1 1 1

    thus for now I will use the 'CHAR' data type instead
    */

    //Making the array that is going to serve as the map
    char maze_array[MAPR][MAPC] = {     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                        {1, R1, 1, 0, 0, 0, 0, 1, R2, 1, 0, 0, 0, 0, 1, R3, 1, 0, 0, 0, 0, 1,},
                                        {1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                                        {1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1},
                                        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, R5, 1},
                                        {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
                                        {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
                                        {E2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
                                        {1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, R4, 1},
                                        {1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1},
                                        {1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, R6, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
                                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, E4, 1, 1, 1, 1, 1, 1, 1, 1, 1} };

                                        //For the player I will use 3 to represent where they are located and 2 to represent where they where
                                        //When the data type is 'CHAR' 2 is outputed as ☻ and 3 is outputed as ♥.

    

    //This is how the outer borders are created in the terminal
    /*=========================================================*/
    
    //Attempt to print a number grind for the maze
    /*int loca = 0;

    while(loca<23)
    {
        cout<<loca++<<" ";
    }*/

    printf("\n%c", top_left);//Top left cober of the border 

    //Loop to create the top mid section of the border 
    for(lnum = 1; lnum < 45; lnum++)
    {
        printf("%c", hor_mid, " ");
    }
    printf("%c\n", top_right);//Top right coner of the border

    //Start of the loop to print the maze inside of the borders
    for(lnum = 0; lnum < 1; lnum++)
    {

            //Attempting to insert the maze into the borders
            for(int row=0; row<=14; row++)
            {
                printf("%c", ver_mid);//Left mid section of the border

                for(int col=0; col<=21; col++)  
                {
                    cout<<maze_array[row][col]<<" ";//The actual array gets printed at this point
                }
                printf("%c", ver_mid);//Right mid section of the border
                cout<<endl;
            }
        
    }

    printf("%c", bas_left);//Base left corner of the border 

    //Loop to create the base mid section of the border 
    for(lnum = 1; lnum < 45; lnum++)
    {
        printf("%c", hor_mid);
    }

    printf("%c", bas_right);//Base right corner of the border

      /*=========================================================*/


    /* Old code testing the array maze map to see if it works*/
/*===============================================================
    //Prints out the array into the terminal so it can be seen
    for(int row=0; row<=14; row++)
    {
        for(int col=0; col<=21; col++)  
        {
            cout<<maze_array[row][col]<<" ";
        }
        cout<<endl;
    }
==================================================================*/


    //Values for the positioning in array?
    int ROW = 1;
    int COL = 1;

    //variables I use to hold the values needed to allow the player to move along the maze
    int direct;
    int maze_posi = 0;
    int loop,loop1;
    int start_room;
    int hops = 0;
    int sm_hops;//This is for the distance to the nearest exit
    int sp_rooms = 0;//This is a variable for count of the special rooms found 
    

    do
    {
       cout<<"\nWhich room do you want to start in? R1, R2, R3, R4, R5 or R6."<<endl;
        cout<<"\nType the room number for the room that corresponds with it."<<endl;
        cin>>start_room;
        
        //Here the spawn point of the user/player is decided
        if(start_room == 1)
        {
            ROW = 1;
            COL = 1;
            cout<<"Player spawned";
            loop = 1;
            sm_hops = 16;//The distance to the nearest exit
        }
        else if(start_room == 2)
        {
            ROW = 1;
            COL = 8;
            cout<<"Player spawned";
            loop = 1;
            sm_hops = 15;//The distance to the nearest exit
        }
        else if(start_room == 3)
        {
            ROW = 1;
            COL = 15;
            cout<<"Player spawned";
            loop = 1;
            sm_hops = 16;//The distance to the nearest exit
        }
        else if(start_room == 4)
        {
            ROW = 4;
            COL = 20;
            cout<<"Player spawned";
            loop = 1;
            sm_hops = 18;//The distance to the nearest exit
        }
        else if(start_room == 5)
        {
            ROW = 9;
            COL = 20;
            cout<<"Player spawned";
            loop = 1;
            sm_hops = 19;//The distance to the nearest exit
        }
        else if(start_room == 6)
        {
            ROW = 13;
            COL = 1;
            cout<<"Player spawned";
            loop = 1;
            sm_hops = 30;//The distance to the nearest exit
        }
        else if(start_room == 7 || start_room == 8 || start_room == 9 || start_room == 0)
        {
            
        }
        else
        {
            cout<<"Press the one of the keys 1, 3, 5, 7 or 8 to select a spawn point.";
        }
    } while (loop1==1);
    
       

    
    

    /*=======================================================================================================
    //Here is the do loop I used to allow the player to interact and change the array as the game is played
    =======================================================================================================*/
    do
    {
        loop = 1;
        //maze_posi = maze_array[ROW+1][COL];

        //This is where the user/player can begin to move around the array
        cout<<"\nYour character is at position "<<ROW<<" "<<COL<<endl;
        cout<<"\nWhich direction do you want to move? Right(6), Left(4), Up(8) or Down(2).";
        cout<<"\nPress 1 to display the maze again, and press 0 to exit"<<endl;
        cout<<"--> ";
        cin>>direct;

        if(direct == 2)
        {
            ROW = ROW + 1;
            hops = hops + 1;//Here I add one to the varible hops evertime the player moves

            
            //This is how the program detects if there is a wall (the value '1') at the location that
            //the player wants to move to
            if(maze_array[ROW][COL]==1)
            {
                //It tells the user if there is a wall in their way and then moves them back to where
                //then moves them back to where they were
                ROW = ROW - 1;
                cout<<"There is a wall there you cannot move";
                hops = hops - 1;//Here I remove one from 'hops' if the player hits a wall and gets set back onto the path so the amount of moves taken are still acurate
            }

            maze_array[ROW][COL]=4;
            loop = 1;
        }

        else if(direct == 4)
        {
            COL = COL - 1;
            hops = hops + 1;

            //It does the same here
            if(maze_array[ROW][COL]==1)
            {
                COL = COL + 1;
                cout<<"There is a wall there you cannot move";
                hops = hops - 1;
            }

            maze_array[ROW][COL]=4;
            loop = 1;
        }

        else if(direct == 6)
        {
            COL = COL + 1;
            hops = hops + 1;

            if(maze_array[ROW][COL]==1)
            {
                COL = COL - 1;
                cout<<"There is a wall there you cannot move";
                hops = hops - 1;
            }

            maze_array[ROW][COL]=4;
            loop = 1;
        }

        else if(direct == 8)
        {
            ROW = ROW - 1;
            hops = hops + 1;

            if(maze_array[ROW][COL]==1)
            {
                ROW = ROW + 1;
                cout<<"\nThere is a wall there you cannot move";
                hops = hops - 1;
            }

            maze_array[ROW][COL]=4;
            loop = 1;
        }

        else if(direct == 1)
        {
            print_update_maze();
        }
        
        else if(direct == 0)
        {
            maze_array[ROW][COL]=3;
            loop = 0;
        }

        
        else//This is so that if anything other than what I expect the user to input is inputed into the program it knows what to do
        {
            cout<<"error";            
            loop = 1;
        }

        //Here is how I make the program tell wether or not the player is at a special room or exit.
        if(ROW == 1 && COL == 1)
        {
            sp_rooms = sp_rooms + 1;
            cout<<"\nYou found special room 1!"<<endl;
        }
        
        else if(ROW == 1 && COL == 8)
        {
            sp_rooms = sp_rooms + 1;
            cout<<"\nYou found special room 3!"<<endl;
        }

        else if(ROW == 1 && COL == 15)
        {
            sp_rooms = sp_rooms + 1;
            cout<<"\nYou found special room 5!"<<endl;
        }

        else if(ROW == 4 && COL == 20)
        {
            sp_rooms = sp_rooms + 1;
            cout<<"\nYou found special room 7!"<<endl;
        }

        else if(ROW == 9 && COL == 20)
        {
            sp_rooms = sp_rooms + 1;
            cout<<"\nYou found special room 6!"<<endl;
        }

        else if(ROW == 13 && COL == 1)
        {
            sp_rooms = sp_rooms + 1;
            cout<<"\nYou found special room 8!"<<endl;
        }

        else if(ROW == 8 && COL == 0)
        {
            cout<<"\nCongrats! You found exit #2!"<<endl;
            cout<<"\nYOU HAVE COMPLETED AND EXITED THE MAZE!!!!!"<<endl;
            cout<<"\nYou moved "<<hops<<" times to get to the exit";
            cout<<"\nThe shortest route to the exit was only "<<sm_hops<<" moves!";
            cout<<"\nYou have found "<<sp_rooms<<" special rooms."<<endl;
            maze_array[8][0] = 3;
            loop = 0;
        }

        else if(ROW == 14 && COL == 12)
        {
            cout<<"\nCongrats! You found exit #4!"<<endl;
            cout<<"\nYOU HAVE COMPLETED AND EXITED THE MAZE!!!!!"<<endl;
            cout<<"\nYou moved "<<hops<<" times to get to the exit";
            cout<<"\nThe shortest route to the exit was only "<<sm_hops<<" moves!";
            maze_array[14][12] = 3;
            loop = 0;
        }

        
/*==============old code==========
        if(direct == 8)
            cout<<maze_array;
==================================*/           

    }
    while(loop == 1);



    /*===================================================
    Printing the new array with the progress of the player
    ====================================================*/
    
    printf("\n%c", top_left);//Top left cober of the border 

    //Loop to create the top mid section of the border 
    for(lnum = 1; lnum < 45; lnum++)
    {
        printf("%c", hor_mid);
    }
    printf("%c\n", top_right);//Top right coner of the border

    //Start of the loop to print the maze inside of the borders
    for(lnum = 0; lnum < 1; lnum++)
    {

            //Attempting to insert the maze into the borders
            for(int row=0; row<=14; row++)
            {
                printf("%c", ver_mid);//Left mid section of the border

                for(int col=0; col<=21; col++)  
                {
                    cout<<maze_array[row][col]<<" ";//The actual array gets printed at this point
                }
                printf("%c", ver_mid);//Right mid section of the border
                cout<<endl;
            }
        
    }

    printf("%c", bas_left);//Base left corner of the border 

    //Loop to create the base mid section of the border 
    for(lnum = 1; lnum < 45; lnum++)
    {
        printf("%c", hor_mid);
    }

    printf("%c", bas_right);//Base right corner of the border

    cout<<"\n\nThe shortest route to the exit was only "<<sm_hops<<" moves!";


/*==============old code==========
    //while(loop == 1);


    //maze_array[1][1]= 2;
==================================*/
}


/*==============================================================
Old code to move the player around the array that is abandoned
==============================================================*/
/*mvoid move_player(char maze_array)
{
    //Values for the positioning in array?
    int ROW = 1;
    int COL = 1;

    //variables I use to hold the values needed to allow the player to move along the maze
    int direct;
    int maze_posi = 0;
    

    cout<<"\nWhere do you want to move?";
    cin>>direct;
    while(maze_array[ROW][COL] !=21)
    {
        //maze_posi = maze_array[ROW+1][COL];


        cout<<"Your character is at position "<<ROW<<" "<<COL<<endl;
        cout<<"\nWHich direction do you want to move? Left(6), Right(4), Up(8) or Down(2)";
        cin>>direct;

        if(direct == 2)
        {
            ROW = ROW + 1;    
            maze_array[ROW][COL]=4;
        }



        if(direct == 8)
            break;
    }

    maze_array[1][1]= 2;
}*/


/*void movement()
{
    cout<<"\nWhere do you want to move?";
    cin>>move;
    while(maze_array !=21)
    {

    }

    maze_array[1][1]= 2;
}++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/



void intro()
{
    char u_resp;

    cout<<"++++++++++++++++++++++++++++++++++++++++++++Welcome to the Sython Maze game!++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"Start game? (Y for yes/ N for no)"<<endl;
    cin>>u_resp;
    if(u_resp == 'Y' || u_resp == 'y')
    {
        cout<<"\n+++++++++++++++++++++++++++RULES+++++++++++++++++++++++++++";
        cout<<"\nThis is a maze game where you try and get to the exit one move at a time.";
        cout<<"\nThere are 6(six) rooms and 2(two) exits. At the start of the game you choose";
        cout<<"\nwhere you want to spawn into or begin in the map.";
        cout<<"\nFrom there you get to either exits to beat the game.";
        cout<<"\nYou can also find one of the rooms that you can spawn into to gain extra points!";
        cout<<"\nKey: clover = special room";
        cout<<"\nHeart = Player's Character (You)";
        cout<<"\nDiamond = The path you've taken";
        cout<<"\nHollow Smilely Face = The inner walls of the maze";
        cout<<"\nLines = The outer walls of the maze";
        cout<<"\nSpade = The Exits";
        cout<<"\n+++++++++++++++++++++++++++GOOD LUCK!!!+++++++++++++++++++++++++++"<<endl;
        print_maze();
    }
    else if (u_resp == 'N' || u_resp == 'n')
    {
        cout<<"Thank you for playing the Sython Maze game";
    }
    else
    {
        printf("It didn't work?");
    }
    
}



int main()
{
    //start_game();

    //print_maze();

    intro();

    return 0;
}

