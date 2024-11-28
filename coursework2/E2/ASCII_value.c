#include <stdlib.h>
#include<stdio.h>


//define structure called DataSet
struct DataSet
{
    int x;
    int y;
    int z;
};



int main()
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
    for (i=0; i<=1027; i++)  //populate structure
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


    int a;
    printf("\nPlease enter the ASCII value for the character you wish to display: ");
    scanf("%d",&a);

    for(font[i].x=999;)

    
       switch (a)          /*start of switch*/

    {
        case 0: printf("\nBlack\n");
                break;


        case 1: printf("\nBrown\n");
                break;

        case 2: printf("\nRed\n");
                break;

        case 3: printf("\nOrange\n");
                break;
        
        case 4: printf("\nYellow\n");
                break;

        case 5: printf("\nGreen\n");
                break;

        case 6: printf("\nBlue\n");
                break;

        case 7: printf("\nViolet\n");
                break;

        case 8: printf("\nGrey\n");
                break;

        case 9: printf("\nWhite\n");
                break;

        default : printf("\nInvalid input\n");
                    break;
    }       /*end of switch*/

    return 0;
}