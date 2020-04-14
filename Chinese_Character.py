import requests
import re

headers = {
    'User-agent': 'user-agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 '
                  '(KHTML, like Gecko) Chrome/81.0.4044.69 Safari/537.36'
}
url = requests.get("https://www.zhihu.com/people/liang-chen-an", headers = headers)
texts = re.findall(r'[\u4e00-\u9fa5]', url.text, re.S)
print(' '.join(texts))


headers = {
    'User-agent':'User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) '
                 'Chrome/70.0.3538.102 Safari/537.36 Edge/18.18363'
}
url2 = requests.get("https://space.bilibili.com/11800263", headers = headers)
text2 = re.findall(r'[\u4e00-\u9fa5]', url2.text, re.S)
print(' '.join(text2))


