/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
    TIKeyboardCandidate * _autocorrectionRecordForInputString;
    unsigned long long  _initialCandidateBatchCount;
    unsigned long long  _inputCount;
    unsigned long long  _inputIndex;
    NSString * _inputString;
    TICharacterSetDescription * _inputsPreventingAcceptSelectedCandidate;
    TICharacterSetDescription * _inputsToReject;
    TIKeyEventMap * _keyEventMap;
    TIKeyboardBehaviors * _keyboardBehaviors;
    union { 
        long long integerValue; 
        struct { 
            unsigned int canHandleKeyHitTest : 1; 
            unsigned int ignoresDeadKeys : 1; 
            unsigned int shouldExtendPriorWord : 1; 
            unsigned int suppliesCompletions : 1; 
            unsigned int supportsNumberKeySelection : 1; 
            unsigned int supportsSetPhraseBoundary : 1; 
            unsigned int suppressCompletionsForFieldEditor : 1; 
            unsigned int usesAutoDeleteWord : 1; 
            unsigned int usesCandidateSelection : 1; 
            unsigned int commitsAcceptedCandidate : 1; 
            unsigned int nextInputWouldStartSentence : 1; 
            unsigned int inputStringIsExemptFromChecker : 1; 
            unsigned int suppressPlaceholderCandidate : 1; 
            unsigned int usesAutocorrectionLists : 1; 
            unsigned int autoquoteType : 2; 
        } fields; 
    }  _mask;
    NSString * _replacementForDoubleSpace;
    NSString * _searchStringForMarkedText;
    NSString * _shadowTyping;
    TICharacterSetDescription * _shortcutCompletions;
    bool  _shouldAddModifierSymbolsToWordCharacters;
    TICharacterSetDescription * _terminatorsDeletingAutospace;
    TICharacterSetDescription * _terminatorsPreventingAutocorrection;
    TICharacterSetDescription * _wordCharacters;
    NSString * _wordSeparator;
}

@property (nonatomic, retain) TIKeyboardCandidate *autocorrectionRecordForInputString;
@property (nonatomic) unsigned long long autoquoteType;
@property (nonatomic) bool canHandleKeyHitTest;
@property (nonatomic) bool commitsAcceptedCandidate;
@property (nonatomic) bool ignoresDeadKeys;
@property (nonatomic) unsigned long long initialCandidateBatchCount;
@property (nonatomic) unsigned long long inputCount;
@property (nonatomic) unsigned long long inputIndex;
@property (nonatomic, copy) NSString *inputString;
@property (nonatomic) bool inputStringIsExemptFromChecker;
@property (nonatomic, copy) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate;
@property (nonatomic, copy) TICharacterSetDescription *inputsToReject;
@property (nonatomic, retain) TIKeyEventMap *keyEventMap;
@property (nonatomic, retain) TIKeyboardBehaviors *keyboardBehaviors;
@property (nonatomic) bool nextInputWouldStartSentence;
@property (nonatomic, copy) NSString *replacementForDoubleSpace;
@property (nonatomic, copy) NSString *searchStringForMarkedText;
@property (nonatomic, copy) NSString *shadowTyping;
@property (nonatomic, copy) TICharacterSetDescription *shortcutCompletions;
@property (nonatomic) bool shouldAddModifierSymbolsToWordCharacters;
@property (nonatomic) bool shouldExtendPriorWord;
@property (nonatomic) bool suppliesCompletions;
@property (nonatomic) bool supportsNumberKeySelection;
@property (nonatomic) bool supportsSetPhraseBoundary;
@property (nonatomic) bool suppressCompletionsForFieldEditor;
@property (nonatomic) bool suppressPlaceholderCandidate;
@property (nonatomic, copy) TICharacterSetDescription *terminatorsDeletingAutospace;
@property (nonatomic, copy) TICharacterSetDescription *terminatorsPreventingAutocorrection;
@property (nonatomic) bool usesAutoDeleteWord;
@property (nonatomic) bool usesAutocorrectionLists;
@property (nonatomic) bool usesCandidateSelection;
@property (nonatomic, copy) TICharacterSetDescription *wordCharacters;
@property (nonatomic, copy) NSString *wordSeparator;

+ (bool)supportsSecureCoding;

- (bool)acceptInputString:(id)arg1;
- (id)autocorrectionRecordForInputString;
- (unsigned long long)autoquoteType;
- (bool)canHandleKeyHitTest;
- (bool)commitsAcceptedCandidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoresDeadKeys;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialCandidateBatchCount;
- (unsigned long long)inputCount;
- (unsigned long long)inputIndex;
- (id)inputString;
- (bool)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1;
- (bool)inputStringIsExemptFromChecker;
- (id)inputsPreventingAcceptSelectedCandidate;
- (id)inputsToReject;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (bool)nextInputWouldStartSentence;
- (id)replacementForDoubleSpace;
- (id)searchStringForMarkedText;
- (void)setAutocorrectionRecordForInputString:(id)arg1;
- (void)setAutoquoteType:(unsigned long long)arg1;
- (void)setCanHandleKeyHitTest:(bool)arg1;
- (void)setCommitsAcceptedCandidate:(bool)arg1;
- (void)setIgnoresDeadKeys:(bool)arg1;
- (void)setInitialCandidateBatchCount:(unsigned long long)arg1;
- (void)setInputCount:(unsigned long long)arg1;
- (void)setInputIndex:(unsigned long long)arg1;
- (void)setInputString:(id)arg1;
- (void)setInputStringIsExemptFromChecker:(bool)arg1;
- (void)setInputsPreventingAcceptSelectedCandidate:(id)arg1;
- (void)setInputsToReject:(id)arg1;
- (void)setKeyEventMap:(id)arg1;
- (void)setKeyboardBehaviors:(id)arg1;
- (void)setNextInputWouldStartSentence:(bool)arg1;
- (void)setReplacementForDoubleSpace:(id)arg1;
- (void)setSearchStringForMarkedText:(id)arg1;
- (void)setShadowTyping:(id)arg1;
- (void)setShortcutCompletions:(id)arg1;
- (void)setShouldAddModifierSymbolsToWordCharacters:(bool)arg1;
- (void)setShouldExtendPriorWord:(bool)arg1;
- (void)setSuppliesCompletions:(bool)arg1;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (void)setSupportsSetPhraseBoundary:(bool)arg1;
- (void)setSuppressCompletionsForFieldEditor:(bool)arg1;
- (void)setSuppressPlaceholderCandidate:(bool)arg1;
- (void)setTerminatorsDeletingAutospace:(id)arg1;
- (void)setTerminatorsPreventingAutocorrection:(id)arg1;
- (void)setUsesAutoDeleteWord:(bool)arg1;
- (void)setUsesAutocorrectionLists:(bool)arg1;
- (void)setUsesCandidateSelection:(bool)arg1;
- (void)setWordCharacters:(id)arg1;
- (void)setWordSeparator:(id)arg1;
- (id)shadowTyping;
- (id)shortcutCompletions;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (bool)shouldExtendPriorWord;
- (bool)shouldSuppressAutocorrectionWithTerminator:(id)arg1;
- (bool)stringEndsWord:(id)arg1;
- (bool)suppliesCompletions;
- (bool)supportsNumberKeySelection;
- (bool)supportsSetPhraseBoundary;
- (bool)suppressCompletionsForFieldEditor;
- (bool)suppressPlaceholderCandidate;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (bool)usesAutoDeleteWord;
- (bool)usesAutocorrectionLists;
- (bool)usesCandidateSelection;
- (id)wordCharacters;
- (id)wordSeparator;

@end
