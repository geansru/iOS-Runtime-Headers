/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCURLListenerListController : PSListController

+ (id)currentInstallationController;
+ (id)originalURLSender;
+ (void)setCurrentInstallationController:(id)arg1;
+ (void)setOriginalURLSender:(id)arg1;
+ (void)setShowingProfileInstallation:(bool)arg1;
+ (bool)showingProfileInstallation;

- (void)_pushProfileDetailsForProfileWithID:(id)arg1;
- (void)_showSheetToInstallConfigurationProfile;
- (void)_showSheetToInstallProvisioningProfile;
- (void)handleURL:(id)arg1;

@end
