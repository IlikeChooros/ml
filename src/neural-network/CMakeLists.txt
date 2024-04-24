add_library(neural-network)

target_sources(
    neural-network
    PRIVATE
        src/Layer.cpp
        src/activations.cpp
)

target_include_directories(
    neural-network
    PUBLIC
        include
)
