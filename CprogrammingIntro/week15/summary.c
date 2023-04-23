void normalizeStr (char *a){
  int i,j,size;
  ////trimspace
  //trim left
  for (i=0;*(a+i)==' ';i++);
  strcpy(a,a+i);
  // trim right
  size=strlen(a);
  for(i=size-1;*(a+i)==' ';i--);
  *(a+1+i)='\0';
  //
  size=strlen(a);
  for (i=1;i<size-2;i++){
    if(*(a+i)==' '){
      for (j=i+1;*(a+j)==' ';j++);
      strcpy(a+i+1,a+j);
    }
  }//end strimspace

  if (*a>96 &&*a<123){
    *a-=32;
  }
  i=1;
  while(*(a+i)!='\0'){
    if (*(a+i)>64 &&*(a+i)<91 && *(a+i-1)!=' '){
	*(a+i)+=32;
      }
    if(*(a+i)==' '){
      if (*(a+i+1)>96 &&*(a+i+1)<123){
	*(a+i+1)-=32;
      }//end if2
    }//end if1
    i++;
  }//end while
}


///
int compare(date day1, date day2)
{
	if (day1.y < day2.y) return 1;
	else if (day1.y > day2.y) return -1;
	else 
	{
		if (day1.m < day2.m) return 1;
		else if (day1.m > day2.m) return -1;
		else 
		{
			if (day1.d < day2.d) return 1;
			else if (day1.d > day2.d) return -1;
			else return 0;
		} 
	}
}////date
//search
if(strstr(st[i].id,b))
//atoi(string)->digit
///
void trim_l (char *a){
  int i;
  //trim left
  for (i=0;*(a+i)==' ';i++);
  strcpy(a,a+i);
}
void trim_r(char *a){
  int i,size;
  // trim right
  size=strlen(a);
  for(i=size-1;*(a+i)==' ';i--);
  *(a+1+i)='\0';
  //
}
void trim_m(char *a){
  int i,j,size;
  size=strlen(a);
  for (i=1;i<size-2;i++){
    if(*(a+i)==' '){
      for (j=i+1;*(a+j)==' ';j++);
      strcpy(a+i+1,a+j);
    }//end if
  }//end for
}//end fun

///
srand((int)time(0));
a[i] = rand()