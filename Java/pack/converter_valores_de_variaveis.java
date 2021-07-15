package Java.pack;

public class converter_valores_de_variaveis {

    public static void main(String[] args) {
        
        String text = "10";

        // Passando String para int
        int inte = Integer.parseInt(text);
        System.out.println("String to int: "+inte);

        // Passando String para double
        double flut = Double.parseDouble(text);
        System.out.println("String to double: "+flut);

        inte += 1;
        
        // Passando int para String
        text = String.valueOf(inte);
        System.out.println("int to String: "+text);

        flut += 1;

        // Passando double para String
        text = String.valueOf(flut);
        System.out.println("double to String: "+text);

    }
    
}
