import java.awt.*;
import javax.swing.*;

class editor_de_texto extends JFrame {
    JTextField textField;
    JTextArea textArea;
    editor_de_texto( ) {
    super("Entradas de Texto");
    setLayout(new BorderLayout());
    
    JPanel p = new JPanel(new GridLayout(8,1));
    p.add(new JButton("Abrir")); 
    p.add(new JButton("Salvar")); 
    p.add(new JButton("Salvar como"));
    p.add(new JButton("Fechar"));

    add(p, BorderLayout.WEST);
    add(textArea = new JTextArea(10, 50), BorderLayout.EAST);
    setSize(500, 400);
    pack( );
    setVisible(true);
    }

    static public void main(String[] args) {
        new editor_de_texto( );  
    }
}
    

    