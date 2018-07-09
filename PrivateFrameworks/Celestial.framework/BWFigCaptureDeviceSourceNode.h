/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {
    float  _aeMaxGain;
    bool  _automaticallyEnablesLowLightBoostWhenAvailable;
    NSObject<OS_dispatch_queue> * _bufferServicingQueue;
    BWFigVideoCaptureDevice * _captureDevice;
    BWFigVideoCaptureStream * _captureStream;
    bool  _chromaNoiseReductionEnabled;
    bool  _deferMetadataDictionaryCreation;
    BWNodeOutput * _detectedFacesOutput;
    bool  _detectedFacesOutputEnabled;
    NSMutableDictionary * _dutyCycleMetadataCache;
    bool  _lowLightBoostSupportedForFormat;
    float  _maxFrameRate;
    int  _maxIntegrationTimeOverride;
    float  _minFrameRate;
    struct { 
        int width; 
        int height; 
    }  _minOutputDimensions;
    int  _minOutputDimensionsSensorFormatIndex;
    int  _motionAttachmentsSource;
    int  _offlineConfigurationSeed;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    bool  _requiresOverscan;
    int  _resolvedOfflineConfigurationSeed;
    int  _resolvedSensorFormatIndex;
    struct { 
        int width; 
        int height; 
    }  _sensorDimensions;
    int  _sensorFormatIndex;
    struct { 
        int width; 
        int height; 
    }  _sensorOverscanDimensions;
    unsigned int  _sensorPixelFormat;
    BWNodeOutput * _stillImageOutput;
    struct opaqueCMBufferQueue { } * _stillImageQueue;
    struct opaqueCMBufferQueueTriggerToken { } * _stillImageQueueTriggerToken;
    NSObject<OS_dispatch_queue> * _stillImageServicingQueue;
    struct OpaqueFigCaptureStream { } * _stream;
    NSObject<OS_dispatch_queue> * _streamEventDispatchQueue;
    NSObject<OS_dispatch_group> * _streamEventNotificationGroup;
    bool  _streamFormatChangeInFlight;
    struct { 
        int width; 
        int height; 
    }  _streamOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _streamOutputDimensionsAfterFormatChange;
    struct opaqueCMBufferQueue { } * _streamQueue;
    struct opaqueCMBufferQueueTriggerToken { } * _streamQueueTriggerToken;
    int  _streamSensorFormatIndex;
    unsigned int  _streamSensorPixelFormat;
    unsigned int  _streamSensorPixelFormatAfterFormatChange;
    bool  _temporalNoiseReductionEnabled;
    BWNodeOutput * _videoCaptureOutput;
    NSDictionary * _videoCaptureOutputColorInfoOverride;
    bool  _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
}

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BWNodeOutput *detectedFacesOutput;
@property (readonly) unsigned long long hash;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (readonly) BWNodeOutput *videoCaptureOutput;
@property (nonatomic, copy) NSDictionary *videoCaptureOutputColorInfoOverride;
@property (nonatomic) bool videoCaptureOutputPixelBufferAttachmentModificationAllowed;

+ (int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(struct { int x1; int x2; })arg2 sensorPixelFormat:(unsigned int)arg3 sensorFormatIndex:(int)arg4;
+ (id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1;
+ (void)initialize;

- (int)_addCaptureStreamMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_bringStreamFormatIndexUpToDate;
- (void)_bringStreamPixelFormatUpToDate;
- (int)_bringStreamUpToDate;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(bool*)arg1 sensorPixelFormatChanged:(bool*)arg2 outputDimensionsChanged:(bool*)arg3;
- (id)_initWithCaptureDevice:(id)arg1;
- (int)_lockFramerateToMaxSupportedByCurrentSensorFormat;
- (struct { int x1; int x2; })_maxOutputDimensionsForResolvedSensorFormatIndex;
- (int)_prepareStillImageQueue;
- (bool)_prepareStreamQueue;
- (void)_registerForStreamNotifications;
- (void)_resolveOfflineConfiguration;
- (int)_startStreaming;
- (int)_stopStreaming;
- (void)_unprepareStillImageQueue;
- (void)_unprepareStreamQueue;
- (void)_unregisterFromStreamNotifications;
- (void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1;
- (void)_updateMetadataConfigurations;
- (void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
- (int)_updateStreamOutputDimensions;
- (float)aeMaxGain;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)captureDevice;
- (id)captureStream;
- (bool)chromaNoiseReductionEnabled;
- (struct OpaqueCMClock { }*)clock;
- (id)colorInfoForOutput:(id)arg1;
- (void)dealloc;
- (id)detectedFacesOutput;
- (bool)detectedFacesOutputEnabled;
- (bool)hasNonLiveConfigurationChanges;
- (bool)lowLightBoostSupportedForFormat;
- (void)makeCurrentConfigurationLive;
- (void)makeOutputsLiveIfNeeded;
- (float)maxFrameRate;
- (int)maxIntegrationTimeOverride;
- (float)minFrameRate;
- (struct { int x1; int x2; })minOutputDimensions;
- (int)motionAttachmentsSource;
- (id)nodeSubType;
- (struct { int x1; int x2; })outputDimensions;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)requiresOverscan;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorFormatIndex;
- (struct { int x1; int x2; })sensorOverscanDimensions;
- (unsigned int)sensorPixelFormat;
- (void)setAeMaxGain:(float)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (void)setDetectedFacesOutputEnabled:(bool)arg1;
- (void)setLowLightBoostSupportedForFormat:(bool)arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMaxIntegrationTimeOverride:(int)arg1;
- (void)setMinFrameRate:(float)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setRequiresOverscan:(bool)arg1;
- (void)setSensorDimensions:(struct { int x1; int x2; })arg1;
- (void)setSensorFormatIndex:(int)arg1;
- (void)setSensorPixelFormat:(unsigned int)arg1;
- (void)setTemporalNoiseReductionEnabled:(bool)arg1;
- (void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
- (void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(bool)arg1;
- (bool)start:(id*)arg1;
- (id)stillImageOutput;
- (bool)stop:(id*)arg1;
- (bool)temporalNoiseReductionEnabled;
- (void)updateOutputRequirements;
- (id)videoCaptureOutput;
- (id)videoCaptureOutputColorInfoOverride;
- (bool)videoCaptureOutputPixelBufferAttachmentModificationAllowed;

@end
