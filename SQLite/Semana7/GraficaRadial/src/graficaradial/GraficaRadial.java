package graficaradial;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import static java.lang.Math.round;
import javax.swing.JFrame;
import javax.swing.JPanel;
import java.sql.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class GraficaRadial extends JPanel {
    
    private Connection connect() throws SQLException {
        String url = "jdbc:sqlite:C:/Users/aleja/Desktop/DAM/SQLite/Semana7/registros.db";
        Connection conn = null;
        try {
            conn = DriverManager.getConnection(url);
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
        return conn;
    }
    
    private static int getRandomNumberInRange(int min, int max) {
        Random r = new Random();
        return r.nextInt((max - min) + 1) + min;
    }
    
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        Graphics2D misgraficos = (Graphics2D) g;
        float[] barras = new float[] {100, 300, 200, 200, 100, 200, 50, 200, 25, 50, 100};
        List misbarras = new ArrayList();
        
        int acontinuacion = 0;
        
        try {
            Connection conn = this.connect();
            Statement stmt = conn.createStatement();
            
            String sql = "SELECT * FROM windows";
            ResultSet rs = stmt.executeQuery(sql);            
            while (rs.next()) { misbarras.add(Integer.parseInt(rs.getString("numero"))); }
            
            sql = "SELECT * FROM mac";
            rs = stmt.executeQuery(sql);            
            while (rs.next()) { misbarras.add(Integer.parseInt(rs.getString("numero"))); }
            
            sql = "SELECT * FROM ubuntu";
            rs = stmt.executeQuery(sql);            
            while (rs.next()) { misbarras.add(Integer.parseInt(rs.getString("numero"))); }
            
            sql = "SELECT * FROM android";
            rs = stmt.executeQuery(sql);            
            while (rs.next()) { misbarras.add(Integer.parseInt(rs.getString("numero"))); }
            
            sql = "SELECT * FROM iphone";
            rs = stmt.executeQuery(sql);            
            while (rs.next()) { misbarras.add(Integer.parseInt(rs.getString("numero"))); }
            
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
        
        int tamanio = misbarras.size();
        float suma = 0;
        for (Object numero : misbarras) {
            suma += (int)numero;
        }
        
        for (Object numero : misbarras) {
            int rojo = getRandomNumberInRange(0, 255);
            int verde = getRandomNumberInRange(0, 255);
            int azul = getRandomNumberInRange(0, 255);
            Color micolor = new Color(rojo, verde, azul);
            misgraficos.setColor(micolor);
            int angulo = (int)(round(((int)numero/suma)*360));
            misgraficos.fillArc(0, 10, 380, 380, acontinuacion, angulo);
            acontinuacion += angulo;
        }
        misgraficos.setColor(Color.white);
        misgraficos.fillArc(150, 160, 80, 80, 0, 360);
    }

    public static void main(String[] args) {
        JFrame marco = new JFrame("grafica");
        GraficaRadial mimarco = new GraficaRadial();
        marco.add(mimarco);
        marco.setSize(400, 400);
        marco.setVisible(true);
        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

}
