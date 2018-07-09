/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActiveWorkoutServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDLocationEventDelegate, HDWorkoutEventObserver, _HKActiveWorkoutServer, _HKWorkoutSessionDelegate> {
    _HKWeightedAverageCalculator * _averageHeartRateCalculator;
    <NSXPCProxyCreating> * _clientServer;
    NSMutableDictionary * _currentAnchors;
    <HDActiveWorkoutServerDelegate> * _delegate;
    id /* block */  _endWorkoutCompletion;
    HDFitnessMachineDataProducer * _fitnessMachineDataProducer;
    NSArray * _fitnessMachineObjectTypes;
    unsigned long long  _fitnessMachineType;
    NSSet * _localDevicePreferredObjectTypes;
    HKSource * _localDeviceSource;
    HDLocationDataCollector * _locationDataCollector;
    NSDate * _machinePreferredUntilDate;
    NSSet * _observedTypes;
    bool  _observingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _resumeDataByType;
    HDHealthStoreServer * _server;
    _HKActiveWorkoutServerConfiguration * _serverConfiguration;
    long long  _serverState;
    long long  _state;
    NSMutableArray * _workoutEvents;
    NSUUID * _workoutSessionUUID;
}

@property (nonatomic, readonly) <NSXPCProxyCreating> *clientServer;
@property (nonatomic, retain) NSMutableDictionary *currentAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDActiveWorkoutServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isActivated;
@property (nonatomic, retain) NSDate *machinePreferredUntilDate;
@property (nonatomic, retain) NSSet *observedTypes;
@property (nonatomic) bool observingChanges;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *resumeDataByType;
@property (nonatomic, readonly) HDHealthStoreServer *server;
@property (nonatomic) long long serverState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *workoutEvents;
@property (nonatomic, readonly) NSUUID *workoutUUID;

- (void).cxx_destruct;
- (id)_clientWithErrorHandler:(id /* block */)arg1;
- (void)_deactivateWithCompletion:(id /* block */)arg1;
- (void)_generateGapForType:(id)arg1 resumeData:(id)arg2;
- (void)_handleWorkoutEventReceivedPauseResume:(id)arg1;
- (bool)_isFitnessMachineConnected;
- (bool)_isFitnessMachineWorkout;
- (void)_queue_activateWorkoutWithCompletion:(id /* block */)arg1;
- (void)_queue_addEventType:(long long)arg1 forDateInterval:(id)arg2;
- (bool)_queue_addSamplesSinceResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceEntity:(id)arg4 database:(id)arg5 error:(id*)arg6;
- (void)_queue_endWorkoutWithCompletion:(id /* block */)arg1;
- (void)_queue_finalizeTotalsWithEndDate:(id)arg1;
- (bool)_queue_fitnessMachineWorkoutShouldAddSample:(id)arg1;
- (id)_queue_gapsNeedingUpdate;
- (bool)_queue_gapsResolved;
- (void)_queue_initObservedTypes;
- (id)_queue_localDeviceSource;
- (void)_queue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2;
- (void)_queue_registerObservers;
- (bool)_queue_resolveGap:(id)arg1 quantityType:(id)arg2;
- (void)_queue_resolveGaps;
- (bool)_queue_resolveGapsWithEndDate:(id)arg1 error:(id*)arg2;
- (void)_queue_samplesAdded:(id)arg1 journaled:(bool)arg2 anchor:(id)arg3 updateResumeData:(bool)arg4;
- (void)_queue_setAsCompleteAndStopObserving;
- (void)_queue_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(bool)arg3;
- (void)_queue_setState:(long long)arg1;
- (bool)_queue_shouldAddSample:(id)arg1 journaled:(bool)arg2 anchor:(id)arg3;
- (void)_queue_startWorkoutSessionIfNeededWithCompletion:(id /* block */)arg1;
- (long long)_queue_stateForDate:(id)arg1;
- (void)_queue_stopWorkoutSessionIfNeededWithCompletion:(id /* block */)arg1;
- (void)_queue_updateTotalsSinceResumeDate:(id)arg1;
- (bool)_queue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (bool)_queue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceEntity:(id)arg4 error:(id*)arg5;
- (void)_queue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(bool)arg3 updateResumeData:(bool)arg4;
- (id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 sourceEntity:(id)arg6;
- (id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2 error:(id*)arg3;
- (bool)_shouldUseDeviceData;
- (id)_transactionIdentifier;
- (void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (void)_updateMetrics:(id)arg1;
- (void)_updateTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (id)clientServer;
- (id)currentAnchors;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)elevationUpdated:(unsigned long long)arg1;
- (id)firstPartyWorkoutSnapshot;
- (id)initWithClientServer:(id)arg1 serverConfiguration:(id)arg2 server:(id)arg3 delegate:(id)arg4;
- (bool)isActivated;
- (void)locationSeriesSampleUpdated:(id)arg1;
- (id)machinePreferredUntilDate;
- (id)observedTypes;
- (bool)observingChanges;
- (void)pauseClientWithCompletion:(id /* block */)arg1;
- (id)queue;
- (void)remote_activateWorkoutWithCompletion:(id /* block */)arg1;
- (void)remote_endWorkoutWithEndDate:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_nukeWorkoutWithCompletion:(id /* block */)arg1;
- (void)remote_pauseWorkoutWithDate:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (void)remote_resumeWorkoutWithDate:(id)arg1 userInitiated:(bool)arg2 completion:(id /* block */)arg3;
- (id)resumeDataByType;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (id)server;
- (long long)serverState;
- (void)setCurrentAnchors:(id)arg1;
- (void)setDataProducer:(id)arg1;
- (void)setFitnessMachineType:(unsigned long long)arg1;
- (void)setMachinePreferredUntilDate:(id)arg1;
- (void)setObservedTypes:(id)arg1;
- (void)setObservingChanges:(bool)arg1;
- (void)setResumeDataByType:(id)arg1;
- (void)setServerState:(long long)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (void)setupObservedTypes;
- (id)startDate;
- (unsigned long long)workoutActivityType;
- (id)workoutEvents;
- (void)workoutManager:(id)arg1 didReceiveEvent:(id)arg2;
- (void)workoutRouteUpdated:(id)arg1;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didUpdateMetrics:(id)arg2;
- (id)workoutUUID;

@end
