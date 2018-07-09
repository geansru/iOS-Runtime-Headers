/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapModel : VKModelObject <GEOExperimentConfigurationObserver, GEOResourceManifestTileGroupObserver, VKPolylineGroupOverlayObserver, VKPolylineOverlayRouteRibbonObserver, VKTileProviderClient> {
    bool  _activeMapLayers;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _activeStyleManager;
    GEOResourceManifestConfiguration * _additionalManifestConfiguration;
    VKTileProvider * _additionalManifestTileProvider;
    unsigned char  _applicationUILayout;
    NSMutableSet * _blockingStylesheetObservers;
    VKTileProvider * _buildingTileProvider;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _clearColor;
    struct ClearItem { 
        unsigned char colorMask; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } color; 
        bool clearDepthBuffer; 
        float depth; 
        unsigned char clearStencilBuffer; 
        unsigned int stencil; 
    }  _clearItem;
    double  _contentScale;
    struct shared_ptr<md::DataOverrideManager> { 
        struct DataOverrideManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataOverrideManager;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _defaultStyleManager;
    <VKMapModelDelegate> * _delegate;
    long long  _desiredMapMode;
    bool  _disableBuildingFootprints;
    bool  _disableGrid;
    bool  _disableLabels;
    bool  _disablePolygons;
    bool  _disableRasters;
    bool  _disableRoadClass;
    bool  _disableRoads;
    bool  _disableTransitLines;
    unsigned char  _emphasis;
    NSMutableArray * _externalAnchors;
    bool  _forceMapDrawStyleUpdate;
    double  _forcedMaxZoomLevel;
    bool  _fullyDrawn;
    bool  _hasFailedTile;
    VKTimedAnimation * _highZoomTransitionAnimation;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _hybridStyleManager;
    bool  _isEmphasisSet;
    bool  _isTransitioningToTransit;
    unsigned char  _labelScaleFactor;
    bool  _limitingNavCameraHeight;
    long long  _loadingCount;
    NSLocale * _locale;
    bool  _localizeLabels;
    double  _lodBias;
    struct LogicManager { int (**x1)(); struct Logic {} *x2[4]; } * _logicManager;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    struct FeatureAttributeSet { 
        struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { 
            struct FeatureAttributePair {} *__begin_; 
            struct FeatureAttributePair {} *__end_; 
            struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { 
                struct FeatureAttributePair {} *__value_; 
            } __end_cap_; 
        } _attributes; 
    }  _mapFeatureStyleAttributes;
    long long  _mapMode;
    unsigned long long  _mapPurpose;
    long long  _mapType;
    int  _metroArea;
    VKTimedAnimation * _modeTransitionAnimation;
    unsigned char  _navMapMode;
    float  _navMapModeTransitionZ;
    VKNavigationPuck * _navigationPuck;
    float  _navigationPuckSize;
    long long  _navigationShieldSize;
    struct set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> > { 
        struct __tree<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<VKPolylineGroupOverlay *, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<VKPolylineGroupOverlay *> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _observedOverlays;
    struct set<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::less<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
        struct __tree<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::less<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _overlays;
    NSSet * _persistentOverlays;
    NSMutableSet * _polylineOverlays;
    VKTileProvider * _rasterOverlayProvider;
    VKRasterOverlayTileSource * _rasterOverlayTileSource;
    struct CartographicRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_3_1_1; } x3; struct RenderLayer {} *x4[28]; struct RenderLayer {} *x5[65]; struct RunLoopController {} *x6; struct MapEngine {} *x7; id x8; id x9; struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct CommandBuffer {} *x11; struct AnimationRunner {} *x12; } * _renderer;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _rendererMutex;
    <GEORoutePreloadSession> * _routePreloadSession;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeUserOffset;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _satelliteStyleManager;
    VKSceneConfiguration * _sceneConfiguration;
    struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { 
        struct StylesheetManager<gss::ScenePropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sceneManager;
    VKPolylineOverlay * _selectedPolyline;
    long long  _shieldIdiom;
    long long  _shieldSize;
    bool  _shouldNotifyFullyDrawn;
    bool  _shouldRasterize;
    bool  _showsBuildings;
    bool  _showsPointsOfInterest;
    bool  _showsVenues;
    struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { 
        struct StylesheetQuery<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleQuery;
    double  _styleTransitionProgress;
    unsigned char  _targetDisplay;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    VKTileProvider * _tileProvider;
    long long  _tileSize;
    NSMapTable * _tileSources;
    bool  _trafficEnabled;
    bool  _trafficIncidentsEnabled;
    struct unique_ptr<md::TrafficSharedResources, std::__1::default_delete<md::TrafficSharedResources> > { 
        struct __compressed_pair<md::TrafficSharedResources *, std::__1::default_delete<md::TrafficSharedResources> > { 
            struct TrafficSharedResources {} *__value_; 
        } __ptr_; 
    }  _trafficSharedResources;
    VKTrafficTileSource * _trafficSource;
    bool  _transitioningToNav;
    struct VehicleState { 
        bool _isParked; 
    }  _vehicleState;
    double  _zoomLevel;
}

@property (nonatomic, retain) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic) unsigned char applicationUILayout;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  clearColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic) double contentScale;
@property (nonatomic, readonly) long long currentMapMode;
@property (nonatomic, readonly) float currentRoadSignOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKMapModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableBuildingFootprints;
@property (nonatomic) bool disableGrid;
@property (nonatomic) bool disableLabels;
@property (nonatomic) bool disablePolygons;
@property (nonatomic) bool disableRasters;
@property (nonatomic) bool disableRoads;
@property (nonatomic) bool disableTransitLines;
@property (nonatomic) unsigned char emphasis;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFullyDrawn;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) bool limitingNavCameraHeight;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) double lodBias;
@property (nonatomic, readonly) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) long long mapType;
@property (nonatomic) float navMapModeTransitionZ;
@property (nonatomic) float navigationPuckSize;
@property (nonatomic) long long navigationShieldSize;
@property (nonatomic) unsigned long long neighborMode;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, readonly) NSSet *persistentOverlays;
@property (nonatomic, readonly) unsigned long long purpose;
@property (nonatomic, readonly) NSArray *rasterOverlays;
@property (nonatomic) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloadSession;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;
@property (nonatomic, readonly) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; } sceneManager;
@property (nonatomic) long long shieldIdiom;
@property (nonatomic) long long shieldSize;
@property (nonatomic) bool shouldLoadFallbackTiles;
@property (nonatomic, readonly) bool shouldRasterize;
@property (nonatomic, readonly) bool showingTrafficCasing;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsPointsOfInterest;
@property (nonatomic) bool showsVenues;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char targetDisplay;
@property (nonatomic, readonly) struct shared_ptr<md::CMercatorTerrainHeightCache> { struct CMercatorTerrainHeightCache {} *x1; struct __shared_weak_count {} *x2; } terrainHeightCache;
@property (nonatomic, readonly) VKTileProvider *tileProvider;
@property (getter=isTrafficEnabled, nonatomic) bool trafficEnabled;
@property (getter=isTrafficIncidentsEnabled, nonatomic) bool trafficIncidentsEnabled;
@property (nonatomic, readonly) const struct TrafficSharedResources { struct TrafficSharedPipelineStates { struct shared_ptr<ggl::SolidTraffic::BasePipelineState> { struct BasePipelineState {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct shared_ptr<ggl::TrafficGlow::BasePipelineState> { struct BasePipelineState {} *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_1_1_2; struct shared_ptr<ggl::OptimizedTraffic::BasePipelineState> { struct BasePipelineState {} *x_3_2_1; struct __shared_weak_count {} *x_3_2_2; } x_1_1_3; } x1; /* Warning: unhandled struct encoding: '{TrafficSharedRenderStates={unique_ptr<ggl::RenderState' */ struct x2; }*trafficResources; /* unknown property attribute:  std::__1::default_delete<ggl::RenderState> >=^{RenderState}}}}^{IsoAlphaAtlas}} */
@property (nonatomic) struct VehicleState { bool x1; } vehicleState;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (const char *)nameForRoadClass:(int)arg1;
+ (unsigned long long)numberOfRoadClasses;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_beginNavMapModeTransitionToMode:(unsigned char)arg1;
- (void)_createTrafficTileSourceAtIndex:(unsigned int)arg1 roadTileSource:(id)arg2 origin:(unsigned char)arg3 sharedResources:(id)arg4;
- (void)_createTrafficTileSourcesIfNecessary:(id)arg1 sharedResources:(id)arg2;
- (void)_forceLayout;
- (void)_localeChanged:(id)arg1;
- (void)_mapConfigurationDidChange;
- (long long)_maximumZoomLevelInView:(id)arg1 ignoreZoomOverride:(bool)arg2;
- (struct COverlayLayer { int (**x1)(); struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_2_1; unsigned char *x_1_2_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true>, std::__1::allocator<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)_rasterOverlayForLevel:(unsigned long long)arg1;
- (id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1;
- (void)_setInitialClientStyleAttributesForDefaultStyleManager;
- (void)_setStyleManagerFromMapType:(long long)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (float)_tileSelectionScaleForContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)_transitFadeOutCompletionCallback;
- (void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (void)_updateOverlayTileSource;
- (void)_updateRasterOverlayZoomOverride;
- (void)_updateRegularTileProviderMode;
- (void)_updateTileExclusionAreas;
- (void)_updateZoomLevel:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)activateLogic;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)additionalManifestConfiguration;
- (unsigned char)applicationUILayout;
- (id)attributionsForCurrentRegion;
- (void)beginStyleAnimationGroup;
- (id)boundsForSelectedTransitLines;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })buildingMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1 groundPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)buildingsDidBecome3D:(bool)arg1;
- (bool)canPitch;
- (void)cancelTileRequests;
- (struct Matrix<float, 4, 1> { float x1[4]; })clearColor;
- (void)clearScene;
- (void)clearTileSources;
- (void)configureTileSources;
- (double)contentScale;
- (id)createSourceForLayer:(unsigned char)arg1 tileSet:(id)arg2 useAdditionalManifest:(bool)arg3;
- (id)createSourceForLayer:(unsigned char)arg1 useAdditionalManifest:(bool)arg2;
- (long long)currentMapMode;
- (float)currentRoadSignOffset;
- (void)dealloc;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)debugLabelString:(bool)arg1;
- (id)delegate;
- (void)deselectTransitLineMarker;
- (void)destroyRendererStopObserving;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didBeginTransitionToNavigation;
- (void)didBeginTransitionToTransit;
- (void)didEndNavigation;
- (void)didEndTransitionToTransit;
- (void)didLayoutLabels;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (bool)disableBuildingFootprints;
- (bool)disableGrid;
- (bool)disableLabels;
- (bool)disablePolygons;
- (bool)disableRasters;
- (void)disableRoadClass:(bool)arg1 withRoadClass:(int)arg2;
- (bool)disableRoads;
- (bool)disableTransitLines;
- (unsigned char)emphasis;
- (void)endStyleAnimationGroup;
- (void)experimentConfigurationDidChange:(id)arg1;
- (id)externalAnchors;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1 groundPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)finishStyleBlend;
- (void)flushCaches:(bool)arg1;
- (void)forceMapType:(long long)arg1 animated:(bool)arg2;
- (void)foreachActiveLayer:(id /* block */)arg1;
- (void)foreachActiveRenderLayer:(id /* block */)arg1;
- (void)foreachRenderLayer:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 renderer:(struct CartographicRenderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> > { struct __compressed_pair<md::RenderQueue *, std::__1::default_delete<md::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_3_1_1; } x3; struct RenderLayer {} *x4[28]; struct RenderLayer {} *x5[65]; struct RunLoopController {} *x6; struct MapEngine {} *x7; id x8; id x9; struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct CommandBuffer {} *x11; struct AnimationRunner {} *x12; }*)arg2 purpose:(unsigned long long)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg6 logicManager:(struct LogicManager { int (**x1)(); struct Logic {} *x2[4]; }*)arg7;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isFullyDrawn;
- (bool)isInNavigationMode;
- (bool)isInTransitMode;
- (bool)isRoadClassDisabled:(int)arg1;
- (bool)isShowingNoDataPlaceholders;
- (bool)isTrafficEnabled;
- (bool)isTrafficIncidentsEnabled;
- (id)labelMapTileForTile:(id)arg1 layer:(unsigned char)arg2;
- (void)labelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (unsigned char)labelScaleFactor;
- (struct LabelSettings { struct LabelSettings_Presentation { struct LabelSettings {} *x_1_1_1; } x1; struct LabelSettings_Navigation { struct LabelSettings {} *x_2_1_1; } x2; struct LabelSettings_Markers { struct LabelSettings {} *x_3_1_1; } x3; struct shared_ptr<md::LabelManager> { struct LabelManager {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct unique_ptr<md::LabelSettingsData, std::__1::default_delete<md::LabelSettingsData> > { struct __compressed_pair<md::LabelSettingsData *, std::__1::default_delete<md::LabelSettingsData> > { struct LabelSettingsData {} *x_1_2_1; } x_5_1_1; } x5; }*)labelSettings;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (bool)limitingNavCameraHeight;
- (bool)localizeLabels;
- (double)lodBias;
- (id)manifestConfiguration;
- (long long)mapType;
- (bool)mapTypeUsesStandardTiles;
- (long long)maximumZoomLevelInView:(id)arg1;
- (long long)maximumZoomLevelInViewWithoutZoomOverride:(id)arg1;
- (long long)minimumZoomLevelInView:(id)arg1;
- (float)navMapModeTransitionZ;
- (id)navigationPuck;
- (float)navigationPuckSize;
- (long long)navigationShieldSize;
- (unsigned long long)neighborMode;
- (double)northYawAtZoom:(int)arg1;
- (id)overlays;
- (void)performStylesheetDidChange;
- (void)performStylesheetDidReload;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (id)persistentOverlays;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2;
- (void)populateDebugNode:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1 debugTileProvider:(bool)arg2;
- (unsigned long long)purpose;
- (id)rasterOverlays;
- (void)reloadStylesheet;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 setupHandler:(id /* block */)arg3;
- (void)reserveStencilRangesForScene:(id)arg1 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)resetTileContainers;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)roadTileForTile:(id)arg1;
- (id)routeLineSplitAnnotation;
- (id)routePreloadSession;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (id)sceneConfiguration;
- (struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; })sceneManager;
- (void)selectTransitLineMarker:(id)arg1;
- (void)selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)selectedTransitLineIDs;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setApplicationUILayout:(unsigned char)arg1;
- (void)setClearColor:(struct Matrix<float, 4, 1> { float x1[4]; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(bool)arg2;
- (void)setDisableBuildingFootprints:(bool)arg1;
- (void)setDisableGrid:(bool)arg1;
- (void)setDisableLabels:(bool)arg1;
- (void)setDisablePolygons:(bool)arg1;
- (void)setDisableRasters:(bool)arg1;
- (void)setDisableRoads:(bool)arg1;
- (void)setDisableTransitLines:(bool)arg1;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLimitingNavCameraHeight:(bool)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMapType:(long long)arg1;
- (void)setMapType:(long long)arg1 animated:(bool)arg2;
- (void)setNavCameraIsDetached:(bool)arg1;
- (void)setNavMapModeTransitionZ:(float)arg1;
- (void)setNavigationPuckSize:(float)arg1;
- (void)setNavigationShieldSize:(long long)arg1;
- (void)setNeighborMode:(unsigned long long)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSceneManager:(struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setShieldIdiom:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setShouldLoadFallbackTiles:(bool)arg1;
- (void)setShowingOuterHaloOnLabelsDidChange:(bool)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1 forRealistic:(bool)arg2;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setTrafficIncidentsEnabled:(bool)arg1;
- (void)setVehicleState:(struct VehicleState { bool x1; })arg1;
- (long long)shieldIdiom;
- (long long)shieldSize;
- (void)shouldFlushCaches:(id)arg1;
- (bool)shouldLoadFallbackTiles;
- (bool)shouldRasterize;
- (bool)showingTrafficCasing;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (bool)showsVenues;
- (void)sizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })sourceMapDisplayStyle;
- (void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetAnimationDidEnd:(bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1 toStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2;
- (bool)supportsMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (unsigned char)targetDisplay;
- (struct shared_ptr<md::CMercatorTerrainHeightCache> { struct CMercatorTerrainHeightCache {} *x1; struct __shared_weak_count {} *x2; })terrainHeightCache;
- (id)tileProvider;
- (id)tileProviderForMapLayer:(unsigned char)arg1;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (id)tileSetForMapLayer:(unsigned char)arg1 tileGroup:(id)arg2;
- (long long)tileSize;
- (long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (int)tileStyleForMapLayer:(unsigned char)arg1;
- (const struct TrafficSharedResources { struct TrafficSharedPipelineStates { struct shared_ptr<ggl::SolidTraffic::BasePipelineState> { struct BasePipelineState {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; struct shared_ptr<ggl::TrafficGlow::BasePipelineState> { struct BasePipelineState {} *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_1_1_2; struct shared_ptr<ggl::OptimizedTraffic::BasePipelineState> { struct BasePipelineState {} *x_3_2_1; struct __shared_weak_count {} *x_3_2_2; } x_1_1_3; } x1; struct TrafficSharedRenderStates { struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_2_2_1; } x_2_1_2; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_3_2_1; } x_2_1_3; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_4_2_1; } x_2_1_4; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_5_2_1; } x_2_1_5; } x2; }*)trafficResources;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)updateMapDrawStyleWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)updateOverlayType;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (struct VehicleState { bool x1; })vehicleState;
- (id)visibleTileSets;
- (void)willStartLoadingTiles;

@end
