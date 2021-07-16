package Java.pack;

public class pasando_valor_pelo_metodo {
    
    public static void main(String[] args) {
        int x = 10;
        int y = 5;
        // Passando valores de variáveis
        metodo(x, y);
    }

    private static void metodo(int x, int y) {
        // Operação com os valores passados
        double res = x / y;
        System.out.printf("Valores passados pelo método são %d e %d"+
        "\nE o resultado da divisão é %.2f", x, y, res); 
    }
}
