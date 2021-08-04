// C++ program to find hamming distance b/w
// two string
#include<bits/stdc++.h>
using namespace std;
 
// function to calculate Hamming distance
int hammingDist(char *str1, char *str2)
{
    int i = 0, count = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
            count++;
        i++;
    }
    return count;
}
 

 
    

// calculating hamming_distance between slack_username and twitter_handle
// C++ script printing my name, email, slack_username, biostack, twitter_handle and hamming_distance

#include <iostream>
using namespace std;

#define MAX_LENGTH 100

int main()
{
    char str1[] = "@Amarachukwu";
    char str2[] = "@Amara_chike";
	
	cout<<"Amarachukwu Chike-Onyeche"<<",";
	cout<<"amaraonyichike@gmail.com"<<",";
	cout<<"@Amarachukwu"<<",";
	cout<<"Genomics"<<",";
	cout<<hammingDist (str1, str2);
	
            

    return 0;
}
