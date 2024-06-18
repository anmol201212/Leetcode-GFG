class Solution:
    def maxProfitAssignment(self, difficulty: List[int], profit: List[int], worker: List[int]) -> int:
        # Pair the difficulty and profit together and sort by difficulty
        jobs = sorted(zip(difficulty, profit))
        
        # Sort the worker array
        worker.sort()
        
        max_profit = 0
        total_profit = 0
        job_index = 0
        best_profit = 0
        
        for w in worker:
            # Increase job_index to the highest job difficulty the worker can handle
            while job_index < len(jobs) and jobs[job_index][0] <= w:
                best_profit = max(best_profit, jobs[job_index][1])
                job_index += 1
            # Add the best profit this worker can achieve
            total_profit += best_profit
        
        return total_profit
