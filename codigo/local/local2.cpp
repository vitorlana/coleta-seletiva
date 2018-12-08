#include "local2.h"

Local2::Local2(std::string novolocal)
{
	_local = novolocal;
}

std::string Local2::get_local()
{
	return _local;
}

void Local2::set_local(std::string novolocal)
{
	_local = novolocal;
}

