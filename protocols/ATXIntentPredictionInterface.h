/* Generated by RuntimeBrowser.
 */

@protocol ATXIntentPredictionInterface

@required

- (void)getIntentPredictionsForCandidateBundleIdentifiers:(void *)arg1 candidateIntentTypes:(void *)arg2 intentUILimit:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXIntentResponse *, NSError *, void*
- (void)sendFeedbackWithResponse:(ATXIntentResponse *)arg1;

@end
