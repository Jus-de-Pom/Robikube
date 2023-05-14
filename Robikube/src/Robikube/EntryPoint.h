#pragma once

#ifdef RBK_PLATFORM_WINDOWS

extern Robikube::Application* Robikube::CreateApplication();

int main(int arc, char** argv) {

	Robikube::Log::Init();
	RBK_CORE_WARN("Initilized Log !");
	int a = 5;
	RBK_INFO("Hello ! Var={0}", a);

	auto app = Robikube::CreateApplication();
	app->Run();
	delete app;
}

#endif
