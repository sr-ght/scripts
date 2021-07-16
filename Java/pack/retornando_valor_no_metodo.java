package Java.pack;

public class retornando_valor_no_metodo {
    
    public static void main(String[] args) {
        // Método retornado
        int res = metodo(10 , 5);

        System.out.println("O retorno é: "+res);
    }

    private static int metodo(int x, int y) {
        
        // Retorno multiplicando
        return (x * y);
    }
}
