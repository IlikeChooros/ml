#pragma once

#include <vector>

class Layer
{
public:
    Layer(int inputs, int outputs);
    void init(int inputs, int outputs);

    std::vector<float> forward(std::vector<float> inputs);

    int inputs, outputs;
    std::vector<std::vector<float>> weights;
    std::vector<float> biases;
    std::vector<float> activations;
};