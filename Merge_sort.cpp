#include <iostream> 
#include <cstdlib>
using namespace std;

int main(void){
	
	int data_size;
	
	while(true){                                                  //輸入陣列的大小(須為偶數) 
		cout<<"請輸入陣列大小(須為偶數):";
		cin>>data_size;
	
		if(data_size%2==1){
			cout<<"輸入的值為奇數 請重新輸入"<<endl;
			cout<<"-----------"<<endl; 
		}else{
			cout<<"輸入正確 此陣列大小為:"<<data_size<<endl;
			break; 
		}
	}
	
	int a[data_size];                                //先產生要用來儲存資料的陣列 
	
	for(int i=0;i<data_size;i++){                    //再把資料一一輸入到陣列裡 
		cout<<"請輸入一個資料到陣列裡:";
		cin>>a[i];
	}
	
	cout<<"原本a陣列的值:"<<endl;                    //印出最初的陣列資料(還沒排序) 
	cout<<"a[]:";
	for(int i=0;i<data_size;i++){
		cout<<a[i]<<","; 
	} 
	cout<<endl;
	
	
	
    int c[data_size],b[2],d[data_size];               //產生之後運算所需要的陣列 

	if(a[0]<a[1]){                                    //先產生最初c陣列的值(內容有排序) 
		c[0]=a[0];
		c[1]=a[1];
	}else{
		c[0]=a[1];
		c[1]=a[0];
	}
		
	for(int j=2;j<sizeof(a)/sizeof(int);j+=2){                      
			
			
		int m=0; // c陣列的index 
		int n=0; // b陣列的index 
		int q=0; // d陣列的index
			
			
		if(a[j]<a[j+1]){       //算出b陣列 
		b[0]=a[j];
		b[1]=a[j+1];
		}else{
		b[0]=a[j+1];
		b[1]=a[j];
		}
			
			
		while(m<j || n<2){      //c矩陣與b矩陣相互比較 
			if(c[m]<b[n]){
				d[q]=c[m];
				m++;
				q++;
			}else{
				d[q]=b[n];
				n++;
				q++;
			}
				
				
			if(n==2){             //如果b矩陣已填完則剩下的按照順序填c的資料 
				while(q<j+2){
					d[q]=c[m];
					q++;
					m++; 
						
				}
			}
				
			if(m==j){             //如果c矩陣已填完則剩下的按照順序填b的資料  
				while(q<j+2){
					d[q]=b[n];
					q++;
					n++;
						
				}
			}	
		} 
			
		for(int i=0;i<data_size;i++){        //陣列複製 
			c[i]=d[i];
		}	
	}
	
	cout<<"經由合併排序後的陣列a的值:"<<endl;           //印出結果 
	cout<<"a[]:";
	for(int i=0;i<data_size;i++){                 
		cout<<c[i]<<",";
	} 

	cout<<endl;
	
	system("pause");
	return 0;
}
