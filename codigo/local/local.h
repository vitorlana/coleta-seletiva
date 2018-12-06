#include <string>
class Local
{
public:
	Local(std::string);
	std::string get_local();
	void set_local(std::string);
private:
	std::string _local;
};

