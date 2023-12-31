package proyectojava22;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class ProyectoJava22 extends JPanel {
    
    float x = 200;
    float y = 200;
    float direccion = 2;
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        Graphics2D graf2d = (Graphics2D) g;
        graf2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        graf2d.fillOval((int)x, (int)y, 20, 20);
    }
    
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

    public static void main(String[] args) throws InterruptedException {
        JFrame marco = new JFrame("marco");
        ProyectoJava22 animacion = new ProyectoJava22();
        marco.add(animacion);
        marco.setSize(400, 400);
        marco.setVisible(true);
        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        while(true) {
            animacion.mueveBola();
            animacion.repaint();
            Thread.sleep(10);
        }
    }
    

}
