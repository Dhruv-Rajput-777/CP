// binary search on answer

long long bsa(long long lb , long long ub) {
   long long ans = 0;

   auto helper = [&](long long mid) {
      return mid;
   };

   while (lb <= ub) {
      long long mid = lb + (ub - lb) / 2;
      if (helper(mid)) {
         ans = mid;
         ub = mid - 1;
      } else {
         lb = mid + 1;
      }
   }

   return ans;
}