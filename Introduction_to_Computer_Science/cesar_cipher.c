#include <stdio.h>

char cesarCipher(char message, int k){
    char * substitive;
    char encripted;
    for(substitive=message;sizeof(substitive)<sizeof(message);substitive++){
        int character = (int)*substitive + k;
        if(character>123){
            character = character - 123 + 97;
            encripted += character;
        }else{
            encripted += character;
        }
    }
    return encripted;
};

int main(){
    char message = "saas";
    int k = 2;
    printf("%s",cesarCipher(message, k));
    return 0;
}