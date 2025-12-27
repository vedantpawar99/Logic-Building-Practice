// In JS we can pass the function as a parameter

function Calculator(fun1, fun2)    // internally it goes address of the Addition and Substraction
{
    console.log(fun1(11,10))
    console.log(fun2(11,10))
}

function Addition(No1, No2)
{
    return No1 + No2
}

function Substraction(No1, No2)
{
    return No1 - No2
}

Calculator(Addition,Substraction)               ////////////////////////////