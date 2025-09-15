/**
 * @param {string} text
 * @param {string} brokenLetters
 * @return {number}
 */
var canBeTypedWords = function(text, brokenLetters) {
    let words=text.split(" ");
    let cnt=0;
    for(let word of words){
        let boola=true;
        for(let c of brokenLetters){
            if(word.includes(c)){
                boola=false;
                break;
            }
        }
        if(boola)cnt++;
    }
    return cnt;
    
};