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
