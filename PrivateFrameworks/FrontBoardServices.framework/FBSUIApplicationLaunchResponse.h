/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {
    bool  _supportsTaskSuspension;
    bool  _supportsTaskSuspensionOnLock;
}

@property (nonatomic) bool supportsTaskSuspension;
@property (nonatomic) bool supportsTaskSuspensionOnLock;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setSupportsTaskSuspension:(bool)arg1;
- (void)setSupportsTaskSuspensionOnLock:(bool)arg1;
- (bool)supportsTaskSuspension;
- (bool)supportsTaskSuspensionOnLock;

@end
