/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlaybackManager : NSObject <SXVideoPlaybackController, SXVideoPlaybackObserver, SXVideoSeeking, SXVideoTransitionObserver> {
    <SXVideoPlaybackAdvancing> * _playbackAdvancer;
    SXPlaybackCoordinator * _playbackCoordinator;
    <SXPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
    <SXVideoPlaybackPolicy> * _playbackPolicy;
    <SXVideoPlaybackStateReporting> * _playbackStateReporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideoPlaybackAdvancing> *playbackAdvancer;
@property (nonatomic) SXPlaybackCoordinator *playbackCoordinator;
@property (nonatomic, readonly) <SXPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (nonatomic, readonly) <SXVideoPlaybackPolicy> *playbackPolicy;
@property (nonatomic, readonly) <SXVideoPlaybackStateReporting> *playbackStateReporter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaybackPolicy:(id)arg1 playbackAdvancer:(id)arg2 playbackStateReporter:(id)arg3 playbackCoordinatorProvider:(id)arg4;
- (void)managePlaybackStateWithPlaybackCoordinator:(id)arg1;
- (void)pause;
- (void)play;
- (void)playWithoutRequestingPlayback;
- (id)playbackAdvancer;
- (id)playbackCoordinator;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (id)playbackCoordinatorProvider;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (id)playbackPolicy;
- (id)playbackStateReporter;
- (void)seekToStartWithCompletionBlock:(id /* block */)arg1;
- (void)setPlaybackCoordinator:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
