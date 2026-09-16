# RainFall

Depot de travail pour le projet **RainFall**, realise en groupe avec
**Don-Chinjao**.

Ce repository regroupe les sources reconstruites, les commandes d'exploitation,
les flags recuperes et des notes de resolution pour chaque niveau du projet.

## Structure

Chaque dossier correspond a un exercice :

```text
level0/ ... level9/
bonus0/ ... bonus3/
```

On retrouve generalement dans chaque dossier :

- `source.c` ou `source.cpp` : version reconstruite ou annotee du binaire.
- `flag` : flag obtenu apres exploitation.
- `ressources/commands.txt` ou `command.txt` : commandes utiles, payloads et pistes.
- `walkthrough` : notes de resolution quand disponibles.

## Methodologie

Les exercices couvrent plusieurs familles classiques d'exploitation :

- depassements de tampon ;
- ecriture en memoire via format string ;
- ret2libc ;
- detournement de GOT/PLT ;
- shellcode via environnement ;
- comportements limites lies aux entiers signes/non signes ;
- analyse dynamique avec `gdb`.

Les commandes ont ete conservees proches de leur forme d'origine afin de garder
une trace exploitable du raisonnement et des tests effectues.

## Utilisation

Depuis un niveau donne, consulter d'abord le fichier source et les commandes :

```sh
ls levelX
cat levelX/source.c
cat levelX/ressources/commands.txt
```

Pour une vue rapide de toutes les solutions, lire :

```sh
cat diroyer_notes.txt
```

## Notes

Ce depot sert de support de revision et d'archive de resolution. Les adresses,
offsets et payloads peuvent dependre de l'environnement RainFall utilise pendant
le projet.
