//Nguon:https://freetuts.net/cai-dat-stack-bang-mang-mot-chieu-3169.html
/* tạo các biến cơ bản */
//tạo size hiện tại và khởi tạo cho nó bằng -1
int curren_size = -1;
//tạo một hằng số làm size max = 100
const int MAX_SIZE = 100;
//tạo một mảng stack với số phần tử bằng max
int stack[MAX_SIZE];

//Ham isEmpty
/* kiểm tra stack rỗng */
bool isEmpty(){
  //kiểm tra nếu curren_size == -1 thì return và kết thúc hàm
  return (curren_size == -1);
}

//Ham isFull
/* kiểm tra stack đầy */
bool isFull(){
  //kiểm tra neeys curren_size == MAX_SIZE thì return và kết thúc hàm
  return (curren_size == MAX_SIZE);
}

//Ham Push
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

//Ham 
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

//Ham Pop
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
