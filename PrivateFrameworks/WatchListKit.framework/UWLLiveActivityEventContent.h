/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLLiveActivityEventContent : PBCodable <NSCopying> {
    NSString * _contentBrandId;
    NSString * _contentCanonicalId;
    NSString * _contentExternalPlayableId;
    NSString * _contentInternalLegId;
    bool  _contentIsDone;
    long long  _contentMediaLengthInMilliseconds;
    struct { 
        unsigned int contentMediaLengthInMilliseconds : 1; 
        unsigned int contentIsDone : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *contentBrandId;
@property (nonatomic, retain) NSString *contentCanonicalId;
@property (nonatomic, retain) NSString *contentExternalPlayableId;
@property (nonatomic, retain) NSString *contentInternalLegId;
@property (nonatomic) bool contentIsDone;
@property (nonatomic) long long contentMediaLengthInMilliseconds;
@property (nonatomic, readonly) bool hasContentBrandId;
@property (nonatomic, readonly) bool hasContentCanonicalId;
@property (nonatomic, readonly) bool hasContentExternalPlayableId;
@property (nonatomic, readonly) bool hasContentInternalLegId;
@property (nonatomic) bool hasContentIsDone;
@property (nonatomic) bool hasContentMediaLengthInMilliseconds;

- (void).cxx_destruct;
- (id)contentBrandId;
- (id)contentCanonicalId;
- (id)contentExternalPlayableId;
- (id)contentInternalLegId;
- (bool)contentIsDone;
- (long long)contentMediaLengthInMilliseconds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentBrandId;
- (bool)hasContentCanonicalId;
- (bool)hasContentExternalPlayableId;
- (bool)hasContentInternalLegId;
- (bool)hasContentIsDone;
- (bool)hasContentMediaLengthInMilliseconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentBrandId:(id)arg1;
- (void)setContentCanonicalId:(id)arg1;
- (void)setContentExternalPlayableId:(id)arg1;
- (void)setContentInternalLegId:(id)arg1;
- (void)setContentIsDone:(bool)arg1;
- (void)setContentMediaLengthInMilliseconds:(long long)arg1;
- (void)setHasContentIsDone:(bool)arg1;
- (void)setHasContentMediaLengthInMilliseconds:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
