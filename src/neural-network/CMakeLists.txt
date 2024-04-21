add_library(neural-network)

target_include_directories(neural-network PUBLIC 
    include
)

target_sources(neural-network PRIVATE 
    src/Layer.cpp
)

