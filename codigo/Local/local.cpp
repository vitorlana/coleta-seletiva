#include "local.h"

Local::Local(std::string novolocal)
{
	_local = novolocal;
}

std::string Local::get_local()
{
	return _local;
}

void Local::set_local(std::string novolocal)
{
	_local = novolocal;
}


