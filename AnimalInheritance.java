// 1. WAP in java to create a class Animal with attributes like name and age. Create a subclass Dog that
// inherits from Animal and adds a specific attribute like breed. Implement methods to display
// information about both animals and dogs.
// Create a class Puppy that inherits from Dog. Add an attribute specific to puppies, like milkTeeth.
// Implement methods to display information about puppies, including inherited attributes.
// In the Animal class, create a method makeSound(). Override this method in both the Dog and Puppy
// classes to produce different sounds. Demonstrate how method overriding works.

// Base class
import java.util.Scanner;

// Base class
class Animal {
    protected String name;
    protected int age;

    // Constructor for Animal
    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method to display Animal info
    public void display() {
        System.out.println("Animal Name: " + name);
        System.out.println("Animal Age: " + age + " years old");
    }

    // Method to be overridden
    public void makeSound() {
        System.out.println("The animal makes a generic sound.");
    }
}

// Subclass inheriting from Animal
class Dog extends Animal {
    protected String breed;

    // Constructor for Dog
    public Dog(String name, int age, String breed) {
        super(name, age); // Calling the parent class constructor
        this.breed = breed;
    }

    // Display Dog info (including inherited attributes)
    @Override
    public void display() {
        super.display(); // Displays name and age
        System.out.println("Dog Breed: " + breed);
    }

    // Overriding the makeSound method
    @Override
    public void makeSound() {
        System.out.println("The dog barks.");
    }
}

// Subclass inheriting from Dog (Multi-level inheritance)
class Puppy extends Dog {
    private int milkTeeth;

    // Constructor for Puppy
    public Puppy(String name, int age, String breed, int milkTeeth) {
        super(name, age, breed); // Calling the Dog constructor
        this.milkTeeth = milkTeeth;
    }

    // Display Puppy info (including all inherited attributes)
    @Override
    public void display() {
        super.display(); // Displays name, age, and breed
        System.out.println("Puppy Milk Teeth: " + milkTeeth);
    }

    // Overriding the makeSound method again
    @Override
    public void makeSound() {
        System.out.println("The puppy yaps.");
    }
}

// AnimalInheritance class to handle user input and execution
public class AnimalInheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("=== ENTER ANIMAL DETAILS ===");
        System.out.print("Enter Animal Name: ");
        String animalName = sc.nextLine();
        System.out.print("Enter Animal Age: ");
        int animalAge = sc.nextInt();

        System.out.println("\n=== ENTER DOG DETAILS ===");
        System.out.print("Enter Dog Name: ");
        String dogName = sc.nextLine();
        System.out.print("Enter Dog Age: ");
        int dogAge = sc.nextInt();
        System.out.print("Enter Dog Breed: ");
        String dogBreed = sc.nextLine();

        System.out.println("\n=== ENTER PUPPY DETAILS ===");
        System.out.print("Enter Puppy Name: ");
        String puppyName = sc.nextLine();
        System.out.print("Enter Puppy Age: ");
        int puppyAge = sc.nextInt();
        System.out.print("Enter Puppy Breed: ");
        String puppyBreed = sc.nextLine();
        System.out.print("Enter Number of Milk Teeth: ");
        int milkTeeth = sc.nextInt();

        System.out.println("\n       DISPLAYING RESULTS ");

        // Creating objects with user data
        Animal myAnimal = new Animal(animalName, animalAge);
        Dog myDog = new Dog(dogName, dogAge, dogBreed);
        Puppy myPuppy = new Puppy(puppyName, puppyAge, puppyBreed, milkTeeth);

        System.out.println("\n--- Animal Information ---");
        myAnimal.display();
        myAnimal.makeSound();
        
        System.out.println("\n--- Dog Information ---");
        myDog.display();
        myDog.makeSound();
        
        System.out.println("\n--- Puppy Information ---");
        myPuppy.display();
        myPuppy.makeSound();

        System.out.println("\n--- Polymorphism & Overriding Demo ---");
        // Demonstrating runtime polymorphism using parent references
        Animal polymorphDog = myDog;
        Animal polymorphPuppy = myPuppy;

        System.out.print(polymorphDog.name + " (Dog reference as Animal) says: ");
        polymorphDog.makeSound(); // Dynamically links to Dog's makeSound()
        
        System.out.print(polymorphPuppy.name + " (Puppy reference as Animal) says: ");
        polymorphPuppy.makeSound(); // Dynamically links to Puppy's makeSound()

        sc.close();
    }
}