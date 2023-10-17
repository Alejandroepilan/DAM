package proyectojava17;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class ProyectoJava17 {

    public static void main(String[] args) {
        
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection conexion = DriverManager.getConnection("jdbc:mysql://localhost:3306/cursojava", "cursojava", "cursojava");
            
            Statement peticion = conexion.createStatement();
            peticion.execute("INSERT INTO agenda VALUES (NULL, 'Jose', '123456789', 'jose@gmail.com')");
        }catch(Exception e){
            e.printStackTrace();
        }
        
    }
    
}
