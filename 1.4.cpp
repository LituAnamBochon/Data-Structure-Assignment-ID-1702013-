#include<bits/stdc++.h>

#define size    1000000
using namespace std;

void DELETE(char* txt,int pos, int len)
{
    cout<<"After Deleting..."<<endl;
    char strng[size];
    int i=0,j=0,k=pos-1;
    for(j=0; j<k; j++)
    {
        strng[i]=txt[j];
        i++;
    }
    for(j=j+len; txt[j]!='\0'; j++)
    {
        strng[i]=txt[j];
        i++;
    }
    strng[j]='\0';
    puts(strng);
}
void REPLACE(string & str, string & sub_string1, string & sub_string2)
{
    cout<<"After removing..."<<endl;
    int sbl= sub_string1.length();
    int snl= sub_string2.length();
    int max= str.length()- sbl +1;
    int i=0, j=0,k=0;
    for(i = 0, j = 0; str[i]!='\0' && sub_string1[j]!='\0'; i++)
    {
        if(str[i] == sub_string1[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    char new_str[80]={'\0'};
    if(j==sbl)
    {
        int m=i-j+1;
        for(i=0; i<m-1; i++)
        {
            new_str[k]=str[i];
            k++;
        }

        int save=i;
        for(i=0; sub_string2[i]!='\0'; i++)
        {
            new_str[k]=sub_string2[i];
            k++;
        }

        int n=save+j;
        for(n; str[n]!='\0'; n++)
        {
            new_str[k]=str[n];
            k++;
        }
        new_str[k]='\0';

        cout<<new_str<<endl;

    }

    else
    {
        cout<<str<<endl;
    }
}
int main()
{
    char t1[]="AAABBB",t2[]="JOHN PAUL JONES";
    DELETE(t1,2,2);
    cout<<endl;
    DELETE(t2,6,5);
    cout<<endl;
    string s1="AAABBB", s2="AA", s3="BB", a1="JOHN PAUL JONES", a2="PAUL", a3="DAVID";
    REPLACE(s1,s2,s3);
    cout<<endl;
    REPLACE(a1,a2,a3);
    return 0;
}
