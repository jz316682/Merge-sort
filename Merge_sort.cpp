#include <iostream> 
#include <cstdlib>
using namespace std;

int main(void){
	
	int data_size;
	
	while(true){                                                  //��J�}�C���j�p(��������) 
		cout<<"�п�J�}�C�j�p(��������):";
		cin>>data_size;
	
		if(data_size%2==1){
			cout<<"��J���Ȭ��_�� �Э��s��J"<<endl;
			cout<<"-----------"<<endl; 
		}else{
			cout<<"��J���T ���}�C�j�p��:"<<data_size<<endl;
			break; 
		}
	}
	
	int a[data_size];                                //�����ͭn�Ψ��x�s��ƪ��}�C 
	
	for(int i=0;i<data_size;i++){                    //�A���Ƥ@�@��J��}�C�� 
		cout<<"�п�J�@�Ӹ�ƨ�}�C��:";
		cin>>a[i];
	}
	
	cout<<"�쥻a�}�C����:"<<endl;                    //�L�X�̪쪺�}�C���(�٨S�Ƨ�) 
	cout<<"a[]:";
	for(int i=0;i<data_size;i++){
		cout<<a[i]<<","; 
	} 
	cout<<endl;
	
	
	
    int c[data_size],b[2],d[data_size];               //���ͤ���B��һݭn���}�C 

	if(a[0]<a[1]){                                    //�����ͳ̪�c�}�C����(���e���Ƨ�) 
		c[0]=a[0];
		c[1]=a[1];
	}else{
		c[0]=a[1];
		c[1]=a[0];
	}
		
	for(int j=2;j<sizeof(a)/sizeof(int);j+=2){                      
			
			
		int m=0; // c�}�C��index 
		int n=0; // b�}�C��index 
		int q=0; // d�}�C��index
			
			
		if(a[j]<a[j+1]){       //��Xb�}�C 
		b[0]=a[j];
		b[1]=a[j+1];
		}else{
		b[0]=a[j+1];
		b[1]=a[j];
		}
			
			
		while(m<j || n<2){      //c�x�}�Pb�x�}�ۤ���� 
			if(c[m]<b[n]){
				d[q]=c[m];
				m++;
				q++;
			}else{
				d[q]=b[n];
				n++;
				q++;
			}
				
				
			if(n==2){             //�p�Gb�x�}�w�񧹫h�ѤU�����Ӷ��Ƕ�c����� 
				while(q<j+2){
					d[q]=c[m];
					q++;
					m++; 
						
				}
			}
				
			if(m==j){             //�p�Gc�x�}�w�񧹫h�ѤU�����Ӷ��Ƕ�b�����  
				while(q<j+2){
					d[q]=b[n];
					q++;
					n++;
						
				}
			}	
		} 
			
		for(int i=0;i<data_size;i++){        //�}�C�ƻs 
			c[i]=d[i];
		}	
	}
	
	cout<<"�g�ѦX�ֱƧǫ᪺�}�Ca����:"<<endl;           //�L�X���G 
	cout<<"a[]:";
	for(int i=0;i<data_size;i++){                 
		cout<<c[i]<<",";
	} 

	cout<<endl;
	
	system("pause");
	return 0;
}
