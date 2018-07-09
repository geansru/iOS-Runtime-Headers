/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityLocation : NSObject <NSCopying> {
    NSString * _exportingPeerID;
    NSString * _filename;
    unsigned long long  _hash;
    bool  _isDirectory;
    bool  _isRootUbiquitous;
    NSString * _modelVersionHash;
    NSArray * _otherPathComponents;
    NSString * _storeName;
    int  _ubiquityLocationType;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _ubiquityRootLocationPath;
}

@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isRootUbiquitous;
@property (getter=isTransactionLogLocation, nonatomic, readonly) bool isTransactionLogLocation;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic, readonly) NSArray *otherPathComponents;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) int ubiquityLocationType;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (nonatomic, readonly) NSString *ubiquityRootLocationPath;
@property (nonatomic, readonly) bool usesBaselineDirectory;
@property (nonatomic, readonly) bool usesBaselineStagingDirectory;
@property (nonatomic, readonly) bool usesCurrentBaselineDirectory;
@property (nonatomic, readonly) bool usesNosyncDirectory;
@property (nonatomic, readonly) bool usesStagingLogDirectory;
@property (nonatomic, readonly) bool usesTemporaryLogDirectory;

+ (id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id*)arg2;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6;
+ (id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1;
+ (id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createPeerBaselineFileSafeSaveLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(bool)arg2;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1;
+ (id)createVersionHashStringForModel:(id)arg1;
+ (void)initialize;
+ (bool)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)localLocationSentinel;
+ (id)locationSentinel;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;
+ (void)setLocationSentinel:(id)arg1;

- (bool)__isDirectory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createFullPath;
- (id)createFullURL;
- (id)createRelativePath;
- (void)dealloc;
- (id)description;
- (id)exportingPeerID;
- (bool)fileAtLocationIsDownloaded:(id*)arg1;
- (bool)fileAtLocationIsUploaded:(id*)arg1;
- (bool)fileExistsAtLocation;
- (bool)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id*)arg2;
- (id)filename;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUbiquityRootPath:(id)arg1;
- (id)initWithUbiquityRootURL:(id)arg1;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToURL:(id)arg1;
- (bool)isRootUbiquitous;
- (bool)isTransactionLogLocation;
- (id)modelVersionHash;
- (id)otherPathComponents;
- (bool)removeFileAtLocation:(id)arg1 error:(id*)arg2;
- (void)setExportingPeerID:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setHash:(unsigned long long)arg1;
- (void)setIsRootUbiquitous:(bool)arg1;
- (void)setModelVersionHash:(id)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (id)storeName;
- (int)ubiquityLocationType;
- (id)ubiquityRootLocation;
- (id)ubiquityRootLocationPath;
- (void)updateHash;
- (bool)usesBaselineDirectory;
- (bool)usesBaselineStagingDirectory;
- (bool)usesCurrentBaselineDirectory;
- (bool)usesNosyncDirectory;
- (bool)usesStagingLogDirectory;
- (bool)usesTemporaryLogDirectory;

@end
