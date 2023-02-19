/*********************************************
* Alabama A&M University - EE109 - Spring 2023
* Lesson 12 sample code: Arrays and Sorting
* By:            Prof J Zehnpfennig, PE
* Created:       16 Februrary 2023
* Last Updated:  16 Februrary 2023
* Happy President's Day!
*********************************************/


#include <iostream>

using namespace std;

int main() 
{
  bool done = false;
  int x = 0, y = 0, temp = 0; 
  int jerseyNumbers[15] = {2,75,45,72,12,13,14,6,24,35,48,8,3,57,33};
  
  while (done == false)
    {
      done = true;
      
      cout << "\n\nThe list after " << y << " sort iterations is: ";
      y++;
        
      for (x = 0; x < sizeof(jerseyNumbers) / sizeof(int);x++)
        {
          cout << jerseyNumbers[x] << " ";
        }
      for (x = 1; x < sizeof(jerseyNumbers) / sizeof(int);x++)
        {
          if (jerseyNumbers[x-1] > jerseyNumbers[x])
          {
            done = false;
            temp = jerseyNumbers[x];
            jerseyNumbers[x] = jerseyNumbers[x-1];
            jerseyNumbers[x-1] = temp;
          }
        }
    }
  
  cout << "\nThe list is sorted!\n";
  return 0;
}