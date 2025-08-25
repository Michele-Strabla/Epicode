# funzione per contare le lettere delle parole e 
#inserirle in una lista_b


def conta_lista(lista_a):
    lista_b = []
    for parola in lista_a:
        lista_b.append(len(parola))
    return lista_b

#salviamo in una variabile l'input dell'utente che inserisce
#le parole 
i_u = input("inserisci delle parole separate da uno spazio: ")

#rimuove gli spazi all'inizio e alla fine della stringa
#e divide le parole 
parole = i_u.strip().split()

#salviamo in una variabile lunghezza richiameremo la funzione conta lista con
#l'input dell'utente 
lunghezza = conta_lista(parole)

#stampa il risultato della funzione
print("lunghezze delle parole", lunghezza)