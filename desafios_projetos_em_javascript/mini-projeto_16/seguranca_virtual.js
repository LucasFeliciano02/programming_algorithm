function VerificarEntrada() {
    NomeConvidado = document.getElementById('nome').value;
    ConvidadosLucas = ['Luis', 'Rafal', 'Carlos', 'Marcos', 'Róbsom']
    
    if (ConvidadosLucas.includes(NomeConvidado)) {
        document.getElementById('PermissaoDeEntrada').innerText = 'Você pode Entrar!'
    } else {
        document.getElementById('PermissaoDeEntrada').innerText = 'Você não pode Entrar!'
    }
}