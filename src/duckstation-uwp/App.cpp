#include "uwp_host_interface.h"
#include <winrt/Windows.ApplicationModel.Core.h>

int __stdcall wWinMain(HINSTANCE, HINSTANCE, PWSTR, int)
{
  winrt::Windows::ApplicationModel::Core::CoreApplication::Run(winrt::make<UWPHostInterface>());
}
