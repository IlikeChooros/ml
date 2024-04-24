#include <neural-network/Layer.hpp>

Layer::Layer(int inputs, int outputs)
{
    init(inputs, outputs);
}

void Layer::init(int inputs, int outputs)
{
    weights.resize(outputs);
    weighted_sums.resize(inputs);
    for (auto &weight : weights)
    {
        weight.resize(inputs);
    }

    biases.resize(outputs);
    activations.resize(outputs);
    input_size = inputs;
    output_size = outputs;
}

void Layer::forward(std::vector<float> inputs)
{
    for (int i = 0; i < input_size; i++)
    {
        weighted_sums[i] = biases[i];
        for (int j = 0; j < output_size; j++)
        {
            weighted_sums[i] = inputs[i] * weights[i][j];
        }
    }

    activations = Sigmoid()()
}