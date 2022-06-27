# Hash Table with Linked List in C++
_Custom Hash Table Database that uses custom linked list database to store structure with all the info  which user wants to input_

## Setup
In order to use this project all you need to do is download the files and use any text editor to modify them.
## How to use?
To use Hash Table with Linked List library all you will need to download: tabela.h, tabela.cpp. lista.h and lista.cpp files as well as include tabela.h in your project.
```sh
#include "tabela.h"
```
In order to make new Hash Table you can do that by typing
```sh
Tabela t;
```
In order to add new ellements to Hash Table you do so with function Dodaj() like this:
```sh
t.Dodaj("Smith",6);
```
This will add smith on index of Hash Table which coresponds to Smith's key which is 6.
To view  how many users are with the same key in hash table type:
```sh
t.VelicinaIndeksa(6);
```
