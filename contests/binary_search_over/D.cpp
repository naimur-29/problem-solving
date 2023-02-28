/*
⠀⠀⠀⠀⣠⣶⡾⠏⠉⠙⠳⢦⡀⠀⠀⠀⢠⠞⠉⠙⠲⡀⠀
⠀⠀⠀⣴⠿⠏⠀⠀⠀⠀⠀⠀⢳⡀⠀ ⡏⠀⠀⠀⠀⠀⢷
⠀⠀⢠⣟⣋⡀⢀⣀⣀⡀⠀⣀⡀⣧⠀⢸⠀⠀⠀⠀⠀ ⡇
⠀⠀⢸⣯⡭⠁⠸⣛⣟⠆⡴⣻⡲⣿⠀⣸⠀mkay.⡇
⠀⠀⣟⣿⡭⠀⠀⠀⠀⠀⢱⠀⠀⣿⠀⢹⠀⠀⠀⠀⠀ ⡇
⠀⠀⠙⢿⣯⠄⠀⠀⠀⢀⡀⠀⠀⡿⠀⠀⡇⠀⠀⠀⠀⡼
⠀⠀⠀⠀⠹⣶⠆⠀⠀⠀⠀⠀⡴⠃⠀⠀⠘⠤⣄⣠⠞⠀
⠀⠀⠀⠀⠀⢸⣷⡦⢤⡤⢤⣞⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢀⣤⣴⣿⣏⠁⠀⠀⠸⣏⢯⣷⣖⣦⡀⠀⠀⠀⠀⠀⠀
⢀⣾⣽⣿⣿⣿⣿⠛⢲⣶⣾⢉⡷⣿⣿⠵⣿⠀⠀⠀⠀⠀⠀
⣼⣿⠍⠉⣿⡭⠉⠙⢺⣇⣼⡏⠀⠀⠀⣄⢸⠀⠀⠀⠀⠀⠀
⣿⣿⣧⣀⣿.........⣀⣰⣏⣘⣆⣀
*/

#include <iostream>

using namespace std;

int arr[100009] {};

int main() {
    int sum{}, temp{}, n, m, t;
    // scanf("%d", &n);
    n = 100000;
    
    for(int i = 0; i < n; i++) {
        // scanf("%d", &temp); 
        temp = 5;
        sum += temp, arr[i] = sum;
    }

    // scanf("%d", &m);
    m = 100000;
    for(int i = 0; i < m; i++) {
        int res = n >> 1;
        // scanf("%d", &t);
        t = i+1;

        if (t <= arr[0]) {
            printf("%d\n", 1);
            continue;
        }

        while (true) {
            if (t > arr[res]) {
                res = (n + res) >> 1;

                if (t > arr[res-1] && t <= arr[res]) break;
                
                if (t > arr[res] && t <= arr[res+1]) {
                    res += 1;
                    break;
                }
            } else {
                res = res >> 1;

                if (t > arr[res-1] && t <= arr[res]) break;
                
                if (t > arr[res] && t <= arr[res+1]) {
                    res += 1;
                    break;
                }
            }
        }
        printf("%d\n", res + 1);
    }

	return 0;
}