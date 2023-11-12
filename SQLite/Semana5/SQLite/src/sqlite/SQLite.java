package sqlite;

import java.sql.*;

public class SQLite {

    public static void main(String[] args) {
        Connection conexion = null;
        int windows = 0;
        int mac = 0;
        int ubuntu = 0;
        int android = 0;
        int ios = 0;
        String nwindows = "";
        String nmac = "";
        String nubuntu = "";
        String nandroid = "";
        String nios = "";
        
        try {
            String ruta = "jdbc:sqlite:C:/Users/aepila/Desktop/DBSemana5/registros.db";
            conexion = DriverManager.getConnection(ruta);
            
            Statement peticion = conexion.createStatement();
                    
            String consulta = "SELECT * FROM visitaswindows";            
            ResultSet resultados = peticion.executeQuery(consulta);
            while(resultados.next()) { windows = resultados.getInt("Windows"); }
            
            consulta = "SELECT * FROM visitasmac";            
            resultados = peticion.executeQuery(consulta);
            while(resultados.next()) { mac = resultados.getInt("Windows"); }
            
            consulta = "SELECT * FROM visitasubuntu";            
            resultados = peticion.executeQuery(consulta);
            while(resultados.next()) { ubuntu = resultados.getInt("Windows"); }
            
            consulta = "SELECT * FROM visitasandroid";            
            resultados = peticion.executeQuery(consulta);
            while(resultados.next()) { android = resultados.getInt("Windows"); }
            
            consulta = "SELECT * FROM visitasios";            
            resultados = peticion.executeQuery(consulta);
            while(resultados.next()) { ios = resultados.getInt("Windows"); }
            
            for(int i = 0; i < windows; i += 1000) { nwindows += "#" ;}
            for(int i = 0; i < mac; i += 1000) { nmac += "#" ;}
            for(int i = 0; i < ubuntu; i += 1000) { nubuntu += "#" ;}
            for(int i = 0; i < android; i += 1000) { nandroid += "#" ;}
            for(int i = 0; i < ios; i += 1000) { nios += "#" ;}
            
            System.out.println("Windows:\t" + String.valueOf(windows) + "\t" + nwindows);
            System.out.println("Mac:\t\t" + String.valueOf(mac) + "\t" + nmac);
            System.out.println("Ubuntu:\t\t" + String.valueOf(ubuntu) + "\t" + nubuntu);
            System.out.println("Android:\t" + String.valueOf(android) + "\t" + nandroid);
            System.out.println("iOS:\t\t" + String.valueOf(ios) + "\t" + nios);
            
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }

}
