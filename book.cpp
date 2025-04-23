//Correct Book's Information
Book book1("The Alchemist", "Paulo Coelho", "9780061122415", true, "2023-01-12");
Book book2("1984", "George Orwell", "9780451524935", false, "2022-11-20");
Book book3("To Kill a Mockingbird", "Harper Lee", "9780060935467", true, "2021-05-18");
//Incorrect Book's Information
Book book4(123, "No Author", "InvalidISBN", "yes", "not-a-date"); // wrong types
Book book5("", "", "", false, "2023-99-99"); // empty title/author/isbn, invalid date
Book book6("Book Title", "", 1234567890, 10, 2020); // incorrect types
