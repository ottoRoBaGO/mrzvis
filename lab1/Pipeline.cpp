#include "Pipeline.h"
#include "BinaryCalculator.h"
#include <vector>

Pipeline::Pipeline(std::vector<int> firstVector, std::vector<int> secondVector, int processingTime) {
    this->firstVector = firstVector;
    this->secondVector = secondVector;
    this->processingTime = processingTime;
}

void Pipeline::run() {
    std::vector<BinaryCalculator> vector_of_threads;
    int counter_int = 0;

    for (int i = 0; i < firstVector.size(); ++i) {
        vector_of_threads.push_back(BinaryCalculator(firstVector[i], secondVector[i], i, i, processingTime));
        for (auto & threads : vector_of_threads) {
            threads.oneStep(counter_int);
            counter_int += processingTime;
        }
    }

    bool k = false;
    do {
        k = false;
        for (auto & threads : vector_of_threads) {
            if (threads.oneStep(counter_int)) {
                k = true;
                counter_int += processingTime;
            }
        }
    } while (k);
}