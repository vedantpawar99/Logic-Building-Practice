// Accept number and find maximum from it

function Maximum(Brr)
{
    let iMax = Brr[0]

    for(let i = 0; i < Brr.length; i++)
    {
        if(Brr[i] > iMax)
            {
                iMax = Brr[i]
            } 
    }
    return iMax
}

Arr = [78,90,45,32,48,12]
let iRet = 0

iRet = Maximum(Arr)

console.log("Maximum of all Elements is : "+iRet)