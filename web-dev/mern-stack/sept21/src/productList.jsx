function ProductList() {
    // var productsList = {
    //     {name : "Product1", price : 20}
    // };
    return <div>
        <table style={{border: "2px solid black"}}>
            <thead>
                <th style={{border: "2px solid black"}}>
                    Product Name
                </th>
                <th style={{border: "2px solid black"}}>
                    Product Price
                </th>
            </thead>
            <tbody>
                <td style={{border: "2px solid black"}}>Product 1</td>
                <td style={{border: "2px solid black"}}>20</td>
            </tbody>
        </table>
    </div>
}

export default ProductList