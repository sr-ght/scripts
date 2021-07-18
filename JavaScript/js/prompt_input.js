function Prompt(){
    let num1 = prompt('Informe o primeiro número:');
    let num2 = prompt('Informe o segundo número:');
    
    num1 = Number(num1);
    num2 = Number(num2);
    
    const resul = num1 + num2;
    alert('O resultado da soma dos números é ' + resul);
}

