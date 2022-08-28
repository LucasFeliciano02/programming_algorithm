preco = float(input('Digite o preço: '))
pagamento = float(input('Digite a forma de pagamento: '))

a_vista = preco
doisx = (preco * 0.1) + preco
tresx = (preco * 0.2) + preco
adiante = (preco * 0.3) + preco


if pagamento == 1:
    print(a_vista)
elif pagamento == 2:
    print(doisx)
elif pagamento == 3:
    print(tresx)
else:
    print(adiante)
    
    
# Se for a vista, o preco é normal, se for em 2vezes, acrescimo de 10 % e assim por diante