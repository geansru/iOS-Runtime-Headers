/* Generated by RuntimeBrowser.
 */

@protocol _UISearchControllerPresenting <NSObject>

@required

- (UIPresentationController<_UISearchControllerPresenting> *)adaptivePresentationController;
- (bool)animatorShouldLayoutPresentationViews;
- (unsigned long long)edgeForHidingNavigationBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (bool)forceObeyNavigationBarInsets;
- (double)resultsControllerContentOffset;
- (bool)resultsUnderlapsSearchBar;
- (bool)searchBarCanContainScopeBar;
- (UIView *)searchBarContainerView;
- (bool)searchBarShouldClipToBounds;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;

@end
