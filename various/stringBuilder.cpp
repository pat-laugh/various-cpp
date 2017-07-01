//Copyright 2017 Patrick Laughrea
//Licensed under the Apache License, Version 2.0
#include "stringBuilder.hpp"

using namespace std;
using namespace various;

StringBuilder::StringBuilder() {}
StringBuilder::StringBuilder(StringBuilder&& o) : ss(std::move(o.ss)) {}
StringBuilder::StringBuilder(const StringBuilder& o) { put(o); }
StringBuilder::StringBuilder(char c) { put(c); }
StringBuilder::StringBuilder(std::string s) { put(std::move(s)); }
StringBuilder::StringBuilder(const char* s) { put(s); }

StringBuilder& StringBuilder::operator=(StringBuilder o) { ss = std::move(o.ss); return *this; }

StringBuilder& StringBuilder::put(const StringBuilder& o) { ss << o.str(); return *this; }
StringBuilder& StringBuilder::put(char c) { ss.put(c); return *this; }
StringBuilder& StringBuilder::put(std::string s) { ss << std::move(s); return *this; }
StringBuilder& StringBuilder::put(const char* s) { ss << s; return *this; }

StringBuilder& StringBuilder::operator+=(const StringBuilder& o) { return put(o); }
StringBuilder& StringBuilder::operator+=(char c) { return put(c); }
StringBuilder& StringBuilder::operator+=(std::string s) { return put(std::move(s)); }
StringBuilder& StringBuilder::operator+=(const char* s) { return put(s); }

StringBuilder::operator std::string() const { return ss.str(); }
std::string StringBuilder::str() const { return ss.str(); }