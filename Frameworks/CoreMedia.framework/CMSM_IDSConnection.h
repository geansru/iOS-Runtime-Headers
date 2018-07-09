/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * idsDispatchQueue;
    IDSService * pIdsService;
    IDSDevice * pNearbyPairedDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyNearbyPairedDeviceModelIdentifier;
- (id)copyNearbyPairedDeviceName;
- (id)copyNearbyPairedDeviceProductName;
- (id)copyNearbyPairedDeviceUniqueID;
- (id)getNearbyPairedDevice;
- (id)init;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)updateNearbyPairedDevice;

@end
