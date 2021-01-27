open System

let read () =
    let arr = Text.StringBuilder()
    let mutable key = ' '
    while key = ' ' || key = '\n' do
        key <- char(Console.Read())
    done
    while key <> ' ' && key <> '\n' do
        (if key = '\000' then arr.Remove (arr.Length - 1, 1)
        else arr.Append key) |> ignore
        key <- char(Console.Read())
    done
    printfn "%A" (arr.ToString())
    arr.ToString()

// read 3 numbers
let a = int(read())
let b = int(read())
let c = int(read())

printfn "%A %A %A" a b c

let str = read()
printfn "%A" str

let line = Console.ReadLine()
printfn "%A" line

let arr = Array.init 10 (fun i -> int(read()))
printfn "%A" arr
