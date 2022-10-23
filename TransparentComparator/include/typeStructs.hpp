#pragma once
#include <string>

enum class CompareBy
{
	Year,
	Surname,
	TicketId
};


struct Year
{
	explicit Year(const int& value) : value(value)
	{}

	int value;
};

struct Surname
{
	explicit Surname(const std::string& value) : value(value)
	{}

	std::string value;
};

struct TicketId
{
	explicit TicketId(const int& value) : value(value)
	{}

	int value;
};
