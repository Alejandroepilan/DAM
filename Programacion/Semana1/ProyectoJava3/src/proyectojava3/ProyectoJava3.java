
package proyectojava3;

public class ProyectoJava3 {

    public static void main(String[] args) {
        
        float operador1 = 4;
        float operador2 = 3;
        
        float suma = operador1 + operador2;
        System.out.println("La suma es "+suma);
        
        float resta = operador1 - operador2;
        System.out.println("La resta es "+resta);
        
        float multiplicacion = operador1 * operador2;
        System.out.println("La multiplicacion es "+multiplicacion);
        
        double division = operador1 / operador2;
        System.out.println("La division es "+division);
        
        
        boolean igualdad = operador1 == operador2;
        System.out.println("La comparacion es "+igualdad);
        
        boolean noigualdad = operador1 != operador2;
        System.out.println("La comparacion es "+noigualdad);
        
        boolean menorque = operador1 < operador2;
        System.out.println("La comparacion es "+menorque);
        
        boolean mayorque = operador1 > operador2;
        System.out.println("La comparacion es "+mayorque);
        
    }
    
}
