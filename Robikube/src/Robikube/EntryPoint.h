#pragma once

#ifdef RBK_PLATFORM_WINDOWS

extern Robikube::Application* Robikube::CreateApplication();

int main(int arc, char** argv) {
	printf("Starting Application");
	auto app = Robikube::CreateApplication();
	app->Run();
	delete app;
}

#endif
