valor_compra = float(input('Digite o valor da compra efeturada: '))


if valor_compra >= 500:
    print(f'valor antes do desconto: R${valor_compra:,.2f}\nvalor do desconto: 15%\nValor com o desconto: R${(valor_compra * 0.15 - valor_compra) * -1}')
elif 200 <= valor_compra <= 499:
    print(f'valor antes do desconto: R${valor_compra:,.2f}\nvalor do desconto: 10%\nValor com o desconto: R${(valor_compra * 0.10 - valor_compra) * -1}')
elif 0 <= valor_compra <= 199:
    print(f'valor antes do desconto: R${valor_compra:,.2f}\nvalor do desconto: 5%\nValor com o desconto: R${(valor_compra * 0.05 - valor_compra) * -1}')
else:
    print(f'{valor_compra}: Valor não suportado para descontos')