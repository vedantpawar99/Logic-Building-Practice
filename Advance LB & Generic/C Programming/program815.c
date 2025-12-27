// EncryptDecryptClient.cpp file contains

#include<iostream>
using namespace std;

#include<windows.h>

#include"pch.h"

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

typedef void (*FPTR)void (char*, char*, int)

int main()
{
    HINSTANCE hdll = LoadLibrary("EncryptDecrypt.dll");
    if(hdll == NULL)
    {
        std::cout<<"Unable to Load the Library\n";
        return -1;
    }

    FPTR fp = (FPTR)GetProcAddress(hdll, "Encrypt_Ceaser_Cipher");

    if(fp == NULL)
    {
        std::cout<<"Unable to get address of function\n";
        return -1;
    }

    fp("Input.txt", "Output.txt", 21);

    FreeLibrary(hdll);

    return 0;
}
// this application should use encryptdecrypt.dll
// this .dll should be placed in x64/debug

// this is the client which the dll to access

