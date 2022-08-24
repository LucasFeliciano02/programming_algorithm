"""

#* PROBLEMA:  Salário mensal por hora trabalhada por mês


* RESOLVER O PROBLEMA ANTES DE ESCREVER UMA LINHA DE CÓDIGO, CÓDIGO É SECUNDÁRIO
* O MAIS IMPORTANTE É CONSEGUIR RESOLVER O PROBLEMA, ENTENDER O PROBLEMA E QUAIS PASSOS SÃO NECESSÁRIO PARA RESOLVER AQUELA SITUAÇÃO, MESMO SEM ESCREVER CÓDIGO
* ESSA HABILIDADE DE PENSAR NA SOLUÇÃO É MAIS IMPORTANTE QUE APRENDER A PROGRAMAR

* A HABILIDADE MAIS IMPORTANTE NÃO É DECORAR A SINTAXE (COMANDO DAS LNGs DE PROGRAMAÇÃO), 
* O MAIS IMPORTANTE É CONSEGUIR RESOLVER OS PROBLEMAS E DPS DE RESOLVER VC PODE IR PARA QUALQUER LNG DE PROGRAMAÇÃO E SIMPLESMENTE PESQUISAR COMO FAZER AQUELE COMANDO ESPECÍFICO


* RESOLUÇÃO:

salario mensal:  2500
horas trabalhadas:  176 horas

2500/176  =  R$14.20

Salário hora  =  R$14.20  para quem ganha 2500 e trabalha 176 horas por mês

"""

while True:
    try:
        salario_mensal = int(input('Escreva seu salário mensal: '))  # ex: 2500
        horas_trabalhadas_mes = int(input('Escreva quantas horas foram trabalhadas por mês: '))  # ex: 180
        
        valor_hora = (salario_mensal / horas_trabalhadas_mes)

        print(f'\nR${valor_hora:.2f} por hora trabalhada\n')
        
    except Exception as ex:
        print(f'Erro ao converter valor informado: {ex}')