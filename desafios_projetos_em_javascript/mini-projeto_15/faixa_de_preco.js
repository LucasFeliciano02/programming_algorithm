// Criar um array de objetos de faixa de preço para que ela possa ser usada em um site


//* Primeira opção

let faixas = [
    {tooltip: 'até R$700', minimo: 0, maximo: 700},
    {tooltip: 'de R$700 a R$1000', minimo: 700, maximo: 1000},
    {tooltip: 'até R$1000', minimo: 1000, maximo: 9999999}
];

console.log(faixas);


//* Segunda Opção (Factory Function)

function criaFaixaPreco(tooltip, minimo, maximo) {
    return {
        tooltip,
        minimo,
        maximo
    }
}

let faixas2 = [
    criaFaixaPreco('até R$700', 1, 100),
    criaFaixaPreco('de R$700 a R$1000', 100, 1000),
    criaFaixaPreco('até R$1000', 1000, 10000),
]

console.log(faixas2);


//* Terceira Opção (Constructor Function)

function FaixaPreco(tooltip, minimo, maximo){
    this.tooltip = tooltip
    this.minimo = minimo,
    this.maximo = maximo
}

let faixas3 = [
    new FaixaPreco('d', 10, 20),
    new FaixaPreco('e', 20, 30),
    new FaixaPreco('f', 30, 40)
]

console.log(faixas3)
