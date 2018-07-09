/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining> {
    bool  _fetchAllChanges;
    NSObject<OS_dispatch_group> * _fetchZonesGroup;
    unsigned long long  _numRequestsSent;
    CKServerChangeToken * _previousServerChangeToken;
    id /* block */  _recordZoneWithIDChangedBlock;
    id /* block */  _recordZoneWithIDWasDeletedBlock;
    id /* block */  _recordZoneWithIDWasPurgedBlock;
    NSMutableArray * _requestInfos;
    unsigned long long  _resultsLimit;
    CKServerChangeToken * _serverChangeToken;
    id /* block */  _serverChangeTokenUpdatedBlock;
    long long  _status;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchZonesGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numRequestsSent;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (nonatomic, retain) NSMutableArray *requestInfos;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic, copy) id /* block */ serverChangeTokenUpdatedBlock;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (id)activityCreate;
- (bool)fetchAllChanges;
- (id)fetchZonesGroup;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (unsigned long long)numRequestsSent;
- (Class)operationResultClass;
- (id)pipeliningDescription;
- (id)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (id /* block */)recordZoneWithIDWasPurgedBlock;
- (id)requestInfos;
- (unsigned long long)resultsLimit;
- (id)serverChangeToken;
- (id /* block */)serverChangeTokenUpdatedBlock;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchZonesGroup:(id)arg1;
- (void)setNumRequestsSent:(unsigned long long)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasPurgedBlock:(id /* block */)arg1;
- (void)setRequestInfos:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
