#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char text[27] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char key[27] = {' ','m','n','b','v','c','x','z','p','o','u','y','t','r','e','w','q','a','s','d','l','k','j','h','g','f','i'};
    char str_inp[50];
    cout<<"Enter the text to be decrypted : ";
    gets(str_inp);
    int i,j;
    char dec_txt[50];
    for(i = 0 ; i < 50 ; i++)
    {
        for( j = 0 ; j < 27 ; j++)
        {
            if(str_inp[i]==key[j])
            {
                dec_txt[i] = text[j];
            }
        }
    }
    cout<<"\n The decrypted text : ";
    puts(dec_txt);
}

