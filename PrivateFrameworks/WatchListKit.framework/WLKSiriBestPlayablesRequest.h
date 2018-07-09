/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKSiriBestPlayablesRequest : WLKRequest {
    NSArray * _statsIDs;
}

@property (nonatomic, readonly, copy) NSArray *statsIDs;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStatsIDs:(id)arg1;
- (void)makeRequestWithCompletion:(id /* block */)arg1;
- (id)statsIDs;

@end
