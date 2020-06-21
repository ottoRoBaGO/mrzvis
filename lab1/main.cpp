#include <iostream>
#include <vector>
#include "Pipeline.h"
#include "BinaryCalculator.h"


using namespace std;

int main(int argc, char *argv[]) {

    vector<int> firstVector, secondVector;
    int processingTime;
    std::string input;

    cout << "vector 1" << endl;
    while (true) {
        cin >> input;
        if (input == "n" || input.empty())
            break;

        int var = atoi(input.c_str());
        if ((var > 7) || (var < -7)) {
            cout << "Число должно быть -7 ≤ x ≤ 7";
            continue;
        }
        firstVector.push_back(var);
    }

    cout << "vector 2" << endl;
    while (true) {
        cin >> input;
        if (input == "n")
            break;

        int var = atoi(input.c_str());
        if ((var > 7) || (var < -7)) {
            cout << "Число должно быть -7 ≤ x ≤ 7";
            continue;
        }

        secondVector.push_back(var);
    }

    if (secondVector.size() != firstVector.size())
        exit(1);

    cout << "processingTime" << endl;
    cin >> processingTime;

    Pipeline pipeline1(firstVector, secondVector, processingTime);
    pipeline1.run();

    return 0;
}
