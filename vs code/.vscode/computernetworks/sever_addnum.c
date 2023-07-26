#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>

int main()
{
    //create the message buffer
    int message[1];
    int reply[2];
    int limit;

    //create a socket
    int sock_server = socket(AF_INET,SOCK_STREAM,0);
    printf("\n\t.....Socket Created Successully!.....\n");

    //define the server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    //bind the socket to out specified IP and port
    bind(sock_server, (struct sockaddr *) &server_address,sizeof(server_address));
    printf("\n\t.....Address bound successfully!.....");

    //listen the clients to establish a connection
    listen(sock_server, 5);
    printf("\nListeneing.....\n");

    //accepting the request from the client
    int sock_client;
    sock_client = accept(sock_server, NULL ,NULL);
    printf("\n\t.....Request accepted!.....");

    int msg_status=1,rep_status=1;
    do
    {
        recv(sock_client,reply,sizeof(reply),0);
        printf("\nReply from the client : %d %d",reply[0],reply[1]);
        if(rep_status==0)
           break;
        int num = reply[0]+reply[1];   
        message[0]  = num;
        printf("\nThe sum to send : %d",num);
        send(sock_client,message,sizeof(message),0);
    } while (msg_status!=0 && rep_status!=0);
    

    //close the socket
    close(sock_server);
    printf("\nConnection terminated...........\n");
    return 0;
}
