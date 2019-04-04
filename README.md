# Projet_MA24
Projet d'apprentissage sur les pointeurs pour l'examen de MA 24

Problématique: Comment et pourquoi utiliser des pointeurs dans une application en C?

sources:
  - https://www.ltam.lu/cours-c/prg-c88.htm   
  - https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/15417-a-lassaut-des-pointeurs
  - https://www.commentcamarche.net/contents/116-les-pointeurs-en-langage-c
  - https://zestedesavoir.com/tutoriels/755/le-langage-c-1/1043_aggregats-memoire-et-fichiers/4277_les-pointeurs/
           
        Permettent de bien capter le principe des pointeurs grâce à des explications et des exemples concrets.
Ces sources ont été choisie d'après une connaissance de base de certains sites qui m'ont été utile dans la compréhension d'autres
conceptes de programmation ou alors par hasard suite a des mots clés tels que "initialiser pointeurs C" dans le navigateur firefox.
  
Introduction:

Les pointeurs sont couramment utilisés dans le langage C (entre autre), et pourtant, chaque programmeur débutant 
c’est creusé la tête au moins une fois par manque de connaissance à leurs sujets.
C’est pour cette raison que ce petit code offre une démonstration de leurs utilisation de base 
(il est bien entendu possible de les utiliser d’une multitude de façon en fonction de vos besoins et de votre imagination!).

Fonctionnement du code:

Le code demande à l’utilisateur d’entrer 3 nombre. C’est nombres sont stocké dans des variables (a,b et c).
La valeur et l’adresse mémoire de chacune de ces variables est affichée dans la console, puis on appelle une fonction 
(calcul) qui utilise des pointeurs (pA, pB et pC) pointant sur chacune de nos 3 variables. Cette fonction est une fonction 
void, elle ne renvoie donc aucune valeur de sortie.
Des calcules sont effectués sur ces pointeurs de façon à faire changer la valeur des cases mémoire sur laquelle ils 
pointent. 
Pour finir, on retourne dans la fonction main et on affiche une nouvelle fois la valeur  et l’adresse mémoire de chacune 
de nos variables a, b et c. Les valeurs ont changé alors que la fonction calcul ne renvoyait rien ! 

Résultats:

Quelle résultats retirons nous de ce programmes ? 
Nous pouvons y observer l’une des utilités des pointeurs. En effet, dans ce programme ils permettent de transmettre 
non pas un résultat (comme ce serait le cas avec un return) de la fonction calcul, mais bien 3. 
Comme le pointeurs pointe sur l’adresse de la variable correspondante dans le main, lorsque on change la valeur contenue 
à l’adresse du pointeur (à l’aide d’une *), on modifie directement la valeur de notre variable, donc pas besoin de 
retourner une valeur puisque elle est déjà changée ! 
Il y a certain points auxquels il faut être attentifs lors de l’utilisation des pointeurs :
	- le symbole & désigne l’adresse d’une variable.
	- le symbole * désigne la valeurs d’une variable.
	- un pointeur est une variable qui stock l’adresse d’une variable.
L’utilisation des pointeurs peut se faire de multiples manières, en fonction des besoin et de l’imagination du programmeur.
On peut par exemple faire des pointeurs de pointeurs, des pointeurs de pointeurs de pointeurs, etc...