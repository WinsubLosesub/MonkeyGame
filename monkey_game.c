// Make Monkey
// Monkey_game.c
//
// This program was written by Insub Jeon (z5361432)
// on 23/09/2021
//
// Make monkey

#include <stdio.h>

int main(void) {
    
    // This code will make anything in the brackets run forever
    while (1) {
        char ears;
        char hair;
        char mouth;
        char tail;
        int legs;
        int toggle = 0;
        int maybe;
        char eyes;
        while (toggle == 0) {
            printf("Hey player!\n");
            printf("What hair does your monkey have?\n");
            scanf(" %c", &hair);
            printf("What do its eyes look like?\n");
            scanf(" %c", &eyes);
            printf("What ears does your monkey have?\n");
            scanf(" %c", &ears);
            printf("What kind of mouth does your monkey have?\n");
            scanf(" %c", &mouth);
            printf("So you're saying your monkey's face looks like this: \n\n");
            printf("  %c%c%c\n", hair, hair, hair);
            printf("%c(%c %c)%c\n", ears, eyes, eyes, ears);
            printf("  (%c)\n", mouth);
            printf("\nIf you're not happy with it type ""0"" or");
            printf(" type any other integer and forever hold your peace.\n");
            scanf("%d", &maybe);
            if (maybe != 0) {
                toggle = 1;
            }
        }
        printf("How many legs does your monkey have?\n");
        scanf("%d", &legs);
        printf("And it's tail?\n");
        scanf(" %c", &tail);
        int counter = 0;
        printf("Here's your monkey\n");
        printf("\n");
        while (counter < legs - 1) {
            printf("   ");
            counter++;
        }
        printf("    %c%c%c\n", hair, hair, hair);
        counter = 0;
        while (counter < legs - 1) {
            printf("   ");
            counter++;
        }
        printf("  %c(%c %c)%c\n", ears, eyes, eyes, ears);
        counter = 0;
        while (counter < legs - 1) {
            printf("   ");
            counter++;
        }
        printf("     (%c)\n", mouth);
        printf("%c%c ", tail, tail);
        printf(" ");
        counter = 0;
        while (counter < legs - 1) {
            printf("   ");
            counter++;
        }
        printf("||\n");
        counter = 0;
        printf("  ");
        while (counter < legs) {
            printf("---");
            counter++;
        }
        printf("\n ");
        counter = 0;
        while (counter < legs) {
            printf(" |_");
            counter++;
        }
        printf("\n");
        char end;
        printf("Nice, you're a winner in my books!\n");
        printf("Enter any character to play again, or ctrl c to quit");
        scanf(" %c", &end);
    }
    
    return 0;
}
