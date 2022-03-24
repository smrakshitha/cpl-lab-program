#include<stdio>
int main()
{

    struct student
    }
         int stu_id;
         char name[20];
         float lang1_marks;
         float mat_marks;
         float comp_marks;
         float avg;
   }
 
   struct student s[20];
   int i,n; 
     
        printf("enter the numder of records:");
        scanf("%d,&n);
    
       printf("enter the student details..../n",n);
       for(i=0;i<n;i++)
       {
          printf("enter student id");
          scanf("%d",s[i],roll_no);

          printf("enter the student name");
          scanf("%c",s[i],name);
   
          printf("enter the marks of lang1");
          scanf("%d",s[i],lang1_marks);
     
          printf("enter the marks of mat;");
          scanf("%d",s[i],mat_marks);
 
          printf("enter the marks of comp:"); 
          scanf("%d",s[i],com_marks);
       }
       
        for(i=0;i<n;i++)
       {

          s[i].avg=(s[i].lang1_marks + s[i].mat_marks + s[i].comp_marks)/3.0;
        }

      printf("student scoring above the avg marks....../n");
      printf("\n\nid\tname\tavg\n\n");

      for(i=0;i<n;i++)
     {
       if(s[i].avg>= 35.0)

       printf("%d\t%s\t%f\n",s[i].roll_no,s[i].name,s[i].avg);
     }

       printf("\n\nid\tname\tavg\n\n");

           for(i=0'i<n;i++)
           {
               if(s[i].avg<35.0)
     
       printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
         return 0;
}
}
        
