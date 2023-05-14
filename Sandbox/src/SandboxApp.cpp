#include <Robikube.h>

class Sandbox : public Robikube::Application {

public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Robikube::Application* Robikube::CreateApplication() {
	return new Sandbox();
}
