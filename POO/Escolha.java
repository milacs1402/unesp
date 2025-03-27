import java.awt.*;

class Escolha extends Frame {
    Escolha() {
        super("Choice");
        Choice choice = new Choice();
        choice.addItem("Item 1");
        choice.addItem("Item 2");
        add(choice);
        pack();
        setVisible(true);
    }
    static public void main(String[] args) {
        new Escolha();
    }
}