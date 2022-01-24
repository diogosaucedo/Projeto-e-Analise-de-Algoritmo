#include <stdio.h>
#include <string.h>

int main()
{

    FILE *inputFile;
    inputFile = fopen("onze.in", "r");

    FILE *outputFile;
    outputFile = fopen("onze.out","a");

    int counter, even, odd, difference;
    char line[1002]; // \n is computing
    while(fgets(line, 1002, inputFile) != NULL)
    {
        odd = 0;
        even = 0;
        counter = 0;
        if(line[0] - '0' == 0)
        {
            break;
        }
        while(line[counter]!='\0' && line[counter]!='\n')
        {
            if (counter % 2 == 0)
            {
                odd =  odd + (line[counter] - '0');
            }
            else
            {
                even = even + (line[counter] - '0');
            }
            counter += 1;
        }
        difference =  odd - even;

        if (difference % 11 == 0 && line[counter] == '\n')
        {
            printf("SIM\n");
            fprintf(outputFile, "SIM\n");
        }
        else
        {
            printf("NAO\n");
            fprintf(outputFile, "NAO\n");
        }
    }
    fclose(outputFile); // The two files are identical
    return 0;

}

