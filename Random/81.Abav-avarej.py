T = int(input('test case >>'))
# no_arr = []
total_no = 0
for i in range(T):
    exam_no = int(input('Enter exam No>>'))
    # no_arr.append(exam_no)
    total_no += exam_no
    

print(total_no / T)