/*
 * Filename: pamt2.h
 * Author: Gurkirat Singh
 * Description: This header file contains the function prototypes and constants
 *              we will use in the main.c file.
 */


#ifndef PAMT2_H    /* Macro Guard */
#define PAMT2_H


/* 
 * The number of concurrent threads that the current machine can support.
 */

const int numOfThreads = std::thread::hardware_concurrency();


bool isPrime( long long n, long long lo, long long hi );

#endif

