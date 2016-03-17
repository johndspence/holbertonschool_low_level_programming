/* Puts s[i] into temp variable, swaps s[i] with s[j]
and then puts temp into s[j] */
void reverse_array(int *a, int n){

int i = 0;
int j = 0;
int temporary;

for (i=0; i < n ; i++){}
	i=i-1;

while (j < i){
	temporary = a[i];
	a[i] = a[j];
	a[j] = temporary;
	i--;
	j++;
	}
}
