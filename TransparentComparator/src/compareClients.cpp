#include "compareClients.hpp"

bool CompareClients::operator()(ClientDBO const& clientFirst, ClientDBO const& clientSecond) const
{
	if (clientFirst.compareBy == CompareBy::Surname)
		return clientFirst.surname.value < clientSecond.surname.value;
	else if (clientFirst.compareBy == CompareBy::Year)
		return clientFirst.year.value < clientSecond.year.value;
}

bool CompareClients::operator()(const Surname& surname, ClientDBO const& client) const
{
	return surname.value < client.surname.value;
}

bool CompareClients::operator()(ClientDBO const& client, const Surname& surname) const
{
	client.compareBy = CompareBy::Surname;
	return client.surname.value < surname.value;
}

bool CompareClients::operator()(const Year& year, ClientDBO const& client) const
{
	return year.value < client.year.value;
}

bool CompareClients::operator()(ClientDBO const& client, const Year& year) const
{
	client.compareBy = CompareBy::Year;
	return client.year.value > year.value;
}