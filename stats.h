#include <vector>
#include<bits/stdc++.h>
namespace Statistics {
    class Stats {
    public:
    float max,min,avg;
    std::vector<float> RemoveNanValues(const std::vector<float>& sample)
    {
        std::vector<float>NewSample;
        for(int i=0;i<sample.size();i++)
        {
            if(std::isnan(sample[i])!=1)
            NewSample.push_back(sample[i]);
        }
        return NewSample;
    }
    void ComputeAverage(const std::vector<float>& sample)
    {
        if(sample.empty())
        {
        avg = NAN;
            }
            else
            {
            std::vector<float> NewSample;
            NewSample = RemoveNanValues(sample);
            float sum = 0.0;
            for (int i = 0; i < NewSample.size(); i++)
            {
                sum += NewSample[i];
            }
            avg = sum / NewSample.size();}
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
