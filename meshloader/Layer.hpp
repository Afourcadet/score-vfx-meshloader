#pragma once
#include <Control/DefaultEffectItem.hpp>
#include <Effect/EffectFactory.hpp>
#include <Process/GenericProcessFactory.hpp>

#include <meshloader/Process.hpp>

namespace meshloader
{
using LayerFactory = Process::GenericDefaultLayerFactory<meshloader::Model>;
}
