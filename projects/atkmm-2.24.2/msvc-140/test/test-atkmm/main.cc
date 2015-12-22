
#include <atkmm/atkmm.h>

class TestClass :
	public Atk::Implementor
{
public:
	TestClass() :
		Implementor()
	{
	}
};

int main(int argc, char* argv[])
{
	TestClass instance;

	return 0;
}
