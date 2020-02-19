/********************Branch Merge Conflict*****************
--ก่อน merge--
- git clone <git-url>
- git branch <branch-name> สำหรับสร้าง branch
- git checkout <branch-name> เปลี่ยน branch ไปที่..
- git branch ตรวจสอบว่าอยู่ branch ไหน(ดูจาก *)
- git log --all --decorate --oneline --graph เพื่อดู checkpoint ทั้งหมด

ถ้าจะ merge ให้งานรวมกันต้องเปลี่ยน branch ปลายทางก่อนแล้วค่อย 
git merge <branch-name>

***หาก merge แล้วมี conflict มาจากการปรับแก้ไขข้อมูลในไฟล์เดิม บรรทัดเดิม ที่อยู่ต่าง Branch กัน 
- หากมี tool ที่ช่วยจัดการ conflict สามารถเลือกว่าจะใช้ข้อมูลจาก branch ไหน
- หากไม่มีก็ใช้อย่างอื่น เช่น sublime
ถ้าแก้เสร็จแล้วให้ commit อีกรอบ

การ pull
- ให้ clone git repository ไว้ที่อีก directory นึง
git clone <git-url> <new directory>
- เพิ่มไฟล์ .. ใน directory ใหม่แล้ว push ไปที่ github
- จากนั้น
  cd <old directory>
  ls -1
  git pull origin master
  ls -1

******************************************************************
