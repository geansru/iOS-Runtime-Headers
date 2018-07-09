/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetVisibilityManager : NSObject {
    <WGWidgetVisibilityDelegate> * _delegate;
    bool  _delegateRespondsToWidgetVisibilityDidChange;
    NSMutableDictionary * _extensionHashByIdentifier;
    NSMutableDictionary * _mobileGestaltAnswerByWidgetTag;
    struct MGNotificationTokenStruct { } * _mobileGestaltNotificationToken;
    NSMutableSet * _mobileGestaltQuestions;
    NSMutableDictionary * _visibilityDefaultValueByIdentifier;
    NSMutableSet * _visibilityOverridenIdentifiers;
    NSMutableDictionary * _visibilityPreferenceByIdentifier;
    NSMutableDictionary * _widgetTagsByIdentifier;
}

@property (nonatomic) <WGWidgetVisibilityDelegate> *delegate;
@property (getter=_mobileGestaltAnswerByWidgetTag, nonatomic, retain) NSMutableDictionary *mobileGestaltAnswerByWidgetTag;

- (void).cxx_destruct;
- (id)_allWidgetTags;
- (id)_mobileGestaltAnswerByWidgetTag;
- (void)_registerForVisiblityPreferenceChanges;
- (void)_unregisterForVisiblityPreferenceChanges;
- (void)_updateMobileGestaltQuestions;
- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg1;
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg1;
- (bool)_updateWidgetVisibilityPreference:(id)arg1;
- (bool)_updateWidgetVisibilityPreferences;
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg1;
- (void)_widgetVisibilityChanged;
- (void)_widgetVisibilityPreferencesChanged;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isWidgetWithIdentifierVisible:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMobileGestaltAnswerByWidgetTag:(id)arg1;
- (void)updateVisibilityForExtensions:(id)arg1;

@end
