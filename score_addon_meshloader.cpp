#include "score_addon_meshloader.hpp"

#include <score/plugins/FactorySetup.hpp>

#include <meshloader/Executor.hpp>
#include <meshloader/Layer.hpp>
#include <meshloader/Process.hpp>
#include <score_plugin_engine.hpp>
#include <score_plugin_gfx.hpp>

score_addon_meshloader::score_addon_meshloader() { }

score_addon_meshloader::~score_addon_meshloader() { }

std::vector<std::unique_ptr<score::InterfaceBase>>
score_addon_meshloader::factories(
    const score::ApplicationContext& ctx,
    const score::InterfaceKey& key) const
{
  return instantiate_factories<
      score::ApplicationContext,
      FW<Process::ProcessModelFactory, meshloader::ProcessFactory>,
      FW<Process::LayerFactory, meshloader::LayerFactory>,
      FW<Execution::ProcessComponentFactory,
         meshloader::ProcessExecutorComponentFactory>>(ctx, key);
}

auto score_addon_meshloader::required() const -> std::vector<score::PluginKey>
{
  return {score_plugin_gfx::static_key()};
}

#include <score/plugins/PluginInstances.hpp>
SCORE_EXPORT_PLUGIN(score_addon_meshloader)
