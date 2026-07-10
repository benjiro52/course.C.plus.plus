#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int keys[n + 1];        
    int visited[n + 1] = {0}; 

    for (int i = 1; i <= n; i++) {
        cin >> keys[i];     
    }

    int ant = 0;  

    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {  
            int chest = i;
            while (visited[chest] == 0) {  
                visited[chest] = 1;      
                chest = keys[chest];      
            }
            ant++;  
        }
    }

    cout << ant;  
    return 0;
}
