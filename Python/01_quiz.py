url = "http://naver.com"
my_str = url.replace("http://", "") # 빈문자열로 변환
dot_index = my_str.find(".") 
# my_str = my_str[:my_str.index(".")] 변수에 들어가있는 문자열 중에서 처음부터 괄호안까지 자를 것인데 처음 나오는 점 전까지
my_str = my_str[0:dot_index]
first = my_str[0:3]
lens = len(my_str)
counts = my_str.count("e")
print(f"{first}{lens}{counts}!")