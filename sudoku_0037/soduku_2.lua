local origin_table = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
};

local expected = {
    {'5', '3', '4', '6', '7', '8', '9', '1', '2'},
    {'6', '7', '2', '1', '9', '5', '3', '4', '8'},
    {'1', '9', '8', '3', '4', '2', '5', '6', '7'},
    {'8', '5', '9', '7', '6', '1', '4', '2', '3'},
    {'4', '2', '6', '8', '5', '3', '7', '9', '1'},
    {'7', '1', '3', '9', '2', '4', '8', '5', '6'},
    {'9', '6', '1', '5', '3', '7', '2', '8', '4'},
    {'2', '8', '7', '4', '1', '9', '6', '3', '5'},
    {'3', '4', '5', '2', '8', '6', '1', '7', '9'}
};

local N = 9

local function is_valid(t, row, col, ch)
    -- check row
    for i = 1, N do if t[row][i] == ch then return false end end

    -- check column
    for i = 1, N do if t[i][col] == ch then return false end end

    -- check 3x3
    for i = (row - 1) // 3 * 3 + 1, (row - 1) // 3 * 3 + 3 do
        for j = (col - 1) // 3 * 3 + 1, (col - 1) // 3 * 3 + 3 do
            if t[i][j] == ch then return false end
        end
    end

    return true
end

local function dfs(t, row, col)
    if row > 9 then return true end
    if col > 9 then return dfs(t, row + 1, 1) end

    if t[row][col] ~= "." then return dfs(t, row, col + 1) end

    for i = string.byte("1"), string.byte("9") do
        if is_valid(t, row, col, string.char(i)) then
            t[row][col] = string.char(i)
            if dfs(t, row, col + 1) then return true end
            t[row][col] = "."
        end
    end
    return false
end

local function soduku(t) dfs(t, 1, 1) end

local function check_equality(t1, t2)
    for i = 1, N do
        for j = 1, N do if t1[i][j] ~= t2[i][j] then return false end end
    end

    return true
end

soduku(origin_table)
assert(check_equality(origin_table, expected), "test case failed!")
print("PASS!")
