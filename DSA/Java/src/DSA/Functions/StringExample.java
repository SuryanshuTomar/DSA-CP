package DSA.Functions;

public class StringExample {
    public static void main(String[] args) {
        String message = greet();
        System.out.println(message);

        String personalized = myGreet("DeathSlayer");
        System.out.println(personalized);
    }

    private static String myGreet(String msg) {
        return "Hello " + msg;
    }

    static String greet(){
        return "Konnichiwa";
    }
}
