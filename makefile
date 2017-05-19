Examen: Examen1.o Obra.o Literatura.o Escultura.o Pintura.o Diseno.o
	g++ Examen1.o Obra.o Literatura.o Escultura.o Pintura.o Diseno.o -o main

Examen1.o: Examen1.cpp Obra.h Literatura.h Escultura.h Pintura.h Diseno.h
	g++ -c Examen1.cpp

Obra.o: Obra.cpp Obra.h
	g++ -c Obra.cpp

Literatura.o: Literatura.cpp Literatura.h Obra.h
	g++ -c Literatura.cpp

Escultura.o: Escultura.cpp Escultura.h Obra.h
	g++ -c Escultura.cpp

Pintura.o: Pintura.cpp Pintura.h Obra.h
	g++ -c Pintura.cpp

Diseno.o: Diseno.cpp Diseno.h Obra.h
	g++ -c Diseno.cpp

clean:
	rm -f *.o*.main
