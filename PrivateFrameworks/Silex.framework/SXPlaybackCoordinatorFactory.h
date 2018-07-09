/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlaybackCoordinatorFactory : NSObject <SXPlaybackCoordinatorFactory> {
    <SXAVPlayerFactoryProviding> * _playerFactoryProvider;
    <SXVideoProviderProviding> * _videoProviderProvider;
    <SXVolumeProviding> * _volumeProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXAVPlayerFactoryProviding> *playerFactoryProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXVideoProviderProviding> *videoProviderProvider;
@property (nonatomic, readonly) <SXVolumeProviding> *volumeProvider;

- (void).cxx_destruct;
- (id)createPlaybackCoordinatorForVideo:(id)arg1;
- (id)initWithVolumeProvider:(id)arg1 videoProviderProvider:(id)arg2 playerFactoryProvider:(id)arg3;
- (id)playerFactoryProvider;
- (id)videoProviderProvider;
- (id)volumeProvider;

@end
