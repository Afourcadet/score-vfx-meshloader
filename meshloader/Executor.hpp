#pragma once
#include <Process/Execution/ProcessComponent.hpp>

#include <ossia/dataflow/node_process.hpp>

namespace meshloader
{
class Model;
class ProcessExecutorComponent final
    : public Execution::ProcessComponent_T<meshloader::Model, ossia::node_process>
{
  COMPONENT_METADATA("b30efc83-1bb5-4228-a489-4a89a9d0f17f")
public:
  ProcessExecutorComponent(
      Model& element,
      const Execution::Context& ctx,
      QObject* parent);
};

using ProcessExecutorComponentFactory
    = Execution::ProcessComponentFactory_T<ProcessExecutorComponent>;
}
