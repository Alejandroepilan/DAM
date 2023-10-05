package proyectojava12;

public class ProyectoJava12 {

    public static void main(String[] args) {
        saluda("Alejandro");
        saluda();
        saluda("Alejandro", "martes");
    }

    public static void saluda(String nombre){
        System.out.println("Hola, "+ nombre +", como estas?");
    }    
    public static void saluda(){
        System.out.println("Hola, como estas?");
    }
    public static void saluda(String nombre, String dia){
        System.out.println("Hola, "+ nombre +", como estas? Hoy es " + dia +"?");
    }
    
    
}
