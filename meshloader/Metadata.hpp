#pragma once
#include <Process/ProcessMetadata.hpp>

namespace meshloader
{
class Model;
}

PROCESS_METADATA(
    ,
    meshloader::Model,
    "a0271690-f6e3-479c-b96e-beb4792c79c3",
    "meshloader",                           // Internal name
    "meshloader",                           // Pretty name
    Process::ProcessCategory::Visual,  // Category
    "GFX",                             // Category
    "My VFX",                          // Description
    "ossia team",                      // Author
    (QStringList{"shader", "gfx"}),    // Tags
    {},                                // Inputs
    {},                                // Outputs
    Process::ProcessFlags::SupportsAll // Flags
)
