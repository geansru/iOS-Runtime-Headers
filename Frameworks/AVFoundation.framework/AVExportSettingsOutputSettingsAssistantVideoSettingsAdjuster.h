/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster> {
    NSDictionary * _exportSettings;
    NSString * _outputSettingsPresetIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)averageBitRateForSourceDimensions:(struct CGSize { double x1; double x2; })arg1 andTargetFrameRate:(float)arg2;
- (id)colorSpaceFromSourceFormatDescriptions:(id)arg1 andRendererColorSpace:(id)arg2;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:(id)arg1;

@end
