/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@class NSMutableArray;

@interface CHBoxcarFilterPointFIFO : CHPointFIFO {
    NSMutableArray *_prevPoints;
    unsigned long long _width;
}

@property(retain) NSMutableArray * prevPoints;
@property unsigned long long width;

- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clear;
- (void)dealloc;
- (void)emitAveragedPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;
- (id)prevPoints;
- (void)setPrevPoints:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end