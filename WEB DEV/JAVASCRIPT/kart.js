let product_data = document.querySelector(".product_data");
let total_price=0;
async function api_data() {
	// FakestoreAPI fetch
	let data = await fetch("https://fakestoreapi.com/products");
	let json = await data.json();
	
	json.map((obj) => {
		let imageElement = document.createElement("img");
		let titleElement = document.createElement("p");
		let priceElement = document.createElement("p");
		
		
		//Product Image
		imageElement.setAttribute("src", obj.image);
		imageElement.setAttribute("class", "product_image");
		
		//Product Title
		let titleText = document.createTextNode(obj.title);
		titleElement.appendChild(titleText);
		
		//Price Element
		let priceText = document.createTextNode(obj.price + " $");
		priceElement.appendChild(priceText);
		
		
		product_data.appendChild(imageElement);
		product_data.appendChild(titleElement);
		product_data.appendChild(priceElement);

        let btnElement=document.createElement("button");
        btnElement.appendChild(document.createTextNode("Add to Cart"));
        // btnElement=document.setAttribute("class","add_button");
        product_data.appendChild(btnElement);
        product_data.appendChild(document.createElement("br"))
		

        function add_to_cart(price,img){
            total_price+=price;
            let kartimgElement=document.createElement("img");
            kartimgElement.setAttribute("src",img);
            kartimgElement.setAttribute("class","cart_img");
            
            let priceElement=document.createElement("p");
            priceElement.appendChild(document.createTextNode(total_price));

           let kartAdd=document.querySelector(".kart_add");
           kartAdd.appendChild(kartimgElement);
           kartAdd.appendChild(priceElement);
           
        }

        btnElement.addEventListener("click",()=>add_to_cart(obj.price,obj.image));
	})
	
	// console.log(json);
}

api_data();

