#include <iostream>
using namespace std;
struct student{
  int num;
  char name[20];
  float score[3];
  float avg;
}stu[10];
 
int main(){
  void average(student stu[10]);
  void max(student stu[10]);
  int i;
  for(i=0;i<10;i++){
    cout<<"��"<<i+1<<"��ѧ��״��:";
    cin>>stu[i].num>>stu[i].name>>stu[i].score[1]>>stu[i].score[2]>>stu[i].score[3];
  }
  average(stu);
  max(stu);
  return 0;
 
}
void average(student stu[10]){
  int i,j;
  float sum=0;
  for(i=0;i<10;i++){
    sum=0;
    for(j=1;j<4;j++){
     sum+=stu[i].score[j];
    }
    stu[i].avg=sum/3;
    cout<<"��"<<i+1<<"��ѧ��ƽ���ɼ�Ϊ��"<<stu[i].avg<<endl;
  }
}
 
void max(student stu[10]){
  int i;
  int maxi =0;//maxi��ʾ�±�
  int temp;
  for(i=0;i<10;i++){
    if(stu[maxi].avg<stu[i].avg){
      temp=i;
      i=maxi;
      maxi=temp;//���±�
    }
  }
  cout<<"��"<<maxi+1<<"��ѧ������ߣ������������£�"<<endl;
  cout<<stu[maxi].num<<" "<<stu[maxi].name<<" "<<stu[maxi].score[1]<<" "<<stu[maxi].score[2]<<" "<<stu[maxi].score[3]<<endl;
}