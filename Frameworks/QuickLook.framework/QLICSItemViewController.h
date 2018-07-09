/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLICSItemViewController : QLItemViewController {
    UIScrollView * _scrollView;
}

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)scrollView;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;

@end
