/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
 */

@interface SwiftObject <NSObject> {
    Class  isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountInlinedness::RefCountIsInline> > { 
        struct atomic<swift::RefCountBitsT<swift::RefCountInlinedness::RefCountIsInline> > { 
            /* Warning: Unrecognized filer type: '{' using 'void*' */ void*__a_; 
        } refCounts; 
    }  refCounts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isDeallocating;
+ (bool)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (bool)conformsToProtocol:(id)arg1;
+ (id)debugDescription;
+ (id)description;
+ (void)initialize;
+ (int (*)instanceMethodForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isMemberOfClass:(Class)arg1;
+ (bool)isSubclassOfClass:(Class)arg1;
+ (int (*)methodForSelector:(SEL)arg1;
+ (void)release;
+ (bool)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (bool)retainWeakReference;
+ (Class)superclass;

- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isNSArray__;
- (bool)isNSCFConstantString__;
- (bool)isNSData__;
- (bool)isNSDate__;
- (bool)isNSDictionary__;
- (bool)isNSNumber__;
- (bool)isNSObject__;
- (bool)isNSOrderedSet__;
- (bool)isNSSet__;
- (bool)isNSString__;
- (bool)isNSTimeZone__;
- (bool)isNSValue__;
- (bool)isProxy;
- (int (*)methodForSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (id)self;
- (Class)superclass;
- (struct _NSZone { }*)zone;

@end
