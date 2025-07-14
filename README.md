# DATA COMPRESSION TOOL
*COMPANY*: CODTECH IT SOLUTIONS  
*NAME*: SURAJ BHATT  
*INTERN ID*: CT04DH722  
*DOMAIN*: C LANGUAGE  
*DURATION*: 4 WEEKS( 29/6/25-29/7/25)  
*MENTOR*: NEELA SANTHOSH KUMAR  
DESCRIPTION OF THE PROJECT:  

The fourth and final task of the internship involved building a basic data compression and decompression tool using Run-Length Encoding (RLE). This task was particularly interesting because it allowed me to explore how simple algorithms can significantly reduce the size of repetitive data. As always, I used Visual Studio Code with the GCC compiler to build and run the project.

I started by understanding the RLE algorithm, which is quite simple in concept. The idea is to replace sequences of repeating characters with the character followed by the number of repetitions. For example, the string aaaabbbcc would be compressed to a4b3c2. I then created a new C file named project_4.c and began implementing the logic.

The program was divided into two primary functions: compress() and decompress(). The compress() function took an input string and looped through it character by character, counting how many times each character repeated consecutively. It then used sprintf() to format the compressed string with the character and its count. The decompress() function did the opposite. It read the character and the following number from the compressed string and repeated the character accordingly using loops.

After implementing the core logic, I created a menu-driven interface in the main function. The user could enter a string and choose whether they wanted to compress or decompress it. For testing, I used various strings with different levels of repetition and verified the output for accuracy. I also added support for multi-digit counts in the decompress function, which was a bit tricky at first but was eventually handled using isdigit() and proper integer parsing.

During development, I used the built-in debugger in VS Code to step through the logic and check how variables were being modified at runtime. This helped me identify and fix a few off-by-one errors and memory allocation issues. I also paid attention to edge cases such as empty strings, strings with no repeated characters, and strings with special characters.

Once the program was working as expected, I focused on making the code clean and well-documented. I added comments to explain each section of the code and created a clear README file that explained how to compile and run the program. The project was then pushed to GitHub, completing the final task of the internship.

This task was a great way to conclude the internship, as it combined concepts from previous tasks like string handling, loops, and conditionals, but applied them in a different context. It gave me insight into how even simple algorithms can be very effective in solving real-world problems like data compression. I now have a deeper appreciation for how compression algorithms work and how they can be implemented efficiently using C. Completing this task gave me a sense of accomplishment and wrapped up the internship with a strong understanding of both fundamental and applied programming skills.

# OUTPUT:  
<img width="1919" height="998" alt="Image" src="https://github.com/user-attachments/assets/2d742929-cc2a-4c87-8bb2-297f992b9b8c" />
