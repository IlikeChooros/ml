#include <neural-network/activations.hpp>

std::vector<float> Sigmoid::operator()(std::vector<float> inputs)
{
    std::vector<float> ret(inputs.size());

    for (int i = 0; i < ret.size(); i++)
    {
        ret[i] = 1 / (1 + exp(-inputs[i]));
    }

    return ret;
}