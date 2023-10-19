package proyectojava20;

import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;

public class ProyectoJava20 {

    public static void main(String[] args) throws IOException {
        int anchura  = 800;
        int altura = 400;
        
        BufferedImage imagencacheada = new BufferedImage(anchura, altura, BufferedImage.TYPE_INT_RGB); // Creo imagen con anchura, altura y tipo de color
        
        Graphics2D graficos = imagencacheada.createGraphics();
                
        
        graficos.setColor(Color.WHITE);
        graficos.fillRect(0, 0, anchura, altura);
        
        graficos.setColor(Color.RED);
        graficos.fillRect(20, 20, 300, 300);
        
        graficos.setColor(Color.GREEN);
        graficos.drawString("Programa de Alejandro", 300, 200);
        
        BufferedImage imagen = null;
        imagen = ImageIO.read(new File("photo/paisaje4.jpg"));
        graficos.drawImage(imagen, 0, 0, 100, 100, null);
        
        graficos.dispose();                                                     // Libero el recurso

        for(int i = 0; i<10; i++) {
            File archivo = new File("guardado/primeraprueba"+ i +".png");                  // Apunto a unn nuevo recurso
            ImageIO.write(imagencacheada, "png", archivo);                          // Guardo el png con la libreria correspondiente
        }
    
    }

}
