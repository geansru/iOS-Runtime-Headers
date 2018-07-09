/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBarLayout : NSObject {
    bool  _dirty;
    <_UIButtonBarLayoutMetricsData> * _layoutMetrics;
}

@property (nonatomic) bool dirty;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (bool)_isGroup;
- (bool)_isSpace;
- (id)_item;
- (id)_metricsData;
- (bool)_shouldBeDirty;
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)addLayoutGuides:(id)arg1;
- (void)addLayoutViews:(id)arg1;
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;
- (bool)compact;
- (void)configure;
- (id)description;
- (bool)dirty;
- (id)init;
- (id)initWithLayoutMetrics:(id)arg1;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)setDirty:(bool)arg1;
- (bool)shouldHoriziontallyCenterView:(id)arg1;

@end
