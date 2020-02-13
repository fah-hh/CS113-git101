/************************Git**************************
-- ก่อนใช้งาน git --
- สร้าง directory ด้วย mkdir บน command Prompt
- dir สำหรับดูรายการ directories และ files ใน working directory ปัจจุบัน
- เปลี่ยน working directory

-- การใช้งาน Git --
1. ติดตั้ง Git ในเครื่องคอมพิวเตอร์
2. git --version 
(เพื่อตรวจสอบว่า git ใช้งานได้)

3. สร้าง directory ที่จะเก็บงาน แล้วเปลี่ยน working directory ไปที่ directory นั้น
4. git init 
(เพื่อ Initialize และจะทำทุกครั้งที่มี git repository ใหม่ จะได้ .git มา) 

5. git status 
(เพื่อตรวจสอบสถานะ)

6. git add (file).txt 
(เพิ่มไฟล์เข้า staging area เพื่อพร้อมจะ commit) จากนั้นตรวจสถานะด้วย git status อีกรอบ

7. git config user.name "Your Name"
   git config user.email "yourmail@ku.th"
(ตั้งค่าชื่อและอีเมลเพื่อระบุตัวผู้ commit)
***หากเป็นเครื่องส่วนตัวให้ใส่ option --global (global) เพิ่มเข้าไปก่อน user.name และ user.email


8. git commit -m "Add a.txt"
***(เพื่อเก็บ Version หรือ Snapshot หรือ Checkpoint)

9. git log --all --decorate --oneline --graph
(ดู Checkpoint ทั้งหมด ด้วย git log adog)

10. สร้าง account จากเว็บ github
- สร้าง repository ใหม่ บน github
- เชื่อม local repository กับ github ด้วยคำสั่ง 
  git remote add <ชื่อ remote เช่น origin> <git url>
??? ลบชื่อออกหากตั้งผิด git remote remove และ add ใหม่อีกรอบ ???

- ส่งไฟล์และประวัติไปเก็บที่ github ด้วย
  git push -u origin master

- นำ checkpoint เก่ากลับมาทำงานได้
  git checkout <commit-id> (กลับมาทั้งหมด)
  git checkout <commit-id>  <ชื่อไฟล์>  (นำกลับมาบางไฟล์)

***********************************************************\






