
/*
 * 
 * 1 string holds alphabit (a,b,c....z,A,B,C....Z)
 * 1 string holds the key  (z,y,x....a,Z,Y,X....A) 
 * for example
 * 
 * Challenge Information
 * ---------------------
 * 
 * A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabit gets replaced by aother letter of the alphabit.
 * For example: Every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc...
 * 
 * 1) Write a program that asks a user to enter a secret message.
 * 
 * 2) Encrypt this message using the substitution cipher and display the encrypted message.
 * 3) Then decrypted the encrypted message back to the original message.
 * 
 * NOTE: you can use the 2 strings provided for your subsitutions.
 *  For Example: 
 *      ENCRYPT: To encrypt you can replace the character at position n in alphabit with character at position n in key
 *      DECRYPT: To decrypt you can replace the character at position n in key with the character at position n in alphabit.
 * 
 * Have fun! and make the cipher stronger if you wish!
 * Currently the cipher only substitues letters - you could easily add digits, puncuation, whitespace and so forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
 * This could also be improved.
 * 
 * Remember, the less code you write the less code you have to test!
 * reuse existing functionality in libraries and in the std::string class!
 * 
 * 
 */

// I did complete the challenge than i changed things to make it more interesting but I had to use random just to add to the results a bit


#include <iostream>
#include <string>


using namespace std;

int main()
{
    string alphabit             { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 '" };
    string key                  { "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr9876543210|$" };
    string random_space_char    { "<>?: |_+-=" };
    
    // get users message to encrypt
    string users_secret_message {};
    
    cout << "Enter your secret message: ";
    getline(cin, users_secret_message);
    
    // encrypt users message
    // message user encrypting message...
    cout << "\nEncrypting Secret Message..." << endl;
    
    string users_encrypted_message {};
    
    for(char c : users_secret_message)
    {
        size_t index = alphabit.find(c);
        
        if(index != string::npos)
        {
            if(c == ' ')
            {
                // get random character and insert it, just to make it unique
                size_t result { (rand() % random_space_char.length()) };
                
                users_encrypted_message += random_space_char.at(result);
            }
            else
            {
                users_encrypted_message += key.at(index);
            }
        }
    }
    
    // show encrypted message
    cout << "\nEncrypted Secret Message: " << users_encrypted_message << endl;
    
    // decrypt users message
    // message user decrypting message...
    cout << "\nDecrypting Secret Message..." << endl;
    
    string unencrypted_secret_message {};
    
    for(size_t i {}; i < users_encrypted_message.length(); ++i)
    {
        size_t index = key.find(users_encrypted_message.at(i));
        
        if(index == string::npos)
            unencrypted_secret_message += ' ';
        else
            unencrypted_secret_message += alphabit.at(index);
    }
    
    // show decrypted message to user
    cout << "\nDecrypted Secret Message: " << unencrypted_secret_message << endl;
    
    
    cout << endl;
    
    return 0;
}