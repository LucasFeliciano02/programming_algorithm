"""
* Recebe um numero um número e imprime seu fatorial 


#* Método 5Q's para montar o algorítimo:

Analise criticamente o problema e descubra:
(Tente explicar este problema para você mesmo em voz alta e peça mais informações/investigue mais até você compreender completamente o problema.)

1. Quais são os dados de entrada necessários?  
(Numero)

2. O que devo fazer com estes dados? 
(Devo calcular o fatorial do número que for passado para o meu programa e o exibir na tela)

3. Quais são as restrições deste problema?
(O número deve ser um valor positivo)
(O número deve ser um valor inteiro)

4. Qual é o resultado esperado?
(O resultado esperado é que o fatorial do número providenciado seja exibido)

5. Qual é sequência de passos a ser feitas para chegar ao resultado esperado? -> (Faça essa parte em pseudocódigo)
(algoritmo)


input numero

if numero > 0
if numero = inteiro

fatorial = 1

loop de 2 a número
    fatorial = fatorial * numero
print(fatorial) 
"""

numero = int(input('Digite um número: '))

if numero > 0:  # numeros maiores q 0 sao positivos
    fatorial = 1  # resultado das multiplicaçõe se iniciaram com 1
    for item in range(1, numero + 1):  # vai do 1 até o numero digitado pelo usuario e adicionar 1 pois o range nao inclui o ultimo valor
        fatorial = fatorial * item  # item é o valor q esta sendo gerado, vai de 1 até o valor do input
    print(fatorial)
    
