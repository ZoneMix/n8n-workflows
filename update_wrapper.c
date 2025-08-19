#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
    setuid(0);  // Run as root
    system("/bin/sh /home/node/.n8n/update-yt-dlp.sh");
    return 0;
}

// This is meant to help in using the Update YT DLP Workflow
// I don't run n8n as root so I had to do some workaround 
//   to add packages and install yt-dlp with a setuid binary
//
// Assuming you are using ephemeral docker containers with compose
// volumes:
//  - ./data:/home/node/.n8n
//
// put update_wrapper.c in ./data
// put update-yt-dlp.sh in ./data
//
// do this immediately after starting n8n so that everything will work
//
// docker compose up -d
// docker exec --user root -it n8n_server_1 /bin/sh
// cd /home/node/.n8n
// gcc -o update_wrapper update_wrapper.c
// cp update_wrapper /opt/update_wrapper
// chmod 4755 /opt/update_wrapper
// exit
//
// Now the Update YT DLP Workflow will work
//
// Remember setuid can be really dangerous as you run the file as root
// Add to the shell script responsibly
//
//
//
