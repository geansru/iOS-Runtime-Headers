/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSessionEntity : NSObject <NSCopying> {
    unsigned int  _sequenceNumber;
    double  _sessionCreationTime;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
}

@property (nonatomic) unsigned int sequenceNumber;
@property double sessionCreationTime;
@property (nonatomic, readonly) NSString *sessionEntityString;
@property struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, readonly) NSNumber *sessionIDHigh;
@property (nonatomic, readonly) NSString *sessionIDHighString;
@property (nonatomic, readonly) NSNumber *sessionIDLow;
@property (nonatomic, readonly) NSString *sessionIDLowString;
@property (nonatomic, readonly) NSString *sessionIDString;
@property (readonly) double sessionRelativeTimestamp;
@property (nonatomic, readonly) NSString *sessionUUIDString;

- (bool)_isValidSessionIDHighOrLowString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSessionEntityString:(id)arg1;
- (id)initWithSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned int)arg3;
- (unsigned int)rawSequenceNumber;
- (unsigned int)sequenceNumber;
- (double)sessionCreationTime;
- (id)sessionEntityString;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)sessionIDHigh;
- (id)sessionIDHighString;
- (id)sessionIDLow;
- (id)sessionIDLowString;
- (id)sessionIDString;
- (double)sessionRelativeTimestamp;
- (double)sessionRelativeTimestampForEventTime:(double)arg1;
- (id)sessionUUIDString;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionCreationTime:(double)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateSessionIDFromUUIDString:(id)arg1;
- (void)updateWithSessionEntityString:(id)arg1;

@end
