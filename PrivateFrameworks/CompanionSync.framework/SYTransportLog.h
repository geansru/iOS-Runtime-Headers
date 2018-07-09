/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYTransportLog : NSObject {
    NSString * _facility;
    NSObject<OS_os_log> * _log;
    NSObject<OS_os_log> * _oslog;
}

@property (nonatomic, copy) NSString *facility;
@property (nonatomic, readonly) NSObject<OS_os_log> *oslog;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createLog;
- (void)_logOSMessage:(const char *)arg1 args:(char *)arg2 returnAddress:(void*)arg3;
- (id)facility;
- (id)init;
- (void)logMessage:(id)arg1;
- (void)logMessage:(id)arg1 args:(char *)arg2;
- (id)oslog;
- (void)setFacility:(id)arg1;

@end
