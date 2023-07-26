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
    printf("\n\t.....Socket Created Successully!.....\n");

    //specify an address for the socket
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    //establishing the connection
    int connection_status = connect(sock_client, (struct sockaddr *)&server_address, sizeof(server_address));

    //check for error in connection establishment
    if(connection_status == -1)
    {printf("\n\tERROR : UNABLE TO MAKE A CONNECTION WITH THE SERVER!\n");
    return 0;}

    else
    { printf("\n\t.....Connection established.....\n"); }

    //create the response buffer
    int message[2];
    int reply[1];

    int msg_status=1,rep_status=1;
    do
    {
        int me,m;
        printf("\nEnter the 1st number to send : ");
        scanf("%d",&me);

        printf("\nEnter the 1nd number to send : ");
        scanf("%d",&m);

        message[0] = me;
        message[1] = m;
        send(sock_client,message,sizeof(message),0);
        if(msg_status==0)
            break;
        recv(sock_client,reply,sizeof(reply),0);
        printf("\nReply from the server : %d",reply[0]);

    } while (msg_status!=0 && rep_status!=0);

    //closing the connection
    close(sock_client);
    printf("\nConnection terminated...........\n");
    return 0;
}


  
