/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKAuthenticatorDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKPassPaymentApplicationViewDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentSummaryViewDelegate, PKPaymentServiceDelegate, PKUIForegroundActiveArbiterDeactivationObserver> {
    UIButton * _actionButton;
    PKPassPaymentApplicationView * _applicationsView;
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    unsigned long long  _authenticatorState;
    NSObject<OS_dispatch_queue> * _authorizationQueue;
    PKContactlessInterfaceSession * _contactlessInterfaceSession;
    long long  _currentPayState;
    unsigned int  _deactivationReasons;
    bool  _encounteredTerminalFailure;
    <UICoordinateSpace> * _fixedScreenCoordinateSpace;
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _foregroundActiveState;
    bool  _glyphStateDirty;
    bool  _holdingTerminalSubstate;
    NSString * _ignoringUpdatesFromTransactionIdentifier;
    bool  _isVisible;
    double  _lastFieldExitTime;
    double  _lastFingerOnTime;
    double  _lastTransactionTime;
    PKPassLibrary * _passLibrary;
    UIViewController * _passcodePresenterVC;
    unsigned long long  _payStateTransitionCounter;
    PKPassPaymentPayStateView * _payStateView;
    PKPaymentService * _paymentService;
    PKPassPaymentSummaryView * _paymentSummaryView;
    long long  _pearlState;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    PKPassPeerPaymentAccountResolutionView * _peerPaymentAccountResolutionView;
    PKPeerPaymentService * _peerPaymentService;
    bool  _pendingAutomaticAuthorization;
    NSMutableArray * _pendingGlyphStateCompletionHandlers;
    long long  _pendingPayState;
    bool  _pendingPayStateAnimated;
    long long  _pendingPayStateGlyphState;
    bool  _pendingPayStateGlyphStateAnimated;
    bool  _pendingPayStateGlyphStateQueued;
    NSString * _pendingPayStateTextOverride;
    NSNumber * _pendingPresentationContextState;
    PKPhysicalButtonView * _physicalButtonView;
    bool  _presentingPasscode;
    bool  _recognizing;
    bool  _requiresPasscodeDismissal;
    bool  _returnToSummaryOnFingerOff;
    long long  _style;
    NSObject<OS_dispatch_source> * _summaryAuthenticationTimer;
    UIView * _summaryView;
    PKPeerPaymentContactResolver * _transactionFooterContactResolver;
    NSObject<OS_dispatch_source> * _transactionResolutionTimer;
    long long  _transactionSubstate;
    NSObject<OS_dispatch_source> * _transactionTerminalResponseTimer;
    unsigned long long  _transactionUpdateCounter;
    PKFooterTransactionView * _transactionView;
    NSMutableArray * _transitionCompletionHandlers;
    bool  _transitioning;
    NSMutableArray * _valueAddedPasses;
    PKPassValueAddedServiceInfoView * _valueAddedServiceInfoView;
    bool  _valueAddedServiceInfoViewHidden;
    bool  _waitingForGlyphView;
    bool  _waitingForPasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)initialUserIntentAssumptionWithPaymentService:(id)arg1;

- (void).cxx_destruct;
- (void)_activateForPayment;
- (void)_activateForPaymentWithApplication:(id)arg1;
- (void)_activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_addTransitionCompletionHandler:(id /* block */)arg1;
- (void)_applyLatestContentToViews;
- (void)_applyLatestTransactionContentWithCompletion:(id /* block */)arg1;
- (void)_applyPayState:(long long)arg1;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_applyPaymentIndefiniteSuccessState;
- (void)_applyPresentationPayState:(long long)arg1;
- (void)_applyTerminalTransactionSubstateWithSuccess:(bool)arg1 reset:(bool)arg2;
- (bool)_authenticationAllowed;
- (void)_authorizeForTransactionWithCredential:(id)arg1 authenticationIdentifier:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_beginPasscodeOnlyAuthentication;
- (void)_beginPaymentAuthorization;
- (void)_beginPaymentAuthorizationWithImmediatePasscode:(bool)arg1;
- (void)_beginSummaryAuthenticationIfNecessary;
- (void)_beginTerminalResponseTimeout;
- (id)_buttonForState:(long long)arg1;
- (id)_buttonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (bool)_canAuthenticateWithBiometrics;
- (bool)_canAuthenticateWithPasscode;
- (void)_cancelBiometricRecognitionAndPromptUserAction:(long long)arg1;
- (void)_cancelHoldingTerminalTransactionSubstateIfNecessary;
- (void)_cancelSummaryAuthenticationTimer;
- (void)_cancelTerminalResponseTimeout;
- (void)_commitPendingPayStateAnimated:(bool)arg1;
- (void)_configureForPaymentWithPaymentPass:(id)arg1 context:(id)arg2;
- (void)_configureForStyle:(long long)arg1 context:(id)arg2;
- (void)_configureForValueAddedServiceWithPass:(id)arg1 context:(id)arg2;
- (void)_didAuthorizePaymentApplicationWithAuthenticationIdentifier:(unsigned long long)arg1;
- (void)_dismissPile;
- (id)_emphasisButtonForState:(long long)arg1;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 playSystemSound:(bool)arg3;
- (void)_endContactlessPaymentSession;
- (void)_endPaymentAuthorization;
- (void)_endTransition:(bool)arg1;
- (void)_executePendingGlyphStateCompletionHandlers:(bool)arg1;
- (void)_executeTransitionCompletionHandlers:(bool)arg1;
- (id)_filledButtonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (void)_finishHoldingTerminalTransactionSubstateAfterDelay:(double)arg1;
- (void)_handleContactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (bool)_hasValueAddedServicePasses;
- (bool)_isBackgrounded;
- (bool)_isBackgroundedForReasons:(unsigned long long)arg1;
- (bool)_isDeactivated;
- (bool)_isDeactivatedForReasons:(unsigned long long)arg1;
- (bool)_isDemoMode;
- (bool)_isForegroundActive;
- (bool)_isSummaryViewVisible;
- (bool)_isTransactionViewVisible;
- (void)_layoutPaymentSubviews;
- (void)_layoutValueAddedServiceSubviews;
- (bool)_passContainsPaymentApplication:(id)arg1;
- (void)_passcodeAuthenticationButtonPressed:(id)arg1;
- (id)_passcodeButtonTitle;
- (void)_passcodeFallbackButtonPressed:(id)arg1;
- (id)_paymentApplicationForAutomaticAuthorization;
- (id)_paymentApplicationForAutomaticAuthorizationFromPaymentApplications:(id)arg1;
- (void)_performActivationStateUpdate:(id /* block */)arg1;
- (void)_performAuthentication;
- (id)_preArmButtonTitle;
- (void)_prearmButtonPressed:(id)arg1;
- (void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2;
- (void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 payState:(long long)arg3;
- (void)_processPaymentTransactionForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_processValueAddedServiceTransactionsForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_promoteToAuthorizedStateIfPossible;
- (bool)_recognizingBiometrics;
- (void)_resetActiveApplicationForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_resetCardEmulationWithCompletion:(id /* block */)arg1;
- (void)_resetToIdleState;
- (void)_resetToIdleStateAfterDelay:(double)arg1;
- (void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(bool)arg2;
- (void)_resetToIdleStateWhileIgnoringField:(bool)arg1;
- (bool)_restartPaymentAuthorization;
- (void)_setGlyphState:(long long)arg1 animated:(bool)arg2;
- (void)_setGlyphState:(long long)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_setValueAddedServiceInfoViewHidden:(bool)arg1;
- (void)_setValueAddedServiceInfoViewHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setValueAddedServicePasses:(id)arg1;
- (bool)_shouldDisplayTransaction:(id)arg1;
- (bool)_shouldDisplayTransactionView;
- (bool)_shouldShowTerminalIsNotRequestingPaymentError;
- (bool)_showPeerPaymentAccountResolutionView;
- (bool)_showPhysicalButtonView;
- (bool)_showSummaryState;
- (void)_showTerminalIsNotRequestingPaymentError;
- (void)_showTerminalIsRequestingPaymentError;
- (bool)_showTransactionViewDuringPayment;
- (void)_startBiometricRecognitionAnimation;
- (void)_stopBiometricRecognitionAnimationWithSuccess:(bool)arg1 completion:(id /* block */)arg2;
- (void)_transitionToState:(long long)arg1 withTextOverride:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_transitionViewsAnimated:(bool)arg1;
- (void)_updateApplicationsView;
- (void)_updateAuthenticatorState;
- (void)_updateContentViewsWithMessage:(id)arg1 appLaunchToken:(id)arg2;
- (void)_updateContentViewsWithTransaction:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1 transitProperties:(id)arg2;
- (void)_updateContentViewsWithTransitProperties:(id)arg1;
- (double)_valueAddedServiceInfoViewTopMargin;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticatorWillRestartEvaluation:(id)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)contactlessInterfaceSessionDidExitField:(id)arg1;
- (void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1;
- (void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1;
- (void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
- (void)contactlessInterfaceSessionDidStartTransaction:(id)arg1;
- (void)contactlessInterfaceSessionDidTerminate:(id)arg1;
- (void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (void)dismissPasscodeViewController;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3 paymentSession:(id)arg4 paymentService:(id)arg5;
- (void)invalidate;
- (bool)isPassAuthorized;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)payStateView:(id)arg1 revealingCheckmark:(bool)arg2;
- (void)paymentApplicationView:(id)arg1 didSelectApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentServiceReceivedInterruption;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)summaryView:(id)arg1 didArchiveMessage:(id)arg2;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
