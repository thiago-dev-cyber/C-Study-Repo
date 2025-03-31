![Example image](/.github/images/vetores.png)

Um **array** ou **vetor** é uma **Estrutura de Dados** que armazena elementos do mesmo tipo de forma contínua na memória que podem ser acessados através de índices. Algumas das características de um array:


### Índices: 

Você pode acessar os valores contidos dentro de um array atráves de indices. Quando iniciamos um array, devemos informar o **tipo dos dados** que queremos guardar, seu **nome** e o **tamanho**. Os indicies de um array vão de `0` a `tamanho_vetor - 1`.

```c

// tipo <char> nome <vogais> tamanho <5>;
char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // [0] -> 'a' [1] -> 'e' ...
```

### Possui tamanho fixo:

Uma vez que o *tamanho do vetor foi definido* ele não poderá ser alterado. Por exemplo, o vetor `int bananas[3];` tem espaço apenas para armazenar 3 bananas, pois foi esse espaço que foi pedido para o compilador reservar. 

```c
int notas[3] = {3, 2, 6}; // Vetor de notas do tipo inteiro com tamanho 3;

// Tentando adicionar o valor 9 a posição 3 do vetor. 
notas[3] = 9;

```

***Aqui entra uma peculiaridade da linguagem C: Ao tentar adicionar um valor, além do range do vetor, você conseguirá fazer-lo, porem você estara acessando partes da memoria que não pertencem ao vetor podendo sobrescreve-las e causar erros.*** 

### Armazena apenas dados do mesmo tipo: 

Uma vez definido o tipo de dados que o vetor ira armazenar, **você não podera adicionar neste vetor dados de outros tipos**.

> Isso é verdade na teoria, mas na prática em linguagens de programação como o C podemos adicionar em um array elementos de um tipo diferente. Em um array de `float`, por exemplo, podemos  adicionar um valor do tipo `int` e a propria linguagem se encarrega (`casting`)de fazer a conversão do valor. 
> O contrario também vale, porem é importante atentar-se a perda de precisão, tentar adicionar o valor `7.9` a um array de `int` é permitido, mas o compilador ira truncar o valor para `7` o que acabara levando a perda de precisão.  

```c
float alturas[] = {3.8, 2.3, 9.1}; // Vetor de tamanho 3 do tipo float.

// Implicitamente o compilador fara o casting da variavel transformando-o em float
alturas[1] = 8;  // alturas[1] = (float) 8;
```

***"Obs: Caso deseje que o compilador avise sobre conversões implícitas de tipos, você pode usar a flag `-Wconversion`."***




**Summary:**
- [Summarize what you read and understood]

**Connections:**
- [[Link to other relevant notes]]

**Personal Reflection:**
- [What did you learn or how does this relate to your prior knowledge?]
