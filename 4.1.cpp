#include<iostream>

using namespace std;

int main()
{

    string s, t;
    cout<<"Enter a postfix arithmetic expression: ";
    getline(cin, s);
    s += ',';

    int st[100000], pos = -1, n, a, b;

    for(int i=0; i<s.size(); i++){
        if(s[i]==','){
            if(t[0]>='0' && t[0]<='9'){
                n = stoi(t);
                st[++pos] = n;
            }
            else{
                b = st[pos--];
                a = st[pos--];

                if(t[0]=='+'){
                    st[++pos] = a + b;
                }
                else if(t[0]=='-'){
                    st[++pos] = a - b;
                }
                else if(t[0]=='*'){
                    st[++pos] = a * b;
                }
                else if(t[0]=='/'){
                    st[++pos] = a / b;
                }
            }

            t = "";
        }
        else if((s[i]>='0' && s[i]<='9') || s[i] != ' ') t += s[i];
    }

    cout<<"OUTPUT: "<<st[0]<<endl;

    return 0;
}
