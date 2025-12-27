#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define MAX_SIZE 1024

//XOR Cipher
void Encrypt_XOR_Cipher(char *Src , char *Dest , char Key)
{
    int fdSrc = 0 , fdDest = 0;
    char Buffer[MAX_SIZE] = {'\0'};
    int iRet = 0 , i = 0;
    fdSrc = open(Src , O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Unable to open sorce file\n");
        return;
    }

    fdDest = open(Dest , O_WRONLY | O_CREAT | O_TRUNC , 0777);

    if(fdDest == -1)
    {
        printf("Unable to open destination file\n");
        return;
    }

    while((iRet = read(fdSrc , Buffer , sizeof(Buffer))) > 0)
    {
        printf("%d",iRet);

        for(i = 0 ; i < iRet ; i++)
        {
            Buffer[i] = Buffer[i] ^ Key;
        }

        write(fdDest , Buffer , iRet);
    }

    close(fdSrc);
    close(fdDest);
}

void Decrypt_XOR_Cipher(char *Src , char *Dest , char Key)
{
    int fdSrc = 0 , fdDest = 0;
    char Buffer[MAX_SIZE] = {'\0'};
    int iRet = 0 , i = 0;
    fdSrc = open(Src , O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Unable to open sorce file\n");
        return;
    }

    fdDest = open(Dest , O_WRONLY | O_CREAT | O_TRUNC , 0777);

    if(fdDest == -1)
    {
        printf("Unable to open destination file\n");
        return;
    }

    while((iRet = read(fdSrc , Buffer , sizeof(Buffer))) > 0)
    {
        printf("%d\n",iRet);

        for(i = 0 ; i < iRet ; i++)
        {
            Buffer[i] = Buffer[i] ^ Key;
        }

        write(fdDest , Buffer , iRet);
    }

    close(fdSrc);
    close(fdDest);
}

int main()
{
    char SrcName[50] = {'\0'};
    char DestName[50] = {'\0'};
    char Key = '\0' ;

    printf("Enter the name of originial file : \n");
    scanf("%s",&SrcName);

    printf("Enter the name of new encrypted file : \n");
    scanf("%s",&DestName);

    printf("Enter the key for encryption : \n");
    scanf(" %c",&Key);

    Encrypt_XOR_Cipher(SrcName,DestName,Key);

    printf("Enter the name of encrypted file : \n");
    scanf("%s",SrcName);


    printf("Enter the name of decrypted file : \n");
    scanf("%s",DestName);

    printf("Enter the key for decryption : \n");
    scanf(" %c",&Key);

    Decrypt_XOR_Cipher(SrcName,DestName,Key);


    return 0;
}