/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressView : UIView <DebugHierarchyObject_Fallback, NSCoding> {
    long long  _barStyle;
    UIView * _contentView;
    double  _currentCornerRadius;
    UIVisualEffectView * _effectView;
    bool  _isAnimating;
    NSProgress * _observedProgress;
    float  _progress;
    NSArray * _progressColors;
    UIImage * _progressImage;
    NSObservation * _progressObservation;
    UIColor * _progressTintColor;
    UIImageView * _progressView;
    long long  _progressViewStyle;
    UIView * _shadowView;
    NSArray * _trackColors;
    UIImage * _trackImage;
    UIColor * _trackTintColor;
    UIImageView * _trackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIImage *progressImage;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) long long progressViewStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *trackImage;
@property (nonatomic, retain) UIColor *trackTintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_fillImagesForIndex:(unsigned long long)arg1 style:(long long)arg2 barStyle:(long long)arg3;
+ (unsigned long long)_indexForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (id)_standardInnerImageForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (id)_standardOuterImageForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2;
+ (id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned long long)arg3;
+ (struct CGSize { double x1; double x2; })defaultSize;

- (void).cxx_destruct;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_defaultTrackColorForCurrentStyle;
- (id)_effectiveContentView;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutShadow;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_progressColor;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;
- (void)_setProgress:(float)arg1;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4;
- (void)_setProgressColor:(id)arg1;
- (void)_setupProgressViewCommon;
- (void)_setupShadow;
- (double)_shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (bool)_shouldTintProgress;
- (bool)_shouldTintTrack;
- (void)_updateCornerRadiusWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateImages;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (long long)barStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithProgressViewStyle:(long long)arg1;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)observedProgress;
- (float)progress;
- (id)progressImage;
- (id)progressTintColor;
- (long long)progressViewStyle;
- (void)setBarStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setProgressImage:(id)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setProgressViewStyle:(long long)arg1;
- (void)setTrackImage:(id)arg1;
- (void)setTrackTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)trackImage;
- (id)trackTintColor;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (bool)supportsAsynchronousMeasurement;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
