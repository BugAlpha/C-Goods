// Get a command from the user and execute it.                         
// Note the array size of UserCommand is limited to 20 change it if you want !                                                                
#include <stdio.h>                                                     
#include <stdlib.h>                                                    
int main() {                                                           
        char UserCommand[20];                                          
        printf("Hi, Give me a command to run: ");                      
        fgets(UserCommand, sizeof(UserCommand), stdin); // Read the command                                                                   
        printf("Running Command %s \n", UserCommand);                  
        system(UserCommand);                                           
        return 0;                                                      
}
