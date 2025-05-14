# HashTables(Português)

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
*NOTA*:Os espaços entre os comandos são apenas para tornar o exemplo mais perceptível, ou seja, não devem ser usados no programa.

### Limpez dos ficheiros criados

Para remover os ficheiros criados durante a compilação do projeto basta digitar:

```console
$ make clean
```

## Autor

* Luís António Peixoto Soares - [luis7788](https://github.com/luis7788)


# HashTables (English)

Project developed for the "Laboratórios de Informática 2" course during the 2023/2024 academic year at the University of Minho.

## Objectives

The goal of the project is to implement 3 different types of Hash Tables:

* Open Addressing with Linear Probing  
* Closed Addressing with Chaining  
* Cuckoo Hash Table

### Compiling the Program

To compile the code and access the available programs, simply run:

```console
$ make
```

### Running the Program

```console
$ ./main
```

### INPUT

#### Hash Table Size

The first input must be the maximum size of the Hash Table.  
The value should be between 0 and 10000.

#### Hash Table Selection

* `OPEN` - Open Addressing with Linear Probing  
* `LINK` - Closed Addressing with Chaining  
* `CUCKOO` - Cuckoo Hash Table

#### Commands

* `I` - Insert a key into the Hash Table  
* `D` - Delete a key from the Hash Table  
* `C` - Search for a key in the Hash Table  
* `P` - Print the Hash Table  
* `E` - Exit

### Example

Input:
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

Output:
```console
4 -> 4
OK

4

5 -> 5
OK

OK

4	4
5	D

End of program
```

**Note**: The spaces between commands are only for clarity in the example and should not be used when running the program.

### Cleaning Generated Files

To remove the files generated during the compilation process, run:

```console
$ make clean
```

