package proyectojava16;
import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
import java.util.Scanner;

public class ProyectoJava16 {

    public static void main(String[] args) {
        
        try{
            FileWriter miarchivo = new FileWriter("archivo.txt");
            miarchivo.write("Hola que sepas que esto se ha escrito desde Java");
            miarchivo.close();
        } catch(IOException e) {
            e.printStackTrace();
        }
        
        ////////////////////////////////////////////////////////////////////////
        
        try{
            File miotroarchivo = new File("archivo.txt");
            Scanner lector = new Scanner(miotroarchivo);
            while(lector.hasNextLine()){
                System.out.println(lector.nextLine());
            }
        } catch(IOException e) {
            e.printStackTrace();
        }
        
    }
    
}
