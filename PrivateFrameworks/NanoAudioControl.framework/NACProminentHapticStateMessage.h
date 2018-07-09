/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACProminentHapticStateMessage : PBCodable <NSCopying> {
    bool  _enabled;
    struct { 
        unsigned int enabled : 1; 
    }  _has;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool hasEnabled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
