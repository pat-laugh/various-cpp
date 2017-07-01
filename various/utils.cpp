//Copyright 2017 Patrick Laughrea
//Licensed under the Apache License, Version 2.0
#include "utils.hpp"

using namespace various;

bool various::isDigitBin(char c)
{
	return c == '0' || c == '1';
}

bool various::isDigitOct(char c)
{
	return c >= '0' && c <= '7';
}

bool various::isDigitDec(char c)
{
	return c >= '0' && c <= '9';
}

bool various::isDigitHex(char c)
{
	return isDigitDec(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

int various::binToInt(char c)
{
	return c - '0';
}

int various::octToInt(char c)
{
	return c - '0';
}

int various::decToInt(char c)
{
	return c - '0';
}

int various::hexToInt(char c)
{
	return c <= '9' ? c - '0' : 10 + c - (c <= 'F' ? 'A' : 'a');
}

char various::hexToChar(int c)
{
	return (char)c + (c <= 9 ? '0' : 'a' - 10);
}

bool various::isControlAscii(char c)
{
	return (unsigned char)c < ' ' || c == 127;
}

bool various::isSpecialAscii(char c)
{
	switch (c)
	{
	case '`': case '~': case '!': case '@': case '#': case '$': case '%': case '^': case '&': case '*': case '(': case ')': case '-': case '_': case '=': case '+':
	case '[': case '{': case ']': case '}': case '\\': case '|':
	case ';': case ':': case '\'': case '"':
	case ',': case '<': case '.': case '>': case '/': case '?':
		return true;
	default:
		return false;
	}
}
