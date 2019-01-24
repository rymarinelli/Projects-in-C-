
/* Ryan Marinelli
   Engineering Computation
   24 September 2018
*/ 

// Allows for external output
#include <fstream> 

// Allows for input
#include <iostream> 

// Enables use of square root function later in code 
#include <cmath>

// Pre-processor command. 
using namespace std; 

// Adds file 
ifstream Infile; 

// Adds array of data
float InData[100];

// Declare global variables 
float mean;
float st_dev; 


// Prototype functions
void get_data (); 
void calculations();
void standard_dev ();
void output (); 

// Start of main 
int main (){
     
     // Inputs Data 
     void get_data();
     {
       cout <<"The following numbers comprise the data set:" << endl; // Explains to user what the numbers are
      Infile.open("prog4Data.txt"); // Opens the data file
      int i = 0; 
      while(!Infile.eof())//while not the end of the file 
      { 
          Infile>>InData[i]; // Gathers each number from the array
          cout<<InData[i]<< " "; 
          i++;         
                            }
                             
    Infile.close(); // closes file
     }
       // Start of calculations, mean is the argument to be passed            
      float calculations(mean);
      {  // Declaring Variables 
          float sum = 0.0;
          int i;
          float n; 
           n = 13; // number of iterations of loop
  
             for ( i=0; i<n ; i++) // For loop will continue through all the observations
               { 
                  sum = sum + InData[i]; 
                   mean  = sum/n; // Adds numbers         
                    }
                      
       }
float standard_dev(mean); // mean is passed onto standard dev for 
{
     int i; 
     float n; 
     float temp_dev; 
      n = 13; // number of iterations to be run 
      
     for (i = 0; i<n ; i++ ) // For loop will operate on all observations
        {
             
             temp_dev = InData[i] - mean;  // Subtracts each observation and the mean
             st_dev += temp_dev*temp_dev; // Takes power
                              
         }
         
            st_dev /= n; // Divides by the number of of observations
            
           st_dev = sqrt(st_dev); // Finds square root to find population SD.
         
     
}
void output (); // function outputs a textfile 
     {
  
    fstream file; // creates file for output
    file.open("Marinelli_Assignment_ Four.txt", ios::out); // labels file 
    
    // Inputs mean and SD into file.
    file << "The mean of the data is " << mean<< ". " << "The standard deviatation is "<< st_dev << "." << endl;
    
    // Reports results. 
    cout << "\nThe mean of the data is " << mean<< ". " << "\nThe standard deviatation is "<< st_dev << "." << endl;
    
    // Provides guidance to the user on how to access the file. 
    cout << "File was successfully written.\nIt is labeled Marinelli_Assignment_Four.txt. \nThanks!\n " << endl;
      }  
 
      system("pause");

}
