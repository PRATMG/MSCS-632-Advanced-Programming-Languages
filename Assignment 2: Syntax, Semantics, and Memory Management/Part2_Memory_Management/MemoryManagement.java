public class Main {
    public static void main(String[] args) {
        // Allocating memory dynamically
        String data = new String("Hello, Java!");

        // Garbage collector automatically handles unused memory
        processData(data);

        // Data is still accessible after being passed to a method
        System.out.println("Original data: " + data);

        // Nullifying reference to make the object eligible for garbage collection
        data = null;

        // Suggest garbage collection (not guaranteed)
        System.gc();
        System.out.println("Program completed.");
    }

    public static void processData(String data) {
        System.out.println("Processed data: " + data);
    }
}
