package lab;

public class Lab {

    
    public static void main(String[] args) {
        Plansza p = new Plansza(5,6);
        p.wstaw(0, 0, Typ.A);
        p.wstaw(1, 1, Typ.B);
        p.wstaw(2, 2, Typ.C);
        p.przesun(0, 0, 1, 0);
        p.drukuj();
        p.zamien(1, 1, 2, 2);
        p.drukuj();
    }
    
}
