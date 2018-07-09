/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout> {
    NSString * _backdropGroupName;
    NSArray * _indexPathsForGradientItems;
    NSMutableArray * _orderedSublayouts;
    bool  _rendersWithParallax;
    bool  _rendersWithPerspective;
    NSMapTable * _sublayoutToSectionsToIndexRanges;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *indexPathsForGradientItems;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (nonatomic) bool rendersWithParallax;
@property (nonatomic) bool rendersWithPerspective;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLayout:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;
- (id)_newStorePageCollectionViewLayout;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
- (id)backdropGroupName;
- (id)indexPathsForGradientItems;
- (id)indexPathsForPinningItems;
- (id)init;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeSublayout:(id)arg1;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (void)setBackdropGroupName:(id)arg1;
- (void)setIndexPathsForGradientItems:(id)arg1;
- (void)setRendersWithParallax:(bool)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sublayouts;

@end
