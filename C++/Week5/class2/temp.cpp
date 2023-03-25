class Solution {
public:
    string findPrefix(string first, string second ){
          
          int length1 = first.length();
          int length2 = second.length();
           
           // common prefix string
           string prefix="";
        
          // check any one of string is empty 
          if(length1 ==0 || length2==0){
           return prefix;
          }
          
          int inFirstFound=0;

          int inSecondFound=0;

          // ek loop chala kr char value compare kr le
          for(int index=0;index<first.length();index++){
                
                // ek loop or chala second string se compare krne k liye
                for(int next=0; next<second.length();next++){
                    
                    // case 1; koi match nhi hua, toh continue krr

                    // case 2; prefix ka first element mil gya
                    if(first[index]==second[next] && prefix.empty()){
                        prefix.push_back(first[index]);
                        infirstFound=index;
                        inSecondFound=next;
                        break;
                    }
                  
                    // case 3 ; prefix ka next element chahiye
                    if( prefix.length()!=0 && first[index]==second[next] ){

                        int diff1 = index-inFirstFound;
                        int diff2 = next-inSecondFound;
                        



                         
                    }
                    // case 4 : prefix ka next element nhi mila

                    

                }

          }


    }

    string longestCommonPrefix(vector<string>& strs) {

        // ek new string bna le
        string ans="";

        // length of given string
        int length = strs.size();
         
         // agar length 1 ho toh
        if(length<=1){
            return strs[0];
        }
       
        // ek loop chala har ek index ko traverse krne k liye
        
    }
};