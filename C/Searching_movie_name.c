#include <stdio.h>
#include <string.h>
int main()
{
    int n=0,j=0;
    char a;
    scanf("%d",&n);
    char movies[n][50];
    char keyword[10];
    for (int i=0;i<n;i++){
        scanf(" %[^\n]",movies[i]);
    }
    scanf(" %[^\n]",keyword);
    int found=0;
    char tempmovie[100];
    for(int i=0;i<n;i++){
        strcpy(tempmovie,movies[i]);
        if (strstr(tempmovie,keyword) != NULL) {
            printf("%s\n",movies[i]);
            found=1;
        }
    }
    if(found==0){
        printf("no movie found");
    }
    return 0;
}
