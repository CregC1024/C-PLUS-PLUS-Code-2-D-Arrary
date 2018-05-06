//**************************************************************************************************
//Filename: Sullivan_Creg_Assignment_4
//Purpose: To Create a program that stores data using 2 D array
//Author: Creg C. Sullivan Sr.
//Date: February 18, 2010
//***************************************************************************************************

// Headers and other Technical Items

#include <iostream>
#include <cstdlib>
#include <iomanip>         // For setw()

using namespace std;

//Function Prototypes

void pause(void);
void showArray(int[],int[]);
// Variables

const int NUM_COLS = 7;
const int TBL_ROWS = 5;
int ratings;
int table1;

//*******************************************************************************
//main
//*******************************************************************************

int main(void)
{
    cout << "\nRate the movie from the range 1-5, 1(terrible) and 5(excellent) ";
    cin >> ratings;
    while (ratings < 1 || ratings > 5)
    {
          cout << "ERROR: ENTER A RATING IN THE RANGE 1-5:";
          cout << ratings;
     }
int table1[TBL_ROWS][NUM_COLS]={{100,101,102,103,104,105},
                                {0,3,1,5,2,1,5},
                                {1,4,2,1,4,2,4},
                                {2,3,1,2,4,4,1},
                                {3,5,1,4,2,4,2}};
      
      cout << "The reviews are as follows:\n";
            showArray(int[],int[]);
                                 
     pause();
     return 0;
}
//******************************************************************************
//showArray
//******************************************************************************
void showArray(int array[][NUM_COLS], int numRows)
{
     for(int row = 0; row < numRows; row++)
     {for(int col = 0; col < NUM_COLS; col++)
       {
              cout << setw(7) << array[row][col] << " ";
              }
              cout << endl;
              }
       }

//*******************************************************************************
//pause
//*******************************************************************************

    void pause(void)
{
     cout << "\n\n";
     system("PAUSE");
     cout << "\n\n";
     return;
}
//*******************************************************************************
//end program
//*******************************************************************************
