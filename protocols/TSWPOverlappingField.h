/* Generated by RuntimeBrowser.
 */

@protocol TSWPOverlappingField <NSObject>

@required

- (id)copyWithContext:(TSPObjectContext *)arg1;
- (bool)isEquivalentToObject:(id <TSWPOverlappingField>)arg1;
- (TSWPStorage *)parentStorage;
- (void)setParentStorage:(TSWPStorage *)arg1;
- (NSString *)textAttributeUUIDString;
- (void)wasAddedToDocumentRoot:(TSKDocumentRoot *)arg1 dolcContext:(TSKAddedToDocumentContext *)arg2;
- (void)wasRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)willBeAddedToDocumentRoot:(TSKDocumentRoot *)arg1 dolcContext:(TSKAddedToDocumentContext *)arg2;
- (void)willBeRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;

@end
