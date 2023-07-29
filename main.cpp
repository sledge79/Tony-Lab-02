#include "mbed.h"


int main()
{
    printf("Lab 2 program \r\n");
    int max_term = 10;
    int term_1 = 0;
    int term_2 = 1;
    int next_term = 0;
    for(int i=1; i<max_term; i++){

        if(i == 1)
           printf("%d, ", term_1);
        if (i == 2)
           printf("%d, ", term_2);
        else{

            next_term = term_1 + term_2;
            term_1 = term_2;
            term_2 = next_term;
            printf("%d, ", next_term);
        }      
    }
printf("\r\n");    
while (true) {

    }
}

