fn main() {
//    // println!("Hello, world!");

//    let user_option: i32 = 7;

//    //macro rules behaves the way match
//     match user_option {
//         1 | 5 => println!("You ordered rice!"),
//         6..10 => println!("You ordered beef!"), // for 10 to be inclusive, 6..=10
//         _ => println!("Invalid Input!"),
//     }



//if you want to declare a variable in macros, you have to insert a dollar sign before declaring
//You can write macro inside another macro
//declarative macro
    macro_rules! my_macro {
        ($arg:expr) => {
            println("You entered: {}, $arg");
        };
    }

    my_macro();

}
