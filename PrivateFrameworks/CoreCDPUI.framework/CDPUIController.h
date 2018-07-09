/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIController : CDPUIBaseController <CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate, KeychainSyncViewControllerDelegate> {
    CDPContext * _activeContext;
    <CDPUIDelegate> * _delegate;
    CDPDevicePickerViewController * _devicePicker;
    NSArray * _devices;
    bool  _forceInlinePresentation;
    NSNumber * _icscNumericLength;
    bool  _isNumericICSC;
    bool  _isRandomICSC;
    bool  _isUsingMultipleICSC;
    UINavigationController * _navController;
    CDPRecoveryKeyEntryViewModel * _recoveryKeyViewModel;
    CDPRemoteDeviceSecretValidator * _remoteSecretValidator;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceInlinePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginDevicePickerFlowFromEntryController:(id)arg1;
- (void)_beginWaitingForApprovalFlow;
- (id)_deviceLimitOfferForDevice:(id)arg1;
- (void)_dismissPresentedViewControllerCompletion:(id /* block */)arg1;
- (id)_enterSecretLaterEscapeOptionWithSecret:(unsigned long long)arg1;
- (id)_escapeOfferForDevice:(id)arg1 withMask:(unsigned long long)arg2;
- (id)_escapeOfferForMultiApprovalWithMask:(unsigned long long)arg1;
- (id)_escapeOfferForSingleApprovalWithMask:(unsigned long long)arg1;
- (id)_escapeOffersForgotAllWithMask:(unsigned long long)arg1 presenter:(id)arg2 devices:(id)arg3;
- (id)_localDeviceClass;
- (id)_newestDeviceFromDevices:(id)arg1;
- (void)_presentRemoteApprovalViewControllerWithEscapeOfferMask:(unsigned long long)arg1;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (void)_presentRootController:(id)arg1 completion:(id /* block */)arg2;
- (id)_recoveryKeyControllerWithContext:(id)arg1 validator:(id)arg2 completion:(id /* block */)arg3;
- (id)_recoveryKeyEscapeOffer;
- (id)_recoveryKeyEscapeOption;
- (id)_recoveryKeyEscapeOptionWithPresentationBlock:(id /* block */)arg1;
- (id)_remoteApprovalEscapeOption;
- (id)_remoteSecretControllerForDevice:(id)arg1;
- (id)_remoteSecretControllerForNewestDevice:(id)arg1;
- (void)_replaceViewController:(id)arg1 withNewController:(id)arg2;
- (id)_resetAccountDataEscapeOption;
- (void)_setupDevicePickerController:(id /* block */)arg1;
- (void)_showResetKeychainConfirmationAlertWithViewController:(id)arg1;
- (id)_signInLaterEscapeOffer;
- (id)_signInLaterEscapeOption;
- (id)_singleICSCEscapeOfferWithMask:(unsigned long long)arg1 withController:(id)arg2;
- (id)_waitingForApprovalEscapeOffer;
- (void)approveFromAnotherDevice:(bool)arg1;
- (void)backTappedFromRoot:(id)arg1;
- (void)cancelRemoteApprovalTapped:(id)arg1;
- (void)cancelTapped:(id)arg1;
- (void)cancelledRemoteSecretEntry:(id)arg1;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2;
- (void)cdpContext:(id)arg1 confirmRecoveryKeyWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(id)arg3 isRandom:(bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(id /* block */)arg4;
- (void)dealloc;
- (id)delegate;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2;
- (void)dismissRecoveryFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
- (void)finishValidation:(id)arg1 withError:(id)arg2;
- (bool)forceInlinePresentation;
- (void)handleBackPopCompletion;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)performAccountReset:(id)arg1;
- (void)performRecoveryKeyRecovery:(id)arg1;
- (void)performRemoteApproval:(id)arg1;
- (bool)performingAccountRecovery;
- (id)recoveryKeyEntryControllerForCircleJoinWithCancel:(bool)arg1;
- (void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
- (void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(bool)arg1;

@end
