use madang;
-- select * from Book;

-- select '-- ordering';

-- /*select * from Book order by publisher asc;*/
-- select * from Book order by publisher desc;

-- select '-- grouping';
-- -- select publisher, count(*) from Book order by publisher;
-- select publisher, count(bookname) from Book order by publisher having count(bookname) >= 2;

-- select count(distinct publisher) from book;

-- select * from book where price < 20000;

-- select * from book where price between 10000 and 20000;

-- select * from book where price = 7000 or price = 8000; == select * from book where price in(7000, 8000);

-- select distinct publisher from book where price < 10000;

-- select publisher, bookname, price from book where publisher = '굿스포츠' or publisher = '삼성당';
-- select publisher, bookname, price from book where publisher in ( select distinct publisher from book where price < 10000 );

-- select publisher, bookname, price from book where publisher not in ( select distinct publisher from book where price < 10000 );

-- select publisher, bookname, price from book where bookname like '%축구%' -- '축구'가 들어 있는것을 검색

-- select publisher, bookname, price from book where bookname like '%구%' -- '구'가 들어 있는것을 검색

-- select publisher, bookname, price from book where bookname like '구%' -- '구'라고 시작하는 것을 검색

-- select publisher, bookname, price from book where bookname like '%해' -- '해'라고 끝나는 것을 검색

-- select publisher, bookname, price from book where bookname like '%구%해' -- '~구~해'라고 끝나는 것을 검색

-- select publisher, bookname, price from book where bookname like '축%해' -- '축~해'라고 끝나는 것을 검색

-- select publisher, bookname, price from book where bookname like '[0-9]%' -- '0-9'까지 일치하는 문자 검색

-- select * from Customer; -- Customer 다 찾아보기
-- select * from Customer where phone IS NULL;

-- select * from book where publisher '굿스포츠' or '대한미디어'; --== select * from book where publisher in ('굿스포츠', '대한미디어');

-- select * from book where bookname like '%축구%' and price >= 2000;

-- select * from book order by order price desc, bookname asc;

-- select sum(saleprice) from orders;

-- select sum(saleprice) as '총매출액' from orders;

-- select sum(saleprice) as '총구매액' from orders where custid = 2;
-- select sum(saleprice) as '총구매액' from orders where custid in (select custid from Customer where name = '김연아');
-- select sum(saleprice) as '총구매액' from order, customer where order.custid = customer.custid and customer.name = '김연아'; --조인 사용

-- select * from order, customer -- 카티션프로덕트됨 where customer.name = '김연아' -->김연아 추출;

-- select sum(saleprice) as '총구매액' avg(saleprice) as "평균판매액", min(saleprice) as '최소구매액', max(saleprice) as '최고구매액' from orders;