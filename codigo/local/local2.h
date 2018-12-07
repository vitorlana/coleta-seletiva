#ifndef LOCAL2_H_INCLUDED
#define LOCAL2_H_INCLUDED
class Local2
{
public:
	Local2(std::string novolocal);
	std::string get_local();
	void set_local(std::string);
private:
	std::string _local;
};


#endif // LOCAL2_H_INCLUDED
