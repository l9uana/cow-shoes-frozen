main :: IO ()
main = do
    input <- getLine
    if input == "깃헙이 장난이냐?" then putStrLn "네" else return ()