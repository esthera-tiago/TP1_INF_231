# Makefile pour compiler tous les exercices du TP INF231_EC2

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Dossiers
MATRICES_DIR = matrices
TABLEAUX_DIR = tableaux
OPERATIONS_DIR = operations

# Fichiers source
MATRICES_SRC = $(MATRICES_DIR)/somme_matrice.c $(MATRICES_DIR)/produit_matrice.c
TABLEAUX_SRC = $(TABLEAUX_DIR)/recherche_seq.c $(TABLEAUX_DIR)/test_tri.c $(TABLEAUX_DIR)/mediane.c $(TABLEAUX_DIR)/inversion.c
OPERATIONS_SRC = $(OPERATIONS_DIR)/multiplication_addition.c $(OPERATIONS_DIR)/produit_vectoriel.c $(OPERATIONS_DIR)/produit_vecteur_matrice.c

# Tous les fichiers source
SRC = $(MATRICES_SRC) $(TABLEAUX_SRC) $(OPERATIONS_SRC)

# Générer les exécutables correspondants
BIN = $(SRC:.c=)

.PHONY: all clean

# Règle principale
all: $(BIN)

# Compilation automatique
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Nettoyage des exécutables
clean:
	rm -f $(BIN)