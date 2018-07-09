/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoBufferObserver : NSObject <SXVideoBufferObserving, SXVideoPlaybackObserver> {
    id /* block */  _changeBlock;
    bool  _playbackBufferFull;
    SXPlaybackCoordinator * _playbackCoordinator;
    bool  _playbackLikelyToKeepUp;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPlaybackBufferFull, nonatomic) bool playbackBufferFull;
@property (nonatomic, readonly) SXPlaybackCoordinator *playbackCoordinator;
@property (getter=isPlaybackLikelyToKeepUp, nonatomic) bool playbackLikelyToKeepUp;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPlaybackCoordinator:(id)arg1;
- (bool)isPlaybackBufferFull;
- (bool)isPlaybackLikelyToKeepUp;
- (void)onChange:(id /* block */)arg1;
- (id)playbackCoordinator;
- (void)playbackCoordinatorPlaybackBufferFullStateChanged:(id)arg1;
- (void)playbackCoordinatorPlaybackLikelyToKeepUpStateChanged:(id)arg1;
- (void)setPlaybackBufferFull:(bool)arg1;
- (void)setPlaybackLikelyToKeepUp:(bool)arg1;

@end
