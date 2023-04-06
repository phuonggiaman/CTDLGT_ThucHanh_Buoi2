//Nguon:https://freetuts.net/cai-dat-hang-doi-queue-bang-mang-mot-chieu-3232.html

//Ham Push
/* khởi tạo mảng và các biến cần thiết trong Queue */
int queue[100], n = 100, front = - 1, rear = - 1;
/* hàm thêm phần tử vào trong Queue */
void push() {
// khởi tạo biến val và đưa nó vào trong hàng đợi
   int val;
//xét điều kiện hàng đợi đầy, nếu đầy thì không thể thêm phần tử vào được
   if (rear == n - 1)
   cout<<"Tràn hàng đợi"<<endl;
//Ngược lại nếu trong hàng đợi vẫn còn chỗ trống thì ta thực hiện thêm phần tử
   else {
      if (front == - 1)
      front = 0;
      cout<<"Chèn phần tử vào hàng đợi : "<<endl;
      //yêu cầu nhập dữ liệu từ bàn phím
      cin>>val;
      //tăng vị trí hiện tại lên một
      rear++;
      //thêm phần tử đó vào vị trí hiện tại rear
      queue[rear] = val;
   }
}

//Ham Pop
/* hàm xóa phần tử khỏi Queue */
void pop() {
//nếu trong hàng đợi rỗng thì không thể xóa phần tử, ta thực hiện return và kết thúc hàm
   if (front == - 1 || front > rear) {
      cout<<"Không thể xóa phần tử trong hàng đợi ";
      return ;
   } 
//Ngược lại ta sẽ thực hiện lấy phần tử đó ra và xóa luôn khỏi hàng đợi
   else {
      cout<<"Phần tử đã xóa khỏi hàng đợi là: "<< queue[front] <<endl;
      front++;;
   }
}

//Ham Print
/* hàm in các phần tử trong Queue ra màn hình */
void print() {
//nếu hàng đợi rỗng ta sẽ thông báo 
   if (front == - 1)
   cout<<"Hàng đợi rỗng!!"<<endl;
//Ngược lại nếu hàng đợi có phần tử thì ta sẽ xuất lần lượt các phần tử đó ra màn hình
   else {
      cout<<"Các phần tử trong hàng đợi là: ";
      //sử dụng vòng lặp for để xuất lần lượt các phần tử
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
