# Makefile pour compiler tous les exercices du TP INF231_EC2

build:
	gcc ./matrices/produit_matrice.c -o ./bin/produit_matrice
	gcc ./matrices/somme_matrice.c -o ./bin/somme_matrice

	gcc ./tableaux/inversion.c -o ./bin/inversion
	gcc ./tableaux/somme_matrice.c -o ./bin/somme_matrice
	gcc ./tableaux/mediane.c -o ./bin/mediane
	gcc ./tableaux/recherche_seq.c -o ./bin/recherche_seq

	gcc ./operations/multiplication_addition.c -o ./bin/multiplication_addition
	gcc ./operations/produit_vect_matrice.c -o ./bin/produit_vect_matrice
	gcc ./operations/produit_vectoriel.c -o ./bin/produit_vectoriel

# Nettoyage des exécutables
clean:
	rm ./bin/*
