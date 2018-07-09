/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAutoCalculatorResponse : NSObject {
    NSError * _error;
    NSDictionary * _result;
    long long  _status;
}

@property (readonly) NSError *error;
@property (readonly) NSDictionary *result;
@property (readonly) long long status;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithNoResult;
- (id)initWithResult:(id)arg1;
- (id)result;
- (long long)status;

@end
