/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormInputSession : NSObject <_WKFormInputSession> {
    bool  _accessoryViewShouldNotShow;
    WKContentView * _contentView;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _customInputView;
    struct RetainPtr<WKFocusedElementInfo> { 
        void *m_ptr; 
    }  _focusedElementInfo;
    bool  _forceSecureTextEntry;
    struct RetainPtr<NSArray<UITextSuggestion *> > { 
        void *m_ptr; 
    }  _suggestions;
}

@property (nonatomic, copy) NSString *accessoryViewCustomButtonTitle;
@property (nonatomic) bool accessoryViewShouldNotShow;
@property (nonatomic, retain) UIView *customInputView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_WKFocusedElementInfo> *focusedElementInfo;
@property (nonatomic) bool forceSecureTextEntry;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessoryViewCustomButtonTitle;
- (bool)accessoryViewShouldNotShow;
- (id)customInputView;
- (id)focusedElementInfo;
- (bool)forceSecureTextEntry;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)setAccessoryViewCustomButtonTitle:(id)arg1;
- (void)setAccessoryViewShouldNotShow:(bool)arg1;
- (void)setCustomInputView:(id)arg1;
- (void)setForceSecureTextEntry:(bool)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;
- (id)userObject;

@end
