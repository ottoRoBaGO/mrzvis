#pragma once
#include <vector>
#include <string>

class Pipeline {

private:
    std::vector<int> firstVector, secondVector;
    int processingTime;

public:
    Pipeline(std::vector<int> firstVector, std::vector<int> secondVector, int processingTime);

    void run();

};