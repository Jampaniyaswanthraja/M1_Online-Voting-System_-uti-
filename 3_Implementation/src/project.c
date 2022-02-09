#include "project.h"

 int entries = 0;
            fgets(buf, 1024, fp);
            char *field = strtok(buf, ",");
            while(fgets(buf, 1024, fp))
            {   
                while(field){
                        if (field_count == 0) {
                            printf("\nVOTER ID:\t");
                        }
                        if (field_count == 1) {
                            printf("NAME:\t");
                        }
                        if (field_count == 2) {
                            printf("AGE:\t");
                        }

                        printf("%s\n", field);
                        field = strtok(NULL, ",");

                        field_count++;
                    }
                    printf("\n");
                }
            }
            field_count = 0;
                field = strtok(buf, ",");
                 int fl=0;

                    for(i=0;i<n5;i++)
                    {

                    if(n2==sy[i])
                        {fl=1;
                        break;
                        }
                    else
                        fl=0;
                    }

                    if(fl==1)

                    {


                    for(i=0;i<n5;i++)
                    {

                    if(n2==sy[i])
                        count[i]++;
                    return 0;


                    }

                