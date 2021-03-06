/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequestWithError:(id)arg1;
- (void)completeExtensionConfigurationRequest;
- (void)completeRequestWithSelectedCredential:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;

@end
