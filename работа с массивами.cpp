#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int MAS1 = 5;
const int MAS2 = 10;
int mas1[MAS1];
int mas2[MAS2];

void random();

int main()
{
    setlocale(0, "");
    
    random();
    
    for (int i = 0;i < MAS1;i++) {

        cout << setw(5) << mas1[i];

    }

    cout << endl;

    for (int i = 0;i < MAS2;i++) {

        cout << setw(5) << mas2[i];

    }

    return 0;
}

void random()
{
    setlocale(0, "");

    srand(time(0));

    for (int i = 0;i < MAS1;i++) {

        mas1[i] = rand() % 100 + 1;

    }

    for (int i = 0;i < MAS2;i++) {

        mas2[i] = rand() % 100 + 1;

    }
    
}