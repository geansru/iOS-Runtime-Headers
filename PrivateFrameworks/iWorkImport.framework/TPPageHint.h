/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {
    TSUNoCopyDictionary * _anchoredDrawablePositions;
    NSArray * _childHints;
    TSUNoCopyDictionary * _flowHints;
    NSDictionary * _flowTopicNumbers;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _footnoteAutoNumberRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _footnoteLayoutRange;
    NSArray * _hints;
    unsigned long long  _pageColumn;
    long long  _pageKind;
    unsigned long long  _pageRow;
    NSSet * _startingPartitionedAttachments;
    NSObject<TSWPTopicNumberHints> * _topicNumbers;
}

@property (nonatomic, retain) TSUNoCopyDictionary *anchoredDrawablePositions;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property (nonatomic, retain) NSArray *childHints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSDHint> *firstChildHint;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } footnoteAutoNumberRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } footnoteLayoutRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TSDHint> *lastChildHint;
@property (nonatomic, readonly) bool lastLineIsEmptyAndHasListLabel;
@property (nonatomic, readonly) unsigned long long lineCount;
@property (nonatomic, readonly) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic) unsigned long long pageColumn;
@property (nonatomic) long long pageKind;
@property (nonatomic) unsigned long long pageRow;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSSet *startingPartitionedAttachments;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<TSWPTopicNumberHints> *topicNumbers;

- (void).cxx_destruct;
- (id)anchoredDrawablePositions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (id)childHints;
- (id)copyForArchiving;
- (id)firstChildHint;
- (id)firstColumn;
- (id)firstHint;
- (id)flowHints;
- (id)flowTopicNumbers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })footnoteAutoNumberRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })footnoteLayoutRange;
- (id)hints;
- (id)initWithArchive:(const struct PageHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Range {} *x6; struct Range {} *x7; struct Reference {} *x8; int x9; unsigned int x10; struct Reference {} *x11; struct RepeatedPtrField<TP::AnchorPosArchive> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct TopicNumberHintsArchive {} *x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<TSP::UUID> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct RepeatedPtrField<TSP::Reference> { void **x_16_1_1; int x_16_1_2; int x_16_1_3; int x_16_1_4; } x16; unsigned int x17; int x18; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; }*)arg1 unarchiver:(id)arg2;
- (id)lastChildHint;
- (id)lastColumn;
- (id)lastHint;
- (bool)lastLineIsEmptyAndHasListLabel;
- (unsigned long long)lineCount;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (void)offsetStartCharIndexBy:(long long)arg1 charIndex:(unsigned long long)arg2;
- (void)p_archiveHint:(id)arg1 intoArchive:(struct TargetHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; struct Size {} *x6; struct Range {} *x7; struct Range {} *x8; unsigned int x9; unsigned int x10; struct DoublePoint {} *x11; struct DoubleSize {} *x12; unsigned int x13; bool x14; bool x15; }*)arg2;
- (void)p_archiveTopicNumbers:(id)arg1 intoArchive:(struct TopicNumberHintsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::TopicNumberEntryArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; unsigned int x7; }*)arg2 archiver:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_range;
- (bool)p_unarchiveHint:(id)arg1 fromArchive:(const struct TargetHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; struct Size {} *x6; struct Range {} *x7; struct Range {} *x8; unsigned int x9; unsigned int x10; struct DoublePoint {} *x11; struct DoubleSize {} *x12; unsigned int x13; bool x14; bool x15; }*)arg2;
- (void)p_unarchiveTopicNumbers:(id)arg1 fromArchive:(const struct TopicNumberHintsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::TopicNumberEntryArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; unsigned int x7; }*)arg2 unarchiver:(id)arg3;
- (unsigned long long)pageColumn;
- (long long)pageKind;
- (unsigned long long)pageRow;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAndChildHints:(out id*)arg1;
- (void)saveToArchive:(struct PageHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Range {} *x6; struct Range {} *x7; struct Reference {} *x8; int x9; unsigned int x10; struct Reference {} *x11; struct RepeatedPtrField<TP::AnchorPosArchive> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct TopicNumberHintsArchive {} *x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<TSP::UUID> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct RepeatedPtrField<TSP::Reference> { void **x_16_1_1; int x_16_1_2; int x_16_1_3; int x_16_1_4; } x16; unsigned int x17; int x18; struct RepeatedPtrField<TP::TargetHintArchive> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)setAnchoredDrawablePositions:(id)arg1;
- (void)setChildHints:(id)arg1;
- (void)setFlowHints:(id)arg1 flowTopicNumbers:(id)arg2;
- (void)setFootnoteAutoNumberRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFootnoteLayoutRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setHints:(id)arg1 topicNumbers:(id)arg2;
- (void)setPageColumn:(unsigned long long)arg1;
- (void)setPageKind:(long long)arg1;
- (void)setPageRow:(unsigned long long)arg1;
- (void)setStartingPartitionedAttachments:(id)arg1;
- (id)startingPartitionedAttachments;
- (bool)syncsWithEndOfPageHint:(id)arg1 storage:(id)arg2;
- (id)topicNumbers;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;

@end
