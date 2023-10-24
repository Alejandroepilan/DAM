package proyectojava21;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics2D;
import java.awt.image.BufferedImage;
import java.io.File;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import javax.imageio.ImageIO;

public class ProyectoJava21 {

    public static void main(String[] args) {
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/cursojava", "root", "");
            
            Statement peticion = conexion.createStatement();
            ResultSet resultado = peticion.executeQuery("SELECT * FROM cursos");
            while(resultado.next()){
                System.out.println(resultado.getString(3));
                
                
                int anchura  = 800;
                int altura = 400;

                BufferedImage imagencacheada = new BufferedImage(anchura, altura, BufferedImage.TYPE_INT_RGB); // Creo imagen con anchura, altura y tipo de color

                Graphics2D graficos = imagencacheada.createGraphics();


                graficos.setColor(Color.WHITE);
                graficos.fillRect(0, 0, anchura, altura);

                BufferedImage imagen = null;
                imagen = ImageIO.read(new File("photo/paisaje3.jpg"));
                graficos.drawImage(imagen, 0, 0, 400, 400, null);
                
                BufferedImage imagen2 = null;
                imagen2 = ImageIO.read(new File("photo/paisaje4.jpg"));
                graficos.drawImage(imagen2, 400, 0, 400, 400, null);
                
                graficos.setColor(Color.WHITE);
                graficos.fillRect(390, 0, 20, 400);
                Color negrotransparente = new Color(0, 0, 0, 127);
                graficos.setColor(negrotransparente);
                graficos.fillRect(0, 370, anchura, 400);
                
                graficos.setColor(Color.WHITE);
                graficos.setFont(new Font("Arial", Font.PLAIN, 28));
                graficos.drawString(resultado.getString(3), 10, 395);

                graficos.dispose();                                                     // Libero el recurso


                File archivo = new File("guardado/"+resultado.getString(2)+".png");                  // Apunto a unn nuevo recurso
                ImageIO.write(imagencacheada, "png", archivo);                          // Guardo el png con la libreria correspondiente
        
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }

}
