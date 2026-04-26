# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()


# Solution treated as project in CMAKE
project ("Slice")

# Make the thirdparty RGFW headers available project-wide (optional).
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RGFW)

# Include Slice Engine 
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/SliceEngine/src)

if (CMAKE_BUILD_TYPE STREQUAL "EditorDebug" OR CMAKE_BUILD_TYPE STREQUAL "EditorRelease")
# Include SliceEditor.
add_subdirectory("SliceEditor")
endif()

