package Java.pack;

import java.util.Scanner;

public class entrada_e_saida{

    // Chamando função de entrada
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {
        
        // Saída de dado
        System.out.print("Informe seu nome: ");
        // Entrada de dado
        String str = ler.nextLine();
        System.out.println("Seu nome é: "+str);

    }
}