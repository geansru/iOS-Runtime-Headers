/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTabCompletionMatch : WBSURLCompletionMatch {
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (long long)_matchLocationForString:(id)arg1 url:(id)arg2 title:(id)arg3;

- (void).cxx_destruct;
- (id)initWithUserTypedString:(id)arg1 url:(id)arg2 title:(id)arg3;
- (id)originalURLString;
- (id)title;
- (id)url;
- (id)userVisibleURLString;

@end
