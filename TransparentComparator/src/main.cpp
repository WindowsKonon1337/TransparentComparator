#include <set>
#include <string>
#include <iostream>
#include "clientDBO.hpp"
#include "compareClients.hpp"

int main()
{
    std::set<ClientDBO, CompareClients> clients =
    {
        ClientDBO(TicketId(1), Surname("Antonov"), Year(2021)),
        ClientDBO(TicketId(228), Surname("Kazey"), Year(2020)),
        ClientDBO(TicketId(18), Surname("Da"), Year(2019))
    };

    auto& a = *clients.find(Surname("Antonov"));
    auto& b = *clients.find(Year(2021));

    std::cout << a.surname.value << " " << b.year.value;
    return 0;
}