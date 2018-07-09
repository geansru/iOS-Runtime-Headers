/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface AWDWiProxLeAdvertiseStartRequest : PBRequest <NSCopying> {
    unsigned int  _dataLength;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _sessionId;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic) unsigned int dataLength;
@property (nonatomic) bool hasDataLength;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataLength;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataLength;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDataLength:(unsigned int)arg1;
- (void)setHasDataLength:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (void)writeTo:(id)arg1;

@end
