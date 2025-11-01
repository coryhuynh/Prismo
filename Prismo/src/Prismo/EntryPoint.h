#pragma once

#ifdef PMO_PLATFORM_WINDOWS

extern Prismo::Application* Prismo::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome Traveller");
	auto app = Prismo::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Prismo Only supports Windows 
#endif