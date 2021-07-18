function Hi(nome){
    return `Boa tarde ${nome}!`; // Return saudacao + nome
}
const saudacao = Hi('Thiago');
console.log(saudacao);


function Soma(x, y){
    const result = x + y;
    return result;
}
console.log(Soma(5, 10));


const raiz = n => Math.pow(n, 0.5); // Return simples
console.log(raiz(4));