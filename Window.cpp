#include "App.h"
#include "Window.h"

#ifdef AZ_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Ayzern
{
	Scope<Window> Window::Create(const WindowProps& props)
	{
#ifdef AZ_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
#else
		AZ_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}

}
