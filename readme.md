## Thông tin cá nhân
- Họ tên: Nguyễn Thành Chung
- MSSV: 1512042
- Email: nguyenthanhchungfit@gmail.com
## Các chức năng đã làm được
### Chức năng cơ bản
Xây dựng chương trình vẽ 5 loại hình cơ bản:
1. Đường thẳng (line). Dùng hàm MoveToEx và LineTo.
2. Hình chữ nhật (rectangle). Dùng hàm Rectangle. Nếu giữ phím Shift sẽ vẽ hình vuông (Square)
3. Hình Ellipse. Dùng hàm Ellipse. Nếu giữ phím Shift sẽ vẽ hình tròn (Circle)
Cho phép chọn loại hình cần vẽ (từ menu là dễ nhất). Cần thể hiện đang chọn menu nào (Check slide menu để biết cách set thuộc tính CHECKED cho menu item)
### Chức năng nâng cao
1. Bọc tất cả các đối tượng vẽ vào các lớp model. Sử dụng đa xạ (polymorphism) để cài đặt việc quản lý các đối tượng và vẽ hình. Sử dụng mẫu thiết kế prototypes để tạo ra hàng mẫu nhằm vẽ ở chế độ xem trước (preview), sử dụng mẫu thiết kế Factory để tạo mới đối tượng. (1 điểm)
2. Lưu và nạp các object (Lưu mảng các tọa độ ở dạng tập tin nhị phân) - 0.25 điểm.

## Sự kiện chính
1. Vẽ hình vuông, hình tròn
- Các luồng sự kiện phụ: 
+ Từ tọa độ chuột edit lại tọa độ để vẽ cho đúng hình vuông, hình tròn.
+ Chỉ bắt key Shift khi nó là dạng ellipse hoặc rectangle
2. Lưu trữ file
- ở mỗi tọa độ thêm 1 dấu hiệu nhận biết loại hình gì để load lại cho đúng.

## Link repo
- [Link to my repo](https://nguyenthanhchungfithcmus@bitbucket.org/nguyenthanhchungfithcmus/windev2017.git)

## Link youtube
- [Link to video youtbe demo](https://www.youtube.com/watch?v=bNDXavjJXJU&feature=youtu.be)

