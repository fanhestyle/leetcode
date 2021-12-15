local t7 = {value = 7, left_child = nil, right_child = nil}
local t6 = {value = 6, left_child = nil, right_child = nil}
local t5 = {value = 5, left_child = nil, right_child = nil}
local t4 = {value = 4, left_child = nil, right_child = nil}
local t3 = {value = 3, left_child = t6, right_child = t7}
local t2 = {value = 2, left_child = t4, right_child = t5}
local t1 = {value = 1, left_child = t2, right_child = t3}

local result = {}

local function pre_impl(t, track)
    track[#track + 1] = t.value

    if (not t.left_child) and (not t.right_child) then
        result[#result + 1] = {}
        for i = 1, #track do result[#result][i] = track[i] end
        return
    end

    if t.left_child then
        pre_impl(t.left_child, track)
        track[#track] = nil
    end

    if t.right_child then
        pre_impl(t.right_child, track)
        track[#track] = nil
    end

end

local function pre(t) pre_impl(t, {}) end

pre(t1)

for i = 1, #result do
    for j = 1, #result[i] do io.write(result[i][j]) end
    io.write('\n')
end

