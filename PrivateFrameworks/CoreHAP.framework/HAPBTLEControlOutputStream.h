/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEControlOutputStream : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _complete;
    unsigned long long  _controlPayloadWrittenLength;
    <HAPBTLEControlOutputStreamDelegate> * _delegate;
    unsigned long long  _mtuLength;
    bool  _open;
    NSOperationQueue * _operationQueue;
    NSData * _payload;
    double  _timeoutInterval;
    HAPBTLETransactionIdentifier * _transactionIdentifier;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) unsigned long long controlPayloadWrittenLength;
@property <HAPBTLEControlOutputStreamDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long mtuLength;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSData *payload;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (nonatomic, readonly) unsigned char type;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_complete;
- (id)_nextPacketWithMaximumLength:(unsigned long long)arg1 error:(id*)arg2;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(id /* block */)arg1;
- (id)clientQueue;
- (void)close;
- (id /* block */)completionHandler;
- (unsigned long long)controlPayloadWrittenLength;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned long long)arg4 timeoutInterval:(double)arg5;
- (bool)isComplete;
- (bool)isOpen;
- (unsigned long long)mtuLength;
- (void)open;
- (id)operationQueue;
- (id)payload;
- (unsigned long long)remainingControlPayloadLength;
- (void)sendNextPayloadFragment;
- (void)setComplete:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setControlPayloadWrittenLength:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOpen:(bool)arg1;
- (id)shortDescription;
- (double)timeoutInterval;
- (id)transactionIdentifier;
- (unsigned char)type;

@end
