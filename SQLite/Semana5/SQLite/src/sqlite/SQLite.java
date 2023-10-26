package sqlite;

import java.sql.*;

public class SQLite {

    public static void main(String[] args) {
        Connection conexion = null;
        try {
            String ruta = "jdbc:sqlite:C:/Users/aepila/Desktop/DAM/SQLite/Semana5/registros.db";
            conexion = DriverManager.getConnection(ruta);
            System.out.println("Conectado!");
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }

}
