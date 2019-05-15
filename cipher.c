#include <stdio.h>
#include <math.h>

char convertToCaps (char msg[], int i);
char rotEncrypt(int key, char msg[], int i);

int main()
{
    char msg[] = "This is just a bunch of if satements isnt it?";
    int tempN;
    
    for(int i = 1, msg[i] != \0 /*check rules for chars*/ ) {
        tempN = msg[i];
        tempN = convertToCaps(tempN, i);
        tempN = rotEncrypt
        msg[i] = 
    }
    
    
    return 0;
}

char convertToCaps (char msg[], int i) {
    if (msg[i] > 97) {
            msg[i] = msg [i] - 32;
    }    
}

char rot Encrypt(int key, char msg[], int i) {
    char msg[i] += key;
    
    return (msg[i]);
}





//int choice;
    /* Notes
    use an arry to store the message? and char to save decrypted/encrypted messages
    */
    /*int choice;
    
    printf("Please choose an option : \n");
    printf("\n");
    printf("1. Encryption of a message \n");
    printf("2. Decryption of a message \n"); 
    
    scanf("%d", &choice);
    
    // 
    switch(choice) {
        case 1:
            printf("Choose Cipher Type: \n \n");
            printf("1. Encryption of a message with a rotation cipher \n");
            printf("2. Decryption of a message encrypted with a rotation cipher \n");     
        
    } 
   
    
    printf("Integer = %d \n", choice); */