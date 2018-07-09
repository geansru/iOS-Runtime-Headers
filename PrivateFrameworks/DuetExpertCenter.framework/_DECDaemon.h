/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECDaemon : NSObject <NSXPCListenerDelegate> {
    _DECInternalConsumerManager * _consumerManager;
    _DECExpertManager * _expertManager;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    _DECServerResponder * _serverResponder;
    _DECDailyTrainingScheduler * _trainingScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getServerResponder;
- (void)_runDelayedInitializationOperations;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
