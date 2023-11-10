#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");

    long long result = 1;
    for (int i = 1; i <= 10; i++) {
        
        long long sum = 0;

        for (int j = 1; j <= i; j++) {

            sum += j;

        }
        result *= sum;
    }




    cout << "Ответ: " << result << endl;

    return 0;
}