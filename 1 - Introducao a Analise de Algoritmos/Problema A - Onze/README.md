# Problema A – Onze
**Descrição:**

Hans Peter Luhn foi um cientista da computação que trabalhou em uma grande empresa e desenvolveu uma patente para o cálculo do dígito verificador módulo onze, muito utilizado atualmente. Entretanto, ele sempre buscava verificar se o número inteiro informado era um múltiplo de onze (i.e., divisível por onze).

**Tarefa**

Escreva um programa que, dado um número de  **até mil dígitos**, retorne se ele é ou não é um múltiplo de onze. Note que deve-se imprimir APENAS o que se pede, sem textos informativos a usuários, pois se trata de um problema bem definido e cuja entrada é padronizada.

**Objetivo**

Este problema não se trata apenas de encontrar a solução correta para a entrada fornecida, mas como essa solução pode ser obtida eficientemente. Note que o tamanho da entrada não pode ser lido como um inteiro convencional, então é necessário manipular a entrada (como string) para se obter o resultado esperado.

**Entrada**

Cada linha da entrada contém um número inteiro N não negativo (o número zero sinaliza o fim da entrada). Os números dados podem conter até 1000 dígitos.

**Saída**

Seu programa deve imprimir, deve indicar, para cada número da entrada, SIM se ele for um múltiplo de onze ou NAO caso contrário (não use acentuação).

**Exemplo**
| Entrada |Saida  |
|--|--|
| 112233 | SIM |
| 30800 | SIM |
| 2937 | SIM |
| 323455693 | SIM |
| 5038297 | SIM |
| 112234 | NAO |
| 0 |  |

**Dica:** Para resolver este problema, é necessário saber sobre os critérios de divisibilidade de um número por onze, e também pode-se utilizar conceitos de aritmética modular. Você pode utilizar os arquivos `onze.in` e `onze.res` para testar se seu programa responde corretamente. Utilize `onze.in` como entrada e `onze.out` como saída, e faça: `diff onze.res onze.out.`

## Resolução
O algoritmo que resolve este problema é o arquivo `Problema A - Onze.c` que esta dentro desta pasta. Você pode baixa-lo, testa-lo e melhora-lo, mas só se você quiser.

