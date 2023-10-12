local function update()
end

local function setup()
    playdate.update = update
    print("note.kHigh", note.kHigh, "(from C)")
end
setup()
