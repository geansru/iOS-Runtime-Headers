/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCModelRadioPlaybackQueueExternalFeederSection : NSObject <_MPCModelRadioPlaybackQueueSection> {
    NSString * _itemID;
    MPQueueFeeder * _queueFeeder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfItems;
@property (readonly) Class superclass;

+ (id)sectionWithItemWithItemID:(id)arg1 inFeeder:(id)arg2;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)arg1;

@end
