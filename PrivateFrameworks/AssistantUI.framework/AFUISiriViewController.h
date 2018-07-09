/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUISiriViewDataSource, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, SiriUIKeyboardViewDelegate> {
    bool  _active;
    bool  _attemptingRemoteViewControllerPresentation;
    bool  _carDNDActive;
    SiriUIConfiguration * _configuration;
    SACarPlaySupportedOEMAppIdList * _currentCarPlaySupportedOEMAppIdList;
    AFUIRequestOptions * _currentRequestOptions;
    long long  _currentRequestSource;
    <AFUISiriViewControllerDataSource> * _dataSource;
    AFUIDelayedActionCommandCache * _delayedActionCommandCache;
    <AFUISiriViewControllerDelegate> * _delegate;
    NSDictionary * _dismissalUserInfo;
    bool  _eyesFree;
    bool  _hasCalledBeginAppearanceTransition;
    bool  _hasCalledEndAppearanceTransition;
    bool  _inHoldToTalkMode;
    SiriUIKeyboardView * _inputAccessoryView;
    bool  _isStark;
    struct { 
        bool enabled; 
        bool minimized; 
        bool hasBeenShown; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } keyboardFrame; 
        double keyboardHeight; 
    }  _keyboardInfo;
    bool  _mapsGatekeeperEnabled;
    bool  _presentedConversationFromBreadcrumb;
    NSNumber * _recordingStartedTimeValue;
    AFUISiriRemoteViewController * _remoteViewController;
    NSObject<OS_dispatch_queue> * _remoteViewControllerDispatchQueue;
    bool  _remoteViewControllerDispatchQueueSuspended;
    bool  _remoteViewControllerIsPresenting;
    SiriUIAudioRoutePickerController * _routePickerController;
    AFUISiriSession * _session;
    bool  _showsStatusBar;
    bool  _siriSessionWantsToEnd;
    UIStatusBar * _statusBar;
    bool  _statusBarEnabled;
    id /* block */  _triggerUpdater;
    NSObject<OS_dispatch_queue> * _uiAppearanceCoreDuetQueue;
    NSString * _uiAppearanceUUIDString;
    bool  _unlockScreenVisible;
    bool  _userUtteranceTapToEditInProgress;
    double  _viewDidAppearTime;
    bool  _viewDisappearing;
    bool  _visible;
    long long  _vtEnabledCount;
}

@property (nonatomic) bool carDNDActive;
@property (getter=_currentRequestOptions, setter=_setCurrentRequestOptions:, nonatomic, copy) AFUIRequestOptions *currentRequestOptions;
@property (nonatomic) <AFUISiriViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEyesFree, nonatomic) bool eyesFree;
@property (getter=_hasCalledBeginAppearanceTransition, setter=_setHasCalledBeginAppearanceTransition:, nonatomic) bool hasCalledBeginAppearanceTransition;
@property (getter=_hasCalledEndAppearanceTransition, setter=_setHasCalledEndAppearanceTransition:, nonatomic) bool hasCalledEndAppearanceTransition;
@property (nonatomic, readonly) bool hasScreenSnapshot;
@property (readonly) unsigned long long hash;
@property (getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:, nonatomic) bool inHoldToTalkMode;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) bool isProcessingAcousticIdRequest;
@property (nonatomic) bool isStark;
@property (nonatomic) bool mapsGatekeeperEnabled;
@property (getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:, nonatomic, retain) NSNumber *recordingStartedTimeValue;
@property (getter=_remoteViewController, nonatomic, readonly) AFUISiriRemoteViewController *remoteViewController;
@property (getter=_remoteViewControllerDispatchQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue;
@property (nonatomic, retain) SiriUIAudioRoutePickerController *routePickerController;
@property (getter=_session, nonatomic, readonly) AFUISiriSession *session;
@property (nonatomic) bool showsStatusBar;
@property (getter=_statusBar, setter=_setStatusBar:, nonatomic, retain) UIStatusBar *statusBar;
@property (nonatomic) bool statusBarEnabled;
@property (readonly) Class superclass;
@property (getter=_isUserUtteranceTapToEditInProgress, setter=_setUserUtteranceTapToEditInProgress:, nonatomic) bool userUtteranceTapToEditInProgress;
@property (nonatomic, retain) UIView<AFUISiriRemoteViewHosting> *view;
@property (getter=_viewDidAppearTime, setter=_setViewDidAppearTime:, nonatomic) double viewDidAppearTime;
@property (getter=isViewDisappearing, nonatomic) bool viewDisappearing;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_activationTriggerDidRelease:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (bool)_canIgnoreHoldToTalkThreshold;
- (id)_currentRequestOptions;
- (void)_didDetectAudioRoutePickerTap;
- (void)_enqueueRemoteViewControllerMessageBlock:(id /* block */)arg1;
- (void)_enqueueRemoteViewControllerMessageBlockWithWeaklyReferencedRemoteViewController:(id /* block */)arg1;
- (void)_enterHoldToTalkMode;
- (void)_exitHoldToTalkMode;
- (void)_handleHelpAction;
- (void)_handleMicButtonLongPressBeganFromSource:(long long)arg1;
- (void)_handleMicButtonLongPressEndedFromSource:(long long)arg1;
- (void)_handleMicButtonTapFromSource:(long long)arg1;
- (void)_handleReportBugAction;
- (void)_handleReportBugLongPressAction;
- (void)_handleSiriDidActivateFromSource:(long long)arg1;
- (bool)_hasCalledBeginAppearanceTransition;
- (bool)_hasCalledEndAppearanceTransition;
- (void)_hideStatusBarAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_holdToTalkThresholdHasElapsed;
- (void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1;
- (void)_informRemoteViewControllerOfParentIfNecessary;
- (bool)_isInHoldToTalkMode;
- (bool)_isInitialSpeechRequest;
- (bool)_isTextInputEnabled;
- (bool)_isUserUtteranceTapToEditInProgress;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (struct { bool x1; bool x2; bool x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; double x5; })_keyboardInfoFromNotification:(id)arg1;
- (double)_manualEndpointingThreshold;
- (void)_presentDeferredFlamesViewIfNecessary;
- (void)_presentRemoteViewController;
- (void)_recordUIAppearance;
- (void)_recordUIDismissal;
- (id)_recordingStartedTimeValue;
- (id)_remoteViewController;
- (id)_remoteViewControllerDispatchQueue;
- (void)_removeStatusBar;
- (void)_resumeRemoteViewControllerDispatchQueue;
- (id)_routePickerController;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(bool)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (id)_session;
- (void)_setAudioRoutePickerBluetoothOn:(bool)arg1;
- (void)_setCurrentRequestOptions:(id)arg1;
- (void)_setHasCalledBeginAppearanceTransition:(bool)arg1;
- (void)_setHasCalledEndAppearanceTransition:(bool)arg1;
- (void)_setInHoldToTalkMode:(bool)arg1;
- (void)_setRecordingStartedTimeValue:(id)arg1;
- (void)_setShowAudioRoutePicker:(bool)arg1;
- (void)_setShowKeyboardIfTextInputEnabled:(bool)arg1;
- (void)_setShowKeyboardIfTextInputEnabled:(bool)arg1 minimized:(bool)arg2;
- (void)_setStatusBar:(id)arg1;
- (void)_setStatusViewHidden:(bool)arg1;
- (void)_setUserUtteranceTapToEditInProgress:(bool)arg1;
- (void)_setViewDidAppearTime:(double)arg1;
- (void)_setVoiceTriggerEnabled:(bool)arg1;
- (void)_showStatusBarAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)_siriView;
- (id)_statusBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusBarFrame;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_suspendRemoteViewControllerDispatchQueue;
- (void)_transitionToAutomaticEndpointMode;
- (void)_updateAudioRoutePicker;
- (double)_viewDidAppearTime;
- (void)_willEnterFullScreenScreenshotMode:(id)arg1;
- (id)activeAccountForSiriView:(id)arg1;
- (id)assistantVersionForSiriView:(id)arg1;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)cancelTTS;
- (bool)carDNDActive;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)contextAppInfosForSiriSession:(id)arg1;
- (id)currentRequestOptions;
- (long long)currentSource;
- (id)dataSource;
- (void)dealloc;
- (void)defrost;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(bool)arg2 userInfo:(id)arg3;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)endSession;
- (void)enterUITrackingMode;
- (void)exitUITrackingMode;
- (void)handlePasscodeUnlockAndCancelRequest:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)handlePasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)handleViewFullyRevealed;
- (bool)hasQueuedTTS;
- (bool)hasScreenSnapshot;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (id)inputAccessoryView;
- (bool)isEyesFree;
- (bool)isInitialBringUp;
- (bool)isListening;
- (bool)isPreventingActivationGesture;
- (bool)isProcessingAcousticIdRequest;
- (bool)isStark;
- (bool)isViewDisappearing;
- (bool)isVisible;
- (void)keyboardView:(id)arg1 didReceiveText:(id)arg2;
- (void)keyboardViewDidReceiveAudioRouteAction:(id)arg1;
- (void)keyboardViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)keyboardViewDidReceiveHelpButtonAction:(id)arg1;
- (void)keyboardViewDidReceiveReportBugAction:(id)arg1;
- (void)loadView;
- (unsigned long long)lockStateForSiriRemoteViewController:(id)arg1;
- (unsigned long long)lockStateForSiriSession:(id)arg1;
- (bool)mapsGatekeeperEnabled;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
- (void)preheat;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (void)presentRemoteViewControllerIfNecessary;
- (void)proximityStatusChanged:(bool)arg1;
- (void)resetContextTypes:(long long)arg1;
- (id)routePickerController;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(bool)arg2;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(bool)arg2;
- (void)routePickerControllerWillDismiss:(id)arg1;
- (void)routePickerControllerWillShow:(id)arg1;
- (void)setAlertContext;
- (void)setCarDNDActive:(bool)arg1;
- (void)setCurrentCarPlaySupportedOEMAppIdList:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEyesFree:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setIsStark:(bool)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)setMapsGatekeeperEnabled:(bool)arg1;
- (void)setRoutePickerController:(id)arg1;
- (void)setShowsStatusBar:(bool)arg1;
- (void)setShowsStatusBar:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setStatusBarEnabled:(bool)arg1;
- (void)setViewDisappearing:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)shortTapAction;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutorotate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;
- (bool)showsStatusBar;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewController:(id)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didFinishTest:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didRequestCurrentTextInputWithReplyHandler:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(bool)arg2 minimized:(bool)arg3;
- (void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(id /* block */)arg5;
- (bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(bool)arg4;
- (bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(bool)arg3;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willStartTest:(id)arg2;
- (void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1;
- (void)siriRemoteViewControllerDidEndTapToEdit:(id)arg1;
- (void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg1;
- (void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg1;
- (void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1;
- (void)siriRemoteViewControllerDidResetTextInput:(id)arg1;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (long long)siriRemoteViewControllerRequestsActivationSource:(id)arg1;
- (void)siriRemoteViewControllerWillBeginTapToEdit:(id)arg1;
- (void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
- (void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(id /* block */)arg2;
- (void)siriSession:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)siriSessionDidEnd:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)siriSessionDidResetContext:(id)arg1;
- (void)siriSessionDidUpdateSessionInfo:(id)arg1;
- (void)siriSessionRecordingPreparationHasFinished:(id)arg1;
- (void)siriSessionWillEnd:(id)arg1;
- (bool)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
- (bool)siriViewShouldSupportTextInput:(id)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (bool)statusBarEnabled;
- (void)stopRequestWithOptions:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)telephonyRequestCompleted;
- (id)underlyingConnection;
- (void)updateContexts:(long long)arg1;
- (void)updateRequestOptions:(id)arg1;
- (void)updateViewForPercentageRevealed:(double)arg1;
- (long long)userAccountCountForSiriView:(id)arg1;
- (void)userInteractionDidOccur;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (id)viewServiceApplicationInfo;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
