# Krmiljenje-Transporta-Palet-Arduino-Uno
Krmiljenje transporta palet z Arduino Uno

Krmiljenje transporta palet: Paleta se pomika po transportnem traku 1 na dvižno mizo do senzorja B1 (Tipka na pinu 6) - pomik po tem traku je na osnovi kotaljenja. Ko paleta aktivira senzor B1, se vključi sistem za hidravlično dviganje mize (zelena LED). Dvigovanje mize se zaustavi, ko se aktivira senzor B3 (Tipka na pinu 7). Po aktiviranju senzorja B3 se vključi transport palete na trak 2 (motorček se vklopi preko releja). Aktiviranje senzorja B4 (Tipka na pinu 8) označi, da je paleta zapustila dvižno mizo in da se lahko miza spusti v spodnjo lego, kjer se aktivira senzor B2 in miza se ustavi. Za senzorje uporabite stikala/tipke.

Uporabljeni material:
/n 3x velika tipka
/n 4x 220Ω rezistor
/n 1x zelena LED
/n 1x rele
/n 1x motorček
/n 1x dioda
/n 16x žicče
