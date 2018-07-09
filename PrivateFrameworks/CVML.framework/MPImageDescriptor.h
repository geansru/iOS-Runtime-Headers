/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface MPImageDescriptor : NSObject <NSSecureCoding> {
    void * _colorGaborDescriptor;
    long long  _descriptorId;
    long long  _exifTimestamp;
    NSString * _externalImageId;
    NSString * _imageFilePath;
    void * _imageRegistrationDescriptor;
    float  _nextLeafDescriptorDistance;
    long long  _nextLeafId;
    long long  _nextLeafTimestampDistance;
    float  _nextLeafTotalDistance;
    float  _previousLeafDescriptorDistance;
    long long  _previousLeafId;
    long long  _previousLeafTimestampDistance;
    float  _previousLeafTotalDistance;
    float  _quality;
    void * _sceneClassifierDescriptor;
}

@property (readonly) void*colorGaborDescriptor;
@property (readonly) long long descriptorId;
@property (readonly) long long exifTimestamp;
@property (readonly) NSString *externalImageId;
@property (readonly) NSString *imageFilePath;
@property (readonly) void*imageRegistrationDescriptor;
@property float nextLeafDescriptorDistance;
@property long long nextLeafId;
@property long long nextLeafTimestampDistance;
@property float nextLeafTotalDistance;
@property float previousLeafDescriptorDistance;
@property long long previousLeafId;
@property long long previousLeafTimestampDistance;
@property float previousLeafTotalDistance;
@property (readonly) float quality;
@property (readonly) NSData *rawColorGaborDescriptor;
@property (readonly) void*sceneClassifierDescriptor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)colorGaborDescriptor;
- (bool)computeConvnetDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)computeDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg1 andSceneClassifierDistance:(float)arg2;
- (bool)computeQualityForImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (bool)computeRegistrationFeaturesForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (long long)descriptorId;
- (float)distanceFromDescriptor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)exifTimestamp;
- (id)externalImageId;
- (id)imageFilePath;
- (void*)imageRegistrationDescriptor;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 andCustomQualityScore:(float)arg2 context:(id)arg3 error:(id*)arg4;
- (id)initWithImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)initWithImageData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)initWithRawColorGaborDescriptor:(id)arg1;
- (float)nextLeafDescriptorDistance;
- (long long)nextLeafId;
- (long long)nextLeafTimestampDistance;
- (float)nextLeafTotalDistance;
- (float)previousLeafDescriptorDistance;
- (long long)previousLeafId;
- (long long)previousLeafTimestampDistance;
- (float)previousLeafTotalDistance;
- (float)quality;
- (id)rawColorGaborDescriptor;
- (void*)sceneClassifierDescriptor;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setNextLeafDescriptorDistance:(float)arg1;
- (void)setNextLeafId:(long long)arg1;
- (void)setNextLeafTimestampDistance:(long long)arg1;
- (void)setNextLeafTotalDistance:(float)arg1;
- (void)setPreviousLeafDescriptorDistance:(float)arg1;
- (void)setPreviousLeafId:(long long)arg1;
- (void)setPreviousLeafTimestampDistance:(long long)arg1;
- (void)setPreviousLeafTotalDistance:(float)arg1;

@end
