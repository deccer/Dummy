set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_VULKAN_STATIC OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)
set(GLFW_INCLUDE_NONE ON CACHE BOOL "" FORCE)
add_subdirectory(glfw)

add_subdirectory(glm)
target_compile_definitions(glm INTERFACE
        GLM_FORCE_AVX2
        GLM_FORCE_RADIANS
)

add_library(glad
  glad/src/glad.c)
target_include_directories(glad PUBLIC glad/include)
