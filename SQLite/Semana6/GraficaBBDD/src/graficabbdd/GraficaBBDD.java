package graficabbdd;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JFrame;
import javax.swing.JPanel;
import java.sql.*;

public class GraficaBBDD extends JPanel {
    
    private Connection connect() throws SQLException {
        String url = "jdbc:sqlite:C:/Users/aleja/Desktop/DAM/SQLite/Semana6/registros.db";
        Connection conn = null;
        try {
            conn = DriverManager.getConnection(url);
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
        return conn;
    }
    
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        Graphics2D misgraficos = (Graphics2D) g;
        int basegrafica = 360;
        misgraficos.drawLine(10, 10, 10, 360);
        misgraficos.drawLine(10, basegrafica, 360, basegrafica);
        int[] barras = new int[] {200, 300, 350, 300, 100, 200, 200, 300, 350, 300, 100, 200};
        
        String sql = "SELECT * FROM logmeses";
        try {
            Connection conn = this.connect();
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(sql);
            int contador = 0;
            while (rs.next()) {
                System.out.println(rs.getInt("mes") + "\t" + rs.getString("numero"));
                barras[contador] = Integer.parseInt(rs.getString("numero")) / 10;
                contador++;
            }
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
        
        for(int i = 0; i < barras.length; i++) {
            int alturabarra = barras[i];
            misgraficos.fillRect(i*30+20, basegrafica-alturabarra, 20, alturabarra);
        }
    }

    public static void main(String[] args) {
        JFrame marco = new JFrame("grafica");
        GraficaBBDD mimarco = new GraficaBBDD();
        marco.add(mimarco);
        marco.setSize(400, 400);
        marco.setVisible(true);
        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

}
