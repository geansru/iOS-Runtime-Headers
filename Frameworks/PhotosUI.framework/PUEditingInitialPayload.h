/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditingInitialPayload : NSObject <NSSecureCoding> {
    PHAdjustmentData * _adjustmentData;
    NSDate * _creationDate;
    NSData * _displaySizeImageData;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoStillDisplayTime;
    CLLocation * _location;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    NSData * _placeholderImageData;
    long long  _playbackStyle;
    NSString * _videoPathSandboxExtensionToken;
    NSURL * _videoURL;
}

@property (nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSData *displaySizeImageData;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } livePhotoStillDisplayTime;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) NSData *placeholderImageData;
@property (nonatomic) long long playbackStyle;
@property (nonatomic, retain) NSString *videoPathSandboxExtensionToken;
@property (nonatomic, retain) NSURL *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentData;
- (id)creationDate;
- (id)displaySizeImageData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoStillDisplayTime;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)placeholderImageData;
- (long long)playbackStyle;
- (void)setAdjustmentData:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplaySizeImageData:(id)arg1;
- (void)setLivePhotoStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaSubtypes:(unsigned long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setPlaceholderImageData:(id)arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setVideoPathSandboxExtensionToken:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoPathSandboxExtensionToken;
- (id)videoURL;

@end
