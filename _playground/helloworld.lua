local a = {1,2,3,4,5,6,7}

local function printArray(a,i)
    if i == #a+1 then
        return
    end
    printArray(a,i+1)
    print(a[i])
end

printArray(a,1)