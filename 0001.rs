use std::io;

fn input(buf: &mut String) {
    buf.clear();
    io::stdin().read_line(buf).unwrap();
}

fn main() {
    let mut buf: String = String::new();
    input(&mut buf);
    let a: u8 = buf.trim().parse::<u8>().unwrap();
    input(&mut buf);
    let b: u8 = buf.trim().parse::<u8>().unwrap();
    input(&mut buf);
    let c: u8 = buf.trim().parse::<u8>().unwrap();
    let grand: u8 = a + b + c;
    match grand {
        80..=100 => println!("{}", "A"),
        75..=79 => println!("{}", "B+"),
        70..=74 => println!("{}", "B"),
        65..=69 => println!("{}", "C+"),
        60..=64 => println!("{}", "C"),
        55..=59 => println!("{}", "D+"),
        50..=54 => println!("{}", "D"),
        0..=49 => println!("{}", "F"),
        _ => panic!(),
    }
}