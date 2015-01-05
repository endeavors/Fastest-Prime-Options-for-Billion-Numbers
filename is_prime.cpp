/* Filename: is_prime.cpp
 * Author: Gurkirat Singh
 * Description: This file determines whether the passed in number is a prime
 *              or not. The function takes in different range of factors from
 *              low as 3 and highest to the square root of the number, and it
 *              loops through each of the numbers (by +2) and checks if that
 *              number is a factor of the number passed in to function. This
 *              file checks prime numbers in a optimized way using multi-
 *              threading.
 */

/*
 * Function name: isPrime()
 *
 * Function prototype: bool isPrime( long long n, long long lo, long long hi ); 
 *
 * Params: n is the value we are checking to determine if it is prime or not.
 *         lo is the low (inclusive) range of possible factors to check.
 *         hi is the high (exclusive) range of possible factors to check.
 *
 * Algorithm:
 *   
 *   loop thru the range [lo, hi) as factors incrementing by 2 each time
 *       checking if n is evenly divisible by each factor. Remember we are
 *       starting at an odd factor for lo. We do not need to check any even
 *       factors.
 *       If it is evenly divisible, return false immediately.
 *   
 *   If you make it thru the range of factors and have not returned false yet,
 *   return true.
 *
 *   There may be other more efficient isPrime algorithms, but this will do.
 *   We want to see how multi-threading in C++11 with async()/get()
 *   might improve overall performance.
 *
 * Side Effects: None.
 *
 * Error Conditions: None.
 *
 * Return value: bool indicating whether number is prime or not.
 */

bool isPrime( long long n, long long lo, long long hi )
{
	if (n <= 1){
		return false;
	}
	
	if (n == 2){
		return true;
	}
	
	if (n % 2 == 0){
		return false;
	}
	
        /*The lowest base can be 3*/
	if (lo < 3){
		lo = 3;
	}
	
	if (lo % 2 == 0){
		lo = lo + 1;
	}
	
	int counter;
	for(counter = lo; counter < hi; counter+= 2){
		
		if (n % counter == 0){
			return false;
		}
			
	}
	
    return true; //number is prime if it gets here
}

