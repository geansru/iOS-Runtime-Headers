/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNResourceManager : NSObject {
    unsigned long long  _currentPolicy;
    CLInUseAssertion * _locationAssertion;
    BKSProcessAssertion * _processAssertion;
    NSString * _reason;
}

@property (nonatomic, readonly) unsigned long long currentPolicy;
@property (nonatomic, readonly) NSString *reasonDescription;

- (void).cxx_destruct;
- (void)_clearLocationAssertion;
- (void)_clearProcessAssertion;
- (void)_createLocationAssertion;
- (void)_createProcessAssertionWithFlags:(unsigned int)arg1;
- (unsigned int)_processAssertionFlagsForResourcePolicy:(unsigned long long)arg1;
- (unsigned long long)currentPolicy;
- (void)dealloc;
- (id)init;
- (id)reasonDescription;
- (void)setResourcePolicy:(unsigned long long)arg1 reason:(id)arg2;

@end
