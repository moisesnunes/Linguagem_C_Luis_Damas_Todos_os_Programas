> Capítulo 5 - Resumo

Neste capítulo apresentamos as funçãoes e procedimentos em C.

O formato genérico de uma função é:

```
tipo nome_função(tipo param, tipo param, ... , tipo param)
{
    corpo da função
}
```

Existem duas razões bem conhecidas para recorrer à escrita de funções:

- _Reduzir a complexidade de um programa._
- _Evitar a repetição de código ao longo de um programa._

As funções são trechos de código, independetes do programa em que são utilizadas, e devem realizar um única tarefa. O objetivo é que essa tarefa seja realizada corretamente. A forma como a tarefa é desempenhada não tem qualquer interesse. Uma função deve funcionar, assim, como uma caixa preta em que não se vê o mecanismo interno, apenas se sabe o que entra e o que sai, sem provocar efeitos colaterais.

O código de uma função só é executado quando esta é invocada, em alguma parte do programa a que está de algum modo ligada.

Sempre que uma função é invocada, o programa que a invoca é _"suspenso"_ temporariamente. Em seguida são executadas as instruções presentes no corpo da função. Uma vez terminada a função, o controle de execução do programa volta ao local em que esta foi invocada.

As funções são uma ferramenta essencial ao desenvolvimento estruturado de aplicações.

Cada função tem que ter um nome único, que não pode ser igual ao nome de outra função ou de alguma variável. As regras para o nome de uma função são iguais às regras enuciadas para a designação das variáveis. Mais uma vez se repete que o nome de uma função deverá indicar aquilo que ela faz, tal como o nome de uma variável deverá indicar aquilo que ela contém.

Uma função pode receber parâmetros e pode, ainda, devolver um único valor como resultado da sua execução.

Depois de terminar o seu funcionamento, uma função pode devolver um valor para o programa que a invocou. A devolução de valores é realizada atráves da instrução **return**, seguida da expressão cujo valor queremos devolver.

Assim que a instrução _return_ é executada, a função termina a sua execução e o controle do programa volta ao local onde a função tinha sido invocada.

Uma função que não devolve qualquer valor é, habitualmente, designada por **Procedimento**. Sempre que uma função não devolve qualquer valor deve ser declarada como se "devolvesse o tipo void". A palavra reservada **void** indica ausência de tipo e é normalmente traduzida por _nada_ ou _vazio_.

As funções podem ser colocadas em qualquer local do arquivo, antes ou depois de main, antes ou depois de serem invocadas. É, no entanto, aconselhável colocar os protótipos de todas as funções (cabeçalhos das funções seguidos de ponto-e-vírgula) imediatamente antes do código da primeira função presente no arquivo, a fim de evitar eventuais erros de compilação.
