# Informatik II Probeklausur Aufgaben
### Aufgabe 1:
1. Wie lautet der Befehl, um ein C-Programm ”wurzel.c” zu kompilieren, unter Beachtung des ANSI-Standarts?

2. Was bewirkt der folgende Quellcode?

	``` c
	int i = 0;
	while(1) { i++;
		printf("%d", i);
	}
	```
3. Nennen Sie die zwei fehlenden Bussysteme der „Von-Neumann-Rechnerarchitektur“:
	* Adressbus
	*  
	*
4. Was bewirkt die folgende Zeile?

	``` c
	#include <stdio.h>
	```
5. Was bedeutet die Werteübergabe mittels „call by value“?
6. Wofür steht die Abkürzung **RAM**?
7. Führen Sie jeweils eine bitweise Verknüpfung der angegebenen Zahlen über die logischen Operationen **AND**, **OR** und **XOR** durch. Geben Sie das Ergebnis in dezimaler Darstellung an.
Zahlen: **37**, **89**

### Aufgabe 2
Gegeben ist das folgende Programm:

``` c
#include <stdio.h>
#include <string.h>

int sub1(int i)
{
	return ++i;
}

int sub2(char *p)
{
	*p = '\0';
}

int main()
{
	char string[100] = "Hallo Welt!";
	char tempChar;
	int stringLength = 11;
	int m = 0;

	while(m < 3)
	{
		tempChar = string[m];
		string[m] = string[stringLength - m - 1]; /* ?? */
		string[stringLength -m - 1] = tempChar;

		m = sub1(m);
	}

	printf("%s\n", string);
	printf("%d\n", m | 10);

	sub1(m+5); /* ?? */

	strcpy(string, "Hallo Welt!");
	sub2(&string[5]);
	printf("%s\n", string);
}
```

1. Welche Bedeutungen haben die Zeilen 4 - 12?

2. Welche Bedeutung haben die Zeilen 21-28?

3. Wie lauten die Ausgaben von Zeile 30 und 31?

4. Welche Auswirkung hat die Zeile 33 auf den Programmverlauf?

5. Wie lautet die Ausgabe von Zeile 37?


### Aufgabe 3

Gegeben ist folgendes Nassi-Schneiderman-Diagramm:

![](https://github.com/KuhlTime/Informatik-Probeklausur/blob/master/assets/Aufgabe3.png?raw=true)

Die Funktion `checkTemperatur()` ist bereits implementiert:

``` c
float checkTemperatur()
{
	/* hier wird alle 60 Sekunden die Temperatur überprüft*/
	/* ... */
	return temperatur;
}
```

1. Schreiben Sie ein Programm mit dem im Diagramm festgelegten Ablauf. Die Funktion `checkTemperatur()` brauchen Sie nicht erneut zu implementieren.

2. Beschrieben Sie stichpunktartig die Funktion des Programms und nennen Sie ein Beispiel wo ein solches Programm eingesetzt werden kann.


### Aufgabe 4

Schreiben Sie ein Programm das eine beliebige am Anfang vorzugebende Anzahl N von Studierenden verwaltet und den Studierenden mit der besten Note ermittelt. Folgende Funktionalität muss dabei erfüllt werden:

* Zuerst soll die Anzahl N von Studierenden von der Tastatur Eingelsen werden, die verwaltet werden sollen.

* Einlesen der N Datensätze bestehend aus dem Nachnamen und der Note. Die Daten sollen von der Tastatur eingelesen werden. Dies muss in einer separaten Funktion erfolgen.

* Die einzulesenden Datensätze sollen in folgender Struktur gespeichert werden:

``` c
struct student
{
	char name[10];
	float note;
};
```
Die Reservierung des Speicherplatzes für die Struktur muss hier dynamisch erfolgen.

* Ausgabe des Studenten mit der besten Note. Existieren mehrere Studierende mit der Bestnote, dann sollen alle Studierende mit der Bestnote ausgegeben werden.

Schreiben Sie im folgenden das Hauptprogramm und die Funktion zur Eingabe des Datensatzes eines Studierenden:

``` c
#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[30];
	float note;
}
```
