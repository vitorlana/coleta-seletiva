#include <string>
#ifndef LOCAL_H_INCLUDED
#define LOCAL_H_INCLUDED
class Local
{
public:
	Local(std::string);
	std::string get_local();
	void set_local(std::string);
private:
	std::string _local;
};
#endif // LOCAL_H_INCLUDED
