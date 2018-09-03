
// 3 	| 3
//1 2	| 12
// 5 7	| 9

int TC, a,b;
scanf("%d", &TC); //number of test cases
while(TC--){//Shortcut to repeat until 0			
	scanf("%d %d", &a,&b);
	printf("%d\n", a+b);
}


int a, b;
//stop when both integers are 0
while(scanf("%d %d", &a,&b), (a||b)){
	printf("%d\n", a+b);
}

int a,b;
//scanf returns the number of items read
while(scanf("%d %d", &a,&b)==2)
// or you can check for EOF
// while(scanf("%d %d", &a,&b)!=EOF)
	prinf("%d\n", a+b);


//variable numbers of inputs
int k, ans,v;
while(scanf("%d", &k) !=EOF){
	ans = 0;
	while(k--){
		scanf("%d", &v);
		ans += v;	
	}
	printf("%d", ans);
}
