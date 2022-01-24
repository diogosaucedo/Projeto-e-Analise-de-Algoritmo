# Revisão Matemática
O PDF “*PAA-RevMat*” do **Prof. Nielsen Simões** efetua um apanhado geral sobre as principais áreas que **devem** ser revisadas antes de estudar PAA, sugiro que o use como um guia de consulta rápida, após revisar cuidadosamente o conteúdo a seguir. 
- **Funções monotônicas** podem ser revisadas com mais detalhes no  material  em PDF “*Pré-Cálculo*” do **Prof. Humberto José Bortolossi**.
- [Função Piso e Função Teto](https://www.youtube.com/watch?v=wxHKxWfWhjQ)
- [Aritmética modular](https://www.youtube.com/watch?v=qYqusyUOtF0)
- [Progressão Aritmética](https://www.youtube.com/watch?v=zoFC82aPq1A) 
- [Progressão Geométrica](https://www.youtube.com/watch?v=JxOhaVTkQR4)
- [Somatórios e Produtórios](https://www.youtube.com/watch?v=-r6Al93levQ)
- [Potência e Exponenciação](https://www.youtube.com/watch?v=8B0BO9khA3A)
- [Logaritmos](https://www.youtube.com/watch?v=k2XkYEUH9nA) 
- Polinômios
	-  [Introdução a Polinômios](https://www.youtube.com/watch?v=k2XkYEUH9nA)
	- 	[Soma, multiplicação e divisão](https://www.youtube.com/watch?v=N_oFTs1-mMg).
- Os 15 primeiros vídeos [desta playlist](https://www.youtube.com/playlist?list=PLTPg64KdGgYhACfQUtMf3CuhWOfLoTf_a) abordam **limites** objetivamente, mesclando teoria e exercícios. Os demais vídeos cobrem **derivadas**, conteúdo opcional, porém facilita a compreensão de **integrais**, que pode ser visto [aqui](https://www.youtube.com/playlist?list=PLmtT_GZAQdt9FlOiqZvTdEHFmjZm4qPJR). O conteúdo de cálculo não se resume somente ao aqui indexado, porém, este já é o suficiente para conseguir resolver os principais problemas de PAA.

## Exercícios resolvidos
 1. Sejam x, y, z números reais tais que a sequência (x, 1, y, 1/4, z) forma, nesta ordem, uma **progressão aritmética**, então o valor da soma **x + y + z** é:
	a) 2
	b) 21/8
	c) -19/8
	d) 15/8
	e) -3/8
Encontrando a Razão da PA. Nesse caso, **utilizaremos o segundo e o quarto termo, visto que eles não são incógnitas.** Aqui, **temos a diferença de 2 vezes a razão**, ou seja:

	$1 + 2r = 1/4$
	$r = \mathbf{-3/8}$
	Com a razão, podemos **determinar os valores de x, y e z,** utilizando como referência o valor próximo ou anterior.
	
	Achando **x** utilizando **1** como referência.	
	$x + (- 3/8) = 1$
	$x = \mathbf{11/8}$
	
	Achando **y** utilizando **1** como referência.
 	$1 + (- 3/8) = y$
	$y = \mathbf{5/8}$
	O método acima descrito formalmente fica:
	$\mathbf {a_{n} = a_{n-1} + r}$
	
	Calculando **z**.
	$a_{n} = a_{n-1} + r$	
	$z = 1/4 + (- 3/8)$
	$z = \mathbf{- 1/8}$

	Soma dos termos.
	$11/8 + 5/8 - 1/8 = \mathbf{15/8}$
	
	**Resposta:  d) 15/8**
2. Sabendo que uma **Progressão Geométrica** tem a1 = 4 e razão q = 2, a soma dos 10 primeiros termos dessa progressão será:
	a) 8192
	b) 1024
	c) 4092  
	d) 32768
	e) 2048

	Sabendo a razão e o primeiro termo, podemos calcular o n-ésimo elemento através do termo geral da PG.
	$a_{n} = a_{1} * q^{n-1}$
	$a_{10} = 4 * 2^{10-1}$
	$a_{10} = 2048$
	Com o décimo elemento calculado agora podemos realizar soma.
	$S = \frac{a_{1} * (q^{n}-1))}{q-1}$
	
	$S = \frac{4 * (2^{10}-1))}{2-1}$
	
	$S= 4092$
	
	**Resposta: c) 4092**

3. Considerando válidas as condições dos logaritmos abaixo, assinale a única opção que é sempre verdadeira:
	Escolha uma opção:
	a)  $log (a + b) = log (a )+ log (b)$
	b)  $log (a)^{m} = m * log (a)$
	c)  $log (a)^{m} = log (m * a)$
	d)  $log (a * b) = log (a) * log (b)$
	e)  $log (m * a) = m * log (a)$
	
	Ao revisar as propriedades, podemos contatar que a propriedade correta é a **b)**.
	Atribuiremos valores as variáveis. a = 10, m = 2
	$log (10)^{2} = 2 * log (10)$
	$2=2$	
	**Resposta: b)**
	
4. Qual ou quais das expressões abaixo são sempre válidas?
	- I - $2^{x+3} = 2^{x} . 2^{3}$
	- II - $25^{x} = 5^{2*x}$
	- III - $2^{x} + 3^{x} = 5^{x}$
	
	a) Somente a II é verdadeira
	b) Somente a III é verdadeira
	c) Somente a I e II são verdadeiras 
	d) Somente a I é verdadeira
	e) Somente a I e III são verdadeiras
	
	Atribuiremos um valor para x, **x = 2**.
	I -  32 = 32
	Propriedade: multiplicação de potências de mesma base.
	II - 625 = 625
	Se escrevermos 25 como 5², teremos que aplicar a propriedade do expoente em uma potência, onde se multiplicam os expoentes.
	III - 13 = 25
	Para calcular soma de potências, deve-se primeiro resolver elas e depois somá-las, não há uma propriedade como na multiplicação. Então esta afirmação é falsa.
	**Resposta: c)**

5. O atacante Neymar Jr foi vendido ao clube Barcelona da Espanha por **57 milhões** de euros. Se, em uma calculadora científica, utilizarmos a função **log** (logaritmo decimal) para esse valor, quantas vezes devemos apertar a tecla **log** para obter no visor a mensagem de **ERRO**, alentando que a operação não é mais possível?

	Escolha uma opção:
	a) 4
	b) 3
	c) 5
	d) 2
	e) 6	
	A alternativa correta é a letra **a)**, você pode fazer o teste na calculadora do Google, caso não tenha uma calculadora científica.

6. Suponha que exista, o logaritmo dê a na base b $log_{b} (a)$ é: 
	Escolha uma opção:
	a) A potência de base **10** e expoente **a**
	b) O número pelo qual se eleva **b** para se obter **a**
	c) A potência de base **a** e expoente **b**
	d) A potência de base **b** e expoente **a**
	e) O número pelo qual se eleva **a** para se obter **b**
	**A resposta correta é  b)**, pois a definição de logaritmo diz: "logaritmo de a na base b é o número a quem deve ser elevado a base b para obter a”
7. Seja (a, b, c) uma progressão aritmética de razão real e de termos não nulos. Sendo assim, podemos sempre afirmar que:
Escolha uma opção:  

	a) $a + b = b + c$
	b) $b = a + c$
	c) $2c = a + b$
	d) $b^{2} = a*c$
	e) $a - 2b + c = 0$	

	Sabemos que r = b - a, c = (a + r) + r , portanto:
	c = a + 2r
	Agora, substituímos a razão em função dos termos:
	c = a + 2 × (b - a)
	c = 2b - a
	a - 2b + c = 0
	**Resposta: e)**

8. A soma dos 20 primeiros pares positivos dos números Inteiros é:
Escolha uma opção:
	a) 400
	b) 500
	c) 960
	d) 380
	e) 420
	Através do enunciado sabemos que se trata de uma PA com razão 2, e $a_{1}$ é 2. Com essas informações, calcularemos o valor do vigésimo elemento.
	$a_{n} = a_{1} + (n - 1) * r$
	$a_{20} = 2 + (20 - 1) * 2$
	$a_{20} = 40$
	Com o valor do vigésimo elemento, podemos realizar a soma.
	$s_{n} = \frac{(a_{1} + a_{n}) * n}{2}$

	$s_{n} = \frac{(2 + 40) * 20}{2}$
	
	$s_{n} = 420$
	**Resposta: e)**

9. Qual o valor da seguinte expressão $(log_{2} (log_{2} (16)) + log_{0,9} (90))*log (log (10))$ ?
Escolha uma opção:
	a) 12
	b) 6
	c) -12
	d) 0
	e) -6
	**A resposta correta é d)**. O valor é obtido através da reescrita e simplificações de logaritmos, para no fim, calcular o resultado. (sim, esse exercício é maçante)
	
10. Se $5^{3a} = 64$, o valor de $5^{-a}$ será:
	Escolha uma opção:
	a) 1/40
	b) 1/20
	c) 1/4 
	d) -1/4
	e) 1/8
	
	**Relembrando:**
	$(x^{a})^{b} = x^{a*b}$
	Reescrevendo $64 = 4^{3}$
	$5^{3a} = 4^{3}$
	$(5^{a})^{3} = 4^{3}$
	$5^{a} = 4$
	Lembre-se que um número elevado a um **expoente negativo** é igual ao seu **inverso**.
	$5^{-a} = \frac{1}{5^{a}}$
	Mas, sabemos que $5^{a}$ é igual a 4. Substituindo o número 4 nessa fração, temos:
	$\frac{1}{4}$

	**Resposta: c)**
11. A seguinte sequência é uma progressão geométrica: (2, 6, 18, 54...). O 8º termo dessa progressão é:
	a) 1458
	b) 6561
	c) 4374 
	d) 2916

	Calculando **q**
	$q = 6/2$
	$q = 3$
	Com **q** descoberto podemos calcular o 8º termo.
	$a_{n} = a_{1} * q^{n-1}$
	$a_{8} = 2 * 3^{8-1}$
	$a_{8} = 4374$

	**Resposta: c)**

12. Se $log_{b} (a) = 3$ e $log_{ab} (c) = 4$, então $log_{b} (c)$ é:
	a) 24
	b) 16
	c) 12
	d) 6
	e) 8
	
	Definição de logaritmo.
	$log_{a}(b) = x \Leftrightarrow a^{x} = b$
	Portando, $log_{a}(b) = 3 \Leftrightarrow a^{3} = b$
	E, $log_{ab}(c) = 4 \Leftrightarrow (ab)^{4} = c$
	Como $b = a^{3}$, vamos substituir esse valor em $(ab)^{4} = c$. Assim:
	$(a^{3}.a)^{4} = c$
	$(a^{4})^{4} = c$
	$c = a^{16}$
	Vamos considerar que $log_{a}(c) = x$. Com o valor de c em função de a encontrado acima, obtemos:
	$log_{a}(a^{16}) = x$
	
	A potência 16 pode multiplicar o logaritmo, ou seja, $16*log_{a}(a) = x$.
	Perceba que o logaritmando e a base são iguais. Isso quer dizer que o logaritmo é igual a 1.
	Portanto, o valor de x é igual a:
	x = 16.1
	**x = 16**
	
13. Se $log_{10} (123) = 2,09$, o valor de $log_{10} (1,23)$ é:
	a) 1,209
	b) 1,09
	c) 0,0209
	d) 0,09 
	e) 0,209
	**Resposta correta: d)**. Esta [Resolução](https://brainly.com.br/tarefa/7135168) pode ser útil.
	
14. O valor da expressão $(2*log_{2} (16) – log_{0,5} (16))*log(10)$ é:
	a) 12
	b) -12
	c) -6
	d) 6
	e) 0
	**Resposta correta: a)** (Apenas calculo :D )
	
15. Uma Progressão Aritmética de 20 termos cujo $1^{\circ}$ termo $(a_{1})$ é igual a 5 e cuja soma de todos os termos são 480, o décimo termo $(a_{10})$ é igual a:
	a) 22
	b) 23 
	c) 21
	d) 20
	e) 24
	Sabemos que a soma da PA é 480, através da equação de soma podemos encontrar o vigésimo elemento.
	$S_{n} = \frac{(a_{1} + a_{n}) * n}{2}$

	$480 = \frac{(5 + a_{20}) * 20}{2}$

	$a_{20} = 43$
	
	Agora pode achar a razão. Sabemos que $a_{2} = a_{1} + r$, portanto $43 = 5 + r *19$, $r = 2$.
	Com o primeiro termo e a razão em mãos, podemos calcular o elemento numero 10.
	$a_{n} = a_{1} + (n - 1) * r$
	$a_{10} = 5 + 9 * 2$
	$a_{10} = 23$
	
	
	**Resposta correta b)**



