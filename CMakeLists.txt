cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

if(NOT TARGET score_lib_base)
  include("${SCORE_SOURCE_DIR}/cmake/ScoreExternalAddon.cmake")
endif()

if(NOT TARGET score_plugin_gfx)
  message("Requires gfx plug-in")
  return()
endif()

project(score_addon_meshloader LANGUAGES CXX)

# General initialization
score_common_setup()

# Creation of the library
add_library(score_addon_meshloader
  meshloader/Executor.hpp
  meshloader/Metadata.hpp
  meshloader/Process.hpp
  meshloader/Layer.hpp
  meshloader/Executor.cpp
  meshloader/Process.cpp
  meshloader/Node.hpp
  meshloader/Node.cpp
  meshloader/Loadmesh.h
  meshloader/Loadmesh.cpp

  score_addon_meshloader.hpp
  score_addon_meshloader.cpp
)

# Link
target_link_libraries(score_addon_meshloader PUBLIC
  score_plugin_gfx
)

# Target-specific options
setup_score_plugin(score_addon_meshloader)

