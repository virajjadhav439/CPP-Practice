#include <iostream>

// Wrooooooooooooooooooong



using namespace std;
int main(){
    // inputs
    int robot[] = {4};
    int distance[] = {3};
    int walls[] = {1,10};
    
    int rightSideClosestRobot = -1;
    int leftSideClosestRobot = 100001;
    int prev_max_Destroyed = 0;
    int max_destroyed = 0;
    for (int i = 0; i < sizeof(robot) / sizeof(robot[0]); i++)
    {
        max_destroyed = 0;
        //Setting the upper and lower limits
        for (int j = 0; j < sizeof(robot) / sizeof(robot[0]); j++)
        {
            // Setting the right side limit
            if (j>rightSideClosestRobot && j<robot[i])
            {
                rightSideClosestRobot = j;
            }
            // Setting the left side limit
            if (j<leftSideClosestRobot && j>robot[i])
            {
                leftSideClosestRobot = j;
            }
            //Firing 
            for (int k = 0; k < sizeof(walls) / sizeof(walls[0]); k++)
            {
            //Firing the Left Side
                if (k>leftSideClosestRobot && k<=robot[i])
                {
                    max_destroyed = max_destroyed+1;
                }
            //Firing the Right Side
                if (k<rightSideClosestRobot && k>=robot[i])
                {
                    max_destroyed = max_destroyed+1;
                }
            }
            
        }
        if (max_destroyed>prev_max_Destroyed)
        {
            prev_max_Destroyed = max_destroyed;
        }
        
    }
    cout<<max_destroyed<<endl;
    cout<<prev_max_Destroyed<<endl;
    
    return 0 ;
}