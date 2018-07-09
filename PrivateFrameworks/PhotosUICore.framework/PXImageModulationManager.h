/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXPreferencesObserver, PXSettingsKeyObserver> {
    double  _HDRFocus;
    bool  _active;
    bool  _applicationActive;
    CAContext * _coreAnimationContext;
    bool  _enabled;
    NSHashTable * _imageLayerModulators;
    double  _imageModulationIntensity;
    double  _lastRequestedEDRHeadroomChangeTime;
    bool  _lowPowerModeEnabled;
    bool  _mainScreen;
    struct { 
        bool enabled; 
        bool lowPowerModeEnabled; 
        bool active; 
        bool HDRFocus; 
        bool imageModulationIntensity; 
        bool requestedEDRHeadroomFactor; 
        bool finalRequestedEDRHeadroomFactor; 
        bool desiredDynamicRange; 
        bool imageLayerModulators; 
    }  _needsUpdateFlags;
    double  _requestedEDRHeadroomFactor;
    PXRequestedEDRHeadroomFactorFilter * _requestedEDRHeadroomFactorFilter;
    UIViewController * _rootViewController;
    PXImageModulationSettings * _settings;
}

@property (nonatomic, readonly) double HDRFocus;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (getter=isApplicationActive, nonatomic) bool applicationActive;
@property (nonatomic, retain) CAContext *coreAnimationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *imageLayerModulators;
@property (nonatomic, readonly) double imageModulationIntensity;
@property (getter=isLowPowerModeEnabled, nonatomic) bool lowPowerModeEnabled;
@property (getter=isMainScreen, nonatomic, readonly) bool mainScreen;
@property (nonatomic, readonly) double requestedEDRHeadroomFactor;
@property (nonatomic, readonly) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) PXImageModulationSettings *settings;
@property (readonly) Class superclass;

+ (double)HDRValueForAsset:(id)arg1;
+ (long long)_contentTypeForAsset:(id)arg1;
+ (long long)optionsForAsset:(id)arg1;

- (void).cxx_destruct;
- (double)HDRFocus;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_invalidateActive;
- (void)_invalidateDesiredDynamicRange;
- (void)_invalidateEnabled;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_invalidateHDRFocus;
- (void)_invalidateImageLayerModulators;
- (void)_invalidateImageModulationIntensity;
- (void)_invalidateLowPowerModeEnabled;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (bool)_needsUpdate;
- (void)_processInfoPowerStateDidChange:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateActiveIfNeeded;
- (void)_updateCoreAnimationContext;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)_updateEnabledIfNeeded;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (void)_updateHDRFocusIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateImageLayerModulator:(id)arg1;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)checkInImageLayerModulator:(id)arg1;
- (id)checkoutImageLayerModulatorWithOptions:(long long)arg1;
- (id)coreAnimationContext;
- (void)dealloc;
- (void)didPerformChanges;
- (id)imageLayerModulators;
- (double)imageModulationIntensity;
- (id)init;
- (id)initWithRootViewController:(id)arg1 mainScreen:(bool)arg2;
- (bool)isActive;
- (bool)isApplicationActive;
- (bool)isEnabled;
- (bool)isLowPowerModeEnabled;
- (bool)isMainScreen;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)preferencesDidChange;
- (double)requestedEDRHeadroomFactor;
- (id)requestedEDRHeadroomFactorFilter;
- (id)rootViewController;
- (void)setActive:(bool)arg1;
- (void)setApplicationActive:(bool)arg1;
- (void)setCoreAnimationContext:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHDRFocus:(double)arg1;
- (void)setImageModulationIntensity:(double)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setNeedsHDRFocusUpdate;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)setRequestedEDRHeadroomFactor:(double)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
