/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUFanIconContentView : HUIconContentView {
    UIImageView * _baseView;
    UIVisualEffectView * _baseVisualEffectView;
    HUNonAnimatingTintImageView * _bladesView;
    UIVisualEffectView * _bladesVisualEffectView;
    double  _rotationSpeed;
    unsigned long long  _rotationState;
    HUDynamicStateAnimationApplier * _speedRampApplier;
}

@property (nonatomic, retain) UIImageView *baseView;
@property (nonatomic, retain) UIVisualEffectView *baseVisualEffectView;
@property (nonatomic, retain) HUNonAnimatingTintImageView *bladesView;
@property (nonatomic, retain) UIVisualEffectView *bladesVisualEffectView;
@property (nonatomic) double rotationSpeed;
@property (nonatomic) unsigned long long rotationState;
@property (nonatomic, retain) HUDynamicStateAnimationApplier *speedRampApplier;

- (void).cxx_destruct;
- (void)_rampBladesLayerToRotationSpeedAnimated:(bool)arg1;
- (void)_setBladesLayerSpeed:(float)arg1;
- (void)_updateImages;
- (void)_updateRotationAnimationFromState:(unsigned long long)arg1 shouldRampSpeed:(bool)arg2;
- (void)_updateVisualEffects;
- (id)baseView;
- (id)baseVisualEffectView;
- (id)bladesView;
- (id)bladesVisualEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)rotationSpeed;
- (unsigned long long)rotationState;
- (void)setBaseView:(id)arg1;
- (void)setBaseVisualEffectView:(id)arg1;
- (void)setBladesView:(id)arg1;
- (void)setBladesVisualEffectView:(id)arg1;
- (void)setDisableContinuousAnimation:(bool)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setRotationSpeed:(double)arg1;
- (void)setRotationState:(unsigned long long)arg1;
- (void)setSpeedRampApplier:(id)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (id)speedRampApplier;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)wantsManagedVibrancyEffect;

@end
