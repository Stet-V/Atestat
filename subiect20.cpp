#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

char lowercase(char c){
    if ((c >= 'A') && (c <= 'Z'))
        return c + 32;
    return c;
}

int main(){
    int x = 1;
    char s[70]:
    f.get(s, 70);
    for (int i = 0; i < strlen(s); i++){
        cout << lowercase(s[i]);
        if (s[i] == ' ') x++;
    }
    cout << endl << x;
    char ch;
    cin >> ch;
    for (int i = 0; i < strlen(s); i++){
        if ((i == 0) || (s[i - 1] == ' ') && (s[i] == 'M'))
            s[i] = ch;
        g << s[i];
    }
}