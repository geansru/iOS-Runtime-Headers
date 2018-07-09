/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogram : NSObject <NSSecureCoding> {
    unsigned short  _bucketCount;
    bool  _filter;
    ATXHistogramData * _histogramData;
    NSObject<OS_dispatch_queue> * _histogramQueue;
    double  _launchThreshold;
    NSDate * _prevDate;
    unsigned short  _prevLocaltime;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _prevLocaltimeLock;
    NSTimeZone * _prevTimeZone;
    long long  _secondsPerLocaltimeInterval;
    int  _timeBase;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) unsigned short bucketCount;
@property (nonatomic, retain) ATXHistogramData *histogramData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)_eventIdforBundleId:(id)arg1;
- (unsigned short)_localTimeWithDate:(id)arg1;
- (unsigned short)_localTimeWithDate:(id)arg1 timeZone:(id)arg2;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2 weight:(float)arg3;
- (double)averageLaunchesPerBundleId:(id)arg1;
- (unsigned short)bucketCount;
- (bool)bundleHasBeenLaunched:(id)arg1;
- (void)dealloc;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)entropy;
- (double)entropyForBundleId:(id)arg1;
- (double)entropyForDate:(id)arg1;
- (void)executeBlockOnHistogramData:(id /* block */)arg1;
- (id)histogramData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistogram:(id)arg1 bucketCount:(unsigned short)arg2 filter:(bool)arg3 timeBase:(int)arg4;
- (id)initWithType:(long long)arg1;
- (double)launchPopularityWithBundleId:(id)arg1 date:(id)arg2;
- (double)overallLaunchPopularityForBundleId:(id)arg1;
- (double)ratio:(double)arg1 over:(double)arg2;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2 distanceScale:(float)arg3;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 elapsedTime:(double)arg2 distanceScale:(float)arg3;
- (bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (void)resetData;
- (void)resetHistogram:(id)arg1;
- (void)setHistogramData:(id)arg1;
- (void)swapWithCoder:(id)arg1;
- (double)totalLaunches;
- (double)totalLaunchesForBundleIds:(id)arg1;
- (double)totalTimeOfDayLaunchesForDate:(id)arg1;
- (void)verifyDataIntegrity;

@end
