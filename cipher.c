#include <stdio.h>
#include <math.h>
#include <stdlib.h> //For the exit function
#define MAX 500 //Size for the arrays
//Declaring Functions
int convertToCaps (int letter); 
int rotEncrypt(int key, int tempN);
int rotDecrypt(int key, int tempN);


int main()
{
    int choice; // The varible that holds the choice of the user for the switch menu
    int key = 1;
    int tempN;
    int buffer;
    
    char msg[MAX]; //Declaring the array to hold the message
        
    while(choice != -1) {
        //Menu Selections displayed to the user
        printf("\n");
        printf("Please choose an option : \n");        
        printf("1. Encryption of a message \n");
        printf("2. Decryption of a message \n");
        printf("-1 to Exit\n");
        scanf("%d\n ", &choice); //Scans the choice inputed
        fflush(stdin);
        switch(choice) {
            case 1:               
                printf("Please enter message:\n");                
                                              
                for(int i = 0; msg[i] != '\0'; i++) { //Reads the message entered.
                    scanf("%[^\n]c ", &msg[i]);
                    
                }
                
                fflush(stdin);               
                printf("Here is the encrypted message:\n");
                for(int i = 0; msg[i] != '\0'; i++) {              
                    tempN = msg[i];
                    msg[i] = rotEncrypt(key, tempN);
                    printf("%c", msg[i]);
                }
                printf("\n");
                    
                break;
                
            case 2:
                printf("Please enter message:\n");                
                                              
                for(int i = 0; msg[i] != '\0'; i++) { //Reads the message entered.
                    scanf("%[^\n]c ", &msg[i]);
                    
                }
                
                fflush(stdin);               
                printf("Here is the decrypted message:\n");
                for(int i = 0; msg[i] != '\0'; i++) {              
                        tempN = msg[i];
                        msg[i] = rotDecrypt(key, tempN);
                        printf("%c", msg[i]);
                }
                printf("\n");
                break;
                
        }
    }

        
    


    return 0;   
    
}
//Function tht coverts the number values of chars from lowercase to uppercase
int convertToCaps (int letter) {
    if (letter > 97) {
            letter = letter - 32;
            return(letter);
    }
    return(letter);
}

//Function for the encrypting of a message using a rotation cipher and provided key
int rotEncrypt(int key, int tempN) {
    if((tempN >= 65 && tempN <= 90) || (tempN >= 97 && tempN <= 122)) {        // Checking if it is a character    
            tempN = convertToCaps(tempN);
            tempN = (tempN + key);
    }
    return (tempN);
}

int rotDecrypt(int key, int tempN) {
    if((tempN >= 65 && tempN <= 90) || (tempN >= 97 && tempN <= 122)) {        // Checking if it is a character    
            tempN = convertToCaps(tempN);
            tempN = (tempN - key);
    }
    return (tempN);
}





