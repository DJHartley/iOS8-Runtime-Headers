/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedInternals.framework/SharedInternals
 */

@class <VRBiometricClient>, NSString, NSObject<OS_dispatch_semaphore>, BiometricKit;

@interface LABiometryOwner : NSObject <BiometricKitDelegate> {
    BiometricKit *_biometricKit;
    NSObject<OS_dispatch_semaphore> *_matchCanceledSemaphore;
    bool_matching;
    <VRBiometricClient> *_biometricClient;
}

@property(retain) <VRBiometricClient> * biometricClient;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;
+ (Class)biometricKitClassFromString:(id)arg1;
+ (bool)_loadBiometricKit;

- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)releaseBiometryForClient:(id)arg1;
- (void)matchForClient:(id)arg1 options:(id)arg2;
- (bool)isBiometryOnForStockholm;
- (bool)isLockedOutWithError:(id*)arg1;
- (bool)isEnrolledWithError:(id*)arg1;
- (void)setBiometricClient:(id)arg1;
- (id)biometricClient;
- (bool)deviceHasBiometry;

@end
