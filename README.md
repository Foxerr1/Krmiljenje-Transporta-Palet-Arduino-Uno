# Krmiljenje-Transporta-Palet-Arduino-Uno

Projekt za UPN.

<br>

Navodila:

Krmiljenje transporta palet: Paleta se pomika po transportnem traku 1 na dvižno mizo do senzorja B1 (Tipka na pinu 6) - pomik po tem traku je na osnovi kotaljenja. Ko paleta aktivira senzor B1, se vključi sistem za hidravlično dviganje mize (zelena LED). Dvigovanje mize se zaustavi, ko se aktivira senzor B3 (Tipka na pinu 7). Po aktiviranju senzorja B3 se vključi transport palete na trak 2 (motorček se vklopi preko releja). Aktiviranje senzorja B4 (Tipka na pinu 8) označi, da je paleta zapustila dvižno mizo in da se lahko miza spusti v spodnjo lego, kjer se aktivira senzor B2 in miza se ustavi. Za senzorje uporabite stikala/tipke.

<br>
<br>
<br>

Kosovnica:

- 3x tipka
- 4x 220Ω rezistor
- 1x zelena LED
- 1x rele
- 1x motorček
- 1x dioda
- 16x žiče

<br>
<br>
<br>

Vhodi:

| Oznaka v načrtu | Naslov operanda | Vrsta kontakta | Pomen |
| -------- | ------- | -------- | ------- |
| SB1 | Tipka | O, tipka | Tipka je mišljena kot prvi senzor B2, ta "senzor" se sproži ko pritisneš tipko |
| SB2 | Tipka | O, tipka | Tipka je mišljena kot drugi senzor B3, ta "senzor" se sproži ko pritisneš tipko |
| SB4 | Tipka | O, tipka | Tipka je mišljena kot tretji senzor B4, ta "senzor" se sproži ko pritisneš tipko |

<br>
<br>
<br>

Izhodi:

| Oznaka v načrtu | Naslov operanda | Aktiven pin | Pomen |
| -------- | ------- | -------- | ------- |
| D GREEN | LED | 4 | Predstavlja delovanje hidravličnega sistema za dviganje |
| K1 | Rele | 8 | Preko releja kontroliramo motorček ki ponazarja transport palete. |

<br>
<br>
<br>

![slika_vezja](https://github.com/Foxerr1/Krmiljenje-Transporta-Palet-Arduino-Uno/blob/main/slika_vezja.jpg?raw=true)
![slika_vezja2](https://github.com/Foxerr1/Krmiljenje-Transporta-Palet-Arduino-Uno/blob/main/slika_vezja2.jpg?raw=true)
![slika_vezja3](https://github.com/Foxerr1/Krmiljenje-Transporta-Palet-Arduino-Uno/blob/main/slika_vezja3.jpg?raw=true)
![slika_sheme](https://github.com/Foxerr1/Krmiljenje-Transporta-Palet-Arduino-Uno/blob/main/shema_vezja.png?raw=true)
![vezje_tinkercad](https://github.com/Foxerr1/Krmiljenje-Transporta-Palet-Arduino-Uno/blob/main/vezje_tinkercad.png?raw=true)



https://github.com/Foxerr1/Krmiljenje-Transporta-Palet-Arduino-Uno/assets/102383035/f5e574b5-c13e-481b-b1e1-8dcc5d0c653b

<br>
<br>

KOMENTAR:

Delovanje vezja ni vedno delovalo zaradi neznanih razlogov, zato videja pravega arduino vezja ni. Spremeniti ni potrebno nič, saj je koda kratka in vezje lahko.
