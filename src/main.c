#include <stdio.h>
#include <string.h>
#include "espl_lib.h"

int input_nb = 0;
char input_string[] = "\0";

int main() {

while (strcmp(input_string, "q") != 0) {
    printf("Please input a number that will be transformed into a string: ");
    scanf("%d", &input_nb); 
    printf("--> Here's the returned string: %s\n\n", num_to_words(input_nb));

    printf("Press \"c\" if you want to continue, or \"q\" if you want to quit: ");
    scanf("%s", input_string);
    printf("--------------------------------------------\n\n");

}

return(0);
}