#include <neural-network/Layer.hpp>

Layer::Layer(int inputs, int outputs)
{
    init(inputs, outputs);
}

void Layer::init(int inputs, int outputs)
{
    this->inputs = inputs;
    this->outputs = outputs;

    weights.resize(outputs, std::vector<float>(inputs, 0));
    biases.resize(outputs, 0);
    activations.resize(outputs);
}
