#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

char c[7][7];
    for(int i=0;i<7;i=i+1)
       for(int j=0;j<7;j=j+1)
       if(rand()%2 == 0){
         c[i][j]=65+rand()%26;}
         else{c[i][j]=97+rand()%26;}

for (int i=0; i<7; i++){
    for (int j=0;j<7;j++){
        printf("%c  ", c[i][j]);
    }
    printf("\n");
}

    return 0;
}