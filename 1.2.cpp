#include<iostream>
#include<string.h>

#define size    1000000

using namespace std;

void INSERT(char* text, int n,char* str)
{
    char strng[size];
    int i=0,j=0,k=0;

    while(text[i] != '\0')
    {
        if(i==n-1)
        {
            while(str[k] != '\0')
            {
                strng[j] = str[k];
                j++;
                k++;
            }
            int l=strlen(str);
            if(k==l)
            {
                strng[j]=text[n];
                j++;
            }
        }
        else
        {
            strng[j] =text[i];
            j++;
        }
        i++;
    }
    strng[j]='\0';
    puts(strng);
}
int main()
{
    char text[]="AAAAA",str1[]="BBB";
    int p1=1, p2=3, p3=6;
    INSERT(text,p1,str1);
    cout<<endl;
    INSERT(text,p2,str1);
    cout<<endl;
    INSERT(text,p3,str1);
    cout<<endl;
    return 0;
}
