#include "stats.h"
#include<cmath>
#include<algorithm>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& sample) {
    //Implement statistics here
    Stats statistics;
	statistics.ComputeAverage(sample);
	statistics.ComputeMax(sample);
	statistics.ComputeMin(sample);
	return statistics;
};
