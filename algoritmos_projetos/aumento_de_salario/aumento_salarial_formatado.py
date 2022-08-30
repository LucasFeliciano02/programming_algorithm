salario_atual = float(input('Digite seu salário atual: '))


if 0 <= salario_atual <= 1400:
    print(f'salario atual de R${salario_atual:,.2f} com aumento de 15% equivalem a: R${salario_atual * 0.15 + salario_atual:,.2f}')
elif 1401 <= salario_atual <= 2000:
    print(f'salario atual de R${salario_atual:,.2f} com aumento de 12% equivalem a: R${salario_atual * 0.12 + salario_atual:,.2f}')
elif 2001 <= salario_atual <= 3000:
    print(f'salario atual de R${salario_atual:,.2f} com aumento de 10% equivalem a: R${salario_atual * 0.10 + salario_atual:,.2f}')
elif 3001 <= salario_atual <= 3800:
    print(f'salario atual de R${salario_atual:,.2f} com aumento de 7% equivalem a: R${salario_atual * 0.07 + salario_atual:,.2f}')
elif 3801 <= salario_atual <= 5000:
    print(f'salario atual de R${salario_atual:,.2f} com aumento de 4% equivalem a: R${salario_atual * 0.04 + salario_atual:,.2f}')
else:
    print(f'Não há aumento salarial acima de R$5001')


# Conforme o salario colocado, um aumento acontecerá
