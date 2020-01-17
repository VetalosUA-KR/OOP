package lab;

abstract class Obiekt {
    public abstract void drukuj(); 
}


class A extends Obiekt {
    @Override
    public void drukuj() {
        System.out.print('A');
    }
        
}

class B extends Obiekt {
    @Override
    public void drukuj() {
        System.out.print('B');
    }
        
}

class C extends Obiekt {
    @Override
    public void drukuj() {
        System.out.print('C');
    }
        
}