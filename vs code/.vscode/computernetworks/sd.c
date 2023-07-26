#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

int main()
{
    //create a socket
    int sock_client;
    sock_client=socket(AF_INET,SOCK_STREAM,0);
    printf("\nSocket created successfully.....!");

    //specify an address for the socket
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    //establishing the connection
    printf("\nConnecting to the server.....");
    int connection_status = connect(sock_client, (struct sockaddr *)&server_address, sizeof(server_address));

    //check for error in connection establishment
    if(connection_status == -1)
    {printf("\nERROR : UNABLE TO MAKE A CONNECTION WITH THE SERVER!\n");
    return 0;}

    else
        printf("\n.....Connection established successfully!.....\n");
    

    //create the response buffer
    char response[64];

    //client Recieving the data twice
    recv(sock_client, response ,sizeof(response),0);
    printf("\nThe current time sent by the server is : %s\n",response);

    //closing the connection
    close(sock_client);
    printf("\n\t...........Connection terminated...........\n");
    return 0;
}
