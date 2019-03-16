all: cliente servidor

cliente: calcular_cliente.o calcular_clnt.o calcular_xdr.o
	gcc -o cliente calcular_cliente.o calcular_clnt.o calcular_xdr.o
servidor: calcular_servidor.o calcular_svc.o calcular_xdr.o
	gcc -o servidor calcular_servidor.o calcular_svc.o calcular_xdr.o
calcular.h: calcular.x
	rpcgen -N -C calcular.x
calcular_clnt.c: calcular.x
	rpcgen -N -C calcular.x
calcular_svc.c:
	rpcgen -N -C calcular.x
calcular_xdr.c:
	rpcgen -N -C calcular.x
calcular_servidor.o: calcular_servidor.c calcular.h
	gcc -c calcular_servidor.c
calcular_svc.o: calcular_svc.c
	gcc -c calcular_svc.c
calcular_xdr.o: calcular_xdr.c
	gcc -c calcular_xdr.c
calcular_cliente.o: calcular_cliente.c calcular.h
	gcc -c calcular_cliente.c
calcular_clnt.o: calcular_clnt.c
	gcc -c calcular_clnt.c
clean: 
	rm -f cliente servidor calcular.h calcular_clnt.c calcular_svc.c calcular_xdr.c  *.o
