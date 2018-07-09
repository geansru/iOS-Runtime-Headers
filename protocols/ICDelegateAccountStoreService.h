/* Generated by RuntimeBrowser.
 */

@protocol ICDelegateAccountStoreService <NSObject>

@required

- (void)addDelegationUUIDs:(void *)arg1 forUserIdentity:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, ICUserIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)recreateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeAllTokensWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeDelegationUUIDs:(void *)arg1 forUserIdentity:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, ICUserIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeIdentityPropertiesForUserIdentity:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: ICUserIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeTokenForUserIdentity:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: ICUserIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeTokensExpiringBeforeDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setIdentityProperties:(void *)arg1 forUserIdentity:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ICUserIdentityProperties *, ICUserIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setToken:(void *)arg1 forUserIdentity:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ICDelegateToken *, ICUserIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
