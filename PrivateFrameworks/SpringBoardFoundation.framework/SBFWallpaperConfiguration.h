/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperConfiguration : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSURL * _originalVideoURL;
    <SBFProceduralWallpaper> * _proceduralWallpaper;
    NSDictionary * _proceduralWallpaperInfo;
    long long  _variant;
    NSURL * _videoURL;
    UIColor * _wallpaperColor;
    NSString * _wallpaperColorName;
    SBWallpaperImage * _wallpaperImage;
    SBFWallpaperOptions * _wallpaperOptions;
    UIImage * _wallpaperOriginalImage;
    UIImage * _wallpaperThumbnailImage;
    NSData * _wallpaperThumbnailImageData;
    long long  _wallpaperType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *originalVideoURL;
@property (nonatomic, retain) <SBFProceduralWallpaper> *proceduralWallpaper;
@property (nonatomic, readonly, copy) NSString *proceduralWallpaperIdentifier;
@property (nonatomic, copy) NSDictionary *proceduralWallpaperInfo;
@property (nonatomic, readonly, copy) NSDictionary *proceduralWallpaperOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;
@property (nonatomic, copy) NSURL *videoURL;
@property (nonatomic, copy) UIColor *wallpaperColor;
@property (nonatomic, copy) NSString *wallpaperColorName;
@property (nonatomic, retain) SBWallpaperImage *wallpaperImage;
@property (nonatomic, copy) SBFWallpaperOptions *wallpaperOptions;
@property (nonatomic, retain) UIImage *wallpaperOriginalImage;
@property (nonatomic, retain) UIImage *wallpaperThumbnailImage;
@property (nonatomic, copy) NSData *wallpaperThumbnailImageData;
@property (nonatomic, readonly) long long wallpaperType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariant:(long long)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)originalVideoURL;
- (id)proceduralWallpaper;
- (id)proceduralWallpaperIdentifier;
- (id)proceduralWallpaperInfo;
- (id)proceduralWallpaperOptions;
- (void)setOriginalVideoURL:(id)arg1;
- (void)setProceduralWallpaper:(id)arg1;
- (void)setProceduralWallpaperInfo:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (void)setWallpaperColor:(id)arg1;
- (void)setWallpaperColorName:(id)arg1;
- (void)setWallpaperImage:(id)arg1;
- (void)setWallpaperOptions:(id)arg1;
- (void)setWallpaperOriginalImage:(id)arg1;
- (void)setWallpaperThumbnailImage:(id)arg1;
- (void)setWallpaperThumbnailImageData:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)variant;
- (id)videoURL;
- (id)wallpaperColor;
- (id)wallpaperColorName;
- (id)wallpaperImage;
- (id)wallpaperOptions;
- (id)wallpaperOriginalImage;
- (id)wallpaperThumbnailImage;
- (id)wallpaperThumbnailImageData;
- (long long)wallpaperType;

@end
