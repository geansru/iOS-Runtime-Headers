/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentSetupViewControllerDelegate <NSObject>

@required

- (void)viewControllerDidTerminateSetupFlow:(UIViewController *)arg1;

@optional

- (void)viewController:(UIViewController *)arg1 didShowProvisioningError:(NSError *)arg2;
- (void)viewControllerDidCancelSetupFlow:(UIViewController *)arg1;
- (void)viewControllerDidShowEligibilityIssue:(UIViewController *)arg1;

@end
