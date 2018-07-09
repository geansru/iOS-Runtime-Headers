/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate> {
    int  _analyticsAction;
    id /* block */  _buttonSelectedBlock;
    NSString * _buttonSubTitle;
    NSString * _buttonTitle;
    <_MKPlaceActionButtonControllerProtocol> * _delegate;
}

@property (nonatomic, readonly) int analyticsAction;
@property (nonatomic, readonly) id /* block */ buttonSelectedBlock;
@property (nonatomic, readonly) NSString *buttonSubTitle;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MKPlaceActionButtonControllerProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (int)analyticsAction;
- (id /* block */)buttonSelectedBlock;
- (id)buttonSubTitle;
- (void)buttonTextChanged;
- (id)buttonTitle;
- (id)delegate;
- (id)infoCardChildPossibleActions;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
