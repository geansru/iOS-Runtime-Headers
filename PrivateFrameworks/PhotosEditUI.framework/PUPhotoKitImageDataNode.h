/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoKitImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode> {
    PHAsset * _asset;
    NSData * _imageData;
    NSURL * _imageDataURL;
    NSString * _imageDataUTI;
    long long  _imageExifOrientation;
    int  _requestID;
    long long  _version;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSURL *imageDataURL;
@property (nonatomic, readonly) NSString *imageDataUTI;
@property (nonatomic, readonly) long long imageExifOrientation;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageUTI:(id)arg2 imageOrientation:(long long)arg3 info:(id)arg4;
- (id)asset;
- (void)didCancel;
- (id)imageData;
- (id)imageDataURL;
- (id)imageDataUTI;
- (long long)imageExifOrientation;
- (id)initWithAsset:(id)arg1 version:(long long)arg2;
- (void)run;
- (long long)version;

@end
