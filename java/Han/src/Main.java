import java.util.*;
import java.lang.*;

public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String s1, s2, s3, s4;
		s1 = input.nextInt();
		s2 = input.nextInt();
		s3 = input.nextInt();
		s4 = input.nextInt();
		char[] chars1 = s1.toCharArray();
		char[] chars2 = s2.toCharArray();

		List<String> list1 = Arrays.asList(chars1);
		List<String> list2 = Arrays.asList(chars2);
		list1.retainAll(list2);
		System.out.println(list1.size());

	}
}
