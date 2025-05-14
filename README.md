# HashTables

Problema realizado na uc de Laboratórios de Informática 2 do ano letivo 2023/2024 da Universidade do Minho.

## Objetivos

O projeto tem como objetivo a criação de 3 tipos diferentes de Hash Tables.

* Open Addressing with Linear Proving

* Closed Addressing with chaining

* Cuckoo Hash Table

### Compilação do Programa

Para compilar o código e ter acesso aos programas disponíveis basta fazer: 

```console
$ make
```

### Execução do Programa

```console
$ ./main
```

### INPUT

#### Inserção do tamanho da HashTable

O primeiro input deve ser o tmnho máximo da HashTable.
O input deve estar entre 0 e 10000.

#### Escolha da Hash Table

* OPEN - Open Addressing with Linear Proving
* LINK - Closed Addressing with chaining
* CUCKOO - Cuckoo Hash Table

#### Comandos

* I - Insert a key in HashTable
* D - Delet a key in HashTable 
* C - Consult a key in HashTable
* P - Print HashTable
* E - Exit

### Exemplo

Input
```console
 100

 OPEN

 I
 4

 C
 4

 I
 5

 D
 5

 P

 E
```

Output
```console
4 -> 4
OK

4

5 -> 5
OK

OK

4	4
5	D

Fim do programa
```

### Limpez dos ficheiros criados

Para remover os ficheiros criados durante a compilação do projeto basta digitar:

```console
$ make clean
```

## Autor

* Luís António Peixoto Soares - [luis7788](https://github.com/luis7788)

