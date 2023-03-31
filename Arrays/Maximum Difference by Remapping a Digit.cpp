class Solution:
    def minMaxDifference(self, num: int) -> int:
        str_nm=str(num)
        maxnum=num
        minnum=num
    
        for j in range(len(str_nm)):
            for k in range(10):
                temp=str_nm
                newNum=temp.replace(str_nm[j],str(k))
                Num=int(newNum)
                if Num>maxnum:
                    maxnum=Num
                if Num<minnum:
                    minnum=Num
        return maxnum-minnum
