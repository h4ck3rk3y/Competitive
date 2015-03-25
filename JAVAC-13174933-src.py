
def identifier(x):
        if (x.lower()==x ) and x[0]!='_' and x[-1] !='_' and x.find('__')==-1:
          # print 'here'
          flag = 0
          gautam = ""
          for a in x:
            if flag==0 and a!='_':
              gautam = gautam + a
            elif flag==1 and a!='_':
              flag =0
              gautam = gautam + a.upper()
            elif a=='_':
              flag=1
          print gautam
        elif x.find('_')==-1 and x[0].upper()!=x[0] :
          flag=0
          gautam=""
          for a in x :
            if a.upper()==a:
              gautam = gautam + '_' + a.lower()          
            else :
              gautam = gautam + a  
          print gautam
        else :
          print 'Error!'  
while 1 :
        try:
          a = raw_input()
          identifier(a)
        except:
          break  

         
          