use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    if input.trim() == "깃헙이 장난이냐?" {
        println!("네");
    }
}