//  Using for loop travel the string and count the small letters 

function CountSmall(Arr)
{
    let iCount = 0

    for(let i = 0; i < Arr.length; i++)
    {
        if(Arr[i] >= 'a' && Arr[i] <= 'z')
        {
            iCount++
        }
    }
    return iCount
}

let Ret = 0

Ret = CountSmall("InDiA")

console.log("Number of Small Characters in string are : "+Ret)