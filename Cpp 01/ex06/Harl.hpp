#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
	public:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void complain( std::string level );

};

#endif