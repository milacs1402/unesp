public class pessoa {
    public String name, ads, phone;

    pessoa(String name, String ads, String phone){
        this.name = name;
        this.ads = ads;
        this.phone = phone;
    }

    String getName(){
        return name;
    }
    String getAds(){
        return ads;
    }
    String getPhone(){
        return phone;
    }

    void print(String name, String ads, String phone){
        System.out.println("Nome: " + getName());
        System.out.println("Endereço: " + getAds());
        System.out.println("Telefone: " + getPhone());
    }
}
class Main {
    public static void main(String[] args) {
        pessoa x = new pessoa("Luíza", "Rua Brisola", "700000000");

       /*  x.set("Luíza", "Rua Brisola", "700000000"); */
        x.print(x.getName(), x.getAds(), x.getPhone());
    }
}
