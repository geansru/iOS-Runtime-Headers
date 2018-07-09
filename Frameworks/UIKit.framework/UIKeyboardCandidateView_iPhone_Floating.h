/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {
    bool  _handleShowHide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_collapse:(id)arg1;
- (void)_handleKeyboardShowOrHide:(id)arg1;
- (bool)_needsBackdrop;
- (unsigned long long)_numberOfColumns:(bool)arg1;
- (bool)_shouldShowHideKeyboard;
- (bool)_shouldUseFullMetrics;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)activeCandidateList;
- (void)candidatesDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCandidateViewExtended:(bool)arg1;

@end
