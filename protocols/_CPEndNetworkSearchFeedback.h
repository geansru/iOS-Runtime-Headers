/* Generated by RuntimeBrowser.
 */

@protocol _CPEndNetworkSearchFeedback <NSObject>

@required

- (double)duration;
- (NSString *)fbq;
- (bool)hasDuration;
- (bool)hasFbq;
- (bool)hasNetworkTimingData;
- (bool)hasParsecStatus;
- (bool)hasPartialClientIp;
- (bool)hasResponseSize;
- (bool)hasStatusCode;
- (bool)hasTimestamp;
- (bool)hasUuid;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPStruct *)networkTimingData;
- (NSString *)parsecStatus;
- (NSString *)partialClientIp;
- (long long)responseSize;
- (void)setDuration:(double)arg1;
- (void)setFbq:(NSString *)arg1;
- (void)setNetworkTimingData:(_CPStruct *)arg1;
- (void)setParsecStatus:(NSString *)arg1;
- (void)setPartialClientIp:(NSString *)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(NSString *)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (NSString *)uuid;

@end
