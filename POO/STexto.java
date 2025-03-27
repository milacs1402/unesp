import java.awt.*;
import javax.swing.*;
class STexto extends JFrame {
JTextField textField;
JTextArea textArea;
STexto( ) {
super("Entradas de Texto");
add(textField = new JTextField(20), BorderLayout.NORTH);
add(textArea = new JTextArea(5, 20), BorderLayout.CENTER);
pack( );
setVisible(true);
}
static public void main(String[] args) {
new STexto( );
}
}