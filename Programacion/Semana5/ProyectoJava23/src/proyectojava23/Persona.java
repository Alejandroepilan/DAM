package proyectojava23;

public class Persona {
    public float x = 200;
    public float y = 200;
    public float direccion = 0;
    
    public void mueveBola() {
        double min = -0.5;
        double max = 0.5;
        double random = min + Math.random() * (max - min);
        direccion += random;
        x += Math.cos(direccion);
        y += Math.sin(direccion);
        if (x > 400){direccion += Math.PI;}
        if (x < 0){direccion += Math.PI;}
        if (y > 400){direccion += Math.PI;}
        if (y < 0){direccion += Math.PI;}
    }
}
