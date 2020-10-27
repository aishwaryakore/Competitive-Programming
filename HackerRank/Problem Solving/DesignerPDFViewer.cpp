#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;

void designerPDFViewer(int height[26],string word)
{
    //char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int max_n=0;
    for(int i=0;i<word.length();i++)
    {
        char ch = word[i];
        int index = (int)ch - 97 ;
        int n = height[index];
        if(n > max_n)
            max_n = n;
    }
    cout<<(max_n * word.length());
}
int main()
{
    int height[26];
    for(int i=0;i<26;i++)
        cin>>height[i];
    
    string word;
    cin>>word;
    
    designerPDFViewer(height,word);
}
