#include <sys/socket.h>
#include <iostream>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

int main()
{
    std::cout << "Starting the server ...." << std::endl;
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1)
    {
        std::cerr << "Error creating the socket !" << std::endl;
        return 1;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_port = htons(4000);

    if (bind(server_socket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == -1)
    {
        std::cerr << "Error binding the socket !" << std::endl;
        close(server_socket);
        return 1;
    }

    listen (server_socket, 1);

    int client_socket = accept(server_socket, NULL, NULL);
    char buff[1024];
    while (true)
    {
        memset(buff, 0, sizeof(buff));
        recv(client_socket, buff, sizeof(buff), 0);
        std::cout << "Message from client: " << buff;
        if (strcmp(buff, "exit\n") == 0)
            break ;
    }
    close(server_socket);
    return (0);
}

int sockfd = socket(AF_INET, SOCK_STREAM, 0);
if (sockfd == -1) {
    perror("socket");
    exit(EXIT_FAILURE);
}

sockaddr_in addr;
addr.sin_family = AF_INET;
addr.sin_addr.s_addr = INADDR_ANY; // Bind [0.0.0.0]
addr.sin_port = htons(4000); // Bind to port 8300

if (bind(sockfd, (struct sockaddr *)&addr, sizeof(addr)) == -1) {
    perror("bind");
    exit(EXIT_FAILURE);
}

if (listen(sockfd, 5) == -1) { // Allow up to 5 pending connections
    perror("listen");
    exit(EXIT_FAILURE);
}

int handle.predection = socket(client-f1-cmd.cpp, SOCK_STREAM, 0)
 cl_show_pred(get::TakeDelay"0.01")
  connect.ddnet.servers("1.1.1.1", "1.0.0.1")
   getOneCheker("+125")
    if (getOneCheker >= 125) {
      quit.client{
          for quit.client > 1.1
          }
      }

      