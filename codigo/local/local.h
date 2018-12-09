#ifndef LOCAL_H
#define LOCAL_H
#include <string>

class Local
{
public:
	Local();
	Local(std::string novolocal);
	std::string get_local();
	void set_local(std::string);
private:
	std::string _local;
};
#endif
