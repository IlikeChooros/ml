add_subdirectory(neural-network)

target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics neural-network)