#ifndef SLICE_LOGGER_H
#define SLICE_LOGGER_H

#include <iostream>
#include <string>

namespace SliceEngine
{
	constexpr auto RESET = "\033[0m";
	constexpr auto BLACK = "\033[30m"      /* Black */;
	constexpr auto RED = "\033[31m"      /* Red */;
	constexpr auto GREEN = "\033[32m"      /* Green */;
	constexpr auto YELLOW = "\033[33m"      /* Yellow */;
	constexpr auto BLUE = "\033[34m"      /* Blue */;

	class Logger
	{
	private:

		Logger* instance;
		Logger();

	public:
		Logger(const Logger&) = delete;
		Logger& operator=(const Logger&) = delete;

		static Logger& getInstance()
		{
			static Logger instance;
			return instance;
		}
	};
}

#endif