#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char* argv[]){
    int i;
    for(i=0;i<argc;i++){
        printf("Argumento pasado por ej4: %s\n",argv[i]);
    }

    sleep(3);
    return 0;
}