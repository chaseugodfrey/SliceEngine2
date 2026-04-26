# CMakeList.txt : CMake project for SliceEditor, include source and define
# project specific logic here.
#

# Gather sources from the src folder and at project root (main.cpp)
file(GLOB_RECURSE SliceEditorSource "src/*.cpp" "src/*.h" "main.cpp")

# Create the executable for this subproject
add_executable(SliceEditor ${SliceEditorSource})

# Point the target at the project's thirdparty includes and SliceEngine headers
target_include_directories(SliceEditor PRIVATE
  ${CMAKE_SOURCE_DIR}/thirdparty/RGFW
  ${CMAKE_SOURCE_DIR}/SliceEngine/src
)

# Set C++ standard for this target
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SliceEditor PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
