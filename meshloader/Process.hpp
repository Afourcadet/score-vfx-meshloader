#pragma once
#include <Library/LibraryInterface.hpp>
#include <Process/Drop/ProcessDropHandler.hpp>
#include <Process/GenericProcessFactory.hpp>
#include <Process/Process.hpp>

#include <meshloader/Metadata.hpp>

namespace meshloader
{
class Model final : public Process::ProcessModel
{
  SCORE_SERIALIZE_FRIENDS
  PROCESS_METADATA_IMPL(meshloader::Model)
  W_OBJECT(Model)

public:
  Model(
      const TimeVal& duration,
      const Id<Process::ProcessModel>& id,
      QObject* parent);

  template <typename Impl>
  Model(Impl& vis, QObject* parent)
      : Process::ProcessModel{vis, parent}
  {
    vis.writeTo(*this);
  }

  ~Model() override;

private:
  QString prettyName() const noexcept override;
};

using ProcessFactory = Process::ProcessFactory_T<meshloader::Model>;
}