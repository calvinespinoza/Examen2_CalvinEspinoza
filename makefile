Main:	Main.o Fruta.o Logia.o Zoan.o Paramecia.o Seres.o Piratas.o Marina.o Revolucionarios.o
	g++ Main.o Fruta.o Logia.o Zoan.o Paramecia.o Seres.o Piratas.o Marina.o Revolucionarios.o  -o Main

Main.o: Fruta.h Fruta.h Logia.h Zoan.h Paramecia.h Seres.h Piratas.h Marina.h Revolucionarios.h  Main.cpp
	g++ -c Main.cpp

Fruta.o:	Fruta.cpp Fruta.h Logia.h Zoan.h Paramecia.h
	g++ -c Fruta.cpp

Seres.o:	Seres.cpp Seres.h Piratas.h Marina.h Revolucionarios.h
	g++ -c Seres.cpp

Logia.o:	Logia.cpp Logia.h
	g++ -c Logia.cpp

Zoan.o:	Zoan.cpp Zoan.h
	g++ -c Zoan.cpp

Paramecia.o:	Paramecia.cpp Paramecia.h
	g++ -c Paramecia.cpp

Marina.o:	Marina.cpp Marina.h
	g++ -c Marina.cpp

Piratas.o:	Piratas.cpp Piratas.h
	g++ -c Piratas.cpp

Revolucionarios.o:	Revolucionarios.cpp Revolucionarios.h
	g++ -c Revolucionarios.cpp

clean:
	rm *.o Main
