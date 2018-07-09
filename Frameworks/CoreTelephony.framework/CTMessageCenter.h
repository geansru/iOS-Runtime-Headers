/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageCenter : NSObject

+ (id)sharedMessageCenter;

- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg1;
- (void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3;
- (id)allIncomingMessages;
- (void)dealloc;
- (id)decodeMessage:(id)arg1;
- (id)deferredMessageWithId:(unsigned int)arg1;
- (id)encodeMessage:(id)arg1;
- (bool)getCharacterCount:(long long*)arg1 andMessageSplitThreshold:(long long*)arg2 forSmsText:(id)arg3;
- (int)incomingMessageCount;
- (id)incomingMessageWithId:(unsigned int)arg1;
- (id)incomingMessageWithId:(unsigned int)arg1 isDeferred:(bool)arg2;
- (id)init;
- (struct { int x1; int x2; })isDeliveryReportsEnabled:(bool*)arg1;
- (bool)isMmsConfigured;
- (bool)isMmsEnabled;
- (struct { int x1; int x2; })send:(id)arg1;
- (struct { int x1; int x2; })send:(id)arg1 withMoreToFollow:(bool)arg2;
- (bool)sendBinarySMS:(id)arg1 trackingID:(unsigned int*)arg2;
- (struct { int x1; int x2; })sendMMS:(id)arg1;
- (struct { int x1; int x2; })sendMMSFromData:(id)arg1 messageId:(unsigned int)arg2;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id*)arg2;
- (struct { int x1; int x2; })sendSMS:(id)arg1 withMoreToFollow:(bool)arg2 trackingID:(unsigned int*)arg3;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 trackingID:(unsigned int*)arg4;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned int)arg4;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(bool)arg4 withID:(unsigned int)arg5;
- (void)setDeliveryReportsEnabled:(bool)arg1;
- (bool)simulateDeferredMessage;
- (bool)simulateSmsReceived:(id)arg1;
- (id)statusOfOutgoingMessages;

@end
