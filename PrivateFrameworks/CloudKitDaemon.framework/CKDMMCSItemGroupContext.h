/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol> {
    CKDMMCS * _MMCS;
    NSMapTable * _MMCSItemsByItemID;
    CKDMMCSItem * _MMCSPackageSectionItem;
    id /* block */  _commandBlock;
    id /* block */  _completionBlock;
    NSNumber * _hasConformingOperation;
    CKDMMCSItemGroup * _itemGroup;
    long long  _mmcsOperationType;
    CKDOperation * _operation;
    id  _operationInfo;
    id /* block */  _progressBlock;
    id /* block */  _startBlock;
}

@property (nonatomic, retain) CKDMMCS *MMCS;
@property (nonatomic, retain) NSMapTable *MMCSItemsByItemID;
@property (nonatomic, retain) CKDMMCSItem *MMCSPackageSectionItem;
@property (nonatomic, copy) id /* block */ commandBlock;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSNumber *hasConformingOperation;
@property (nonatomic, retain) CKDMMCSItemGroup *itemGroup;
@property (nonatomic) long long mmcsOperationType;
@property (nonatomic) CKDOperation *operation;
@property (nonatomic, retain) id operationInfo;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, copy) id /* block */ startBlock;

- (void).cxx_destruct;
- (id)MMCS;
- (id)MMCSItemsByItemID;
- (id)MMCSPackageSectionItem;
- (void)_cleanupMMCSItems;
- (void)_cleanupMMCSRegisterItems;
- (bool)_setupGetMMCSItemsWithError:(id*)arg1;
- (bool)_setupMMCSItemsWithError:(id*)arg1;
- (bool)_setupPutMMCSItemsWithError:(id*)arg1;
- (bool)_setupRegisterMMCSItemsWithError:(id*)arg1;
- (void)_startTrackingMMCSItems:(id)arg1;
- (void)_stopTrackingMMCSItems:(id)arg1;
- (void)cancel;
- (id /* block */)commandBlock;
- (id /* block */)completionBlock;
- (id)conformingOperation;
- (void)didCloseItemReaderWriter:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (void)didCompleteRequestWithError:(id)arg1;
- (id)didGetFileMetadataItemReaderWriter:(id)arg1 fileMetadata:(id)arg2 error:(id)arg3;
- (void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4 results:(id)arg5;
- (void)didGetMetricsForRequest:(id)arg1;
- (void)didOpenItemReaderWriter:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 results:(id)arg3;
- (void)didPutSectionWithSignature:(id)arg1 results:(id)arg2;
- (bool)didReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)arg1;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)arg1 error:(id*)arg2;
- (struct MMCSItemReaderWriter { }*)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id*)arg2;
- (void)handleCommand:(id)arg1 forItem:(id)arg2;
- (id)hasConformingOperation;
- (id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(id /* block */)arg4 command:(id /* block */)arg5 start:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (id)itemGroup;
- (long long)mmcsOperationType;
- (id)operation;
- (id)operationInfo;
- (id /* block */)progressBlock;
- (void)setCommandBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setHasConformingOperation:(id)arg1;
- (void)setItemGroup:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMMCSItemsByItemID:(id)arg1;
- (void)setMMCSPackageSectionItem:(id)arg1;
- (void)setMmcsOperationType:(long long)arg1;
- (void)setOperation:(id)arg1;
- (void)setOperationInfo:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setStartBlock:(id /* block */)arg1;
- (bool)shouldFetchAssetContentInMemory;
- (void)start;
- (id /* block */)startBlock;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 results:(id)arg4;
- (void)updateProgressForPackageSectionState:(int)arg1 progress:(double)arg2 results:(id)arg3;
- (bool)willCloseItemReaderWriter:(id)arg1 error:(id*)arg2;
- (bool)willGetFileMetadataItemReaderWriter:(id)arg1 error:(id*)arg2;
- (bool)willOpenItemReaderWriter:(id)arg1 error:(id*)arg2;
- (bool)willReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;

@end
