/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarEventLoader : NSObject {
    int  _cancelSeed;
    unsigned long long  _componentForExpandingPadding;
    unsigned long long  _componentForExpandingRequests;
    double  _currentlyLoadingEnd;
    double  _currentlyLoadingStart;
    unsigned int  _daysOfPadding;
    <CalendarEventLoaderDelegate> * _delegate;
    double  _lastRequestedEnd;
    double  _lastRequestedStart;
    NSObject<OS_dispatch_group> * _loadGroup;
    NSObject<OS_dispatch_queue> * _loadQueue;
    double  _loadedEnd;
    NSArray * _loadedOccurrences;
    bool  _loadedOccurrencesAreStale;
    NSArray * _loadedProposedTimeOccurrences;
    double  _loadedStart;
    unsigned int  _maxDaysToCache;
    NSMutableSet * _occurrencesAwaitingDeletion;
    NSMutableSet * _occurrencesAwaitingRefresh;
    NSObject<OS_dispatch_queue> * _occurrencesLock;
    double  _preferredReloadEnd;
    double  _preferredReloadStart;
    NSSet * _selectedCalendars;
    EKEventStore * _store;
}

@property (nonatomic) <CalendarEventLoaderDelegate> *delegate;

- (void).cxx_destruct;
- (void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2;
- (void)_eventStoreChanged:(id)arg1;
- (void)_getLoadStart:(double*)arg1 end:(double*)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double*)arg4 resultEnd:(double*)arg5;
- (void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double*)arg5 resultEnd:(double*)arg6;
- (void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(bool)arg3;
- (void)_pruneLoadedOccurrences;
- (void)_reload;
- (id)_uniqueEventsFromArray:(id)arg1;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)cancelAllLoads;
- (void)dealloc;
- (id)delegate;
- (id)initWithEventStore:(id)arg1;
- (void)loadIfNeeded;
- (bool)loadIsComplete;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (void)setCacheLimit:(unsigned int)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPadding:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSelectedCalendars:(id)arg1;
- (void)timeZoneChanged;
- (void)waitForBackgroundLoad;

@end
