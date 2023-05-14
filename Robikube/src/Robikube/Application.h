#pragma once
#include "Application.h"
#include "Core.h"

namespace Robikube {

	class RBK_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// Defined in client
	Application* CreateApplication();

}
