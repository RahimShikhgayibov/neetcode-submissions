public class Solution
{
    public  bool IsAnagram(string s, string t)
    {
        char[] characters1 = s.ToArray();
        char[] characters2 = t.ToArray();

        Array.Sort(characters1);
        Array.Sort(characters2);

        return characters1.SequenceEqual(characters2 );
    }

    
}
