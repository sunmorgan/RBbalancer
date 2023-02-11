#include <iostream>
#include "load_balancer.h"
#include "server.h"

int main()
{
    LoadBalancer lb(5);
    std::vector<Server> servers;
    for (int i = 0; i < 5; i++)
    {
        servers.__emplace_back(i);
    }
    for (int i = 0; i < 20; i++)
    {
        int serverId = lb.getNextServer();
        std::cout << "Request " << i << " sent to server " << serverId << std::endl;
    }
    return 0;
}