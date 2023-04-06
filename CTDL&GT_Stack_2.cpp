//Nguon:https://freetuts.net/cai-dat-stack-bang-mang-mot-chieu-3169.html
#include <iostream>
using namespace std;
/* tạo các biến cơ bản */
//tạo size hiện tại và khởi tạo cho nó bằng -1
int curren_size = -1;
//tạo một hằng số làm size max = 100
const int MAX_SIZE = 100;
//tạo một mảng stack với số phần tử bằng max
int stack[MAX_SIZE];
 
/* kiểm tra stack rỗng */
bool isEmpty(){
  //kiểm tra nếu curren_size == -1 thì return và kết thúc hàm
  return (curren_size == -1);
}
 
/* kiểm tra stack đầy */
bool isFull(){
  //kiểm tra neeys curren_size == MAX_SIZE thì return và kết thúc hàm
  return (curren_size == MAX_SIZE);
}
 
/* hàm thêm phần tử vào Stack */
void push(int data){
  //việc đầu tiên ta kiểm tra xem stack đã đầy hay chưa, nếu chưa tha thực hiện:
  if(!isFull()){
    //tăng curren_size lên để tạo thêm chổ trống trong stack để thêm phần tử mới vào
    curren_size++;
    //sau đó gán data vào đúng vị trí curren_size trong stack
    stack[curren_size] = data;
  }
  //ngược lại nếu trong stack đã đầy thì thông báo cho người dùng biết rằng stack đã đầy
  else{
    cout<<"Stack đã đầy !!"<<endl;
  }
}
 
/* lấy phần tử ở top nhưng không xóa nó khỏi stack */
int top(){
  //kiểm tra xem stack có rỗng hay không, nếu không ta thực hiện:
  if(!isEmpty()){
    //gán giá trị ở vị trí curren_size cho biến data
    int data = stack[curren_size];
    //sau đó return data
    return data;
  }
  //ngược lại nếu stack rỗng thì thông báo cho người dùng biết stack rỗng
  else{
    cout<<"Stack rỗng !!"<<endl;
  }
}
 
/*lấy phần tử ở top và xóa nó khỏi stack*/
int pop(){
  //kiểm tra xem stack có rỗng hay không, nếu không ta thực hiện:
  if(!isEmpty()){
    //gán giá trị ở vị trí curren_size cho biến data
    int data = stack[curren_size];
    //giảm curren_size đi vì hàm pop() sau khi lấy sẽ xóa phần tử đó khỏi stack
    curren_size--;
    //sau đó return data
    return data;
  }
  //ngược lại nếu stack rỗng thì thông báo cho người dùng biết stack rỗng
  else{
    cout<<"Stack rỗng !!"<<endl;
  }
}
  
int main() {
  int lc;
  //ta thực hiện thêm một vài phần tử vào stack
  //cụ thể ta sẽ thêm những số sau: 10, 11, 12, 13, 14, 15, 16
  cout<<"Danh sách các số bao gồm: 10, 11, 12, 13, 14, 15, 16";
  for(int i = 10; i <= 16; i++){
    push(i);
  }
  do{
        cout << "\n\n\t\t ============== Menu ==============";
        cout << "\n\t1. Hiển thị phần tử đầu Stack";
        cout << "\n\t2. Xóa phần tử đầu Stack";
        cout << "\n\t0. Ket thuc";
        cout << "\n\n\t\t ============== End ==============";
        cout<<"\nNhập lựa chọn bạn muốn chọn: ";
        cin>> lc;
        switch(lc){
            case 0: break;
            case 1: 
              cout<<"Phần tử đầu tiên trong Stack: "<<top();
              break;
            case 2:
              pop();
              cout<<"Xóa phần tử top thành công !!!";
              break;
            default: 
              cout<<"\nNhập sai, vui lòng nhập lại!";
        }
    } while(lc);
  cout<<"Chương trình này được đang tại Freetuts.net";
}
