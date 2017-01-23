# AOD
Что тут есть

• main.cpp – головной файл программы

• soldier.h – файл с реализацией класса Soldier

• commander.h – файл с реализацией класса GoodStudent (наследник класса Soldier)

• gun.h – файл с реализацией класса Gun

• list.h – файл с реализацией списка,который содержит классы Node и LinkedList


Описание используемых классов:

1. Soldier

Семантика: Soldier - игрок (боец) со всеми соответствующими данными

Поля:
id — ссылка на вк сокомандника;

name_surname — имя и фамилия;

call-signal — позывной;

character — роль в команде;

rank — ранг,звание.

admission - допустк на игры команды.


2. Commander

Семантика: Commander — игрок (командир), который командует бойцами и отрядами (наследник класса Soldier)

Поля:
id — id командира в вк (поле класса Soldier);

name_surname — имя и фамилия (поле класса Soldier);

call-signal — позывной (поле класса Soldier);

character — роль в команде (поле класса Soldier);

date — дата избрания;

global_id — id командира в базе данных страйкбольных команд.

3. Gun

Семантика:Gun - привод(оружие)

Поля:
id_gun — название привода;

type_gun — тип привода;

speed — скорость вылета шара.

4. Node

Семантика-узел списка.

Поля:
value — указатель на значение элемента (бойца) списка;

next — указатель на следующий элемент списка.5. LinkedList

Семантика-список.

Поля:
first — указатель на первый элемент списка ;

last — указатель на последний элемент списка;

length — длина списка.
