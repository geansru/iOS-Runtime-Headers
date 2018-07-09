/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFareOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int paymentType : 1; 
        unsigned int preferredSurchargeType : 1; 
    }  _has;
    int  _paymentType;
    int  _preferredSurchargeType;
}

@property (nonatomic) bool hasPaymentType;
@property (nonatomic) bool hasPreferredSurchargeType;
@property (nonatomic) int paymentType;
@property (nonatomic) int preferredSurchargeType;

- (int)StringAsPaymentType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentType;
- (bool)hasPreferredSurchargeType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (int)preferredSurchargeType;
- (bool)readFrom:(id)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setHasPreferredSurchargeType:(bool)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setPreferredSurchargeType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
