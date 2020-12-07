import java.util.*;

class Main {
	public static void main(String[] args) throws Exception {
		Scanner In = new Scanner(System.in); // Create Scanner object
		int n;
		n = In.nextInt();
		
		String str1 = In.nextLine();
		String str2 = In.nextLine();
		Scanner s1 = new Scanner(str1);
		Scanner s2 = new Scanner(str2);
		try {
			HashSet<Integer> hs1 = new HashSet<Integer>();
			while (s1.hasNextInt()) {
				hs1.add(s1.nextInt());
			}

			HashSet<Integer> hs2 = new HashSet<Integer>();
			while (s2.hasNextInt()) {
				hs2.add(s2.nextInt());
			}
			
			hs1.retainAll(hs2);

			if (hs1.size() == n) {
				System.out.println("I become the guy");
			} else {
				System.out.println("Oh, my keyboard!");
			}
		}
		catch(NullPointerException e) {
			System.out.println(e);
		}
	}
}
