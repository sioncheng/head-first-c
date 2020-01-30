to_upercase.o: to_upercase.c to_upercase.h
	gcc -c to_upercase.c

message_converter.o: message_converter.c
	gcc -c message_converter.c

message_converter: message_converter.o to_upercase.o
	gcc *.o -o bin/message_converter