#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0;
    char  d[100] = "TSDFDLEETXSDA";
    char l[]="DLEETX",sd[100],ds[100];
    // scanf("%s",d);
    
    sd[0]='D', sd[1]='L', sd[2]='E', sd[3]='S',sd[4]='T',sd[5]='X';

    j=6;

    while(d[i]!='\0') {
        if(d[i]=='D'&& d[i+1]=='L'&& d[i+2]=='E') {
            sd[j]='D', sd[j+1]='L', sd[j+2]='E', sd[j+3]='D', sd[j+4]='L', sd[j+5]='E';
            j+=6;
            i+=3;
        } else {
            sd[j++]=d[i++];
        }
    }

    sd[j]='\0';
    strcpy(ds,sd);
    strcat(sd,l);
    printf("After Stuffing: ");
    printf("%s",sd);

    i=0;
    j=6;
    while(ds[j]!='\0') {
        if( ds[j]=='D'&&ds[j+1]=='L'&& ds[j+2]=='E'&& ds[j+3]=='D'&& ds[j+4]=='L'&& ds[j+5]=='E') {
            d[i]='D', d[i+1]='L',d[i+2]='E';
            j+=6;
            i+=3;
        } else {
            d[i++]=ds[j++];
        }
    }
    d[i]='\0';
    printf("\n\nAfter De−stuffing: ");
    printf("%s",d);
}