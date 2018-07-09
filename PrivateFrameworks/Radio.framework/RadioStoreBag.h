/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStoreBag : NSObject {
    NSArray * _amdDomains;
    NSString * _leaseCertificateURLString;
    NSDictionary * _mescalRequestWhitelist;
    NSDictionary * _mescalResponseWhitelist;
    NSString * _mescalSetupCertURLString;
    NSString * _mescalSetupURLString;
    SSVPlatformContext * _platformContext;
    NSNumber * _shouldSendKBSyncDataValue;
    NSString * _srdnldURLString;
    NSString * _storeFrontSuffix;
    NSDictionary * _tiltDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *URLBagDictionary;
@property (getter=isAdFreeRadioEnabled, nonatomic, readonly) bool adFreeRadioEnabled;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSString *leaseCertificateURLString;
@property (nonatomic, readonly) NSString *mescalCertificateURLString;
@property (nonatomic, readonly) NSString *mescalSetupURLString;
@property (nonatomic, readonly) NSString *platformLookupURLString;
@property (nonatomic, readonly) NSDictionary *radioConfigurationDictionary;
@property (nonatomic, readonly) bool shouldSendKBSyncData;
@property (nonatomic, readonly) NSString *storeFrontSuffix;
@property (nonatomic, readonly) NSString *streamingDownloadURLString;

- (void).cxx_destruct;
- (id)URLBagDictionary;
- (id)_cacheRepresentation;
- (id)_initWithCacheRepresentation:(id)arg1;
- (id)_initWithURLBagDictionary:(id)arg1;
- (id)_platformContext;
- (id)baseURL;
- (bool)isAdFreeRadioEnabled;
- (id)leaseCertificateURLString;
- (id)mescalCertificateURLString;
- (id)mescalSetupURLString;
- (id)platformLookupURLString;
- (id)radioConfigurationDictionary;
- (bool)shouldMescalSignRequestWithURL:(id)arg1;
- (bool)shouldMescalVerifyResponseFromURL:(id)arg1;
- (bool)shouldSendKBSyncData;
- (id)storeFrontSuffix;
- (id)streamingDownloadURLString;

@end
