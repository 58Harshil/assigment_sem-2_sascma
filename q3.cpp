#include <stdio.h>
#include<conio.h>
void main()
{
    char names[5][20];
    char surnmaes[5][20];
    char fullnames[5][40];
    int i;
    
    for(i=0;i<5;i++){
        printf("Enter name %d = ",i+1);
        scanf("%s",&names[i]);
        printf("Enter surname %d = ",i+1);
        scanf("%s",&surnmaes[i]);
    }
    
    for(i = 0; i<5;i++){
        strcpy(fullnames[i],names[i]);
        strcat(fullnames[i]," ");
        strcat(fullnames[i],surnmaes[i]);
    }
    
    printf("All Full Nmaes: \n");
    for(i=0;i<5;i++){
        printf("%s\n",fullnames[i]);
    }
    getch();
}
