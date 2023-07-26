#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<netinet/in.h>

void error(const char *msg){
    perror(msg);
    //perror -> 
    exit(1);
}

int main(int argc, char * argv[]){  //  argc-> total no of parameters thatr we are passing.  In this code, it is 2 one parameter is filename and second is port number
//  argv[]->it conatins the filename and the portnumber 
    if(argc < 2){// argc < 2 ->  in this code we have taken argc = 2 that is we are providing two parameters if it is lesser than 2 so means one parameter is missing 
        fprintf(stderr, "Port Number not provided. Program terminated !! \n");
    }

    int sockfd, newsockfd, portno, n;
    char buffer[255];

    struct sockaddr_in serv_addr, cli_addr;
    socklen_t clilen; // socklen_t-> it is a datatype of 32 bits

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if(sockfd < 0){
        error("Error opening Socket.");
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    portno = atoi(argv[1]);// argv[0]->contains filename    argv[1]->contains portno

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr = INADDR_ANY; //This is an IP address that is used when we don't want to bind a socket to any specific IP.
    serv_addr.sin_port = htons(portno); //htons -> means host to network short      htonl->means host to network long

    if(bind(sockfd, (struct sockaddr* )& serv_addr, sizeof(serv_addr)) < 0)
        error("Binding Failed.");

    listen(sockfd, 5);
    clilen = sizeof(cli_addr);

    newsockfd = accept(sockfd, (struct sockaddr*)& cli_addr, &clilen);

    if(newsockfd < 0)
    error("Error on Accepting");

    while(1)//There we take 1 in while loop because we dont want to system to stop the communication we want to stop it by the client or server
    {
        bzero(buffer, 255);
        // bzero -> clears the information stored in that variable i.e., buffer here

        n = read(newsockfd, buffer, 255);

        if(n<0)
        error("Error on Reading");

        printf("Client : %s", buffer);
        bzero(buffer, 255);
        fgets(buffer, 255, stdin);

        n = write(newsockfd, buffer, strlen(buffer));

        if(n<0)
        error("Error on Writing");

        int i = strncmp("Bye", buffer, 3);    // Here we are comparig with string Bye so that if client will write Bye then i = 0 then we will terminate the connection

        if(i == 0)
        break;
    }

    close(newsockfd);
    close(sockfd);

    return 0;
}