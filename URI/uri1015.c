#include <stdio.h>

int main(){

    int a,i=0,temp;
    int notes[7]={100,50,20,10,5,2,1};
    int notesSize = sizeof(notes)/sizeof(notes[0]);
    scanf("%d", &a);
    printf("%d\n", a);
    temp = a;
    for(i; i<=notesSize-1; i++){
        printf("%d nota(s) de R$ %d,00\n", temp/notes[i], notes[i]);
        temp = temp%notes[i];
    }
    return 0;
}
