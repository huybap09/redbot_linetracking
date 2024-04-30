# [MakerEdu Creator] Xe dò line
## Tóm tắt ý tưởng:
Xe dò line DIY.
## Mô tả tính năng:
Xe dò line bằng cảm biến dò line.
## Chuẩn bị phần cứng và kết nối:
### Chuẩn bị:

<table class="tg">
<thead>
  <tr>
    <th class="tg-baqh">STT</th>
    <th class="tg-baqh">Tên thiết bị </th>
    <th class="tg-baqh">SL</th>
    <th class="tg-baqh">Link</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td class="tg-baqh">1</td>
    <td class="tg-73oq">Mạch Uno SMD CH340 (Arduino Uno Compatible).</td>
    <td class="tg-baqh">1 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/arduino-uno-r3-smd-chip-don">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">2</td>
    <td class="tg-0lax">Khung Xe Robot Chasiss 4WD Car R1.</td>
    <td class="tg-baqh">1 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/khung-xe-robot-chasiss-4wd-car-r1">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">3</td>
    <td class="tg-0lax">Động Cơ DC Giảm Tốc V1 Dual Shaft Plastic Geared TT Motor + Bánh Xe.</td>
    <td class="tg-baqh">4 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/dong-co-dc-giamtoc-v1-1-48">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">4</td>
    <td class="tg-0lax">Hộp Pin 2 X 18650 Battery Holder Có Công Tắc.</td>
    <td class="tg-baqh">1 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/hop-pin-2-co-18650-co-cong-tac">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">5</td>
    <td class="tg-0lax">Breadboard Mini 170 Lỗ 45x34x9mm.</td>
    <td class="tg-baqh">1 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/test-board-cammini-35-x-47mm">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">6</td>
    <td class="tg-0lax">Cảm Biến Dò Line Đơn TCRT5000 Line Follower Sensor</td>
    <td class="tg-baqh">3 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/cam-bien-do-line-don">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">7</td>
    <td class="tg-0lax">Mạch Điều Khiển Động Cơ L298 DC Motor Driver.</td>
    <td class="tg-baqh">1 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/mach-dieu-khien-dong-co-dc-l298">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">8</td>
    <td class="tg-0lax">Đầu Chuyển Domino Sang Giắc DC Đực 2.1mm.</td>
    <td class="tg-baqh">1 cái</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/dau-chuyen-domino-sang-giac-dc-duc-2-1mm">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">9</td>
    <td class="tg-0lax">Dây Điện Đỏ Đen.</td>
    <td class="tg-baqh">1 m </td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/day-dien-do-den">Link</a></td>
  </tr>
  <tr>
    <td class="tg-baqh">10</td>
    <td class="tg-0lax">Dây bus đực - cái.</td>
    <td class="tg-baqh">1 tép</td>
    <td class="tg-baqh"><a href="https://hshop.vn/products/day-camtest-board-duc-coi20cm40soi">Link</a></td>
  </tr>
  <tr>
    <td class="tg-0lax">11</td>
    <td class="tg-0lax">Dây bus đực - đực.</td>
    <td class="tg-0lax">1 tép</td>
    <td class="tg-0lax"><a href="https://hshop.vn/products/day-camtest-board-duc-duc-20cm40soi">Link</a></td>
  </tr>
</tbody>
</table>

### Kết nối:

| UNO              | A1  | A2  | A3  | 5V | GND |
|:----------------:|-----|-----|-----|----|-----|
| TCRT 5000 (Trái) |     |     | DO | 5V | GND |
| TCRT 5000 (Giữa) |     | DO |     | 5V | GND |
| TCRT 5000 (Phải) | DO |     |     | 5V | GND |

|  UNO  |  D4 |  D5 |  D6 |  D7 |  DC+ | DC- |
|:-----:|:---:|:---:|:---:|:---:|:----:|:---:|
|  L298 | IN1 | IN2 | IN3 | IN4 |  VCC | GND |
| NGUỒN |     |     |     |     |   +  |  -  |

|   L298   | OUT1 | OUT2 | OUT3 | OUT4 |
|:--------:|:----:|:----:|:----:|:----:|
| ĐỘNG CƠ  |  DC1 |  DC1 |  DC2 |  DC2 |

## Chuẩn bị kiến thức:
- Nếu là lần đầu tiên sử dụng phần mềm Arduino, các bạn cần thực hiện đầy đủ các bước trong hướng dẫn <a href="https://wiki.makerlab.vn/index.php/H%C6%B0%E1%BB%9Bng_d%E1%BA%ABn_s%E1%BB%AD_d%E1%BB%A5ng_ph%E1%BA%A7n_m%E1%BB%81m_Arduino_v%E1%BB%9Bi_c%C3%A1c_m%E1%BA%A1ch_Vietduino_%2B_MakerEdu_Shield_for_Vietduino">tại đây</a>.
- Nếu các phần cứng trong bài là hoàn toàn mới với các bạn, để có thể nắm được cách hệ thống vận hành, các bạn cần đọc và tìm hiểu về cách sử dụng của từng phần cứng tại trang Wiki của <a href="https://wiki.makerlab.vn/index.php/Main_Page">Makerlab</a>.
 
## Code Arduino cho thiết bị:
```Cpp
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
```