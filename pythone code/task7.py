

ch=input("enter choice 1 for bkash menu:")

if ch == '1':
    name=input("enter the code(*247#3) for goto baksh menu:")
    if name=='*247#':
        while True:
            print("1.send money")
            print("2.Buy airtime")
            print("3.payment")
            print("4.cash out")
            print("5.pay bill")
            print("6.Remittance ")
            print("7.MY Bkash")
            print("8.Helpline")
            print("enter 3 for goto payment option")
            choice=input("enter choice 3:")
                
                
            if choice=='3':
                print("enter Marchant baksh Account NO:")
                n=int(input("inpt 11 digit valid  bkash number:"))
                m=len(str(n))
                #print("the length is ",+m)
                if m==10:
                    print("enter amount= XXXXX ")
                    print("this is the 4 option")
                else:
                    print(" plesase enter 11 digit valid number")
            else:
                print("run again and please choice 3 for goto next option")            
else:
    print("please run again and enter 1")

        
    
    