#include"R1_VAR.h"
// khai báo biến toàn cục kiểu thực: hướng đi lần cuối của xe 
float last_dir;
// khai báo biến toàn cục kiểu thực: hướng đi trước đó của xe
float previous_dir;
// khai báo biên toàn cục kiểu thực: thẳng
float straight_dir;
// khai báo biên toàn cục kiểu thực: lệch sang trái
float left_straight_dir;
// khai báo biên toàn cục kiểu thực: lệch sang phải
float right_straight_dir;
// khai báo biên toàn cục kiểu thực: quẹo trái
float left_rotate_dir;
// khai báo biên toàn cục kiểu thực: quẹo phải
float right_rotate_dir;

void setup() {
// xe dừng khi khởi động chương trình hoặc khi cấp nguồn 
mctrl.car_stop();
// xe dừng trong 5s
delay(5000);
}

void loop() {
// đọc giá trị digital của 3 sensor
// quy định: có line: 1  không line: 0
int left  = digitalRead(A3);
int mid   = digitalRead(A2);
int right = digitalRead(A1); 
// trường hợp xe chạy thẳng --> 3 sen nằm trong hoặc 2 bên sen nằm trong
  if((left==1)&&(mid==1)&&(right==1)) // 3 sen nằm trong
  {
    previous_dir=straight_dir;
    mctrl.car_fw(50,50);
  }
  else 
  {
    if((left==1)&&(right==1)) // 2 bên sensor nằm trong -> midsen nằm trong 
    {
      previous_dir=straight_dir;
      mctrl.car_fw(50,50);
    }
  }
// trường hợp điều hướng --> 1 sen nằm trong hoặc 2 sen nằm trong
  // 2 sen nằm trong -> 1 trái 1 giữa trong: chạy quẹo trái || 1 phải 1 giữa trong: chạy quẹo phải  
  if((left==1)&&(mid==1)&&(right==0)) // lệch trái: trái chậm, phải nhanh
  {
    previous_dir=right_straight_dir;
    mctrl.car_fw(25,50);
  }
  if((left==0)&&(mid==1)&&(right==1)) // lệch phải: phải chậm, trái nhanh
  {
    previous_dir=left_straight_dir;
    mctrl.car_fw(50,25);
  }
  // 1 sen nằm trong -> 1 trái trong: dừng quẹo trái || 1 phải trong: dừng quẹo phải
  if((left==1)&&(mid==0)&&(right==0)) // quẹo trái: trái dừng, phải chạy
  {
    previous_dir=right_rotate_dir;
    mctrl.car_rotateL(50);
  }
  if((left==0)&&(mid==0)&&(right==1)) // quẹo phải: phải dừng, trái chạy
  {
    previous_dir=left_rotate_dir;
    mctrl.car_rotateR(50);
  }

// trường hợp tìm line --> 0 sen nằm trong
  if((left==0)&&(mid==0)&&(right==0))  
  {
    
    last_dir=previous_dir;

    if((last_dir==left_rotate_dir)||(last_dir==left_straight_dir)||(last_dir==straight_dir))
    {
      mctrl.car_rotateR(50);
    }
    if((last_dir==right_rotate_dir)||(last_dir==right_straight_dir)||(last_dir==straight_dir))
    {
      mctrl.car_rotateL(50);
    }
    // khởi tạo biến "hướng đi của xe vào lần cuối". 
    // khi xe bị đẩy ra ngoài thì biến lần cuối sẽ thay đổi từ trong ra ngoài
    // xét biến hướng đi của xe vào lần cuối.
 
  }
}
