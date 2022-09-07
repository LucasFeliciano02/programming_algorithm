// Criar uma função para mostrar os númros primos

// Primos  (Divisivel apenas por 1 ou por ele msm)  11 por ex
// Compostos  (ex 10)

// Ex: 10, 11

exibirNumerosPrimos(15);

function exibirNumerosPrimos(limite) {
    for(let numero = 2; numero <= limite; numero++){
        if (NumeroPrimo(numero)) console.log(numero);
    }
}

function NumeroPrimo(numero) {
    for (let divisor = 2; divisor < numero; divisor++){
        if(numero % divisor === 0){
            return false;
        }
    }
    return true;
}

