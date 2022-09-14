using System;
using System.Collections.Generic;

/*
Simple Program in C# to get 1 element and search for it in 1-5 different lists depending on
what is initialized earlier. This program can run just as fine with 1 list as with 5 lists.
It is Dynamic as it will check the input and only run the program for the corresponding lists inputed.
*/

class CSharp {
  static void Main() {

//The counters for the ouput. Important to initialize them before running
    int in1c=0,in2c=0,in3c=0,in4c=0,in5c=0;
    
    //Fill input with the item you want to search for in all the other lists
    var input = "Item1";
    
    //Strings with delimiter ; . This program can take up to 5 list inputs but only needs one to run
    var input2 = "Item1;Item2;Item3;Item4";
    var input3 = "";
    var input4 = "";
    var input5 = "";
    var input6 = "";
    
    //Filling list with all elements from input2 where string is seperated by ;
    string[] out1 = input2.Split(";");
    
    //Loops for every value in the list we just made and gives +1 in the corresponding output.
    foreach(string value in out1){
        if (input == value){
            in1c++;
        }
    }
    
    /*
    Checks if input 3 is used, if not it should not need to run any of this code.
    If input 3 has content it will initialize a new list element and fill it with the content of input3
    Then it will once again loop trough this list and search for the input element and increment the
    Corresponding ouput.
    */
    if(input3!=""){
        var list2= input3;
        string[] out2 = list2.Split(';');
        
        foreach(string value in out2){
            if (input == value){
                in2c++;
            }
        }
    }
    
    //Exact same operation as with input3
    if(input4!=""){
        var list3=input4;
        string[] out3 = list3.Split(';');
        
        foreach(string value in out3){
            if (input == value){
                in3c++;
            }
        }
    }
    
    //Exact same operation as above
	if(input5!=""){
        var list4=input5;
        string[] out4 = list4.Split(';');

        foreach(string value in out4){
	        if (input == value){
		        in4c++;
	        }
        }
    }
  
    //Exact same operation as above
	if(input6!=""){
	    var list5=input6;
	    string[] out5 = list5.Split(';');

	    foreach(string value in out5){
	        if (input == value){
			    in5c++;
		    }
	    }
    }
    //Prints out how many times the item "input" was found in the lists that were initialized.
    Console.WriteLine("item: [{0}] was found in:\nList 1: {1} times\nList 2: {2} times\nList 3: {3} times\nList 4: {4} times\nList 5: {5} times\n",input,in1c,in2c,in3c,in4c,in5c);
  }
}