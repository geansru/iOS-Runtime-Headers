/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHValidator : NSObject

- (bool)_pathExtension:(id)arg1 conformsToType:(struct __CFString { }*)arg2;
- (bool)_validateImageSource:(struct CGImageSource { }*)arg1 error:(id*)arg2;
- (bool)_validateLivePhotoResourceURLs:(id)arg1 error:(id*)arg2;
- (bool)_validateVideoURL:(id)arg1 error:(id*)arg2;
- (void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2;
- (void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 imageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (bool)isValidImagePathExtension:(id)arg1;
- (bool)isValidVideoPathExtension:(id)arg1;
- (bool)validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)validateURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)validateURLs:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;

@end
