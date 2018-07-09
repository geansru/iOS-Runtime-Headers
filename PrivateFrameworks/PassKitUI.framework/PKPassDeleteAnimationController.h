/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassDeleteAnimationController : NSObject {
    UIAlertController * _alertController;
    <PKPassDeleteAnimationControllerDelegate> * _delegate;
    PKPassGroupView * _groupView;
    PKPassView * _passView;
}

@property (nonatomic) <PKPassDeleteAnimationControllerDelegate> *delegate;
@property (nonatomic, readonly, retain) PKPassGroupView *groupView;
@property (nonatomic, readonly, retain) PKPassView *passView;

+ (void)performPassbookDeleteWithView:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_registerForEnterBackgroundNotification;
- (void)_startAnimation;
- (void)_unregisterForEnterBackgroundNotification;
- (void)dealloc;
- (id)delegate;
- (void)finished:(bool)arg1;
- (void)forceDeleteAnimation;
- (id)groupView;
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;
- (id)passView;
- (void)setDelegate:(id)arg1;
- (void)showInViewController:(id)arg1;

@end
