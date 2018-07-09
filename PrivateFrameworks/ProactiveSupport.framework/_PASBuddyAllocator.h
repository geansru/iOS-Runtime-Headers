/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASBuddyAllocator : NSObject {
    struct unique_ptr<(anonymous namespace)::BuddyAllocator, std::__1::default_delete<(anonymous namespace)::BuddyAllocator> >="__ptr_"{__compressed_pair<(anonymous namespace)::BuddyAllocator *, std::__1::default_delete<(anonymous namespace)::BuddyAllocator> >="__value_"^{BuddyAllocator {}  _allocator;
    void * _buffer;
    id /* block */  _freeBuffer;
}

+ (unsigned long long)bufferSizeForHeapOfSize:(unsigned long long)arg1;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)_maximumLevelsForBufferWithSize:(unsigned long long)arg1;
- (void*)alloc:(unsigned long long)arg1;
- (void*)allocZeros:(unsigned long long)arg1;
- (void)dealloc;
- (void)free:(const void*)arg1;
- (bool)heapContains:(const void*)arg1;
- (id)initWithAlignedBuffer:(void*)arg1 size:(unsigned long long)arg2 free:(id /* block */)arg3;
- (id)initWithFileBackedMappingWithHeapSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)integrityCheck;
- (void)usageWithHeapSize:(unsigned long long*)arg1 bytesAllocated:(unsigned long long*)arg2;

@end
