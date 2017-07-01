//Copyright 2017 Patrick Laughrea
//Licensed under the Apache License, Version 2.0
#pragma once

#include <sstream>
#include <string>

namespace various
{
	class StringBuilder
	{
	public:
		StringBuilder();
		StringBuilder(StringBuilder&& o);
		StringBuilder(const StringBuilder& o);
		StringBuilder(char c);
		StringBuilder(std::string s);
		StringBuilder(const char* s);

		StringBuilder& operator=(StringBuilder o);

		StringBuilder& put(const StringBuilder& o);
		StringBuilder& put(char c);
		StringBuilder& put(std::string s);
		StringBuilder& put(const char* s);

		StringBuilder& operator+=(const StringBuilder& o);
		StringBuilder& operator+=(char c);
		StringBuilder& operator+=(std::string s);
		StringBuilder& operator+=(const char* s);

		operator std::string() const;
		std::string str() const;
	private:
		std::ostringstream ss;
	};
}