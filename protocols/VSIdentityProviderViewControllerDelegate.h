/* Generated by RuntimeBrowser.
 */

@protocol VSIdentityProviderViewControllerDelegate <NSObject>

@required

- (void)dismissIdentityProviderViewController:(VSIdentityProviderViewController *)arg1;
- (void)identityProviderViewController:(VSIdentityProviderViewController *)arg1 didFinishRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;
- (void)identityProviderViewControllerDidCancel:(VSIdentityProviderViewController *)arg1;

@optional

- (void)identityProviderViewController:(VSIdentityProviderViewController *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
- (void)identityProviderViewControllerDidFinishLoading:(VSIdentityProviderViewController *)arg1;

@end
