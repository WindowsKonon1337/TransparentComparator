#pragma once
#include "typeStructs.hpp"

struct ClientDBO
{
    explicit ClientDBO(const TicketId& ticketId, const Surname& surname, const Year& year) : ticketId(ticketId), surname(surname), year(year)
    {}

    mutable CompareBy compareBy = CompareBy::Surname;

    TicketId ticketId;
    Surname surname;
    Year year;
};