> Capítulo 3 - Resumo

Em C não existe um tipico específico para armazenar valores lógicos. Estes são representados por 0-**Falso**, e qualquer valor diferezente de zero representa o valor **Verdade**.

O conteúdo de uma variável, ou o resultado de uma expressão, pode ser usado como valor lógico. Embora qualquer variável ou expressão possa armazenar um valor lógico, é totalmente desaconselhável a utilização de reais como valores lógicos devido aos erros de arrendodamento. Por exemplo, uma variável que seja sujeita a um conjunto de operações que retorne 0 (zero) pode não representar o símbolo Falso, mas sim Verdade, por ter sido armazenado algum erro numérico, por menor que seja. Dessa forma, 0.000001 representa Verdade, e não Falso.

O teste de condições pode ser realizado através das instruções _if-else e switch_.

Na instrução _if-else_ a condição é avaliada e, caso seja Verdadeira (isto é, diferente de zero), é executada a instrução associada ao _if_. A componente _else_ é executada quando a condição devolve o valor lógico Falso (zero).

A componente _else_ do _if_ é opcional.

No caso de ser necessário colocar mais do que uma instrução dentro de um _if-else_, deve-se criar uma instrução composta (uma instrução que é composta por várias instruções), colocando o conjunto de instruções entre chaves. Essa estrutura chama-se **Bloco**.

Um **Bloco** nada mais é do que um conjunto de instruções organizadas como um todo. Um Bloco pode ser sempre colocado no local em que uma instrução simples pode ocorrer. Em geral, depois de um Bloco não é necessário colocar ;.

Uma característica fundamental de qualquer programa corretamente escrito é a sua **Indentação**. A indentação não tem qualquer efeito na compilação ou execução do programa. Serve unicamente para representar as dependências que algumas instruções têm de outras que as precedem.

A indentação é uma característica pessoal de cada programador.

É possível operar valores lógicos através dos operadores binários **&&** (AND) e || (OR) ou através do operador únario ! (NOT)

O operador && tem maior precedência que o operador ||.

Esses operadores permitem a combinação de duas ou mais expressões lógicas numa única expressão, devolvendo um único valor lógico como resultado da avaliação da expressão total.

A instrução _if-else_ pode ser evitada sempre que uma mesma variável, dependendo de uma condição, possa receber dois valores diferentes. Nesse caso, a instrução _if-else_ pode ser substituída pelo **operador condicional ?:**.

A fim de eliminar conjuntos extensos de instruções _if-else_ encadeadas, C coloca à disposição dos programadores a instrução **switch**.

Ao contrário do _if_, que permite definir bandas de valores (x>=10 && x<=120), o _switch_ só admite valores constantes predefinidos dos tipos _char, int_ e _long_.

Depois de a instrução _switch_ verificar qual o _case_ correspondente à expressão avaliada, inicia a execução na instrução associada a esse _case_, executando em seguida todas as instruções seguintes em cascata(incluindo as que pertençam a outros _case_) até terminar o _switch_ ou até ser encontrada a instrução **break**.

A instrução **break** permite para a execução de um conjunto de instruções dentro de um _switch_, continuando o programa na instrução seguinte ao _switch_.

Uma vez que o conjunto de instruções a executar dentro de um _switch_ é controlado pela instrução _break_, não é necessário o uso de chaves para agrupar o conjunto de instruções associadas ao _case_.S
