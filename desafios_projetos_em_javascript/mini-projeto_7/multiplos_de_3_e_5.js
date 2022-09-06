// Criar função somar que retorna a soma de tds os múltiplos de 3 e 5

somar(10);
function somar(limite) {
    let multiplosde3 = 0;
    let multiplosde5 = 0;

    for(i = 0; i <= limite; i++) {  // indice inicia com 0; enquanto o indice for menor ou igual ao limite (somar(10)) ; ele vai incrementar por 1 ponto
        if(i % 3 === 0)
        multiplosde3 += i;
        if(i % 5 === 0)
        multiplosde5 += i;
    }
    console.log(multiplosde3 + multiplosde5);
}