#include <Prismo.h>

class Sandbox : public Prismo::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Prismo::Application* Prismo::CreateApplication()
{
	return new Sandbox();
}