import java.awt.*;
import java.util.concurrent.Flow;

import javax.swing.*;

public class Calculadora extends JFrame {
    JTextField textField;

    Calculadora( ) {
        super("Entradas de Texto");
        setLayout(new FlowLayout());
        getContentPane().setBackground(Color.PINK);

        JPanel p = new JPanel(new GridLayout(4,0));
        p.add(new JButton("Soma")); 
        p.add(new JButton("Subtrai")); 
        p.add(new JButton("Divide"));
        p.add(new JButton("Multiplica"));
        
        add(textField = new JTextField(10), BorderLayout.EAST);
        add(p, BorderLayout.CENTER);
        add(textField = new JTextField(10), BorderLayout.WEST);
        add(new JLabel(" = 0"));
        pack( );
        setVisible(true);
    }
    
    static public void main(String[] args) {
        new Calculadora( );  
    }
}
