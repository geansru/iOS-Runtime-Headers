/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {
    float  mDepthGapFactor;
    float  mDepthLimitFactor;
    unsigned long long  mMaxLimitingSeries;
    float  mShadowCameraDepthLimitAdjustmentFactor;
}

@property (nonatomic, readonly) float depthLimitFactor;
@property (nonatomic, readonly) float p_sageInterSetDepthGapProperty;
@property (nonatomic, readonly) long long seriesCount;
@property (nonatomic, readonly) float shadowCameraDepthLimitAdjustmentFactor;

- (bool)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg4;
- (float)chartMinZForScene:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)depthForScene:(id)arg1;
- (float)depthLimitFactor;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (float)p_sageInterSetDepthGapProperty;
- (void)reset;
- (void)resetWithEnumerator:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg2;
- (long long)seriesCount;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })seriesSize;
- (float)shadowCameraDepthLimitAdjustmentFactor;
- (void)updateLabels;

@end
