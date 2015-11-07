#include <iostream>
#include <ctime>

using namespace std;

int main() {
    clock_t start, end;
    double duration;
    const int TIMES = 1000000;
    
    start = clock();
    
    for(int i = 0; i < TIMES; i++)
    
    end = clock();
    duration = (end - start) / (double) CLOCKS_PER_SEC;
    
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << duration << endl;
    
    return 0;
}