/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@class <AXRemoteElementChildrenDelegate>, NSMutableSet, NSString;

@interface AXRemoteElement : NSObject {
    id _accessibilityContainer;
    NSMutableSet *_allChildren;
    unsigned int _contextId;
    unsigned int _machPort;
    <AXRemoteElementChildrenDelegate> *_remoteChildrenDelegate;
    int _remotePid;
    NSString *_uuid;
    bool_deniesDirectAppConnection;
    bool_onClientSide;
    bool_remoteSideShouldActAsOpaqueElementProvider;
}

@property id accessibilityContainer;
@property unsigned int contextId;
@property bool deniesDirectAppConnection;
@property unsigned int machPort;
@property bool onClientSide;
@property <AXRemoteElementChildrenDelegate> * remoteChildrenDelegate;
@property int remotePid;
@property bool remoteSideShouldActAsOpaqueElementProvider;
@property(retain) NSString * uuid;
@property(readonly) unsigned long long uuidHash;

+ (void)initialize;
+ (bool)registerRemoteElement:(id)arg1;
+ (id)remoteElementForBlock:(id)arg1;
+ (id)remoteElementForContextId:(unsigned int)arg1;

- (id)_accessibilityFirstElement;
- (id)_accessibilityLastElement;
- (id)_accessibilityResponderElement;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_remoteElementWithAttribute:(int)arg1;
- (id)accessibilityContainer;
- (id)accessibilityContainerElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (bool)accessibilityViewIsModal;
- (unsigned int)contextId;
- (void)dealloc;
- (bool)deniesDirectAppConnection;
- (id)description;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (bool)isAccessibilityOpaqueElementProvider;
- (unsigned int)machPort;
- (bool)onClientSide;
- (void)platformCleanup;
- (void)platformCleanup;
- (id)remoteChildrenDelegate;
- (int)remotePid;
- (bool)remoteSideShouldActAsOpaqueElementProvider;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setDeniesDirectAppConnection:(bool)arg1;
- (void)setMachPort:(unsigned int)arg1;
- (void)setOnClientSide:(bool)arg1;
- (void)setRemoteChildrenDelegate:(id)arg1;
- (void)setRemotePid:(int)arg1;
- (void)setRemoteSideShouldActAsOpaqueElementProvider:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)unregister;
- (id)uuid;
- (unsigned long long)uuidHash;

@end