package proyectojava23;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class ProyectoJava23 extends JPanel {
    int numerobolas = 230;
    
    Persona bolita[] = new Persona[numerobolas];
    
    public void inicio() {
        for (int i = 0; i < numerobolas; i++) {
            bolita[i] = new Persona();
        }
    }
    
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        Graphics2D graf2d = (Graphics2D) g;
        graf2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        for (int i = 0; i < numerobolas; i++) {
            graf2d.fillOval((int)bolita[i].x, (int)bolita[i].y, 20, 20);
        }
    }
    
    public void muevete() {
        for (int i = 0; i < numerobolas; i++) {
            bolita[i].mueveBola();
        }
    }

    public static void main(String[] args) throws InterruptedException {
        JFrame marco = new JFrame("marco");
        ProyectoJava23 animacion = new ProyectoJava23();
        marco.add(animacion);
        marco.setSize(400, 400);
        marco.setVisible(true);
        marco.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        animacion.inicio();
        
        while(true) {
            animacion.muevete();
            animacion.repaint();
            Thread.sleep(10);
        }
    }
    

}
