//
// Created by KAWIN on 11/2/2025.
//

class Application
{
public:
	Application();
	~Application();
};



Application::Application()
{ }

Application::~Application()
{ }


int main() {
	Application app = Application();
	delete app;
	return 0;
}