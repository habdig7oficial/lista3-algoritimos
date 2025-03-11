for i in $(seq 1 10);
do
    gcc ex$i.c -o ex$i.elf
done
