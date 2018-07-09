/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation> {
    ServiceState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ServiceState *state;
@property (readonly) Class superclass;

+ (int)locationType:(id)arg1;

- (void).cxx_destruct;
- (void)changeOrSetVenues:(id)arg1 isChange:(bool)arg2;
- (void)changeVenues:(id)arg1;
- (id)endpointName;
- (void)gpsEstimateAvailable:(id)arg1;
- (void)gpsSignalQualityAvailable:(id)arg1;
- (id)initWithApiKey:(id)arg1;
- (id)initWithApiKey:(id)arg1 onServer:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (void)outdoorLocationAvailable:(id)arg1;
- (void)playbackDatarun:(id)arg1;
- (id)remoteObjectProtocol;
- (void)setApiKey:(id)arg1;
- (void)setApiKey:(id)arg1 onServer:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setState:(id)arg1;
- (void)setVenues:(id)arg1;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithMode:(long long)arg1;
- (id)state;
- (void)stopUpdatingLocation;
- (void)updateOperatingMode:(long long)arg1;
- (bool)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;
- (void)withinQueueReinitializeRemoteState;
- (void)withinQueueSetDelegate:(id)arg1;

@end
