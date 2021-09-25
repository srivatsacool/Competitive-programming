class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        let , dig = [],[]
        for log in logs:
            if((log.split()[1]).isdigit()):
                dig.append(log)
            else:
                let.append(log.split())
        let.sort(key = lambda x : x[0])
        let.sort(key = lambda x : x[1:])
        
        for i in range(len(let)):
            let[i] = ' '.join(let[i])
        
        let.extend(dig) 
        return let         
