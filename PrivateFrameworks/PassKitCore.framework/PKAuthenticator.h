/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSNumber, <PKAuthenticatorDelegate>;

@interface PKAuthenticator : NSObject  {
    bool_fingerPresent;
    <PKAuthenticatorDelegate> *_delegate;
    double _authenticationTimeout;
    NSNumber *_applicationProcessID;
}

@property <PKAuthenticatorDelegate> * delegate;
@property bool fingerPresent;
@property double authenticationTimeout;
@property(retain) NSNumber * applicationProcessID;

+ (void)_preflightPolicy:(long long)arg1 completion:(id)arg2;
+ (unsigned long long)currentStateForPreflightPolicy:(long long)arg1;

- (void)setApplicationProcessID:(id)arg1;
- (id)applicationProcessID;
- (void)setAuthenticationTimeout:(double)arg1;
- (double)authenticationTimeout;
- (void)setFingerPresent:(bool)arg1;
- (bool)_delegateSupportsPasscodeDismissal;
- (bool)_delegateSupportsPasscodePresentation;
- (void)fallbackToSystemPasscodeUI;
- (bool)fingerPresent;
- (void)evaluatePolicy:(long long)arg1 completion:(id)arg2;
- (void)cancelEvaluation;
- (void)event:(id)arg1 params:(id)arg2 reply:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end