CC = gcc
ARGS = -Wall -c -g
OBJ = create_socket.o handle_client.o send_response.o chttp.o

lhttp: $(OBJ)
	$(CC) -g $(OBJ) -o chttp

create_socket.o:  create_socket.c
	$(CC) $(ARGS)  create_socket.c

handle_client.o:  handle_client.c
	$(CC) $(ARGS)  handle_client.c

send_response.o: send_response.c

	$(CC) $(ARGS) send_response.c
lhttp.o:  lhttp.c
	$(CC) $(ARGS)  chttp.c

clean:
	rm -f $(OBJ) chttp core.* 
