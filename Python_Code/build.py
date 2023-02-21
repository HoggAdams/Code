fw = open('./build.txt', 'r', encoding='UTF-8')
fr = open('./bill.txt.bak', 'a', encoding='UTF-8')

for line in fw:
    line = line.strip()
    if line.split(", ")[-1] == '测试':
        continue
    fr.write(line)
    fr.write("\n")

fr.close()
fw.close()
