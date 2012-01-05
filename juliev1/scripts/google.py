#!/usr/bin/env python

#
# google.oy
# Downloads a google page to get search results
#
# Usage : google.py <searchterms>
#

import sys
import urllib2
import urllib
from BeautifulSoup import BeautifulSoup

arg = ' '.join(sys.argv[1:])
search = urllib.quote_plus(arg)
url = "http://www.google.com/search?hl=en&q={0}&btnG=Google+Search".format(search)
data = None

print url
request = urllib2.Request(url, data, {"User-Agent" : "Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 6.0; Trident/5.0"})
page = urllib2.urlopen(request)
soup = BeautifulSoup(page)

#print soup

result = soup.find("a", {"class" : "l"});
result = ' '.join([s.string for s in result.contents])
print result

# methods:
# google, translate, video, news, image, weather, define\