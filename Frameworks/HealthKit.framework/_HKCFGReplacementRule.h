/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCFGReplacementRule : NSObject {
    NSString * _description;
    unsigned long long  _lengthIncrease;
    id /* block */  _nodeEvaluator;
    NSArray * _rightHandSide;
}

@property (nonatomic, readonly) unsigned long long lengthIncrease;
@property (nonatomic, readonly, copy) id /* block */ nodeEvaluator;
@property (nonatomic, copy) NSArray *rightHandSide;

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)lengthIncrease;
- (id /* block */)nodeEvaluator;
- (id)rightHandSide;
- (void)setRightHandSide:(id)arg1;

@end
