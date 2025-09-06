import static java.lang.System.*;
import java.util.*;

// parameters not allowed here along with the typename like in C++ 
// template <typename T, int length>

class Array<T>{
	// Generic array creation not allowed in Java like below
	// T[] arr = new T[10];
	// Instead use Object class and cast it to 'T'
	T[] arr = (T[]) new Object[10];
	
    void fill(T value){
		for(int i=0; i<10; i++){
			arr[i] = value;
		}
	}	
	
	T at(int index){
		return arr[index];
	}
}

public class Test {
	public static void main(String[] args) {
		// Only wrapper classes allowed here
		// You can not use Array<int> 
		Array<Integer> obj = new Array();
		obj.fill(10);
		for(int i=0; i<10; i++)
		   out.println("arr["+i+"]: "+ obj.at(i));
    }
}

	
	