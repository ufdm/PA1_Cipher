#include <stdio.h>
#include <math.h>

//Declaring Functions

int convertToCaps (int letter);
int rotEncrypt(int key, int letter);

int main()
{
    char msg[] = "Testing. Testing. Is this thing on?\n";
    int tempN;
    int key;
    
    key = 1;
    
           
    for(int i = 0; msg[i] != '\0'; i++) {
        printf("%c", msg[i]);
        
        if((msg[i] >= 65 && msg[i] <= 90) || (msg[i] >= 97 && msg[i] <= 122)) {            
            tempN = msg[i];
            tempN = convertToCaps(tempN);
            tempN = rotEncrypt(key, tempN);
            msg[i] = tempN;
        }
    }
        
    for(int i = 0; msg[i] != '\0'; i++) {
        printf("%c", msg[i]);
    }
    printf("\n");

    
    return 0;
}

int convertToCaps (int letter) {
    if (letter > 97) {
            letter = letter - 32;
            return(letter);
    }
    return(letter);
}

int rotEncrypt(int key, int letter) {
    letter = (letter + key);
    
    return (letter);    
}





/*    int choice;
    
    printf("Please choose an option : \n");
    printf("\n");
    printf("1. Encryption of a message \n");
    printf("2. Decryption of a message \n"); 
    
    scanf("%d", &choice);
    
    
    switch(choice) {
        case 1:
            printf("Choose Cipher Type: \n \n");
            printf("1. Encryption of a message with a rotation cipher \n");
            printf("2. Decryption of a message encrypted with a rotation cipher \n");     
        
    } 
   
    
    printf("Integer = %d \n", choice); */