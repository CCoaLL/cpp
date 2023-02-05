#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, l;
    string files[100];
    bool flag;

    cin >> n;
    
    for (int i=0; i<n; i++) {   
        cin >> files[i];
    }

    l = files[0].size();

    
    for (int i=0; i<l; i++) {
        flag = true;
        
        for(int j=0; j<n; j++) { 
            if (files[j][i] != files[0][i]) {
                flag = false; 
            }
        }
        
        if (flag == false) {
            files[0][i] = '?';
        }
    }

    cout << files[0];

    return 0;
}