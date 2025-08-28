> Capítulo 4 - Resumo

Em C existem três laços distintos, os laços **while,for** e **do...while**. Todos eles são executados enquanto a condição a eles associada for Verdadeira, isto é,a condição que é colocada nos laços mostra qual é o critério que se tem que verificar para que o laçao seja executado.

Nos laços **for e while**, o teste da condição é realizado antes de qualquer instrução, permitindo assim que o laço seja executado zero ou mais vezes. No caso do laço **do...while**, a condição só é testada depois de executada a instrução correspondente pelo menos uma vez.

Assim, o laço do...while, deverá ser utilizado em situações em que o corpo do laço seja executado pelo menos uma vez.

Dentro de um laço podem aparecer instruções simples, outros laços ou blocos de instruções. Quando um lçao aparece dentro de outro, estamos diante de um **Laço Encadeado**.

É possível a criação de **Laços Infinitos**, colocando na condição do lçao uma condição que seja sempre verdadeira.

O comportamento normal dos laços pode ser alterado com o recurso às instruções **break e continue**. A instrução break termina o laço, continuando o programa na próxima instrução a seguir a laço. A instrução continue faz com que uma determinada iteração seja terminada, passando-se automaticamente à próxima iteração.

A linguagem C coloca à nossa disposição um conjunto de operadores particurlamente úteis (++ e --) nas situações de incremento e de decremento de uma variável.

Os operadores ++ e -- podem ser utilizados tanto à esquerda como à direita de uma variável, tendo, no entanto, resultados diferentes se esta não se encontrar isolada.

Quando colocado à esquerda, o operador ++ incrementa a variável antes de usá-la.

Quando colocado à direita, o valor da variável é utilizado na expressaõ e só depois é que a variável é incrementada (idem para --).

Nunca se deve utilizar os operadores ++ ou -- em variáveis que apareçam mais do que uma vez em uma mesma expressão.

A alteração dos valores de uma variável pode ser realizada de forma mais simples se o novo valor da variável depender do seu valor anterior. Nesse caso, pode-se utilizar uma atribuição composta para indicar qual a operação a realizar, colocando o operador à esquerda do sinal de atribuição, evitando assim a escrita da variável à direita da atribuição. Exemplo: x/= 2+3; é equivalente a x=x/(2+3).
