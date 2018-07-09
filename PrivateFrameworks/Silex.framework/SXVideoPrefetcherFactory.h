/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPrefetcherFactory : NSObject <SXVideoPrefetcherFactory> {
    <SXVideoBufferObserverFactory> * _bufferObserverFactory;
    <SXVideoLoadingProgressObserverFactory> * _loadingProgressObserverFactory;
    <SXVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SXPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
    <SXVideoPlaybackProgressObserverFactory> * _playbackProgressObserverFactory;
    <SXVideoPrefetchPolicyHandler> * _prefetchPolicyHandler;
}

@property (nonatomic, readonly) <SXVideoBufferObserverFactory> *bufferObserverFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideoLoadingProgressObserverFactory> *loadingProgressObserverFactory;
@property (nonatomic, readonly) <SXVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SXPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (nonatomic, readonly) <SXVideoPlaybackProgressObserverFactory> *playbackProgressObserverFactory;
@property (nonatomic, readonly) <SXVideoPrefetchPolicyHandler> *prefetchPolicyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bufferObserverFactory;
- (id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playbackCoordinatorProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6;
- (id)loadingProgressObserverFactory;
- (id)loadingStateObserverFactory;
- (id)playbackCoordinatorProvider;
- (id)playbackProgressObserverFactory;
- (id)prefetchPolicyHandler;

@end
