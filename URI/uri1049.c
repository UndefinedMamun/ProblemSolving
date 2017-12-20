#include <stdio.h>

int main()
{
    char w[3][50];
    int i;
    for(i=0;i<3;i++)
        scanf("%s",&w[i]);
    if(strcmp(w[0], "vertebrado") == 0)
    {
        if(strcmp(w[1], "ave") == 0)
        {
            if(strcmp(w[2], "carnivoro") == 0)
                printf("aguia\n");
            else if(strcmp(w[2], "onivoro") == 0)
                printf("pomba\n");
        }
        else if(strcmp(w[1], "mamifero") == 0)
        {
            if(strcmp(w[2], "onivoro") == 0)
                printf("homem\n");
            else if(strcmp(w[2], "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if(strcmp(w[0], "invertebrado") == 0)
    {
        if(strcmp(w[1], "inseto") == 0)
        {
            if(strcmp(w[2], "hematofago") == 0)
                printf("pulga\n");
            else if(strcmp(w[2], "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if(strcmp(w[1], "anelideo") == 0)
        {
            if(strcmp(w[2], "hematofago") == 0)
                printf("sanguessuga\n");
            else if(strcmp(w[2], "onivoro") == 0)
                printf("minhoca\n");
        }
    }
    return 0;
}
