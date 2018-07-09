/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGridLayoutMetrics : PXLayoutMetrics {
    long long  _axis;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _footerSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
}

@property long long axis;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } footerSize;
@property (nonatomic) struct CGSize { double x1; double x2; } headerSize;
@property (nonatomic) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;

- (long long)axis;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })footerSize;
- (struct CGSize { double x1; double x2; })headerSize;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (struct CGSize { double x1; double x2; })itemSize;
- (void)setAxis:(long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFooterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;

@end
