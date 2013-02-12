/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString;

@interface BBBulletinTransaction : NSObject {
    NSString *_bulletinID;
    unsigned int _transactionID;
}

@property(readonly) NSString * bulletinID;
@property(readonly) unsigned int transactionID;

+ (id)transactionWithBulletinID:(id)arg1;

- (id)bulletinID;
- (void)dealloc;
- (unsigned int)incrementTransactionID;
- (id)initWithBulletinID:(id)arg1;
- (unsigned int)transactionID;

@end