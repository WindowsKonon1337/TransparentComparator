#pragma once
#include "clientDBO.hpp"

struct CompareClients
{
    using is_transparent = void;

    bool operator()(ClientDBO const& clientFirst, ClientDBO const& clientSecond) const;
    // comapare by surname
    bool operator()(const Surname& surname, ClientDBO const& client) const;

    bool operator()(ClientDBO const& client, const Surname& surname) const;
    //compare by year
    bool operator()(const Year& year, ClientDBO const& client) const;

    bool operator()(ClientDBO const& client, const Year& year) const;
};

