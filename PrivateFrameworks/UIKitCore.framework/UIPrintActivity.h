/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate> {
    NSString * _sourceApplicationBundleID;
    bool  _sourceIsManaged;
    UIWindow * _windowHoldingActivityViewController;
    UIViewController * _wrapperViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (retain) UIWindow *windowHoldingActivityViewController;
@property (retain) UIViewController *wrapperViewController;

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (id)_embeddedActivityViewController;
- (void)activityDidFinish:(bool)arg1;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)cancelPrintOptions;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)printInteractionController;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (id)printInteractionControllerWindowForPresentation:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setWindowHoldingActivityViewController:(id)arg1;
- (void)setWrapperViewController:(id)arg1;
- (id)sourceApplicationBundleID;
- (bool)sourceIsManaged;
- (id)windowHoldingActivityViewController;
- (id)wrapperViewController;

@end
