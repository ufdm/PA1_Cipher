#include <stdio.h>
#include <math.h>

int convertToCaps (int letter);
int rotEncrypt(int key, int letter);

int main()
{
    char msg[];
    int tempN;
    int key;
    
    msg[] =  = "This is just a bunch of if satements isnt it?"
    key = 34
    
    for(int i = 1; msg[i] != "\0"; /*check rules for chars*/ ) {
        tempN = msg[i];
        tempN = convertToCaps(tempN);
        tempN = rotEncrypt(key, tempN);
        msg[i] = tempN;
    }
    
    
    return 0;
}

int convertToCaps (int letter) {
    if (letter > 97) {
            letter = letter - 32;
    }    
}

int rotEncrypt(int key, int letter) {
    letter += key;
    
    return (letter);
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