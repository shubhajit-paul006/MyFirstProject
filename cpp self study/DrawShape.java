/*WAP in java to create an interface Drawable with a method draw(). Create classes like Circle and
Square that implement the Drawable interface.*/

interface  Drawable{
    void draw();
}

class Circle implements Drawable{
    public void draw(){
        System.out.println("Drawing Circle");
    }
}

class Square implements Drawable{
    public void draw(){
        System.out.println("Drawing Square");
    }
}

public class DrawShape{
    public static void main(String[] args) {
        Drawable d1 = new Circle();
        d1.draw();

        Drawable d2 = new Square();
        d2.draw();
    }
}