#include <stdio.h>
#include <stdlib.h>


//define structure called DataSet
struct DataSet
{
    int x;
    int y;
    int z;
};

int main ()
{
    struct DataSet font[1027]; //define structure, type dataset, elements: 1027
    

    //declare file stream variables
    FILE *fInput;   //create 2 file pointers (they are pointing to nothing at the moment)

    
    //try and open the test "sample.txt" (in the current directory) file foro writing
    fInput = fopen("SingleStrokeFont.txt", "r");

    //check we were able to  open the file
    if (fInput == NULL)
    { 
    printf("\nthe file could not be opened for reading, exiting");
    return -1;
    }

    //other variables needed
    int i,d,j;

    // read line by line the first 10 lines written into variable 
    for (i=0; i<=10; i++)  //populate structure
    {
        for (j=0; j<3;)  //assigns 3 characters to a line then repeats
        {       
            fscanf(fInput, "%d", &d);  //assigns x character
            font[i].x=d;
            j++;

            fscanf(fInput, "%d", &d);  //assigns y character
            font[i].y=d;
            j++;

            fscanf(fInput, "%d", &d);  //assigns z character
            font[i].z=d;
            j++;
        }
        //printf("%d %d %d\n",font[i].x, font[i].y, font[i].z);    
    }

    //and close the file
    fclose(fInput);

    return 0;
}