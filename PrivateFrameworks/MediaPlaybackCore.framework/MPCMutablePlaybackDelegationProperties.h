/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties

@property (nonatomic, copy) NSString *deviceGUID;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (nonatomic, copy) NSString *requestUserAgent;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic) long long systemReleaseType;
@property (nonatomic, copy) NSTimeZone *timeZone;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDeviceGUID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPrivateListeningStateSource:(id)arg1;
- (void)setRequestUserAgent:(id)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setSystemReleaseType:(long long)arg1;
- (void)setTimeZone:(id)arg1;

@end
