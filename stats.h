#include <vector>
#include<bits/stdc++.h>
namespace Statistics {
    class Stats {
    public:
    float max,min,avg;
    
    void ComputeAverage(const std::vector<float>& sample)
    {
        if(sample.empty())
        {
        avg = NAN;
            }
            else
            {
             int count=0;
            float sum = 0.0;
            for (int i = 0; i < sample.size(); i++)
            {
                if(std::isnan(sample[i])!=1)
               { sum += sample[i];
               count++;}
            }
            avg = sum / count;}
    }
     void ComputeMin(const std::vector<float>& sample)
     {
         if(sample.empty())
        {
          min = NAN;
            }
            else
            {
                min = *std::min_element(sample.begin(),sample.end());
            }

     }
     void ComputeMax(const std::vector<float>& sample)
     {
         if(sample.empty())
        {
          max = NAN;
            }
            else
            {
                max = *std::max_element(sample.begin(),sample.end());
            }
     }
    };

    Stats ComputeStatistics(const std::vector<float>& sample);
}
