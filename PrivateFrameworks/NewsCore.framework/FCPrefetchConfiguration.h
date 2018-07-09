/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrefetchConfiguration : NSObject {
    bool  _backgroundFetchEnabled;
    unsigned long long  _maximumFavoritesFeedsToPrefetch;
    double  _minimumBackgroundFetchInterval;
    NTPBPrefetchConfig * _pbConfig;
    double  _prefetchedForYouExpiration;
    bool  _shouldPrefetchForYouFeed;
}

@property (getter=isBackgroundFetchEnabled, nonatomic, readonly) bool backgroundFetchEnabled;
@property (nonatomic, readonly) unsigned long long maximumFavoritesFeedsToPrefetch;
@property (nonatomic, readonly) double minimumBackgroundFetchInterval;
@property (nonatomic, readonly) double prefetchedForYouExpiration;
@property (nonatomic, readonly) bool shouldPrefetchForYouFeed;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)initWithPBPrefetchConfig:(id)arg1;
- (bool)isBackgroundFetchEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumFavoritesFeedsToPrefetch;
- (double)minimumBackgroundFetchInterval;
- (double)prefetchedForYouExpiration;
- (bool)shouldPrefetchForYouFeed;

@end
