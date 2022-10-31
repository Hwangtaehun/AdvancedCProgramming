use madang;

-- select customer.name, book.bookname from customer, orders, book where customer.custid = orders.custid and orders.bookid = book.bookid;

-- select * from customer, orders where customer.custid = orders.custid order by customer.custid -- order by 정렬;

-- select customer.name, book.price - orders.saleprice as '할인액' from customer, orders, book where customer.custid = orders.custid and orders.bookid = book.bookid;
-- select customer.name, sum(book.price - orders.saleprice) as '총할인액' from customer, orders, book where customer.custid = orders.custid and orders.bookid = book.bookid group by customer.custid; 

-- select customer.name, sum(orders.saleprice) as '총판매액' from customer, orders where customer.custid = orders.custid group by customer.name order by customer.name;

-- select name, bookname from customer, orders, book where customer.custid = orders.custid and book.bookid = orders.bookid and book.price = 20000;
-- select * from book where bookname = '야구의 추억';

-- select customer.name, orders.saleprice from customer inner join orders on customer.custid = orders.custid where customer.name = '김연아'; -- == select customer.name, orders.saleprice from customer, orders where customer.name = '김연아' and customer.custid = orders.custid;

-- select customer.name, orders.saleprice from customer left outer join orders on customer.custid = orders.custid;

-- select bookid, bookname from book where price = (select max(price) from book) -- select max(price) from book; + select bookid, bookname from book where price = 35000; 

-- select distinct customer.name from customer, orders where customer.custid in(select orders.custid from orders); -- == select distinct customer.name from customer, orders where customer.custid = orders.custid;

-- select distinct customer.name from customer, orders where customer.custid not in(select distinct orders.custid from orders);

-- select customer.name from customer, orders where customer.custid = orders.custid and bookid in(select bookid from book where publisher = '대한미디어');

-- select publisher, bookname, price from book where price > (select avg(price) from book);

-- select publisher, price from book order by publisher;
-- select publisher, avg(price) from book group by publisher;

-- select publisher, price from book where publisher = (Pearson, 굿스포츠) and price > (13000, 7000);

-- select b1.bookname, b1.publisher from book b1 where b1.price > (select avg(b2.price) from book b2 where b2.publisher = b1.publisher) order by publisher;
-- select b1.bookname, b1.publisher from book b1 where b1.publisher = 'Pearson' and b1.price > (select avg(b2.price) from book b2 where b2.publisher = b1.publisher);
-- select b1.bookname, b1.publisher from book b1 where b1.publisher = '굿스포츠' and b1.price > (select avg(b2.price) from book b2 where b2.publisher = b1.publisher);
-- select b1.bookname, b1.publisher from book b1 where b1.publisher = '대한미디어' and b1.price > (select avg(b2.price) from book b2 where b2.publisher = b1.publisher);
-- select b1.bookname, b1.publisher from book b1 where b1.publisher = '삼성당' and b1.price > (select avg(b2.price) from book b2 where b2.publisher = b1.publisher);
-- select b1.bookname, b1.publisher from book b1 where b1.publisher = '이상미디어' and b1.price > (select avg(b2.price) from book b2 where b2.publisher = b1.publisher);