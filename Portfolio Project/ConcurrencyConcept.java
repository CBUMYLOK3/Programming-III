public class ConcurrencyConcept {

    static class CountUp implements Runnable {
        private final Object lock;

        public CountUp(Object lock) {
            this.lock = lock;
        }

        @Override
        public void run() {
            synchronized (lock) {
                for (int i = 1; i <= 20; i++) {
                    System.out.println("Counting up: " + i);
                }
            }
        }
    }

    static class CountDown implements Runnable {
        private final Object lock;

        public CountDown(Object lock) {
            this.lock = lock;
        }

        @Override
        public void run() {
            synchronized (lock) {
                for (int i = 20; i >= 0; i--) {
                    System.out.println("Counting down: " + i);
                }
            }
        }
    }

    public static void main(String[] args) {
        Object lock = new Object();

        CountUp countUp = new CountUp(lock);
        CountDown countDown = new CountDown(lock);

        Thread countUpThread = new Thread(countUp);
        Thread countDownThread = new Thread(countDown);

        countUpThread.start();
        countDownThread.start();
    }
}