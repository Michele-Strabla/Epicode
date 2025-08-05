import math

# Funzioni per calcoli
def calcola_quadrato(lato):
    perimetro = lato * 4
    area = lato ** 2
    return perimetro, area

def calcola_cerchio(raggio):
    perimetro = 2 * math.pi * raggio
    area = math.pi * raggio ** 2
    return perimetro, area

def calcola_rettangolo(base):
    altezza = base / 2  # ipotesi: altezza = metà della base
    perimetro = 2 * (base + altezza)
    area = base * altezza
    return perimetro, area

# Acquisizione valore iniziale
ok = False
while not ok:
    try:
        valore = float(input("Scegli un valore iniziale (numerico): "))
        ok = True
    except ValueError:
        print("Errore: inserisci un numero valido.")

# Dizionario figure disponibili
figure = {
    1: "Quadrato",
    2: "Cerchio",
    3: "Rettangolo"
}

# Ciclo di 3 scelte
for _ in range(3):
    print("\nScegli la figura da calcolare:")
    for chiave, nome in figure.items():
        print(f"\t{chiave} - {nome}")

    scelta_valida = False
    while not scelta_valida:
        try:
            scelta = int(input("Inserisci il numero della figura: "))
            if scelta in figure:
                scelta_valida = True
            else:
                print("Scelta non valida.")
        except ValueError:
            print("Inserisci un numero intero.")

    figura_scelta = figure[scelta]

    # Calcoli in base alla scelta
    if figura_scelta == "Quadrato":
        perimetro, area = calcola_quadrato(valore)
    elif figura_scelta == "Cerchio":
        perimetro, area = calcola_cerchio(valore)
    elif figura_scelta == "Rettangolo":
        perimetro, area = calcola_rettangolo(valore)
    else:
        raise Exception("Figura sconosciuta")

    # Risultati
    print(f"\nHai scelto: {figura_scelta}")
    print(f"Valore usato: {valore:.2f}")
    print(f"Perimetro: {perimetro:.2f}")
    print(f"Area: {area:.2f}")

    # Preparazione per il prossimo giro
    valore = area  # l'area diventa il nuovo valore iniziale
    del figure[scelta]  # rimuove la figura già usata

print("\nProgramma terminato.")
