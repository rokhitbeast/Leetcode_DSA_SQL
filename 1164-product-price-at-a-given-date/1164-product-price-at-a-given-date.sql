with initial_products as (
    select distinct product_id, 10 as default_price
    from products
),
cte as (
    select 
        product_id, change_date, new_price
    , row_number() over (partition by product_id order by change_date desc) as rnk
    from products
    where change_date <= '2019-08-16'
)
select ip.product_id, coalesce(cte.new_price, ip.default_price) as price
from initial_products ip
left join cte
    on cte.product_id = ip.product_id 
    and cte.rnk = 1