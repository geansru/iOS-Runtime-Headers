/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPPlaybackInfo : PBCodable <NSCopying> {
    int  _beatsPerMinute;
    int  _bitRate;
    int  _codecSubType;
    int  _codecType;
    int  _dataKind;
    NSString * _dataUrl;
    long long  _durationInSamples;
    NSString * _eqPreset;
    long long  _gaplessEncodingDrainCode;
    long long  _gaplessFrameResyncCode;
    long long  _gaplessHeuristicCode;
    long long  _gaplessHeuristicDelayCode;
    struct { 
        unsigned int durationInSamples : 1; 
        unsigned int gaplessEncodingDrainCode : 1; 
        unsigned int gaplessFrameResyncCode : 1; 
        unsigned int gaplessHeuristicCode : 1; 
        unsigned int gaplessHeuristicDelayCode : 1; 
        unsigned int startTime : 1; 
        unsigned int stopTime : 1; 
        unsigned int volumeNormalizationEnergy : 1; 
        unsigned int beatsPerMinute : 1; 
        unsigned int bitRate : 1; 
        unsigned int codecSubType : 1; 
        unsigned int codecType : 1; 
        unsigned int dataKind : 1; 
        unsigned int progressionDirection : 1; 
        unsigned int relativeVolume : 1; 
        unsigned int sampleRate : 1; 
    }  _has;
    NSString * _playbackFormat;
    int  _progressionDirection;
    int  _relativeVolume;
    int  _sampleRate;
    long long  _startTime;
    long long  _stopTime;
    long long  _volumeNormalizationEnergy;
}

@property (nonatomic) int beatsPerMinute;
@property (nonatomic) int bitRate;
@property (nonatomic) int codecSubType;
@property (nonatomic) int codecType;
@property (nonatomic) int dataKind;
@property (nonatomic, retain) NSString *dataUrl;
@property (nonatomic) long long durationInSamples;
@property (nonatomic, retain) NSString *eqPreset;
@property (nonatomic) long long gaplessEncodingDrainCode;
@property (nonatomic) long long gaplessFrameResyncCode;
@property (nonatomic) long long gaplessHeuristicCode;
@property (nonatomic) long long gaplessHeuristicDelayCode;
@property (nonatomic) bool hasBeatsPerMinute;
@property (nonatomic) bool hasBitRate;
@property (nonatomic) bool hasCodecSubType;
@property (nonatomic) bool hasCodecType;
@property (nonatomic) bool hasDataKind;
@property (nonatomic, readonly) bool hasDataUrl;
@property (nonatomic) bool hasDurationInSamples;
@property (nonatomic, readonly) bool hasEqPreset;
@property (nonatomic) bool hasGaplessEncodingDrainCode;
@property (nonatomic) bool hasGaplessFrameResyncCode;
@property (nonatomic) bool hasGaplessHeuristicCode;
@property (nonatomic) bool hasGaplessHeuristicDelayCode;
@property (nonatomic, readonly) bool hasPlaybackFormat;
@property (nonatomic) bool hasProgressionDirection;
@property (nonatomic) bool hasRelativeVolume;
@property (nonatomic) bool hasSampleRate;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasStopTime;
@property (nonatomic) bool hasVolumeNormalizationEnergy;
@property (nonatomic, retain) NSString *playbackFormat;
@property (nonatomic) int progressionDirection;
@property (nonatomic) int relativeVolume;
@property (nonatomic) int sampleRate;
@property (nonatomic) long long startTime;
@property (nonatomic) long long stopTime;
@property (nonatomic) long long volumeNormalizationEnergy;

- (void).cxx_destruct;
- (int)beatsPerMinute;
- (int)bitRate;
- (int)codecSubType;
- (int)codecType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataKind;
- (id)dataUrl;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)durationInSamples;
- (id)eqPreset;
- (long long)gaplessEncodingDrainCode;
- (long long)gaplessFrameResyncCode;
- (long long)gaplessHeuristicCode;
- (long long)gaplessHeuristicDelayCode;
- (bool)hasBeatsPerMinute;
- (bool)hasBitRate;
- (bool)hasCodecSubType;
- (bool)hasCodecType;
- (bool)hasDataKind;
- (bool)hasDataUrl;
- (bool)hasDurationInSamples;
- (bool)hasEqPreset;
- (bool)hasGaplessEncodingDrainCode;
- (bool)hasGaplessFrameResyncCode;
- (bool)hasGaplessHeuristicCode;
- (bool)hasGaplessHeuristicDelayCode;
- (bool)hasPlaybackFormat;
- (bool)hasProgressionDirection;
- (bool)hasRelativeVolume;
- (bool)hasSampleRate;
- (bool)hasStartTime;
- (bool)hasStopTime;
- (bool)hasVolumeNormalizationEnergy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playbackFormat;
- (int)progressionDirection;
- (bool)readFrom:(id)arg1;
- (int)relativeVolume;
- (int)sampleRate;
- (void)setBeatsPerMinute:(int)arg1;
- (void)setBitRate:(int)arg1;
- (void)setCodecSubType:(int)arg1;
- (void)setCodecType:(int)arg1;
- (void)setDataKind:(int)arg1;
- (void)setDataUrl:(id)arg1;
- (void)setDurationInSamples:(long long)arg1;
- (void)setEqPreset:(id)arg1;
- (void)setGaplessEncodingDrainCode:(long long)arg1;
- (void)setGaplessFrameResyncCode:(long long)arg1;
- (void)setGaplessHeuristicCode:(long long)arg1;
- (void)setGaplessHeuristicDelayCode:(long long)arg1;
- (void)setHasBeatsPerMinute:(bool)arg1;
- (void)setHasBitRate:(bool)arg1;
- (void)setHasCodecSubType:(bool)arg1;
- (void)setHasCodecType:(bool)arg1;
- (void)setHasDataKind:(bool)arg1;
- (void)setHasDurationInSamples:(bool)arg1;
- (void)setHasGaplessEncodingDrainCode:(bool)arg1;
- (void)setHasGaplessFrameResyncCode:(bool)arg1;
- (void)setHasGaplessHeuristicCode:(bool)arg1;
- (void)setHasGaplessHeuristicDelayCode:(bool)arg1;
- (void)setHasProgressionDirection:(bool)arg1;
- (void)setHasRelativeVolume:(bool)arg1;
- (void)setHasSampleRate:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasStopTime:(bool)arg1;
- (void)setHasVolumeNormalizationEnergy:(bool)arg1;
- (void)setPlaybackFormat:(id)arg1;
- (void)setProgressionDirection:(int)arg1;
- (void)setRelativeVolume:(int)arg1;
- (void)setSampleRate:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setStopTime:(long long)arg1;
- (void)setVolumeNormalizationEnergy:(long long)arg1;
- (long long)startTime;
- (long long)stopTime;
- (long long)volumeNormalizationEnergy;
- (void)writeTo:(id)arg1;

@end
