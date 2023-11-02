#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int t = 0;
int n;

int calculation();
void dowhile();

int main()
{
    setlocale(0, "");

    cout << "Введите число"<<endl;
    cin >> n;
    
    calculation();
    
    
    do{
        dowhile();
       
    } while (t % 10==0);

    cout << t << endl;

    return 0;
}

int calculation()
{
    t = 0;
    while (n > 0) {
        t += n % 10;
        n /= 10;
    }
    

    return n;
}

void dowhile()
{
    do {
        cout << t << endl;
        n = t;
        calculation();

    } while (n % 10);
}