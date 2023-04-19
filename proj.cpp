#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    string tabula[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabula[i][j] = ".";
        }
        
    }

    int ox = rand() % 8;
    int oy = rand() % 8;
    for (int i = 0; i < 4; i++) {
        tabula[ox][oy] = "O";
        tabula[ox][oy + 1] = "O";
        tabula[ox + 1][oy] = "O";
        tabula[ox + 1][oy + 1] = "O";
    }

    while (true) {
        int ix = rand() % 9;
        int iy = rand() % 6;
        if (tabula[ix][iy] == "." and tabula[ix][iy + 1] == "." and tabula[ix][iy + 2] == "." and tabula[ix][iy + 3] == ".") {
            for (int i = 0; i < 4; i++) {
                tabula[ix][iy] = "I";
                tabula[ix][iy + 1] = "I";
                tabula[ix][iy + 2] = "I";
                tabula[ix][iy + 3] = "I";
            }
            break;
        }
    }

    while (true) {
        int jx = rand() % 8;
        int jy = rand() % 7;
        if (tabula[jx][jy] == "." and tabula[jx + 1][jy] == "." and tabula[jx + 1][jy + 1] == "." and tabula[jx + 1][jy + 2] == ".") {
            for (int i = 0; i < 4; i++) {
            tabula[jx][jy] = "J";
            tabula[jx + 1][jy] = "J";
            tabula[jx + 1][jy + 1] = "J";
            tabula[jx + 1][jy + 2] = "J";
            }
            break;
        }
    }

    while (true) {
        int lx = rand() % 8;
        int ly = rand() % 7;
        if (tabula[lx][ly + 2] == "." and tabula[lx + 1][ly] == "." and tabula[lx + 1][ly + 1] == "." and tabula[lx + 1][ly + 2] == ".") {
            for (int i = 0; i < 4; i++) {
            tabula[lx][ly + 2] = "L";
            tabula[lx + 1][ly] = "L";
            tabula[lx + 1][ly + 1] = "L";
            tabula[lx + 1][ly + 2] = "L";
            }
            break;
        }
    }

    while (true) {
        int sx = rand() % 8;
        int sy = rand() % 7;
        if (tabula[sx][sy + 1] == "." and tabula[sx][sy + 2] == "." and tabula[sx + 1][sy] == "." and tabula[sx + 1][sy + 1] == ".") {
            for (int i = 0; i < 4; i++) {
                tabula[sx][sy + 1] = "S";
                tabula[sx][sy + 2] = "S";
                tabula[sx + 1][sy] = "S";
                tabula[sx + 1][sy + 1] = "S";
            }
            break;
        }
    }

  


    while (true) {
        int tx = rand() % 8;
        int ty = rand() % 7;
        if (tabula[tx][tx + 1] == "." and tabula[tx + 1][tx] == "." and tabula[tx + 1][tx + 1] == "." and tabula[tx + 1][tx + 2] == ".") {
            for (int i = 0; i < 4; i++) {
                tabula[tx][tx + 1] = "T";
                tabula[tx + 1][tx] = "T";
                tabula[tx + 1][tx + 1] = "T";
                tabula[tx + 1][tx + 2] = "T";
            }
            break;
        }
    }




    while (true) {
        int zx = rand() % 8;
        int zy = rand() % 7;
        if (tabula[zx][zy] == "." and tabula[zx][zy + 1] == "." and tabula[zx + 1][zy + 1] == "." and tabula[zx + 1][zy + 2] == ".") {
            for(int i = 0; i < 4; i++){
     	            tabula[zx][zy] = "Z";
     	            tabula[zx][zy + 1] = "Z";
     	            tabula[zx + 1][zy + 1] = "Z";
     	            tabula[zx + 1][zy + 2] = "Z";
            }
       break;
        }
    }




    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << tabula[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
