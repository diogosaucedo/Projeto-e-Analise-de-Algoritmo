# Análise de Algoritmos: Introdução
Você já deve saber o que é um algoritmo e também deve ter notado que existem diferentes algoritmos para resolver um mesmo problema e, obviamente, obter a mesma solução. Mas como saber se um algoritmo é melhor que outro? Como compará-los? E o que representa necessariamente  o termo “melhor” se tenho a mesma solução? O algoritmo sempre apresenta uma solução correta?

A  **análise de algoritmos**  tenta justamente responder a estas perguntas. Por exemplo, considere dois algoritmos para o cálculo do IMC (Índice de Massa Corporal) de uma pessoa qualquer (Algoritmo 1 e Algoritmo 2).

**Algoritmo 1**
```
imc1(peso, altura)  
inicio  
	res = altura * altura  
	se (altura <> 0)  
		res = peso / res  
	senão  
		res = 0.0  	
	retorna res  
fim
```
**Algoritmo 2**
```
imc2(peso, altura)  
inicio  
	se (altura == 0)  
		retorna 0  
	senao  
		res = peso/altura  
		res = res/altura  
		retorna res  
fim
```

Os dois algoritmos respondem corretamente o valor do IMC de uma mesma pessoa? Qual deles é mais rápido?

  
## Como é feita a Análise de um algoritmo
Podemos responder à primeira pergunta: sim, os dois algoritmos retornam corretamente o valor do IMC de uma determinada pessoa, visto que, IMC = peso / altura2. Mas e a segunda pergunta?
Você pode ter a falsa impressão de que um dos algoritmos é mais rápido. Na verdade, ambos possuem a mesma eficiência em processamento. Então, como definir “mais rápido” para comparar dois algoritmos que resolvem o mesmo problema e oferece a mesma resposta?
Para realizar essa tarefa, é necessário algum conhecimento de matemática básica que será utilizado no decorrer do curso. É esperado que você tenha realizado a atividade de “Revisão Matemática”. Observe os Algoritmos 1 e 2 apresentados.
Consideraremos que uma pessoa informe um peso P e uma altura A qualquer, mas cujo valor $A \neq 0$. Logo, o Algoritmo 1 executa as linhas de 3 a 5, finalizando com a execução da linha 8. Considerando que o tempo para a realização de uma operação atômica qualquer (aquela onde a CPU não realiza desvio de fluxo (chamada de função) tem custo computacional constante, então teremos o curso de 4 constantes, ou seja, independente dos valores de P e A fornecidos, $A \neq 0$, teremos $T_{A1}  = 4c$, em que c representa o valor da constante supracitada.

Semelhantemente, o Algoritmo 2 executaria as linhas 5 a 8 para os mesmos P e A informados anteriormente. Logo, $T_{A2}  = 4c$, exatamente igual a $T_{A1}$.

## Analisando mais dois algoritmos
Agora suponha que um menino de 11 anos queira um programa para descobrir o resultado da soma de todos os números inteiros positivos entre dois valores, I e F. Por exemplo, ele gostaria de saber quanto é a soma de todos os inteiros de 1.000 a 1.100. Para isso, ele apresentou os Algoritmos 3 e 4 abaixo:

**Algoritmos 3**
```
soma1(inicio, fim)  
inicio  
	soma = 0  
	para i=inicio até fim  
		soma = soma + i  
	retorna soma  
fim
```
**Algoritmo 4**
```
soma2(inicio, fim)  
inicio  
	soma = 0  
	se (fim >= inicio) então  
		n = (fim - inicio + 1)  
		soma = n*(inicio + fim)/2  
	retorna soma  
fim
```
Os dois algoritmos respondem corretamente ao valor da soma desejada? Note que, se forem informados os números 1.000 e 1.100, o valor da soma será exatamente  106.050. Mas qual dos dois é o mais rápido?

Note que o intervalo fechado entre dois números inteiros positivos quaisquer é exatamente igual ao módulo da diferença entre eles acrescido de 1. Definiremos esse intervalo de n, a quantidade de números a serem somados. Logo, Algoritmo 3 executaria a linha 3, n vezes as linhas 4 e 5, uma última vez a linha 3 (avaliar a condição de parada do loop) e mais a linha 6 para finalizar. Portanto, o tempo total $T_{A3} = (2n + 2)c$, em que c é uma constante como comentado anteriormente.

Já para o Algoritmo 4, seria necessário executar as linhas de 3 a 7, obtendo o tempo total seria $T_{A4}  = 5c$. Dessa forma, podemos dizer que o Algoritmo 4 é mais eficiente (mais rápido em tempo computacional) que o Algoritmo 3.

Mas essa diferença é significativa? Sim, considerando que o valor de n pode ser muito grande, o que dependerá dos valores fornecidos como entrada, i.e., os valores de I e F do problema.
