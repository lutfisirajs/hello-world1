                    /*SIMPLE ARRAY PROGRAM*/
            /*    DIRECT BY : lUTHFI SIRAJS    */

#include<stdio.h>
#include<conio.h>

int main()
 {
 	int Ar [5];
 	int x;
 	printf("      __________________________________________________________________\n");
 	printf("                      ||  PROGRAM INPUT NILAI SISWA  ||  ");
 	printf("                                            -----------------------------------");
 	printf("                                                   || By:Luthfi Sirajs||\n");
 	printf("                               || X_TKJ_1||\n");
  
 	printf(">>>Proses Menginput Nilai\n\n");
 	printf("\n");
 	
 	printf("              =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+");
 	printf("\n");
 	for (x=0; x<5; x++)
 	{
 		printf("              ||");
 		printf("     NO.Urut siswa ke=%d     ||s",x);
 		scanf("%d",&Ar[x]);
 		
 	}
 	printf("              =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+");
 	
 
    printf("\n\n\n");
     
 	printf("\n>>>Hasil Tampilan Nilai\n\n");
 	
 	printf("              =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+");
 	printf("\n");
 	for (x=0; x<5; x++)
 	{
 		printf("              ||");
 		printf("  Nilai Siswa No.Urut ke-%d =%d ||\n",x,Ar[x]);
   	}
   	printf("              =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+");
   	printf("\n\n\n\n\n");
   	printf("=+=+=+=+=+=+=+=+=++=++=+=+=+=+=+=+=+=====++++++++=+=+=+=+=+=+=+=+ =+=+=+=+=+=+=+\n");
   	printf("                      || (c)2015 all right reserved  ||\n");
   	printf("                      || LS Project v.1.0(beta)      ||");
 getch();	
 }         
                
          
