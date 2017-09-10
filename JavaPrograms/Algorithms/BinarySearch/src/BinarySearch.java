public class BinarySearch{
	public int Search(int arr[], int x){
		int l = 0;
		int r = arr.length - 1;
		while(l <= r){
			int m = (l + r)/2;
			//check if x is present in mid
			if(arr[m] == x)
				return m;
			
			if(arr[m] > x)
				r = m - 1;
			if(arr[m] < x)
				l = m + 1;		
		}
		return -1; //x was not found
	}
		
	public static void main(String[] args) {
		BinarySearch obj = new BinarySearch();
		int[] vector = {10,20,30,40,50,60,66};
		int len = vector.length;
		System.out.println("Vector length is: " + len);
		int x= 10;
		if(obj.Search(vector, x) >= 0)
			System.out.println("Value " + x + " was found at index " + obj.Search(vector, x) );
		else
			System.out.println("Value is not present in array");	
	}
		
}

