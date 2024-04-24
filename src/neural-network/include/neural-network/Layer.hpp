#pragma once

#include <vector>

#include "activations.hpp"

class Layer
{
public:
    Layer(int inputs, int outputs);
    void init(int intput, int outputs);
    void forward(std::vector<float> inputs);

    int input_size, output_size;
    std::vector<std::vector<float>> weights;
    std::vector<float> biases;
    std::vector<float> activations;
    std::vector<float> weighted_sums;
};