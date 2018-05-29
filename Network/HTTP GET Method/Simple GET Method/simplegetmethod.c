#include <stdio.h>
#include <curl/curl.h>
#include <string.h>
void get_method(){ // WAY 1
	    CURL *curl;
  		CURLcode res;
		curl = curl_easy_init();
  		if(curl) {
    		curl_easy_setopt(curl, CURLOPT_URL, "http://www.kaanari.com.tr/c/curl.php?value=1");
    		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    		res = curl_easy_perform(curl);
    		/* Check for errors */ 
    		if(res != CURLE_OK)
      			fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
 
    		/* always cleanup */ 
    		curl_easy_cleanup(curl);
		}
}

void get_method2(){ //WAY 2
		char str[80];
		int value;
		printf("Please Enter Value = ");
		scanf("%d",&value);
	    sprintf(str, "http://www.kaanari.com.tr/c/curl.php?value=%d", value); 
	    CURL *curl;
  		CURLcode res;
		curl = curl_easy_init();
  		if(curl) {
  			curl_easy_setopt(curl, CURLOPT_URL, str);
    		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    		/* Perform the request, res will get the return code */ 
    		res = curl_easy_perform(curl);
    		/* Check for errors */ 
    		if(res != CURLE_OK)
      			fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

    		/* always cleanup */ 
    		curl_easy_cleanup(curl);
		}
}

int main(void)
{
	printf("----- WAY 1 -----\n");
	get_method();
	printf("----- WAY 2 -----\n");
	get_method2();
	return 0;
}
