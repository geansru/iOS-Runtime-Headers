/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDCallHistoryGizmoBootstrap : PBCodable <NSCopying> {
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int error : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int error;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (bool)hasError;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
