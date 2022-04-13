#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Please provide a regular expression:";
    cin >> s;

    int count = 0;
    int len = s.length();
    for(int i =0;i<len ;i++)
    {
        if(s[i]=='.'){
            if(s[i]=='*'){
                char ch = s[i-2];
                cout << "arr[" <<count << "] [" <<count+1 << "] = " << ch<< endl;
            }
            else{
                cout << "arr[" <<count << "] [" <<count+1 << "] = " << s[i-1]<< endl;
            }

            cout << "arr[" << count+1 << "] [" << count+2 << "] = e" << endl;
            cout << "arr[" << count+2 << "] [" << count+3 << "] = " << s[i+1] << endl;
            count = count+4;
        }

        if(s[i]=='*'){
            cout << "arr[" <<count << "] [" <<count+1 << "] = e"<< endl;
            cout << "arr[" <<count << "] [" <<count+3 << "] = e"<< endl;
            cout << "arr[" <<count+1 << "] [" <<count+2 << "] = " << s[i-1]<< endl;
            cout << "arr[" <<count+2 << "] [" <<count+1 << "] = e"<< endl;
            cout << "arr[" <<count+2 << "] [" <<count+3 << "] = e"<< endl;
            count = count+4;
        }

        if(s[i]=='U'){
            cout << "arr[" <<count << "] [" <<count+1 << "] = e"<< endl;
            cout << "arr[" <<count << "] [" <<count+2 << "] = e" << endl;
            cout << "arr[" <<count+1 << "] [" <<count+3 << "] = " << s[i-1]<< endl;
            cout << "arr[" <<count +3<< "] [" <<count+4 << "] = e"<< endl;
            cout << "arr[" <<count+5 << "] [" <<count+6 << "] = " << s[i+1]<< endl;
            cout << "arr[" <<count +6<< "] [" <<count+4 << "] = e"<< endl;
            count = count+6;
        }
    }
}
