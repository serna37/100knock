https://qiita.com/e869120/items/eb50fdaece12be418faa#2-3-%E5%88%86%E9%87%8E%E5%88%A5%E5%88%9D%E4%B8%AD%E7%B4%9A%E8%80%85%E3%81%8C%E8%A7%A3%E3%81%8F%E3%81%B9%E3%81%8D%E9%81%8E%E5%8E%BB%E5%95%8F%E7%B2%BE%E9%81%B8-100-%E5%95%8F


count solved
```sh
find . -maxdepth 1 -type f -name '*.cpp' -exec bash -c '[ -s "$1" ] && echo "non-empty" || echo "empty"' _ {} \; | grep "non-empty" | wc -l
```

list solved
```sh
find . -maxdepth 1 -type f -name '*.cpp' -exec bash -c '[ -s "$1" ] && echo "$1"' _ {} \;
```
