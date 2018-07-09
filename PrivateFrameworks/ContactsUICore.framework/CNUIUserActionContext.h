/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionContext : NSObject <CNUIUserActionContext> {
    <CNUIUserActionCurator> * _actionCurator;
    <CNUIUserActionRecorder> * _actionRecorder;
    <CNUIUserActionDialRequestOpener> * _dialRequestOpener;
    <CNUIUserActionURLOpener> * _urlOpener;
    <CNUIUserActionUserActivityOpener> * _userActivityOpener;
}

@property (nonatomic, retain) <CNUIUserActionCurator> *actionCurator;
@property (nonatomic, retain) <CNUIUserActionRecorder> *actionRecorder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNUIUserActionDialRequestOpener> *dialRequestOpener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CNUIUserActionURLOpener> *urlOpener;
@property (nonatomic, retain) <CNUIUserActionUserActivityOpener> *userActivityOpener;

+ (id)contextWithExtensionContext:(id)arg1;
+ (id)defaultContext;
+ (id)makeDefaultContext;

- (void).cxx_destruct;
- (id)actionCurator;
- (id)actionRecorder;
- (id)dialRequestOpener;
- (id)init;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (void)setActionCurator:(id)arg1;
- (void)setActionRecorder:(id)arg1;
- (void)setDialRequestOpener:(id)arg1;
- (void)setUrlOpener:(id)arg1;
- (void)setUserActivityOpener:(id)arg1;
- (id)urlOpener;
- (id)userActivityOpener;

@end
