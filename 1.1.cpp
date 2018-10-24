#include<iostream>

using namespace std;

void Find_Position(string & str, string & substring)
{
    int sl= substring.length();
    int max= str.length()- sl +1;

    int i = 0, j = 0;

    for(i = 0, j = 0; str[i]!='\0' && substring[j]!='\0'; i++)
    {
        if(str[i] == substring[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == sl)
        cout << substring << " found at position " << i - j + 1 << " from " << str <<endl;
    else
        cout << substring << " not found from " <<str << endl;
}


int main()
{
    string S="JOHN PAUL JONES", T="A THING OF BEAUTY IS A JOY FOREVER";
    string s1="JO",s2="JOY",s3="A",s4="THE";

    Find_Position(S, s1);
    cout << "\t" << endl;
    Find_Position(T, s1);
    cout<<endl;
    Find_Position(S, s2);
    cout << "\t" << endl;
    Find_Position(T, s2);
    cout<<endl;
    Find_Position(S, s3);
    cout << "\t" << endl;
    Find_Position(T, s3);
    cout<<endl;
    Find_Position(T, s4);
    cout << "\t" << endl;
    Find_Position(T, s4);
    cout<<endl;

    return 0;
}
