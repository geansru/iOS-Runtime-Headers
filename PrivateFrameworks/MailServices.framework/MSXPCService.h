/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSXPCService : NSObject {
    NSXPCConnection * _connection;
    NSLock * _lock;
    NSXPCInterface * _remoteObjectInterface;
    bool  _shouldLaunchMobileMail;
}

@property (nonatomic) bool shouldLaunchMobileMail;

+ (id)remoteProxyForXPCInterface:(id)arg1 connectionErrorHandler:(id /* block */)arg2;
+ (id)remoteProxyForXPCInterface:(id)arg1 shouldLaunchMobileMail:(bool)arg2 connectionErrorHandler:(id /* block */)arg3;

- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)newConnectionForInterface:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setShouldLaunchMobileMail:(bool)arg1;
- (bool)shouldLaunchMobileMail;

@end
