/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapQuery : PBCodable <NSCopying> {
    int  _clientImgFmt;
    int  _clientImgMaxHeight;
    int  _clientImgMaxWidth;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int clientImgFmt : 1; 
        unsigned int clientImgMaxHeight : 1; 
        unsigned int clientImgMaxWidth : 1; 
        unsigned int mapCenterX : 1; 
        unsigned int mapCenterY : 1; 
        unsigned int mapSpanX : 1; 
        unsigned int mapSpanY : 1; 
        unsigned int requestType : 1; 
        unsigned int tilesizeX : 1; 
        unsigned int tilesizeY : 1; 
        unsigned int zoomlevel : 1; 
    }  _has;
    int  _mapCenterX;
    int  _mapCenterY;
    GEOMapRegion * _mapRegion;
    int  _mapSpanX;
    int  _mapSpanY;
    GEOPlaceSearchRequest * _placeSearchRequest;
    NSString * _query;
    int  _requestType;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    int  _tilesizeX;
    int  _tilesizeY;
    GEOLocation * _userLocation;
    int  _zoomlevel;
}

@property (nonatomic) int clientImgFmt;
@property (nonatomic) int clientImgMaxHeight;
@property (nonatomic) int clientImgMaxWidth;
@property (nonatomic) bool hasClientImgFmt;
@property (nonatomic) bool hasClientImgMaxHeight;
@property (nonatomic) bool hasClientImgMaxWidth;
@property (nonatomic) bool hasMapCenterX;
@property (nonatomic) bool hasMapCenterY;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasMapSpanX;
@property (nonatomic) bool hasMapSpanY;
@property (nonatomic, readonly) bool hasPlaceSearchRequest;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasTilesizeX;
@property (nonatomic) bool hasTilesizeY;
@property (nonatomic, readonly) bool hasUserLocation;
@property (nonatomic) bool hasZoomlevel;
@property (nonatomic) int mapCenterX;
@property (nonatomic) int mapCenterY;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) int mapSpanX;
@property (nonatomic) int mapSpanY;
@property (nonatomic, retain) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, retain) NSString *query;
@property (nonatomic) int requestType;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) int tilesizeX;
@property (nonatomic) int tilesizeY;
@property (nonatomic, retain) GEOLocation *userLocation;
@property (nonatomic) int zoomlevel;

- (void).cxx_destruct;
- (int)StringAsClientImgFmt:(id)arg1;
- (int)StringAsRequestType:(id)arg1;
- (int)clientImgFmt;
- (id)clientImgFmtAsString:(int)arg1;
- (int)clientImgMaxHeight;
- (int)clientImgMaxWidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientImgFmt;
- (bool)hasClientImgMaxHeight;
- (bool)hasClientImgMaxWidth;
- (bool)hasMapCenterX;
- (bool)hasMapCenterY;
- (bool)hasMapRegion;
- (bool)hasMapSpanX;
- (bool)hasMapSpanY;
- (bool)hasPlaceSearchRequest;
- (bool)hasQuery;
- (bool)hasRequestType;
- (bool)hasSessionID;
- (bool)hasTilesizeX;
- (bool)hasTilesizeY;
- (bool)hasUserLocation;
- (bool)hasZoomlevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mapCenterX;
- (int)mapCenterY;
- (id)mapRegion;
- (int)mapSpanX;
- (int)mapSpanY;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchRequest;
- (id)query;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setClientImgFmt:(int)arg1;
- (void)setClientImgMaxHeight:(int)arg1;
- (void)setClientImgMaxWidth:(int)arg1;
- (void)setHasClientImgFmt:(bool)arg1;
- (void)setHasClientImgMaxHeight:(bool)arg1;
- (void)setHasClientImgMaxWidth:(bool)arg1;
- (void)setHasMapCenterX:(bool)arg1;
- (void)setHasMapCenterY:(bool)arg1;
- (void)setHasMapSpanX:(bool)arg1;
- (void)setHasMapSpanY:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasTilesizeX:(bool)arg1;
- (void)setHasTilesizeY:(bool)arg1;
- (void)setHasZoomlevel:(bool)arg1;
- (void)setMapCenterX:(int)arg1;
- (void)setMapCenterY:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapSpanX:(int)arg1;
- (void)setMapSpanY:(int)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTilesizeX:(int)arg1;
- (void)setTilesizeY:(int)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setZoomlevel:(int)arg1;
- (int)tilesizeX;
- (int)tilesizeY;
- (id)userLocation;
- (void)writeTo:(id)arg1;
- (int)zoomlevel;

@end
