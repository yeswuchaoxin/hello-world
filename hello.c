#include <stdio.h> 
#include <curl/curl.h>
int main(void)
CURL *curl;
CURLcode res;
curl=curl_easy_init();
if(curl)
curl_easy_setopt(curl, CURLOPT-URL,"http://myip.ipip.net/");
res=curl_easy_perform(curl);
f(res!=CURLE_OK)
fprintf(stderr,"curl_easy_perform() failed:%s\n",
curl_easy_strerror(res));
curl_easy_cleanup(curl);
return 0;
}

