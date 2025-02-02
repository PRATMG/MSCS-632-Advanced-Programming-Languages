
fn main() {
    // Ownership: Allocating memory on the heap
    let data = String::from("Hello, Rust!");

    // Borrowing: Passing reference to avoid ownership transfer
    print_data(&data);

    // The original owner still has access to the data
    println!("Original data: {}", data);

    // Ownership transfer: `data` is moved
    let moved_data = data;
    // println!("{}", data); // Error: data is no longer accessible

    println!("Moved data: {}", moved_data);
}

fn print_data(data: &String) {
    println!("Borrowed data: {}", data);
}

