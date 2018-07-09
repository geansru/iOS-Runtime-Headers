/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDPowerBudget : NSObject {
    CDAttribute * _attribute;
    <NSObject> * _batteryObserver;
    unsigned long long  _budgetingToken;
    NSDate * _lastPlugInTime;
    NSObject<OS_os_log> * _log;
    SGDPowerBudgetThrottlingState * _throttlingState;
}

+ (id)defaultBudget;

- (void).cxx_destruct;
- (void)_endDuetBudgetedWork;
- (void)_endThrottleBudgetedWork;
- (bool)_hasDuetBudgetRemaining;
- (bool)_hasThrottleBudgetRemaining;
- (void)_startDuetBudgetedWork;
- (void)_startThrottleBudgetedWork;
- (bool)_updateAttribute;
- (bool)canDoDiscretionaryWork;
- (void)dealloc;
- (void)doDiscretionaryWork:(id /* block */)arg1 orElse:(id /* block */)arg2;
- (void)endWork;
- (id)init;
- (void)startWork;

@end
