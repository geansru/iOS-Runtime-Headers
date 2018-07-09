/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _NSSharedKeySetS : NSObject <NSCopying> {
    unsigned int  _M;
    double  _c;
    unsigned char * _ckeys;
    unsigned int  _factor;
    char * _g;
    unsigned int  _keyLen;
    unsigned short * _keys1;
    unsigned short * _keys2;
    unsigned short * _keys3;
    unsigned int  _numKey;
    void * _rankTable;
    unsigned int * _seeds;
    unsigned char  _select;
    _NSSharedKeySetS * _subSharedKeySet;
    unsigned int  _type;
}

@property unsigned int M;
@property double c;
@property unsigned char*ckeys;
@property unsigned int factor;
@property char *g;
@property unsigned int keyLen;
@property unsigned short*keys1;
@property unsigned short*keys2;
@property unsigned short*keys3;
@property unsigned int numKey;
@property void*rankTable;
@property unsigned int*seeds;
@property unsigned char select;
@property (retain) _NSSharedKeySetS *subSharedKeySet;
@property unsigned int type;

- (unsigned int)M;
- (id)allKeys;
- (char *)bytesAtIndex:(unsigned long long)arg1;
- (double)c;
- (unsigned char*)ckeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)factor;
- (char *)g;
- (unsigned long long)hash;
- (unsigned long long)indexForBytes:(char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)indexForKey:(unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)init;
- (id)initWithKeys:(void**)arg1 keyLenghtInBytes:(unsigned int)arg2 count:(unsigned int)arg3 type:(unsigned int)arg4;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (unsigned short*)keyAtIndex:(unsigned long long)arg1;
- (unsigned int)keyLen;
- (unsigned int)keySetCount;
- (unsigned short*)keys1;
- (unsigned short*)keys2;
- (unsigned short*)keys3;
- (unsigned int)maximumIndex;
- (id)newKeySetWithKeys:(id)arg1 encoding:(unsigned int)arg2;
- (unsigned int)numKey;
- (void*)rankTable;
- (unsigned int*)seeds;
- (unsigned char)select;
- (void)setC:(double)arg1;
- (void)setCkeys:(unsigned char*)arg1;
- (void)setFactor:(unsigned int)arg1;
- (void)setG:(char *)arg1;
- (void)setKeyLen:(unsigned int)arg1;
- (void)setKeys1:(unsigned short*)arg1;
- (void)setKeys2:(unsigned short*)arg1;
- (void)setKeys3:(unsigned short*)arg1;
- (void)setM:(unsigned int)arg1;
- (void)setNumKey:(unsigned int)arg1;
- (void)setRankTable:(void*)arg1;
- (void)setSeeds:(unsigned int*)arg1;
- (void)setSelect:(unsigned char)arg1;
- (void)setSubSharedKeySet:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (id)subSharedKeySet;
- (unsigned int)type;

@end
