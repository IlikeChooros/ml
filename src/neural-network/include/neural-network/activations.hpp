#pragma once

#include <vector>

class Sigmoid
{
public:
    Sigmoid() = default;
    static std::vector<float> output(std::vector<float> inputs);
};