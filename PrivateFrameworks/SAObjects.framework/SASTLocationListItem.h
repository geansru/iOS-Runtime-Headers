/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUIDecoratedText *formattedDistance;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASTTemplateStarRating *rating;
@property (nonatomic, retain) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;

+ (id)locationListItem;
+ (id)locationListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)encodedClassName;
- (id)formattedDistance;
- (id)groupIdentifier;
- (id)rating;
- (void)setAction:(id)arg1;
- (void)setFormattedDistance:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
