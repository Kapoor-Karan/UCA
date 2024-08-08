function init(){
    document.getElementById("jsworld").innerHTML="Hello World from javascript"
}
function renderList(){
    let productsListfromServer=[]

    function getProductsList(){
        // productsList=[
        //     {
        //         name: 'Shahi Paneer',
        //         desc: 'delicious,veg, only protien source for veg peeps',
        //         price: '100'
        //     },
        //     {
        //         name: 'Chicken tikka',
        //         desc: 'delicious,protien,tasty,veg peeps nightmare',
        //         price: '500'
        //     },
        //     {
        //         name: 'Daliya',
        //         desc: "everybody's nighmare",
        //         price: '200'
        //     }
        // ]
        productsListfromServer=productsList
        initProductsListTable();
    }

    function initProductsListTable(){
        document.getElementById("productMenu").innerHTML=`
            <table>
                <thead>
                    <tr>
                        <th>Sr. No.</th>
                        <th>Product Name</th>
                        <th>Details</th>
                        <th>Price</th>
                    </tr>
                </thead>
                <tbody>
                    ${getProductListHTMLUsingMap()}
                </tbody>
            </table>
        `
    }
    function getProductListHTML(){
        var rows = ""
        for(let i=0;i<productsListfromServer.length;i++){
            rows = rows + `
                <tr>
                    <th>${i}</th>
                    <th>${productsListfromServer[i].desc}</th>
                    <th>${productsListfromServer[i].name}</th>
                    <th>${productsListfromServer[i].price}</th>
                </tr>     
            `
        }
        return rows
    }
    function getProductListHTMLUsingMap(){
        if(productsListfromServer.length===0){
            return `<div>Loading Data</div>`
        }
        var rowOfProducts= productsListfromServer.map((item,i)=>{
            return `
                <tr>
                    <th>${i}</th>
                    <th>${item.name}</th>
                    <th>${item.desc}</th>               
                    <th>${item.price}</th>
                </tr>    
            `
        })
        return rowOfProducts.join('')
    }
    initProductsListTable();
    setTimeout(getProductsList,2000);
}
// init();
renderList()
