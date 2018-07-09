/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibrary : NSObject <NSSecureCoding> {
    id  __MLCoreStorage;
    NSMutableArray * _additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> * _additionalLibraryFilterPredicatesAccessQueue;
    long long  _cloudFilteringType;
    QueryCriteriaResultsCache * _collectionsForCriteriaCache;
    QueryCriteriaResultsCache * _collectionsResultSetsForCriteriaCache;
    NSPointerArray * _connectionAssertions;
    NSObject<OS_dispatch_queue> * _connectionAssertionsQueue;
    float  _connectionProgress;
    NSMutableDictionary * _countOfCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache * _countOfCollectionsForCriteriaCache;
    NSMutableDictionary * _countOfItemsDidLoadForCriteria;
    QueryCriteriaResultsCache * _countOfItemsForCriteriaCache;
    bool  _determinedHasAudibleAudioBooks;
    unsigned int  _determinedHasAudiobooks;
    bool  _determinedHasCompilations;
    unsigned int  _determinedHasComposers;
    unsigned int  _determinedHasGeniusMixes;
    bool  _determinedHasHomeVideos;
    bool  _determinedHasITunesU;
    unsigned int  _determinedHasMedia;
    bool  _determinedHasMovieRentals;
    bool  _determinedHasMovies;
    bool  _determinedHasMusicVideos;
    unsigned int  _determinedHasPlaylists;
    unsigned int  _determinedHasPodcasts;
    unsigned int  _determinedHasSongs;
    bool  _determinedHasTVShows;
    unsigned int  _determinedHasUbiquitousBookmarkableItems;
    bool  _determinedHasVideoITunesU;
    bool  _determinedHasVideoPodcasts;
    bool  _determinedHasVideos;
    bool  _disconnectAfterReleasingAssertions;
    NSObject<OS_dispatch_queue> * _entityCacheQueue;
    bool  _filteringDisabled;
    NSObject<OS_dispatch_queue> * _fixedQueue;
    bool  _hasAudibleAudioBooks;
    unsigned int  _hasAudiobooks;
    NSMutableDictionary * _hasCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache * _hasCollectionsForCriteriaCache;
    bool  _hasCompilations;
    unsigned int  _hasComposers;
    unsigned int  _hasGeniusMixes;
    bool  _hasHomeVideos;
    bool  _hasITunesU;
    NSMutableDictionary * _hasItemsDidLoadForCriteria;
    QueryCriteriaResultsCache * _hasItemsForCriteriaCache;
    unsigned int  _hasMedia;
    bool  _hasMovieRentals;
    bool  _hasMovies;
    bool  _hasMusicVideos;
    unsigned int  _hasPlaylists;
    unsigned int  _hasPodcasts;
    unsigned int  _hasSongs;
    bool  _hasTVShows;
    unsigned int  _hasUbiquitousBookmarkableContent;
    bool  _hasVideoITunesU;
    bool  _hasVideoPodcasts;
    bool  _hasVideos;
    QueryCriteriaResultsCache * _itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache * _itemsForCriteriaCache;
    long long  _libraryChangeObservers;
    <MPMediaLibraryDataProviderPrivate> * _libraryDataProvider;
    NSArray * _notificationObservers;
    unsigned char  _originalCellNetworkFlags;
    unsigned char  _originalWiFiNetworkFlags;
    long long  _removalReason;
}

@property (nonatomic, retain) id _MLCoreStorage;
@property (nonatomic, readonly) struct shared_ptr<mlcore::DeviceLibrary> { struct DeviceLibrary {} *x1; struct __shared_weak_count {} *x2; } _MediaLibrary_coreLibrary;
@property (nonatomic, readonly) NSString *_syncValidity;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) ML3MusicLibrary *ml3Library;
@property (nonatomic, readonly) NSURL *protectedContentSupportStorageURL;
@property (nonatomic) long long removalReason;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)_endDiscoveringMediaLibrariesIfAllowed;
+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_mediaLibraries;
+ (void)addLibraryDataProvider:(id)arg1;
+ (long long)authorizationStatus;
+ (void)beginDiscoveringMediaLibraries;
+ (bool)companionDeviceActiveStoreAccountIsSubscriber;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (void)initialize;
+ (bool)isLibraryServerDisabled;
+ (id)libraryDataProviders;
+ (id)mediaLibraries;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;
+ (void)requestAuthorization:(id /* block */)arg1;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (void)setLibraryServerDisabled:(bool)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)sharedMediaLibraries;
+ (bool)supportsSecureCoding;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;

- (void).cxx_destruct;
- (id)URLForHomeSharingRequest:(id)arg1;
- (id)_MLCoreStorage;
- (struct shared_ptr<mlcore::DeviceLibrary> { struct DeviceLibrary {} *x1; struct __shared_weak_count {} *x2; })_MediaLibrary_coreLibrary;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (bool)_checkHasContent:(bool*)arg1 determined:(bool*)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(id /* block */)arg4;
- (bool)_checkHasContent:(bool*)arg1 determined:(bool*)arg2 queryHasEntitiesBlock:(id /* block */)arg3;
- (void)_clearCachedContentDataAndResultSets:(bool)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(bool)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_disconnect;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id /* block */)arg5 loadValueFromDataProviderBlock:(id /* block */)arg6;
- (bool)_hasCollectionsForQueryCriteria:(id)arg1;
- (bool)_hasItemsForQueryCriteria:(id)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemsForQueryCriteria:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(id /* block */)arg1;
- (void)_setupNotifications;
- (id)_syncValidity;
- (void)_tearDownNotifications;
- (void)addAdvertisementItemWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(bool)arg2 completion:(id /* block */)arg3;
- (void)addItemWithProductID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addLibraryFilterPredicate:(id)arg1;
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(id /* block */)arg2;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(bool)arg2;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)addTracksToMyLibrary:(id)arg1;
- (id)additionalLibraryFilterPredicates;
- (id)artworkDataSource;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)clearLocationPropertiesOfItem:(id)arg1;
- (long long)cloudFilteringType;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (bool)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(bool)arg3;
- (id)completeMyCollectionArtworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (float)connectionProgress;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (id)decodeItemWithCoder:(id)arg1;
- (bool)deleteDatabaseProperty:(id)arg1;
- (bool)deleteItems:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)downloadAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (id)entityCache;
- (id)entityWithLibraryURL:(id)arg1;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2;
- (id)entityWithSpotlightIdentifier:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)errorResolverForItem:(id)arg1;
- (unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(id /* block */)arg2;
- (void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasAlbums;
- (bool)hasArtists;
- (bool)hasAudibleAudioBooks;
- (bool)hasAudioITunesUContent;
- (bool)hasAudiobooks;
- (bool)hasCompilations;
- (bool)hasComposers;
- (bool)hasGeniusMixes;
- (bool)hasGenres;
- (bool)hasHomeVideos;
- (bool)hasITunesUContent;
- (bool)hasMedia;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)hasMovieRentals;
- (bool)hasMovies;
- (bool)hasMusicVideos;
- (bool)hasPlaylists;
- (bool)hasPodcasts;
- (bool)hasSongs;
- (bool)hasTVShows;
- (bool)hasUbiquitousBookmarkableItems;
- (bool)hasVideoITunesUContent;
- (bool)hasVideoPodcasts;
- (bool)hasVideos;
- (unsigned long long)hash;
- (unsigned int)homeSharingDatabaseID;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentThreadInTransaction;
- (bool)isEqual:(id)arg1;
- (bool)isGeniusEnabled;
- (bool)isValidAssetURL:(id)arg1;
- (bool)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(bool)arg2;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (id)libraryDataProvider;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (id)ml3Library;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (void)performReadTransactionWithBlock:(id /* block */)arg1;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)performTransactionWithBlock:(id /* block */)arg1;
- (id)playbackHistoryPlaylist;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(id /* block */)arg4;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (id)protectedContentSupportStorageURL;
- (bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (long long)removalReason;
- (bool)removeItems:(id)arg1;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (bool)removePlaylist:(id)arg1;
- (bool)requiresAuthentication;
- (void)setCloudFilteringType:(long long)arg1;
- (void)setLibraryFilterPredicates;
- (void)setRemovalReason:(long long)arg1;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
- (void)set_MLCoreStorage:(id)arg1;
- (long long)status;
- (unsigned long long)syncGenerationID;
- (unsigned long long)syncPlaylistId;
- (id)syncValidity;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (bool)writable;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_entityWithContentItemIdentifierCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)_MPU_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)MPC_entityWithContentItemIdentifierCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)_MPC_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;

@end
