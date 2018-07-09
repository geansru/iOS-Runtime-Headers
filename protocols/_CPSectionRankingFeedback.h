/* Generated by RuntimeBrowser.
 */

@protocol _CPSectionRankingFeedback <NSObject>

@required

- (void)addResults:(_CPResultRankingFeedback *)arg1;
- (void)clearResults;
- (bool)hasLocalSectionPosition;
- (bool)hasPersonalizationScore;
- (bool)hasSection;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned int)localSectionPosition;
- (double)personalizationScore;
- (NSArray *)results;
- (_CPResultRankingFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (_CPResultSectionForFeedback *)section;
- (void)setLocalSectionPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResults:(NSArray *)arg1;
- (void)setSection:(_CPResultSectionForFeedback *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
