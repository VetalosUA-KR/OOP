package lab;

enum Typ {A, B, C}

public class Plansza {
    private int x;
    private int y;
    private Obiekt[][] tab;
    
    public Plansza(int x, int y) {
        this.x = x;
        this.y = y;
        tab = new Obiekt[x][y];
    }
    
    public Plansza() {
        this(10,10);
    }
    
    public void drukuj() {
        for(int j = 0; j < y; j++)
        {
            for(int i = 0; i < x; i++)
            {
                if(tab[i][j] != null) {
                    tab[i][j].drukuj();
                }
                else {
                    System.out.print('.');
                }
            }
             System.out.print('\n');
        }
         System.out.print('\n');
    }
    
    public void wstaw(int i, int j, Typ t) {
        switch(t)
        {
            case A: tab[i][j] = new A(); break;
            case B: tab[i][j] = new B(); break;
            case C: tab[i][j] = new C(); break;
            
        }
    }
    
    public void przesun(int x, int y, int i, int j)
    {
        tab[i][j] = tab[x][y];
        tab[x][y] = null;
    }
    
    public void zamien(int x, int y, int i, int j)
    {
        Obiekt t = tab[x][y];
        tab[x][y] = tab[i][j];
        tab[i][j] = t;
    }
    
    public void usun(int x, int y)
    {
         tab[x][y] = null;
    }
}
