/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _buffers;
    <MTLComputePipelineState> * _computePipelineState;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _imageBlockSize;
    const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; float x19; float x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; } * _limits;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _samplers;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _textures;
    /* Warning: unhandled struct encoding: '{?="isValid"B"hasBeenUsed"B"type"Q"object"@"baseLevel"Q"bufferLength"Q"bufferOffset"Q"threadgroupMemoryLength"Q"threadgroupMemoryOffset"Q"hasLodClamp"B"lodMinClamp"f"lodMaxClamp"f}]' */ struct { 
        bool isValid; 
        bool hasBeenUsed; 
        unsigned long long type; 
        id object; 
    }  _threadgroupMemoryLengths;
    bool  canDealloc;
    bool  canEndEncoding;
    bool  canSetComputePipelineState;
    bool  hasEndEncoding;
    bool  hasParallelExecution;
    bool  hasSetComputePipelineState;
    bool  hasSetStageInRegion;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  stageInRegion;
    struct deque<id, std::__1::allocator<id> > { 
        /* Warning: unhandled struct encoding: '{__split_buffer<id *, std::__1::allocator<id *> >="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<id **, std::__1::allocator<id *> >="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::__1::allocator<id> >="__value_"Q}}' */ struct __split_buffer<id *, std::__1::allocator<id *> > { 
            __begin_ ***__first_; 
        } __map_; 
    }  updatedFences;
}

@property (nonatomic, readonly) <MTLComputePipelineState> *computePipelineState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resourceTrackingRecordDispatchAccesses;
- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (void)_validateThreadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)computePipelineState;
- (void)dealloc;
- (id)description;
- (void)dispatchBarrier;
- (void)dispatchThreadgroups:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3;
- (void)dispatchThreads:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 threadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)endEncoding;
- (void)enumerateBuffersUsingBlock:(id /* block */)arg1;
- (void)enumerateSamplersUsingBlock:(id /* block */)arg1;
- (void)enumerateTexturesUsingBlock:(id /* block */)arg1;
- (void)enumerateThreadgroupMemoryLengthsUsingBlock:(id /* block */)arg1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 parallelExecution:(bool)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setStageInRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)updateFence:(id)arg1;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)validateStageInRegion:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)waitForFence:(id)arg1;

@end
