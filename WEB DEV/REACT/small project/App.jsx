import { useState } from 'react'
import Nav from './Nav.jsx';
import About from './about.jsx';
import Practice from './Practice.jsx';
import Map from './Map.jsx';
import Signup from './Signup.jsx';
import Login from './Login.jsx';
import Product from './Product.jsx';
import {BrowserRouter,Routes,Route} from 'react-router-dom'

function App() {
 let data1=[
  {id:1,title:"title1"},
  {id:2,title:"title2"},
  {id:3,title:"title3"},
  {id:4,title:"title4"}
 ]

  return (
    <>
    <BrowserRouter>
    <Nav/>
      <Routes>
        <Route path='About'element={ <About/>}></Route>
        <Route path='Signup'element={ <Signup/>}></Route>
        <Route path='Login'element={ <Login/>}></Route>
        <Route path='Product'element={ <Product/>}></Route>
      </Routes>
    </BrowserRouter>
   
    <Practice/>
    {data1.map((arr_key)=><Map key1={arr_key.id} key2={arr_key.title}/>)}
     </>
  )
}

export default App