import csv
def enter_in_csv(info_list):
    with open('student_details.csv','a',newline='') as csv_file:
        writer=csv.writer(csv_file)
        if csv_file.tell()==0:
          writer.writerow(["Name","Age","contact","email_id"])
        writer.writerow(info_list)
        
condition=True
student=1
while(condition):
    student_details=input("Enter the details of student{} in following format(Name Age Contact Email_Id)".format(student))
    #split the details
    detailed_list=student_details.split(' ')
    print("\nEntered information is \nName:{}\nage:{}\nContact:{}\nEmail_Id:{}".format(detailed_list[0],detailed_list[1],detailed_list[2],detailed_list[3]))
    #checking details
    check=input("Are the details of student{} correct?(yes/no)".format(student))
    if check =='yes':
      enter_in_csv(detailed_list)
      info=input("Do you want to continue entering information?(yes/no)")
      if info=='yes':
          condition=True
          student+=1
      else:
          condition=False
    elif check=='no':
      print("please re enter the details of student{}".format(student))
