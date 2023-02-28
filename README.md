
name_list=[]
entry_time_list=[]
vehicle_number_list=[]
vehicle_number_present_list=[]
vehicle_type_list=[]
entry_time_minutes_list=[]
exit_dict={}
flag=0
flag2=0
while True:
    print('''Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    ''')
    i=int(input())
    if i==6:
        break
    if i<1 or i>6:
        print("=>Please enter input from the above list<=")
        print()
    elif i==1:
        if flag2<20:
            name_list.append(input("Enter your name: "))
            entry_time_list.append(input("Enter current time (format: 15:35): "))
            temp2=input("Enter your vehicle registration number: ")
            vehicle_number_list.append(temp2)
            vehicle_number_present_list.append(temp2)
            vehicle_type_list.append(input("Vehicle type (car/bike) :"))
            print()
            temp=entry_time_list[flag].split(":")
            entry_time_minutes_list.append(int(temp[0])*60+int(temp[1]))
            flag+=1
            flag2+=1
        else:
            print("Parking slot not available")
            print()
    elif i==2:
        vehicle_no=input("Enter your vehicle registration number: ")
        if vehicle_no in vehicle_number_present_list:
            vehicle_number_present_list.remove(vehicle_no)
            flag2-=1
            index=vehicle_number_list.index(vehicle_no)
            exit_time=input("Enter current time: ").split(":")
            exit_minutes=int(exit_time[0])*60+int(exit_time[1])
            exit_dict[index]=(exit_time[0]+":"+exit_time[1])
            if vehicle_type_list[index]=="car":
                if exit_minutes>entry_time_minutes_list[index]:
                    time_spent=exit_minutes-entry_time_minutes_list[index]
                    print("Total parking time:",time_spent//60,"hours",time_spent%60,"minutes")
                    if time_spent<=180:
                        print("Parking charges:",40,"rs")
                    else:
                        if time_spent%60==0:
                            print("Parking charges:",40+((time_spent//60)-3)*10,"rs")
                        else:
                            print("Parking charges:",40+((time_spent//60+1)-3)*10,"rs")
                    print()
                else:
                    time_spent=24*60-entry_time_minutes_list[index]+exit_minutes
                    print("Total parking time:",time_spent//60,"hours",time_spent%60,"minutes")
                    if time_spent<=180:
                        print("Parking charges:",40,"rs")
                    else:
                        if time_spent%60==0:
                            print("Parking charges:",40+((time_spent//60)-3)*10,"rs")
                        else:
                            print("Parking charges:",40+((time_spent//60+1)-3)*10,"rs")
                    print()
                            
            elif vehicle_type_list[index]=="bike":
                if exit_minutes>entry_time_minutes_list[index]:
                    time_spent=exit_minutes-entry_time_minutes_list[index]
                    if time_spent<=180:
                        print("Total parking time:",time_spent//60,"hours",time_spent%60,"minutes")
                        print("Parking charges:",40,"rs")
                    else:
                        print("Total parking time:",time_spent//60,"hours",time_spent%60,"minutes")
                        if time_spent%60==0:
                            print("Parking charges:",20+((time_spent//60)-3)*5,"rs")
                        else:
                            print("Parking charges:",20+((time_spent//60+1)-3)*5,"rs")
                    print()
            else:
                time_spent=24*60-entry_time_minutes_list[index]+exit_minutes
                if time_spent<=180:
                    print("Total parking time:",time_spent//60,"hours",time_spent%60,"minutes")
                    print("Parking charges:",40,"rs")
                else:
                    print("Total parking time:",time_spent//60,"hours",time_spent%60,"minutes")
                    if time_spent%60==0:
                        print("Parking charges:",20+((time_spent//60)-3)*5,"rs")
                    else:
                        print("Parking charges:",20+((time_spent//60+1)-3)*5,"rs")
                print()
        else:
            print("No car found with this registration number")
            print()
    elif i==3:
        print("Total Parking Slots:",20)
        print("Number of available parking slots:",20-flag2)
        print()
    elif i==4:
        vehicle_no=input("Enter your vehicle registration number: ")
        if vehicle_no in vehicle_number_list:
            index=vehicle_number_list.index(vehicle_no)
            print("Driver's Name:",name_list[index])
            print("Vehicle type:",vehicle_type_list[index])
            print("Car's entry time:",entry_time_list[index])
            print("Exit time:",exit_dict.get(index,"Car still in the parking lot"))
            print()
        else:
            print("Vehicle not found with this registration number")
    elif i==5:
        print('''
For Car:
    Parking fee for first 3 hours: 40 rs
    Extra 10 rs per extra hour
        
For Bike:
    Parking fee for first 3 hours: 20 rs
    Extra 5 rs per extra hour
    ''')
Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
1
Enter your name: Rohan
Enter current time (format: 15:35): 12:25
Enter your vehicle registration number: gcewv
Vehicle type (car/bike) :car

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
1
Enter your name: ab
Enter current time (format: 15:35): 12:35
Enter your vehicle registration number: aa
Vehicle type (car/bike) :car

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
1
Enter your name: caad
Enter current time (format: 15:35): 12:45
Enter your vehicle registration number: bb
Vehicle type (car/bike) :car

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
1
Enter your name: abc
Enter current time (format: 15:35): 12:55
Enter your vehicle registration number: cc
Vehicle type (car/bike) :bike

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
3
Total Parking Slots: 20
Number of available parking slots: 16

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
2
Enter your vehicle registration number: aa
Enter current time: 15:55
Total parking time: 3 hours 20 minutes
Parking charges: 50 rs

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
3
Total Parking Slots: 20
Number of available parking slots: 17

Please enter the number to access the service followed by that number:
    1) Vehicle Entry
    2) Vehicle Exit
    3) Available Parking Slots
    4) Get Car Details
    5) View Parking Fee Structure
    6) Exit Program
    
 
 
 
