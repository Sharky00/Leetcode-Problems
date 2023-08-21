/** Sharik Mahmood - Learning outcome: learned about Sets in js, there use and how to implement them. Used the "Window" techqnique here to solve this problem
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) //s is a string
{
    let set = new Set(); //like an array but can only have unique values of any type
    let left = 0; //left pointer
    let size = 0; //max size

    for(let i = 0;i < s.length; i++) //loop thru our string
    {
        while(set.has(s[i])) //if we have said char in our string
        {
            set.delete(s[left]); //we delete from the left until we delete the matching char
            left++; //updates pointer
        }
        set.add(s[i]);  //we add the char to out set
        //size = Math.max(size, i - left + 1)
        if((i - left) + 1 >  size) //we see if the new window is bigger then size
        {
           size = (i - left) + 1;   //if it is we update size
        }
        
    }
    return size;    //returns size value
};
