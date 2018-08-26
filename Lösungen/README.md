# Informatik II Probeklausur Lösungen
### Aufgabe 1:
1. Wie lautet der Befehl, um ein C-Programm ”wurzel.c” zu kompilieren, unter Beachtung des ANSI-Standarts?

``` shell
gcc -ansi wurzel.c -o wurzel
```
2. Was bewirkt der folgende Quellcode?

Die Variable i wird von 1 an dauerhaft hochgezählt und in die Konsole ausgegeben.

3. Nennen Sie die zwei fehlenden Bussysteme der „Von-Neumann-Rechnerarchitektur“:
	* Adressbus
	* **Datenbus**
	* **Steuerbus**

4. Was bewirkt die folgende Zeile?
``` c
	#include <stdio.h>
```

Mit dieser Codezeile kann die stdio Library, die Standart-Input-Output Library im folgenden Programm verwendet werden.

5. Was bedeutet die Werteübergabe mittels „call by value“?

Beim Aufrufen einer Funktion erhalten die Parameter der Funktion eine temporäre **Kopie** des Argumentwertes.

6. Wofür steht die Abkürzung RAM?

Die Abkürzung RAM steht für Random-Access-Memory oder auf deutsch für den Arbeitsspeicher.

7. Führen Sie jeweils eine bitweise Verknüpfung der angegebenen Zahlen über die logischen Operationen **AND**, **OR** und **XOR** durch. Geben Sie das Ergebnis in dezimaler Darstellung an.
Zahlen: **37**, **89**

|     | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |
| --- | --- | --- | --- | --- | --- | --- | --- |
|     | 64  | 32  | 16  | 8   | 4   | 2   | 1   |  
| 37  | 0   | 1   | 0   | 0   | 1   | 0   | 1   |
| 89  | 1   | 0   | 1   | 1   | 0   | 0   | 1   |
| AND | 0   | 0   | 0   | 0   | 0   | 0   | 1   |
| OR  | 1   | 1   | 1   | 1   | 1   | 0   | 1   |
| XOR | 1   | 1   | 1   | 1   | 1   | 0   | 0   |

AND = 1 <br>
OR = 125 <br>
XOR = 124 <br>

### Aufgabe 2:

1. Welche Bedeutung haben die Zeilen 4-12?

Es werden zwei Funktionen definiert. `sub1` und `sub2`.
- `sub1`: Die Funktion `sub1` nimmt einen Intager Wert als Übertragungsparameter, welchen die Funktion im inneren um einen Zähler erhöht und wieder zurück gibt.
- `sub2`: Die zweite Funktion `sub2` nimmt einen pointer auf einen character und setzt den Pointer auf den Nullzeiger. Von der Funktion wird erwartet, dass ein intager Wert zurück gegeben wird, was allerdings nicht passiert.

2. Welche Auswirkung haben die Zeilen 21-28?

- In diesen Zeilen wird der `m`'te Character des `String` Arrays mit einem Chracter mit der selben Platzierung von hinten getauscht.
- `m` wird einen hochgezählt.
- Dies geschiet solange `m<3` ist.

3. Wie lauten die Ausgaben von Zeilen 30 und 31?

- Zeile 30: `!tllo WelaH`
- Zeile 31: `11`

4. Welche Auswirkung hat die Zeile 33 auf den Programmverlauf?

- Die Zeile 33 hat keinen weiteren Einfluss auf das Programm, da die Variable `m` nicht weiter verwendet wird.

5. Wie lautet die Ausgabe von Zeile 37?

- Zeile 37: `Hallo`


### Aufgabe 3:

1. Schreiben Sie ein Programm mit dem im Diagramm festgelegten Ablauf. Die Funktion `checkTemperatur()` brauchen Sie nicht erneut zu implementieren.

``` c
#include <stdio.h>

/* float checkTemperatur() */

int main() {
	float zielTemperatur = 25.0;
	int fanspeed = 3;
	int shutdown = 0;

	while(shutdown == 0) {
		float istTemperatur = checkTemperatur();
		printf("\nistTemp: %f", istTemperatur);

		if(istTemperatur < zielTemperatur) {
			fanspeed--;
		} else if (istTemperatur > zielTemperatur) {
			fanspeed++;
		}

		printf("\nFanspeed: %i", fanspeed);

		if(istTemperatur >= 70.0 || fanspeed > 10) {
			shutdown = 1;
		}
	}

	printf("System wird heruntergefahren...");
}
```
